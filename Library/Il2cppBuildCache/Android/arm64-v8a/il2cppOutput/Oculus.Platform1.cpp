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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Oculus.Platform.Message`1/Callback<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.BlockedUserList>
struct Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.DestinationList>
struct Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchBlockFlowResult>
struct Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchUnblockFlowResult>
struct Callback_t17D87388F669046EE27272F01362F88632750BD3;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LinkedAccountList>
struct Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MicrophoneAvailabilityState>
struct Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection>
struct Callback_tF9F4D8460A4E004732BB102490FB3CFAF3D31B32;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification>
struct Callback_t60F86BD9657BE364E22054946463272DE745A371;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.OrgScopedID>
struct Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Party>
struct Callback_t04EA8FEF308E167126A9853D3E0D655D514487D2;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PartyUpdateNotification>
struct Callback_t413C50F50EB8340B0AB5684D79EA7C09AEFE31BC;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>
struct Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SdkAccountList>
struct Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B;
// Oculus.Platform.Message`1/Callback<System.String>
struct Callback_tD043303749DFDABD54DB83282588105CC2ADB18D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>
struct Callback_t827F915E827EE8044B5F300339FE951E4557B20A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserCapabilityList>
struct Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList>
struct Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserProof>
struct Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>
struct DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>
struct DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncSession>
struct DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>
struct DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA;
// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Pid>
struct DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>
struct DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>
struct DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>
struct DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>
struct DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D;
// System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>
struct Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1;
// System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Boolean>
struct Dictionary_2_tA83C5B43B5F4A13A6B2E489398D98C8BFE81B0B2;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Platform.InitConfigOptions>
struct IEqualityComparer_1_t8E3F1FC0EB3D9D03067E8665047CA014E9D17E4F;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Platform.InitConfigOptions,System.Boolean>
struct KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6;
// System.Collections.Generic.List`1<Oculus.Platform.Models.ApplicationInvite>
struct List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D;
// System.Collections.Generic.List`1<Oculus.Platform.Models.BlockedUser>
struct List_1_t53D10076CF7633DF5E907DE5739196321544077A;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Destination>
struct List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027;
// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncSession>
struct List_1_t814689C58494A7CC08836709C95562576D4A3FD1;
// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>
struct List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Pid>
struct List_1_t76614734F621AFD54E4A1505402DFEE94376947F;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>
struct List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>
struct List_1_tEF576F33659755044A466574FB2C3AE99B17F353;
// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>
struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E;
// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554;
// System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>
struct List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906;
// Oculus.Platform.Message`1<Oculus.Platform.Models.HttpTransferUpdate>
struct Message_1_t0F97298AE8C3B061E1CBD75F517F5EE037028F68;
// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncConnection>
struct Message_1_t2F2479116D4DE89FE4C54F41765B4AEC552E6B98;
// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSessionsChangedNotification>
struct Message_1_t8141776399F348C1719D2D7DD5B32EFFA291EB22;
// Oculus.Platform.Message`1<System.Object>
struct Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C;
// Oculus.Platform.Message`1<Oculus.Platform.Models.PartyUpdateNotification>
struct Message_1_t9BB8C3E9E78D626E45ECC282A38DD264746484D9;
// Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>
struct Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977;
// Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>
struct Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279;
// Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>
struct Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C;
// Oculus.Platform.Message`1<Oculus.Platform.Models.RejoinDialogResult>
struct Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72;
// Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList>
struct Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9;
// Oculus.Platform.Message`1<Oculus.Platform.Models.SendInvitesResult>
struct Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254;
// Oculus.Platform.Message`1<Oculus.Platform.Models.ShareMediaResult>
struct Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932;
// Oculus.Platform.Message`1<System.String>
struct Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84;
// Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>
struct Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862;
// Oculus.Platform.Message`1<Oculus.Platform.Models.User>
struct Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserCapabilityList>
struct Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>
struct Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>
struct Message_1_t67E02792C2EB5CD9C1551009035703615D890699;
// Oculus.Platform.Message`1<Oculus.Platform.Models.UserReportID>
struct Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF;
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103;
// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>
struct Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2;
// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>
struct Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>
struct Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>
struct Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>
struct Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20;
// Oculus.Platform.Request`1<System.Object>
struct Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46;
// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>
struct Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Party>
struct Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035;
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>
struct Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4;
// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>
struct Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C;
// Oculus.Platform.Request`1<System.String>
struct Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC;
// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>
struct Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>
struct Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_t2CA1B16D395258918A268B17227A7212918D2136;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Platform.InitConfigOptions,System.Boolean>
struct ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Platform.InitConfigOptions,System.Boolean>[]
struct EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Oculus.Platform.Models.NetSyncSession[]
struct NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE;
// Oculus.Platform.Models.NetSyncVoipAttenuationValue[]
struct NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Oculus.Platform.Models.Pid[]
struct PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17;
// Oculus.Platform.Models.Product[]
struct ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A;
// Oculus.Platform.Models.Purchase[]
struct PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498;
// Oculus.Platform.Models.SdkAccount[]
struct SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A;
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// Oculus.Platform.Models.User[]
struct UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D;
// Oculus.Platform.Models.UserCapability[]
struct UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Oculus.Platform.CAPI/ovrKeyValuePair[]
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455;
// Oculus.Platform.Models.AbuseReportRecording
struct AbuseReportRecording_t7967BBB0AF53223630AF72CAECE7C1B9686FFAB5;
// Oculus.Platform.Models.ApplicationInviteList
struct ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Oculus.Platform.Models.BlockedUserList
struct BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217;
// Oculus.Platform.CallbackRunner
struct CallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Oculus.Platform.Models.DestinationList
struct DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C;
// Oculus.Platform.Models.Error
struct Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Oculus.Platform.IVoipPCMSource
struct IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC;
// Oculus.Platform.Models.InstalledApplicationList
struct InstalledApplicationList_t4E55C2518F6CDA2938E9FD3F3F7933C76F785542;
// Oculus.Platform.Models.LaunchReportFlowResult
struct LaunchReportFlowResult_tEC944B3B39E377DA305B28D0E6C3A5C34EB44C7A;
// Oculus.Platform.Models.LinkedAccountList
struct LinkedAccountList_t5F4E3E7E680E21AD2AA00A0DAA35732810323079;
// Oculus.Platform.Models.LivestreamingApplicationStatus
struct LivestreamingApplicationStatus_t2B83D432A1BB4E9795DBFD0C6FA951F58C7E0753;
// Oculus.Platform.Models.LivestreamingStartResult
struct LivestreamingStartResult_tDA4379F243C6C795F5EAEE619FA0FD5C8AF779A7;
// Oculus.Platform.Models.LivestreamingVideoStats
struct LivestreamingVideoStats_t3B6872B99F9D9119807A4E1B2841BAE2C95FFCE0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9;
// Oculus.Platform.MessageWithAbuseReportRecording
struct MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393;
// Oculus.Platform.MessageWithInstalledApplicationList
struct MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4;
// Oculus.Platform.MessageWithLaunchReportFlowResult
struct MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2;
// Oculus.Platform.MessageWithLinkedAccountList
struct MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E;
// Oculus.Platform.MessageWithLivestreamingApplicationStatus
struct MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197;
// Oculus.Platform.MessageWithLivestreamingStartResult
struct MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13;
// Oculus.Platform.MessageWithLivestreamingVideoStats
struct MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03;
// Oculus.Platform.MessageWithNetSyncConnection
struct MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF;
// Oculus.Platform.MessageWithNetSyncSessionList
struct MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A;
// Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult
struct MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA;
// Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList
struct MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5;
// Oculus.Platform.MessageWithParty
struct MessageWithParty_t47591733C170E4A940E558968881918663246F23;
// Oculus.Platform.MessageWithPartyID
struct MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751;
// Oculus.Platform.MessageWithPartyUnderCurrentParty
struct MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2;
// Oculus.Platform.MessageWithPurchase
struct MessageWithPurchase_tE30F406DC8C504934089A1EA7A45DECD96B52047;
// Oculus.Platform.MessageWithPurchaseList
struct MessageWithPurchaseList_t8F80222245785E022F80CDD10120A8CBDDF65B0F;
// Oculus.Platform.MessageWithRejoinDialogResult
struct MessageWithRejoinDialogResult_tC73257DF5EC93BF84847377C306402A728170569;
// Oculus.Platform.MessageWithSdkAccountList
struct MessageWithSdkAccountList_tEDD9039DCFD8440604B127F54088D9F9FE64D112;
// Oculus.Platform.MessageWithSendInvitesResult
struct MessageWithSendInvitesResult_t10849A0325BC8A7586D1075C121CC365317B136D;
// Oculus.Platform.MessageWithShareMediaResult
struct MessageWithShareMediaResult_t5E0E9076577438BD1D2B152AAA28B14294BDA0FE;
// Oculus.Platform.MessageWithString
struct MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416;
// Oculus.Platform.MessageWithSystemVoipState
struct MessageWithSystemVoipState_t5B41C6A9BDB38F24CD305CDC0EDC0117A83EAAC3;
// Oculus.Platform.MessageWithUser
struct MessageWithUser_tB1AA6D637359AC8DD3962CC88C54C2194CD02814;
// Oculus.Platform.MessageWithUserCapabilityList
struct MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038;
// Oculus.Platform.MessageWithUserDataStoreUpdateResponse
struct MessageWithUserDataStoreUpdateResponse_t8433BBA9C50E0088378CB9E969DD6AE0768C087F;
// Oculus.Platform.MessageWithUserList
struct MessageWithUserList_t91526C487ECE33434977D1616F861F07043B84A7;
// Oculus.Platform.MessageWithUserProof
struct MessageWithUserProof_t503174B6378B6608C060882ACFE51784BBBE5C0A;
// Oculus.Platform.MessageWithUserReportID
struct MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Oculus.Platform.Models.MicrophoneAvailabilityState
struct MicrophoneAvailabilityState_t0427E2FFDB03FD29DF02E9A58315A8057B4E555E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Oculus.Platform.MultiplayerErrorOptions
struct MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31;
// Oculus.Platform.Models.NetSyncConnection
struct NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324;
// Oculus.Platform.NetSyncOptions
struct NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395;
// Oculus.Platform.Models.NetSyncSession
struct NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C;
// Oculus.Platform.Models.NetSyncSessionList
struct NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB;
// Oculus.Platform.Models.NetSyncSessionsChangedNotification
struct NetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289;
// Oculus.Platform.Models.NetSyncSetSessionPropertyResult
struct NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535;
// Oculus.Platform.Models.NetSyncVoipAttenuationValue
struct NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B;
// Oculus.Platform.Models.NetSyncVoipAttenuationValueList
struct NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Oculus.Platform.Models.OrgScopedID
struct OrgScopedID_tB1BEECC4583C752389EFF379941DE6B72090B261;
// Oculus.Platform.Packet
struct Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A;
// Oculus.Platform.Models.Party
struct Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB;
// Oculus.Platform.Models.PartyID
struct PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59;
// Oculus.Platform.Models.PartyUpdateNotification
struct PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5;
// Oculus.Platform.Models.Pid
struct Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5;
// Oculus.Platform.Models.PidList
struct PidList_t891283A24E8065477D9F74286AE24A0AA94E50DC;
// Oculus.Platform.Models.PingResult
struct PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6;
// Oculus.Platform.Models.PlatformInitialize
struct PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50;
// Oculus.Platform.PlatformSettings
struct PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB;
// Oculus.Platform.Models.Product
struct Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70;
// Oculus.Platform.Models.ProductList
struct ProductList_tC2405EC15E1F8BA7208810CB03DC828362BE293F;
// Oculus.Platform.Models.Purchase
struct Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91;
// Oculus.Platform.Models.PurchaseList
struct PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Oculus.Platform.Models.RejoinDialogResult
struct RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B;
// ReportingCallbackSample
struct ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC;
// Oculus.Platform.Request
struct Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2;
// Oculus.Platform.RichPresenceOptions
struct RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950;
// Oculus.Platform.RosterOptions
struct RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Oculus.Platform.Models.SdkAccount
struct SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A;
// Oculus.Platform.Models.SdkAccountList
struct SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67;
// Oculus.Platform.Models.SendInvitesResult
struct SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130;
// Oculus.Platform.Models.ShareMediaResult
struct ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7;
// Oculus.Platform.StandalonePlatform
struct StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A;
// Oculus.Platform.StandalonePlatformSettings
struct StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036;
// System.String
struct String_t;
// Oculus.Platform.Models.SupplementaryMetric
struct SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185;
// Oculus.Platform.Models.SystemVoipState
struct SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D;
// Oculus.Platform.Models.UserCapability
struct UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F;
// Oculus.Platform.Models.UserCapabilityList
struct UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3;
// Oculus.Platform.Models.UserDataStoreUpdateResponse
struct UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23;
// Oculus.Platform.Models.UserList
struct UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B;
// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706;
// Oculus.Platform.Models.UserProof
struct UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94;
// Oculus.Platform.Models.UserReportID
struct UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD;
// Oculus.Platform.VoipOptions
struct VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050;
// Oculus.Platform.VoipPCMSourceNative
struct VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13;
// Oculus.Platform.WindowsPlatform
struct WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2;
// Oculus.Platform.CAPI/FilterCallback
struct FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303;
// Oculus.Platform.Callback/RequestCallback
struct RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF;
// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563;
// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94;
// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD;

IL2CPP_EXTERN_C RuntimeClass* ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t76614734F621AFD54E4A1505402DFEE94376947F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t814689C58494A7CC08836709C95562576D4A3FD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEF576F33659755044A466574FB2C3AE99B17F353_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithParty_t47591733C170E4A940E558968881918663246F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00058DA5D352C716F467D078B396A55F8B3E577B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6;
IL2CPP_EXTERN_C String_t* _stringLiteral116E4E447ED60DC267CBBA2F800CCBEAC8DC4677;
IL2CPP_EXTERN_C String_t* _stringLiteral141DB8E2222B0556D3C6A55EC404DB7A9D4332CF;
IL2CPP_EXTERN_C String_t* _stringLiteral21F44D94A63BEE6D780718FB25538264AEC6ED92;
IL2CPP_EXTERN_C String_t* _stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD;
IL2CPP_EXTERN_C String_t* _stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15;
IL2CPP_EXTERN_C String_t* _stringLiteral33157D9C9F7D31AF8194BEB1C5D43B3972AC216D;
IL2CPP_EXTERN_C String_t* _stringLiteral46C357A4C93691C83EFEDB04BD0E8ED0A6E202CF;
IL2CPP_EXTERN_C String_t* _stringLiteral490E7A78D754BCECC6CF945C78681E1F4248DFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral4A48AE0244C4827DF94FFD923478E861AB533848;
IL2CPP_EXTERN_C String_t* _stringLiteral56CBBCD2565BB1E1874EA571ED1232298CB88E75;
IL2CPP_EXTERN_C String_t* _stringLiteral58DE12A61CB8F5C6AE93E6A588A18C0FC42E00E3;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral6502DBEA7DCA489774648AC2338DB14B68A43496;
IL2CPP_EXTERN_C String_t* _stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB40CF1C1F630131B1A52C4D34047CFF6EA8550;
IL2CPP_EXTERN_C String_t* _stringLiteral816745CC7F0FA623F30FB7047D44B28470A22E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral85B005016BA6EACBD6E43AE5406ED06DC90B5130;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralB9B869E8231B0DF58267CE8D7759A44EA3A1D964;
IL2CPP_EXTERN_C String_t* _stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE386A93B8C53D7B4E1348948EA384D48B27414CB;
IL2CPP_EXTERN_C String_t* _stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mC13680157905408E3062BCDCA7EC876230AEBB05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisNetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324_mACFDAFE5B71C390DE1CAEF15936000053BED8045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisNetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289_m9B3B40950888BF8D54F127FC0FC517A2F5F3FA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisPartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5_mC4E991245619E93C941E1C994B0A21E94FB49B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_mC5F3E3650FE95E74BAA8AE41E6DD47E16DAD5648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m1FBFD17AFB3C32796D4C153A7331DDFF51431BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m45E981B3CAD57FC3D2F05787E2E59490BFDE629B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_mDD1CBDBD04AF818D91B3BFE4DE641967466B06A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956_mA804A429919763B6A386C256F44F0559EE3D86CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4EA18BB63BFEAF76AA407442A4E145110CFB0EFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m74EFE0FCFCB65235BED773C94CBD1F5693DC75E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA8863CA185BF1BD52EB0A3186C57DC03F87F1B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72FE05C8D4575DB08E41D51CA886BC2B4E9D84C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBBEDF3751FFFC20A994E4509F6261E95EE1F0335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFDD29EEB5DF2688668D2AA10EE44CBE2A97E555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m0670131EC1CEF12D96C7C5F66E7D3E7104E82744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m35CEA4697319241E68E0EBBFB00CA0CF79280A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m3742CF83FD392211E9FA7D3815ABC7BC35CA834C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m382EF902EB8C4AB6D8BF4D44CF55CCFE98EFD834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m63CAA32FA5A2642D0F491DC4AF3E81AA1CE243BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m6A5A70F1D07191554B3B90ACEA376E3808A5CBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m6B69FEEBB6BA1BAC2E2042126DE321550F881B9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m77FA43E9C35513EB247784892C0AFC4DA3DF6B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_m8EBB9A8A08953B21D03640589E09C0854EA9F892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_mCFF439D31A61C74E6F9FEE63603FFCF716FB6BB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_mD27A6D0E98A84C59B1F0C96E0A11FD89F959F90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_mD575FC4B2819DB53A87794348EED896164DE179D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_mD8524ADDCA39B06E2F16CC2C7B1425107FF8FFAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1__ctor_mD975C122123EFD5E4E03A569AB4E55B3AFAAA8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m08389972AB99036CC48CC68C41BCB11F8C651378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m34E2CA3CD0598E90ADCE5A341675B293460CAC67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m495270D04A1348D78D6F39B0F444A4C83DB129E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m4D5FBBF797090009DB90155857A73A7DC70D031D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m6D8D4D99303FDC68FA1342E818BCE31E44A60C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m86378EE0F124498A16BBE983E63118F62D925CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m9DCC17362E8F6A8A4F8B75F31F14CFBE304AB8FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mB486C604742D203CD0503E8F3484961A78DD7A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mBC32A7D51676A20F436A48462D9190C37595CAB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mCFB82BE284C9D4375FC3040E88976D77D0526318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mD0A241216E707B8C45056F31AA2F5254041175B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mEF7E09C34A28D6EDB5254BCE61FBA692DBBF8423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mFB18B16AC8B27F553306D41239F3BE8512F216B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mFB350CD32671DBBF7739B605F5BF265ABF8A1472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadBytes_m0380D2B990896E5EC95075B6938695C856431D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInternal_InitializeStandaloneAsync_mB06B54E4E0C5547DD8411AE503DE49F2D54FADF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mBF5B02E55E7EACCE5000A1DEB5C79D09092ED4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_HandleMessage_mECFAD6677F9DBD582011DFDA2BE7FD1B87DD3F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_mA934F318B1F311E0D6520075254E0B177D434BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_m5DEF2C7120175951508210018FE61F2A7E2C3BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.ApplicationInvite>
struct DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6, ____Data_0)); }
	inline List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D * get__Data_0() const { return ____Data_0; }
	inline List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>
struct DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t53D10076CF7633DF5E907DE5739196321544077A * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6, ____Data_0)); }
	inline List_1_t53D10076CF7633DF5E907DE5739196321544077A * get__Data_0() const { return ____Data_0; }
	inline List_1_t53D10076CF7633DF5E907DE5739196321544077A ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t53D10076CF7633DF5E907DE5739196321544077A * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>
struct DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F, ____Data_0)); }
	inline List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 * get__Data_0() const { return ____Data_0; }
	inline List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncSession>
struct DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D, ____Data_0)); }
	inline List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * get__Data_0() const { return ____Data_0; }
	inline List_1_t814689C58494A7CC08836709C95562576D4A3FD1 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>
struct DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA, ____Data_0)); }
	inline List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * get__Data_0() const { return ____Data_0; }
	inline List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____Data_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get__Data_0() const { return ____Data_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Pid>
struct DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t76614734F621AFD54E4A1505402DFEE94376947F * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413, ____Data_0)); }
	inline List_1_t76614734F621AFD54E4A1505402DFEE94376947F * get__Data_0() const { return ____Data_0; }
	inline List_1_t76614734F621AFD54E4A1505402DFEE94376947F ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t76614734F621AFD54E4A1505402DFEE94376947F * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>
struct DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755, ____Data_0)); }
	inline List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * get__Data_0() const { return ____Data_0; }
	inline List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>
struct DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6, ____Data_0)); }
	inline List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * get__Data_0() const { return ____Data_0; }
	inline List_1_tEF576F33659755044A466574FB2C3AE99B17F353 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>
struct DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____Data_0)); }
	inline List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * get__Data_0() const { return ____Data_0; }
	inline List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____Data_0)); }
	inline List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * get__Data_0() const { return ____Data_0; }
	inline List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>
struct DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D, ____Data_0)); }
	inline List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * get__Data_0() const { return ____Data_0; }
	inline List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>
struct Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4* ___entries_1;
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
	KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___entries_1)); }
	inline EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___keys_7)); }
	inline KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___values_8)); }
	inline ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncSession>
struct List_1_t814689C58494A7CC08836709C95562576D4A3FD1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t814689C58494A7CC08836709C95562576D4A3FD1, ____items_1)); }
	inline NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE* get__items_1() const { return ____items_1; }
	inline NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t814689C58494A7CC08836709C95562576D4A3FD1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t814689C58494A7CC08836709C95562576D4A3FD1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t814689C58494A7CC08836709C95562576D4A3FD1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>
struct List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE, ____items_1)); }
	inline NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E* get__items_1() const { return ____items_1; }
	inline NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Pid>
struct List_1_t76614734F621AFD54E4A1505402DFEE94376947F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t76614734F621AFD54E4A1505402DFEE94376947F, ____items_1)); }
	inline PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17* get__items_1() const { return ____items_1; }
	inline PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t76614734F621AFD54E4A1505402DFEE94376947F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t76614734F621AFD54E4A1505402DFEE94376947F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t76614734F621AFD54E4A1505402DFEE94376947F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>
struct List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____items_1)); }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* get__items_1() const { return ____items_1; }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>
struct List_1_tEF576F33659755044A466574FB2C3AE99B17F353  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____items_1)); }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* get__items_1() const { return ____items_1; }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>
struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____items_1)); }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* get__items_1() const { return ____items_1; }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____items_1)); }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* get__items_1() const { return ____items_1; }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>
struct List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____items_1)); }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* get__items_1() const { return ____items_1; }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Platform.Core
struct Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.Error
struct Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Platform.Models.Error::Code
	int32_t ___Code_0;
	// System.Int32 Oculus.Platform.Models.Error::HttpCode
	int32_t ___HttpCode_1;
	// System.String Oculus.Platform.Models.Error::Message
	String_t* ___Message_2;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_HttpCode_1() { return static_cast<int32_t>(offsetof(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89, ___HttpCode_1)); }
	inline int32_t get_HttpCode_1() const { return ___HttpCode_1; }
	inline int32_t* get_address_of_HttpCode_1() { return &___HttpCode_1; }
	inline void set_HttpCode_1(int32_t value)
	{
		___HttpCode_1 = value;
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89, ___Message_2)); }
	inline String_t* get_Message_2() const { return ___Message_2; }
	inline String_t** get_address_of_Message_2() { return &___Message_2; }
	inline void set_Message_2(String_t* value)
	{
		___Message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_2), (void*)value);
	}
};


// Oculus.Platform.Models.MicrophoneAvailabilityState
struct MicrophoneAvailabilityState_t0427E2FFDB03FD29DF02E9A58315A8057B4E555E  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.MicrophoneAvailabilityState::MicrophoneAvailable
	bool ___MicrophoneAvailable_0;

public:
	inline static int32_t get_offset_of_MicrophoneAvailable_0() { return static_cast<int32_t>(offsetof(MicrophoneAvailabilityState_t0427E2FFDB03FD29DF02E9A58315A8057B4E555E, ___MicrophoneAvailable_0)); }
	inline bool get_MicrophoneAvailable_0() const { return ___MicrophoneAvailable_0; }
	inline bool* get_address_of_MicrophoneAvailable_0() { return &___MicrophoneAvailable_0; }
	inline void set_MicrophoneAvailable_0(bool value)
	{
		___MicrophoneAvailable_0 = value;
	}
};


// Oculus.Platform.NetSync
struct NetSync_t4ECA2BB52998499444F5917CBA18102FA5FBFF2A  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.NetSyncSession
struct NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C  : public RuntimeObject
{
public:
	// System.Int64 Oculus.Platform.Models.NetSyncSession::ConnectionId
	int64_t ___ConnectionId_0;
	// System.Boolean Oculus.Platform.Models.NetSyncSession::Muted
	bool ___Muted_1;
	// System.UInt64 Oculus.Platform.Models.NetSyncSession::SessionId
	uint64_t ___SessionId_2;
	// System.UInt64 Oculus.Platform.Models.NetSyncSession::UserId
	uint64_t ___UserId_3;
	// System.String Oculus.Platform.Models.NetSyncSession::VoipGroup
	String_t* ___VoipGroup_4;

public:
	inline static int32_t get_offset_of_ConnectionId_0() { return static_cast<int32_t>(offsetof(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C, ___ConnectionId_0)); }
	inline int64_t get_ConnectionId_0() const { return ___ConnectionId_0; }
	inline int64_t* get_address_of_ConnectionId_0() { return &___ConnectionId_0; }
	inline void set_ConnectionId_0(int64_t value)
	{
		___ConnectionId_0 = value;
	}

	inline static int32_t get_offset_of_Muted_1() { return static_cast<int32_t>(offsetof(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C, ___Muted_1)); }
	inline bool get_Muted_1() const { return ___Muted_1; }
	inline bool* get_address_of_Muted_1() { return &___Muted_1; }
	inline void set_Muted_1(bool value)
	{
		___Muted_1 = value;
	}

	inline static int32_t get_offset_of_SessionId_2() { return static_cast<int32_t>(offsetof(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C, ___SessionId_2)); }
	inline uint64_t get_SessionId_2() const { return ___SessionId_2; }
	inline uint64_t* get_address_of_SessionId_2() { return &___SessionId_2; }
	inline void set_SessionId_2(uint64_t value)
	{
		___SessionId_2 = value;
	}

	inline static int32_t get_offset_of_UserId_3() { return static_cast<int32_t>(offsetof(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C, ___UserId_3)); }
	inline uint64_t get_UserId_3() const { return ___UserId_3; }
	inline uint64_t* get_address_of_UserId_3() { return &___UserId_3; }
	inline void set_UserId_3(uint64_t value)
	{
		___UserId_3 = value;
	}

	inline static int32_t get_offset_of_VoipGroup_4() { return static_cast<int32_t>(offsetof(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C, ___VoipGroup_4)); }
	inline String_t* get_VoipGroup_4() const { return ___VoipGroup_4; }
	inline String_t** get_address_of_VoipGroup_4() { return &___VoipGroup_4; }
	inline void set_VoipGroup_4(String_t* value)
	{
		___VoipGroup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VoipGroup_4), (void*)value);
	}
};


// Oculus.Platform.Models.NetSyncSessionsChangedNotification
struct NetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289  : public RuntimeObject
{
public:
	// System.Int64 Oculus.Platform.Models.NetSyncSessionsChangedNotification::ConnectionId
	int64_t ___ConnectionId_0;
	// Oculus.Platform.Models.NetSyncSessionList Oculus.Platform.Models.NetSyncSessionsChangedNotification::Sessions
	NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * ___Sessions_1;

public:
	inline static int32_t get_offset_of_ConnectionId_0() { return static_cast<int32_t>(offsetof(NetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289, ___ConnectionId_0)); }
	inline int64_t get_ConnectionId_0() const { return ___ConnectionId_0; }
	inline int64_t* get_address_of_ConnectionId_0() { return &___ConnectionId_0; }
	inline void set_ConnectionId_0(int64_t value)
	{
		___ConnectionId_0 = value;
	}

	inline static int32_t get_offset_of_Sessions_1() { return static_cast<int32_t>(offsetof(NetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289, ___Sessions_1)); }
	inline NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * get_Sessions_1() const { return ___Sessions_1; }
	inline NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB ** get_address_of_Sessions_1() { return &___Sessions_1; }
	inline void set_Sessions_1(NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * value)
	{
		___Sessions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sessions_1), (void*)value);
	}
};


// Oculus.Platform.Models.NetSyncSetSessionPropertyResult
struct NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535  : public RuntimeObject
{
public:
	// Oculus.Platform.Models.NetSyncSession Oculus.Platform.Models.NetSyncSetSessionPropertyResult::Session
	NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * ___Session_0;

public:
	inline static int32_t get_offset_of_Session_0() { return static_cast<int32_t>(offsetof(NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535, ___Session_0)); }
	inline NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * get_Session_0() const { return ___Session_0; }
	inline NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C ** get_address_of_Session_0() { return &___Session_0; }
	inline void set_Session_0(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * value)
	{
		___Session_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Session_0), (void*)value);
	}
};


// Oculus.Platform.Models.NetSyncVoipAttenuationValue
struct NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B  : public RuntimeObject
{
public:
	// System.Single Oculus.Platform.Models.NetSyncVoipAttenuationValue::Decibels
	float ___Decibels_0;
	// System.Single Oculus.Platform.Models.NetSyncVoipAttenuationValue::Distance
	float ___Distance_1;

public:
	inline static int32_t get_offset_of_Decibels_0() { return static_cast<int32_t>(offsetof(NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B, ___Decibels_0)); }
	inline float get_Decibels_0() const { return ___Decibels_0; }
	inline float* get_address_of_Decibels_0() { return &___Decibels_0; }
	inline void set_Decibels_0(float value)
	{
		___Decibels_0 = value;
	}

	inline static int32_t get_offset_of_Distance_1() { return static_cast<int32_t>(offsetof(NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B, ___Distance_1)); }
	inline float get_Distance_1() const { return ___Distance_1; }
	inline float* get_address_of_Distance_1() { return &___Distance_1; }
	inline void set_Distance_1(float value)
	{
		___Distance_1 = value;
	}
};


// Oculus.Platform.Notifications
struct Notifications_t0F30126EF8298D1EF6B0BAE1160E2421AB03D195  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.OrgScopedID
struct OrgScopedID_tB1BEECC4583C752389EFF379941DE6B72090B261  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.OrgScopedID::ID
	uint64_t ___ID_0;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(OrgScopedID_tB1BEECC4583C752389EFF379941DE6B72090B261, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}
};


// Oculus.Platform.Parties
struct Parties_tA497249F0735C4BDC3839C2864AFACE8FEA4E316  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.Party
struct Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.Party::ID
	uint64_t ___ID_0;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Party::InvitedUsersOptional
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___InvitedUsersOptional_1;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Party::InvitedUsers
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___InvitedUsers_2;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Party::LeaderOptional
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___LeaderOptional_3;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Party::Leader
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___Leader_4;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Party::UsersOptional
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___UsersOptional_5;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Party::Users
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___Users_6;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_InvitedUsersOptional_1() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___InvitedUsersOptional_1)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_InvitedUsersOptional_1() const { return ___InvitedUsersOptional_1; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_InvitedUsersOptional_1() { return &___InvitedUsersOptional_1; }
	inline void set_InvitedUsersOptional_1(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___InvitedUsersOptional_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvitedUsersOptional_1), (void*)value);
	}

	inline static int32_t get_offset_of_InvitedUsers_2() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___InvitedUsers_2)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_InvitedUsers_2() const { return ___InvitedUsers_2; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_InvitedUsers_2() { return &___InvitedUsers_2; }
	inline void set_InvitedUsers_2(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___InvitedUsers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvitedUsers_2), (void*)value);
	}

	inline static int32_t get_offset_of_LeaderOptional_3() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___LeaderOptional_3)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_LeaderOptional_3() const { return ___LeaderOptional_3; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_LeaderOptional_3() { return &___LeaderOptional_3; }
	inline void set_LeaderOptional_3(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___LeaderOptional_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeaderOptional_3), (void*)value);
	}

	inline static int32_t get_offset_of_Leader_4() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___Leader_4)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_Leader_4() const { return ___Leader_4; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_Leader_4() { return &___Leader_4; }
	inline void set_Leader_4(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___Leader_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leader_4), (void*)value);
	}

	inline static int32_t get_offset_of_UsersOptional_5() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___UsersOptional_5)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_UsersOptional_5() const { return ___UsersOptional_5; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_UsersOptional_5() { return &___UsersOptional_5; }
	inline void set_UsersOptional_5(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___UsersOptional_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UsersOptional_5), (void*)value);
	}

	inline static int32_t get_offset_of_Users_6() { return static_cast<int32_t>(offsetof(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB, ___Users_6)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_Users_6() const { return ___Users_6; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_Users_6() { return &___Users_6; }
	inline void set_Users_6(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___Users_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Users_6), (void*)value);
	}
};


// Oculus.Platform.Models.PartyID
struct PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.PartyID::ID
	uint64_t ___ID_0;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}
};


// Oculus.Platform.Models.Pid
struct Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.Pid::Id
	String_t* ___Id_0;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_0), (void*)value);
	}
};


// Oculus.Platform.PlatformInternal
struct PlatformInternal_tD12C8DD49C4E7E665B26FB29D34C9E378E62EABF  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.Product
struct Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.Product::Description
	String_t* ___Description_0;
	// System.String Oculus.Platform.Models.Product::FormattedPrice
	String_t* ___FormattedPrice_1;
	// System.String Oculus.Platform.Models.Product::Name
	String_t* ___Name_2;
	// System.String Oculus.Platform.Models.Product::Sku
	String_t* ___Sku_3;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_0), (void*)value);
	}

	inline static int32_t get_offset_of_FormattedPrice_1() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___FormattedPrice_1)); }
	inline String_t* get_FormattedPrice_1() const { return ___FormattedPrice_1; }
	inline String_t** get_address_of_FormattedPrice_1() { return &___FormattedPrice_1; }
	inline void set_FormattedPrice_1(String_t* value)
	{
		___FormattedPrice_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FormattedPrice_1), (void*)value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_Sku_3() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___Sku_3)); }
	inline String_t* get_Sku_3() const { return ___Sku_3; }
	inline String_t** get_address_of_Sku_3() { return &___Sku_3; }
	inline void set_Sku_3(String_t* value)
	{
		___Sku_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sku_3), (void*)value);
	}
};


// Oculus.Platform.Models.RejoinDialogResult
struct RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.RejoinDialogResult::RejoinSelected
	bool ___RejoinSelected_0;

public:
	inline static int32_t get_offset_of_RejoinSelected_0() { return static_cast<int32_t>(offsetof(RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B, ___RejoinSelected_0)); }
	inline bool get_RejoinSelected_0() const { return ___RejoinSelected_0; }
	inline bool* get_address_of_RejoinSelected_0() { return &___RejoinSelected_0; }
	inline void set_RejoinSelected_0(bool value)
	{
		___RejoinSelected_0 = value;
	}
};


// Oculus.Platform.Request
struct Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Request::callback_
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback__0;
	// System.UInt64 Oculus.Platform.Request::<RequestID>k__BackingField
	uint64_t ___U3CRequestIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_callback__0() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___callback__0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_callback__0() const { return ___callback__0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_callback__0() { return &___callback__0; }
	inline void set_callback__0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___callback__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___U3CRequestIDU3Ek__BackingField_1)); }
	inline uint64_t get_U3CRequestIDU3Ek__BackingField_1() const { return ___U3CRequestIDU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CRequestIDU3Ek__BackingField_1() { return &___U3CRequestIDU3Ek__BackingField_1; }
	inline void set_U3CRequestIDU3Ek__BackingField_1(uint64_t value)
	{
		___U3CRequestIDU3Ek__BackingField_1 = value;
	}
};


// Oculus.Platform.RichPresence
struct RichPresence_t9C6284B503E07CDD36E54F81A363BB36A534AC1C  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.SendInvitesResult
struct SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130  : public RuntimeObject
{
public:
	// Oculus.Platform.Models.ApplicationInviteList Oculus.Platform.Models.SendInvitesResult::Invites
	ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * ___Invites_0;

public:
	inline static int32_t get_offset_of_Invites_0() { return static_cast<int32_t>(offsetof(SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130, ___Invites_0)); }
	inline ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * get_Invites_0() const { return ___Invites_0; }
	inline ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 ** get_address_of_Invites_0() { return &___Invites_0; }
	inline void set_Invites_0(ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * value)
	{
		___Invites_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invites_0), (void*)value);
	}
};


// Oculus.Platform.StandalonePlatform
struct StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.StandalonePlatformSettings
struct StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036  : public RuntimeObject
{
public:

public:
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


// Oculus.Platform.Models.SupplementaryMetric
struct SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.SupplementaryMetric::ID
	uint64_t ___ID_0;
	// System.Int64 Oculus.Platform.Models.SupplementaryMetric::Metric
	int64_t ___Metric_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Metric_1() { return static_cast<int32_t>(offsetof(SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185, ___Metric_1)); }
	inline int64_t get_Metric_1() const { return ___Metric_1; }
	inline int64_t* get_address_of_Metric_1() { return &___Metric_1; }
	inline void set_Metric_1(int64_t value)
	{
		___Metric_1 = value;
	}
};


// Oculus.Platform.Models.UserCapability
struct UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.UserCapability::Description
	String_t* ___Description_0;
	// System.Boolean Oculus.Platform.Models.UserCapability::IsEnabled
	bool ___IsEnabled_1;
	// System.String Oculus.Platform.Models.UserCapability::Name
	String_t* ___Name_2;
	// System.String Oculus.Platform.Models.UserCapability::ReasonCode
	String_t* ___ReasonCode_3;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsEnabled_1() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___IsEnabled_1)); }
	inline bool get_IsEnabled_1() const { return ___IsEnabled_1; }
	inline bool* get_address_of_IsEnabled_1() { return &___IsEnabled_1; }
	inline void set_IsEnabled_1(bool value)
	{
		___IsEnabled_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_ReasonCode_3() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___ReasonCode_3)); }
	inline String_t* get_ReasonCode_3() const { return ___ReasonCode_3; }
	inline String_t** get_address_of_ReasonCode_3() { return &___ReasonCode_3; }
	inline void set_ReasonCode_3(String_t* value)
	{
		___ReasonCode_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReasonCode_3), (void*)value);
	}
};


// Oculus.Platform.UserDataStore
struct UserDataStore_t20BD3F424C0584C682518AE7C64D9ED2261C36A1  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.UserDataStoreUpdateResponse
struct UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.UserDataStoreUpdateResponse::Success
	bool ___Success_0;

public:
	inline static int32_t get_offset_of_Success_0() { return static_cast<int32_t>(offsetof(UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23, ___Success_0)); }
	inline bool get_Success_0() const { return ___Success_0; }
	inline bool* get_address_of_Success_0() { return &___Success_0; }
	inline void set_Success_0(bool value)
	{
		___Success_0 = value;
	}
};


// Oculus.Platform.Models.UserProof
struct UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.UserProof::Value
	String_t* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// Oculus.Platform.Models.UserReportID
struct UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.UserReportID::DidCancel
	bool ___DidCancel_0;
	// System.UInt64 Oculus.Platform.Models.UserReportID::ID
	uint64_t ___ID_1;

public:
	inline static int32_t get_offset_of_DidCancel_0() { return static_cast<int32_t>(offsetof(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB, ___DidCancel_0)); }
	inline bool get_DidCancel_0() const { return ___DidCancel_0; }
	inline bool* get_address_of_DidCancel_0() { return &___DidCancel_0; }
	inline void set_DidCancel_0(bool value)
	{
		___DidCancel_0 = value;
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}
};


// Oculus.Platform.Users
struct Users_t2DDB732114AF6EEC173D2B9A1014199F139ED79C  : public RuntimeObject
{
public:

public:
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

// Oculus.Platform.Voip
struct Voip_tD05F4EB764B22820F29134B5915F2A1463A39FE1  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.VoipPCMSourceNative
struct VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.VoipPCMSourceNative::senderID
	uint64_t ___senderID_0;

public:
	inline static int32_t get_offset_of_senderID_0() { return static_cast<int32_t>(offsetof(VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13, ___senderID_0)); }
	inline uint64_t get_senderID_0() const { return ___senderID_0; }
	inline uint64_t* get_address_of_senderID_0() { return &___senderID_0; }
	inline void set_senderID_0(uint64_t value)
	{
		___senderID_0 = value;
	}
};


// Oculus.Platform.Vrcamera
struct Vrcamera_t634918F934A66F8331B6A0832DE1C83A88A30BAB  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.WindowsPlatform
struct WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Callback/RequestCallback
struct RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Callback/RequestCallback::messageCallback
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___messageCallback_0;

public:
	inline static int32_t get_offset_of_messageCallback_0() { return static_cast<int32_t>(offsetof(RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF, ___messageCallback_0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_messageCallback_0() const { return ___messageCallback_0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_messageCallback_0() { return &___messageCallback_0; }
	inline void set_messageCallback_0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___messageCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageCallback_0), (void*)value);
	}
};


// Oculus.Platform.PlatformInternal/HTTP
struct HTTP_tE160B8E2271028933E732801D6ECC4447A71C3B2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.PlatformInternal/Users
struct Users_tCAE308317CC9141CCA4C84AD29CE90A5D0EB3843  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.UInt64>
struct Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C 
{
public:
	// T System.Nullable`1::value
	uint64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___value_0)); }
	inline uint64_t get_value_0() const { return ___value_0; }
	inline uint64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103, ___callback__2)); }
	inline Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * get_callback__2() const { return ___callback__2; }
	inline Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>
struct Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2, ___callback__2)); }
	inline Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 * get_callback__2() const { return ___callback__2; }
	inline Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>
struct Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28, ___callback__2)); }
	inline Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C * get_callback__2() const { return ___callback__2; }
	inline Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>
struct Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0, ___callback__2)); }
	inline Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 * get_callback__2() const { return ___callback__2; }
	inline Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866, ___callback__2)); }
	inline Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * get_callback__2() const { return ___callback__2; }
	inline Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>
struct Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t17D87388F669046EE27272F01362F88632750BD3 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474, ___callback__2)); }
	inline Callback_t17D87388F669046EE27272F01362F88632750BD3 * get_callback__2() const { return ___callback__2; }
	inline Callback_t17D87388F669046EE27272F01362F88632750BD3 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t17D87388F669046EE27272F01362F88632750BD3 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530, ___callback__2)); }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>
struct Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20, ___callback__2)); }
	inline Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F * get_callback__2() const { return ___callback__2; }
	inline Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>
struct Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95, ___callback__2)); }
	inline Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * get_callback__2() const { return ___callback__2; }
	inline Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.Party>
struct Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t04EA8FEF308E167126A9853D3E0D655D514487D2 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035, ___callback__2)); }
	inline Callback_t04EA8FEF308E167126A9853D3E0D655D514487D2 * get_callback__2() const { return ___callback__2; }
	inline Callback_t04EA8FEF308E167126A9853D3E0D655D514487D2 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t04EA8FEF308E167126A9853D3E0D655D514487D2 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>
struct Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4, ___callback__2)); }
	inline Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * get_callback__2() const { return ___callback__2; }
	inline Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>
struct Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C, ___callback__2)); }
	inline Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * get_callback__2() const { return ___callback__2; }
	inline Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<System.String>
struct Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC, ___callback__2)); }
	inline Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * get_callback__2() const { return ___callback__2; }
	inline Callback_tD043303749DFDABD54DB83282588105CC2ADB18D ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>
struct Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF, ___callback__2)); }
	inline Callback_t827F915E827EE8044B5F300339FE951E4557B20A * get_callback__2() const { return ___callback__2; }
	inline Callback_t827F915E827EE8044B5F300339FE951E4557B20A ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t827F915E827EE8044B5F300339FE951E4557B20A * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94, ___callback__2)); }
	inline Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * get_callback__2() const { return ___callback__2; }
	inline Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>
struct Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2, ___callback__2)); }
	inline Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 * get_callback__2() const { return ___callback__2; }
	inline Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B, ___callback__2)); }
	inline Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * get_callback__2() const { return ___callback__2; }
	inline Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_t2CA1B16D395258918A268B17227A7212918D2136  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t2CA1B16D395258918A268B17227A7212918D2136, ___callback__2)); }
	inline Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE, ___callback__2)); }
	inline Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Models.ApplicationInviteList
struct ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360  : public DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6
{
public:

public:
};


// Oculus.Platform.Models.BlockedUserList
struct BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217  : public DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// Oculus.Platform.Models.DestinationList
struct DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C  : public DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F
{
public:

public:
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// Oculus.Platform.Models.NetSyncSessionList
struct NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB  : public DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D
{
public:

public:
};


// Oculus.Platform.Models.NetSyncVoipAttenuationValueList
struct NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF  : public DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA
{
public:

public:
};


// Oculus.Platform.Models.PidList
struct PidList_t891283A24E8065477D9F74286AE24A0AA94E50DC  : public DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413
{
public:

public:
};


// Oculus.Platform.Models.ProductList
struct ProductList_tC2405EC15E1F8BA7208810CB03DC828362BE293F  : public DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755
{
public:

public:
};


// Oculus.Platform.Models.PurchaseList
struct PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802  : public DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6
{
public:

public:
};


// Oculus.Platform.Models.SdkAccountList
struct SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67  : public DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F
{
public:

public:
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


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};


// Oculus.Platform.Models.UserCapabilityList
struct UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3  : public DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D
{
public:

public:
};


// Oculus.Platform.Models.UserList
struct UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B  : public DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409
{
public:

public:
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
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


// Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5 
{
public:
	// System.Int32 Oculus.Platform.CAPI/OculusInitParams::sType
	int32_t ___sType_0;
	// System.String Oculus.Platform.CAPI/OculusInitParams::email
	String_t* ___email_1;
	// System.String Oculus.Platform.CAPI/OculusInitParams::password
	String_t* ___password_2;
	// System.UInt64 Oculus.Platform.CAPI/OculusInitParams::appId
	uint64_t ___appId_3;
	// System.String Oculus.Platform.CAPI/OculusInitParams::uriPrefixOverride
	String_t* ___uriPrefixOverride_4;

public:
	inline static int32_t get_offset_of_sType_0() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___sType_0)); }
	inline int32_t get_sType_0() const { return ___sType_0; }
	inline int32_t* get_address_of_sType_0() { return &___sType_0; }
	inline void set_sType_0(int32_t value)
	{
		___sType_0 = value;
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___email_1)); }
	inline String_t* get_email_1() const { return ___email_1; }
	inline String_t** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(String_t* value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___email_1), (void*)value);
	}

	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_2), (void*)value);
	}

	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___appId_3)); }
	inline uint64_t get_appId_3() const { return ___appId_3; }
	inline uint64_t* get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(uint64_t value)
	{
		___appId_3 = value;
	}

	inline static int32_t get_offset_of_uriPrefixOverride_4() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___uriPrefixOverride_4)); }
	inline String_t* get_uriPrefixOverride_4() const { return ___uriPrefixOverride_4; }
	inline String_t** get_address_of_uriPrefixOverride_4() { return &___uriPrefixOverride_4; }
	inline void set_uriPrefixOverride_4(String_t* value)
	{
		___uriPrefixOverride_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uriPrefixOverride_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke
{
	int32_t ___sType_0;
	char* ___email_1;
	char* ___password_2;
	uint64_t ___appId_3;
	char* ___uriPrefixOverride_4;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com
{
	int32_t ___sType_0;
	Il2CppChar* ___email_1;
	Il2CppChar* ___password_2;
	uint64_t ___appId_3;
	Il2CppChar* ___uriPrefixOverride_4;
};

// Oculus.Platform.CAPI/ovrNetSyncVec3
struct ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874 
{
public:
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::x
	float ___x_0;
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::y
	float ___y_1;
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
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

// Oculus.Platform.KeyValuePairType
struct KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402 
{
public:
	// System.Int32 Oculus.Platform.KeyValuePairType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.MultiplayerErrorErrorKey
struct MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C 
{
public:
	// System.Int32 Oculus.Platform.MultiplayerErrorErrorKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.MultiplayerErrorOptions
struct MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.MultiplayerErrorOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.NetSyncConnectionStatus
struct NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4 
{
public:
	// System.Int32 Oculus.Platform.NetSyncConnectionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.NetSyncDisconnectReason
struct NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412 
{
public:
	// System.Int32 Oculus.Platform.NetSyncDisconnectReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.NetSyncOptions
struct NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.NetSyncOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.NetSyncVoipMicSource
struct NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB 
{
public:
	// System.Int32 Oculus.Platform.NetSyncVoipMicSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.NetSyncVoipStreamMode
struct NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53 
{
public:
	// System.Int32 Oculus.Platform.NetSyncVoipStreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53, ___value___2)); }
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

// Oculus.Platform.Packet
struct Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Packet::size
	uint64_t ___size_0;
	// System.IntPtr Oculus.Platform.Packet::packetHandle
	intptr_t ___packetHandle_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A, ___size_0)); }
	inline uint64_t get_size_0() const { return ___size_0; }
	inline uint64_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(uint64_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_packetHandle_1() { return static_cast<int32_t>(offsetof(Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A, ___packetHandle_1)); }
	inline intptr_t get_packetHandle_1() const { return ___packetHandle_1; }
	inline intptr_t* get_address_of_packetHandle_1() { return &___packetHandle_1; }
	inline void set_packetHandle_1(intptr_t value)
	{
		___packetHandle_1 = value;
	}
};


// Oculus.Platform.PartyMicState
struct PartyMicState_t24AE6C6A76DCB13B110FD6678D90DC23DAED56C2 
{
public:
	// System.Int32 Oculus.Platform.PartyMicState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PartyMicState_t24AE6C6A76DCB13B110FD6678D90DC23DAED56C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PartyUpdateAction
struct PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315 
{
public:
	// System.Int32 Oculus.Platform.PartyUpdateAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PermissionGrantStatus
struct PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD 
{
public:
	// System.Int32 Oculus.Platform.PermissionGrantStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PermissionType
struct PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20 
{
public:
	// System.Int32 Oculus.Platform.PermissionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Models.PingResult
struct PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.PingResult::<ID>k__BackingField
	uint64_t ___U3CIDU3Ek__BackingField_0;
	// System.Nullable`1<System.UInt64> Oculus.Platform.Models.PingResult::pingTimeUsec
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___pingTimeUsec_1;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6, ___U3CIDU3Ek__BackingField_0)); }
	inline uint64_t get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(uint64_t value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_pingTimeUsec_1() { return static_cast<int32_t>(offsetof(PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6, ___pingTimeUsec_1)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_pingTimeUsec_1() const { return ___pingTimeUsec_1; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_pingTimeUsec_1() { return &___pingTimeUsec_1; }
	inline void set_pingTimeUsec_1(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___pingTimeUsec_1 = value;
	}
};


// Oculus.Platform.PlatformInitializeResult
struct PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B 
{
public:
	// System.Int32 Oculus.Platform.PlatformInitializeResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Models.Purchase
struct Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.Purchase::DeveloperPayload
	String_t* ___DeveloperPayload_0;
	// System.DateTime Oculus.Platform.Models.Purchase::ExpirationTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___ExpirationTime_1;
	// System.DateTime Oculus.Platform.Models.Purchase::GrantTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___GrantTime_2;
	// System.String Oculus.Platform.Models.Purchase::ID
	String_t* ___ID_3;
	// System.String Oculus.Platform.Models.Purchase::ReportingId
	String_t* ___ReportingId_4;
	// System.String Oculus.Platform.Models.Purchase::Sku
	String_t* ___Sku_5;

public:
	inline static int32_t get_offset_of_DeveloperPayload_0() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___DeveloperPayload_0)); }
	inline String_t* get_DeveloperPayload_0() const { return ___DeveloperPayload_0; }
	inline String_t** get_address_of_DeveloperPayload_0() { return &___DeveloperPayload_0; }
	inline void set_DeveloperPayload_0(String_t* value)
	{
		___DeveloperPayload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeveloperPayload_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExpirationTime_1() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___ExpirationTime_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_ExpirationTime_1() const { return ___ExpirationTime_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_ExpirationTime_1() { return &___ExpirationTime_1; }
	inline void set_ExpirationTime_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___ExpirationTime_1 = value;
	}

	inline static int32_t get_offset_of_GrantTime_2() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___GrantTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_GrantTime_2() const { return ___GrantTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_GrantTime_2() { return &___GrantTime_2; }
	inline void set_GrantTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___GrantTime_2 = value;
	}

	inline static int32_t get_offset_of_ID_3() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___ID_3)); }
	inline String_t* get_ID_3() const { return ___ID_3; }
	inline String_t** get_address_of_ID_3() { return &___ID_3; }
	inline void set_ID_3(String_t* value)
	{
		___ID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ID_3), (void*)value);
	}

	inline static int32_t get_offset_of_ReportingId_4() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___ReportingId_4)); }
	inline String_t* get_ReportingId_4() const { return ___ReportingId_4; }
	inline String_t** get_address_of_ReportingId_4() { return &___ReportingId_4; }
	inline void set_ReportingId_4(String_t* value)
	{
		___ReportingId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReportingId_4), (void*)value);
	}

	inline static int32_t get_offset_of_Sku_5() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___Sku_5)); }
	inline String_t* get_Sku_5() const { return ___Sku_5; }
	inline String_t** get_address_of_Sku_5() { return &___Sku_5; }
	inline void set_Sku_5(String_t* value)
	{
		___Sku_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sku_5), (void*)value);
	}
};


// Oculus.Platform.ReportRequestResponse
struct ReportRequestResponse_tDB4285D5D8F92FA92EB7DAAEF71800006E420791 
{
public:
	// System.Int32 Oculus.Platform.ReportRequestResponse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReportRequestResponse_tDB4285D5D8F92FA92EB7DAAEF71800006E420791, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RichPresenceExtraContext
struct RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140 
{
public:
	// System.Int32 Oculus.Platform.RichPresenceExtraContext::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RichPresenceOptions
struct RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.RichPresenceOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.RosterOptions
struct RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.RosterOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.SdkAccountType
struct SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9 
{
public:
	// System.Int32 Oculus.Platform.SdkAccountType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ServiceProvider
struct ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B 
{
public:
	// System.Int32 Oculus.Platform.ServiceProvider::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ShareMediaStatus
struct ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2 
{
public:
	// System.Int32 Oculus.Platform.ShareMediaStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.SystemVoipStatus
struct SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC 
{
public:
	// System.Int32 Oculus.Platform.SystemVoipStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.TimeWindow
struct TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2 
{
public:
	// System.Int32 Oculus.Platform.TimeWindow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.UserOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.UserOrdering
struct UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045 
{
public:
	// System.Int32 Oculus.Platform.UserOrdering::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserPresenceStatus
struct UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F 
{
public:
	// System.Int32 Oculus.Platform.UserPresenceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipBitrate
struct VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A 
{
public:
	// System.Int32 Oculus.Platform.VoipBitrate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipDtxState
struct VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F 
{
public:
	// System.Int32 Oculus.Platform.VoipDtxState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipMuteState
struct VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62 
{
public:
	// System.Int32 Oculus.Platform.VoipMuteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipOptions
struct VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.VoipOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.VoipSampleRate
struct VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D 
{
public:
	// System.Int32 Oculus.Platform.VoipSampleRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Message/MessageType
struct MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55 
{
public:
	// System.UInt32 Oculus.Platform.Message/MessageType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PlatformInternal/MessageTypeInternal
struct MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551 
{
public:
	// System.UInt32 Oculus.Platform.PlatformInternal/MessageTypeInternal::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
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


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * ___error_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___type_0)); }
	inline uint32_t get_type_0() const { return ___type_0; }
	inline uint32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_requestID_1() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___requestID_1)); }
	inline uint64_t get_requestID_1() const { return ___requestID_1; }
	inline uint64_t* get_address_of_requestID_1() { return &___requestID_1; }
	inline void set_requestID_1(uint64_t value)
	{
		___requestID_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___error_2)); }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * get_error_2() const { return ___error_2; }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_2), (void*)value);
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

// Oculus.Platform.Models.NetSyncConnection
struct NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324  : public RuntimeObject
{
public:
	// System.Int64 Oculus.Platform.Models.NetSyncConnection::ConnectionId
	int64_t ___ConnectionId_0;
	// Oculus.Platform.NetSyncDisconnectReason Oculus.Platform.Models.NetSyncConnection::DisconnectReason
	int32_t ___DisconnectReason_1;
	// System.UInt64 Oculus.Platform.Models.NetSyncConnection::SessionId
	uint64_t ___SessionId_2;
	// Oculus.Platform.NetSyncConnectionStatus Oculus.Platform.Models.NetSyncConnection::Status
	int32_t ___Status_3;
	// System.String Oculus.Platform.Models.NetSyncConnection::ZoneId
	String_t* ___ZoneId_4;

public:
	inline static int32_t get_offset_of_ConnectionId_0() { return static_cast<int32_t>(offsetof(NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324, ___ConnectionId_0)); }
	inline int64_t get_ConnectionId_0() const { return ___ConnectionId_0; }
	inline int64_t* get_address_of_ConnectionId_0() { return &___ConnectionId_0; }
	inline void set_ConnectionId_0(int64_t value)
	{
		___ConnectionId_0 = value;
	}

	inline static int32_t get_offset_of_DisconnectReason_1() { return static_cast<int32_t>(offsetof(NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324, ___DisconnectReason_1)); }
	inline int32_t get_DisconnectReason_1() const { return ___DisconnectReason_1; }
	inline int32_t* get_address_of_DisconnectReason_1() { return &___DisconnectReason_1; }
	inline void set_DisconnectReason_1(int32_t value)
	{
		___DisconnectReason_1 = value;
	}

	inline static int32_t get_offset_of_SessionId_2() { return static_cast<int32_t>(offsetof(NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324, ___SessionId_2)); }
	inline uint64_t get_SessionId_2() const { return ___SessionId_2; }
	inline uint64_t* get_address_of_SessionId_2() { return &___SessionId_2; }
	inline void set_SessionId_2(uint64_t value)
	{
		___SessionId_2 = value;
	}

	inline static int32_t get_offset_of_Status_3() { return static_cast<int32_t>(offsetof(NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324, ___Status_3)); }
	inline int32_t get_Status_3() const { return ___Status_3; }
	inline int32_t* get_address_of_Status_3() { return &___Status_3; }
	inline void set_Status_3(int32_t value)
	{
		___Status_3 = value;
	}

	inline static int32_t get_offset_of_ZoneId_4() { return static_cast<int32_t>(offsetof(NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324, ___ZoneId_4)); }
	inline String_t* get_ZoneId_4() const { return ___ZoneId_4; }
	inline String_t** get_address_of_ZoneId_4() { return &___ZoneId_4; }
	inline void set_ZoneId_4(String_t* value)
	{
		___ZoneId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZoneId_4), (void*)value);
	}
};


// Oculus.Platform.Models.PartyUpdateNotification
struct PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5  : public RuntimeObject
{
public:
	// Oculus.Platform.PartyUpdateAction Oculus.Platform.Models.PartyUpdateNotification::Action
	int32_t ___Action_0;
	// System.UInt64 Oculus.Platform.Models.PartyUpdateNotification::PartyId
	uint64_t ___PartyId_1;
	// System.UInt64 Oculus.Platform.Models.PartyUpdateNotification::SenderId
	uint64_t ___SenderId_2;
	// System.String Oculus.Platform.Models.PartyUpdateNotification::UpdateTimestamp
	String_t* ___UpdateTimestamp_3;
	// System.String Oculus.Platform.Models.PartyUpdateNotification::UserAlias
	String_t* ___UserAlias_4;
	// System.UInt64 Oculus.Platform.Models.PartyUpdateNotification::UserId
	uint64_t ___UserId_5;
	// System.String Oculus.Platform.Models.PartyUpdateNotification::UserName
	String_t* ___UserName_6;

public:
	inline static int32_t get_offset_of_Action_0() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___Action_0)); }
	inline int32_t get_Action_0() const { return ___Action_0; }
	inline int32_t* get_address_of_Action_0() { return &___Action_0; }
	inline void set_Action_0(int32_t value)
	{
		___Action_0 = value;
	}

	inline static int32_t get_offset_of_PartyId_1() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___PartyId_1)); }
	inline uint64_t get_PartyId_1() const { return ___PartyId_1; }
	inline uint64_t* get_address_of_PartyId_1() { return &___PartyId_1; }
	inline void set_PartyId_1(uint64_t value)
	{
		___PartyId_1 = value;
	}

	inline static int32_t get_offset_of_SenderId_2() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___SenderId_2)); }
	inline uint64_t get_SenderId_2() const { return ___SenderId_2; }
	inline uint64_t* get_address_of_SenderId_2() { return &___SenderId_2; }
	inline void set_SenderId_2(uint64_t value)
	{
		___SenderId_2 = value;
	}

	inline static int32_t get_offset_of_UpdateTimestamp_3() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___UpdateTimestamp_3)); }
	inline String_t* get_UpdateTimestamp_3() const { return ___UpdateTimestamp_3; }
	inline String_t** get_address_of_UpdateTimestamp_3() { return &___UpdateTimestamp_3; }
	inline void set_UpdateTimestamp_3(String_t* value)
	{
		___UpdateTimestamp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateTimestamp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UserAlias_4() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___UserAlias_4)); }
	inline String_t* get_UserAlias_4() const { return ___UserAlias_4; }
	inline String_t** get_address_of_UserAlias_4() { return &___UserAlias_4; }
	inline void set_UserAlias_4(String_t* value)
	{
		___UserAlias_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserAlias_4), (void*)value);
	}

	inline static int32_t get_offset_of_UserId_5() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___UserId_5)); }
	inline uint64_t get_UserId_5() const { return ___UserId_5; }
	inline uint64_t* get_address_of_UserId_5() { return &___UserId_5; }
	inline void set_UserId_5(uint64_t value)
	{
		___UserId_5 = value;
	}

	inline static int32_t get_offset_of_UserName_6() { return static_cast<int32_t>(offsetof(PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5, ___UserName_6)); }
	inline String_t* get_UserName_6() const { return ___UserName_6; }
	inline String_t** get_address_of_UserName_6() { return &___UserName_6; }
	inline void set_UserName_6(String_t* value)
	{
		___UserName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserName_6), (void*)value);
	}
};


// Oculus.Platform.Models.PlatformInitialize
struct PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50  : public RuntimeObject
{
public:
	// Oculus.Platform.PlatformInitializeResult Oculus.Platform.Models.PlatformInitialize::Result
	int32_t ___Result_0;

public:
	inline static int32_t get_offset_of_Result_0() { return static_cast<int32_t>(offsetof(PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50, ___Result_0)); }
	inline int32_t get_Result_0() const { return ___Result_0; }
	inline int32_t* get_address_of_Result_0() { return &___Result_0; }
	inline void set_Result_0(int32_t value)
	{
		___Result_0 = value;
	}
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

// Oculus.Platform.Models.SdkAccount
struct SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A  : public RuntimeObject
{
public:
	// Oculus.Platform.SdkAccountType Oculus.Platform.Models.SdkAccount::AccountType
	int32_t ___AccountType_0;
	// System.UInt64 Oculus.Platform.Models.SdkAccount::UserId
	uint64_t ___UserId_1;

public:
	inline static int32_t get_offset_of_AccountType_0() { return static_cast<int32_t>(offsetof(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A, ___AccountType_0)); }
	inline int32_t get_AccountType_0() const { return ___AccountType_0; }
	inline int32_t* get_address_of_AccountType_0() { return &___AccountType_0; }
	inline void set_AccountType_0(int32_t value)
	{
		___AccountType_0 = value;
	}

	inline static int32_t get_offset_of_UserId_1() { return static_cast<int32_t>(offsetof(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A, ___UserId_1)); }
	inline uint64_t get_UserId_1() const { return ___UserId_1; }
	inline uint64_t* get_address_of_UserId_1() { return &___UserId_1; }
	inline void set_UserId_1(uint64_t value)
	{
		___UserId_1 = value;
	}
};


// Oculus.Platform.Models.ShareMediaResult
struct ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7  : public RuntimeObject
{
public:
	// Oculus.Platform.ShareMediaStatus Oculus.Platform.Models.ShareMediaResult::Status
	int32_t ___Status_0;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7, ___Status_0)); }
	inline int32_t get_Status_0() const { return ___Status_0; }
	inline int32_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(int32_t value)
	{
		___Status_0 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Oculus.Platform.Models.SystemVoipState
struct SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D  : public RuntimeObject
{
public:
	// Oculus.Platform.VoipMuteState Oculus.Platform.Models.SystemVoipState::MicrophoneMuted
	int32_t ___MicrophoneMuted_0;
	// Oculus.Platform.SystemVoipStatus Oculus.Platform.Models.SystemVoipState::Status
	int32_t ___Status_1;

public:
	inline static int32_t get_offset_of_MicrophoneMuted_0() { return static_cast<int32_t>(offsetof(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D, ___MicrophoneMuted_0)); }
	inline int32_t get_MicrophoneMuted_0() const { return ___MicrophoneMuted_0; }
	inline int32_t* get_address_of_MicrophoneMuted_0() { return &___MicrophoneMuted_0; }
	inline void set_MicrophoneMuted_0(int32_t value)
	{
		___MicrophoneMuted_0 = value;
	}

	inline static int32_t get_offset_of_Status_1() { return static_cast<int32_t>(offsetof(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D, ___Status_1)); }
	inline int32_t get_Status_1() const { return ___Status_1; }
	inline int32_t* get_address_of_Status_1() { return &___Status_1; }
	inline void set_Status_1(int32_t value)
	{
		___Status_1 = value;
	}
};


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.UInt64 Oculus.Platform.Models.User::ID
	uint64_t ___ID_1;
	// System.String Oculus.Platform.Models.User::ImageURL
	String_t* ___ImageURL_2;
	// System.String Oculus.Platform.Models.User::OculusID
	String_t* ___OculusID_3;
	// System.String Oculus.Platform.Models.User::Presence
	String_t* ___Presence_4;
	// System.String Oculus.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_5;
	// System.String Oculus.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_6;
	// System.String Oculus.Platform.Models.User::PresenceLobbySessionId
	String_t* ___PresenceLobbySessionId_7;
	// System.String Oculus.Platform.Models.User::PresenceMatchSessionId
	String_t* ___PresenceMatchSessionId_8;
	// Oculus.Platform.UserPresenceStatus Oculus.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_9;
	// System.String Oculus.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_10;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_ImageURL_2() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ImageURL_2)); }
	inline String_t* get_ImageURL_2() const { return ___ImageURL_2; }
	inline String_t** get_address_of_ImageURL_2() { return &___ImageURL_2; }
	inline void set_ImageURL_2(String_t* value)
	{
		___ImageURL_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageURL_2), (void*)value);
	}

	inline static int32_t get_offset_of_OculusID_3() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___OculusID_3)); }
	inline String_t* get_OculusID_3() const { return ___OculusID_3; }
	inline String_t** get_address_of_OculusID_3() { return &___OculusID_3; }
	inline void set_OculusID_3(String_t* value)
	{
		___OculusID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OculusID_3), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_4() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___Presence_4)); }
	inline String_t* get_Presence_4() const { return ___Presence_4; }
	inline String_t** get_address_of_Presence_4() { return &___Presence_4; }
	inline void set_Presence_4(String_t* value)
	{
		___Presence_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Presence_4), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDeeplinkMessage_5() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDeeplinkMessage_5)); }
	inline String_t* get_PresenceDeeplinkMessage_5() const { return ___PresenceDeeplinkMessage_5; }
	inline String_t** get_address_of_PresenceDeeplinkMessage_5() { return &___PresenceDeeplinkMessage_5; }
	inline void set_PresenceDeeplinkMessage_5(String_t* value)
	{
		___PresenceDeeplinkMessage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDeeplinkMessage_5), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDestinationApiName_6() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDestinationApiName_6)); }
	inline String_t* get_PresenceDestinationApiName_6() const { return ___PresenceDestinationApiName_6; }
	inline String_t** get_address_of_PresenceDestinationApiName_6() { return &___PresenceDestinationApiName_6; }
	inline void set_PresenceDestinationApiName_6(String_t* value)
	{
		___PresenceDestinationApiName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDestinationApiName_6), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceLobbySessionId_7() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceLobbySessionId_7)); }
	inline String_t* get_PresenceLobbySessionId_7() const { return ___PresenceLobbySessionId_7; }
	inline String_t** get_address_of_PresenceLobbySessionId_7() { return &___PresenceLobbySessionId_7; }
	inline void set_PresenceLobbySessionId_7(String_t* value)
	{
		___PresenceLobbySessionId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceLobbySessionId_7), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceMatchSessionId_8() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceMatchSessionId_8)); }
	inline String_t* get_PresenceMatchSessionId_8() const { return ___PresenceMatchSessionId_8; }
	inline String_t** get_address_of_PresenceMatchSessionId_8() { return &___PresenceMatchSessionId_8; }
	inline void set_PresenceMatchSessionId_8(String_t* value)
	{
		___PresenceMatchSessionId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceMatchSessionId_8), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceStatus_9() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceStatus_9)); }
	inline int32_t get_PresenceStatus_9() const { return ___PresenceStatus_9; }
	inline int32_t* get_address_of_PresenceStatus_9() { return &___PresenceStatus_9; }
	inline void set_PresenceStatus_9(int32_t value)
	{
		___PresenceStatus_9 = value;
	}

	inline static int32_t get_offset_of_SmallImageUrl_10() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___SmallImageUrl_10)); }
	inline String_t* get_SmallImageUrl_10() const { return ___SmallImageUrl_10; }
	inline String_t** get_address_of_SmallImageUrl_10() { return &___SmallImageUrl_10; }
	inline void set_SmallImageUrl_10(String_t* value)
	{
		___SmallImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmallImageUrl_10), (void*)value);
	}
};


// Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 
{
public:
	// System.String Oculus.Platform.CAPI/ovrKeyValuePair::key_
	String_t* ___key__0;
	// Oculus.Platform.KeyValuePairType Oculus.Platform.CAPI/ovrKeyValuePair::valueType_
	int32_t ___valueType__1;
	// System.String Oculus.Platform.CAPI/ovrKeyValuePair::stringValue_
	String_t* ___stringValue__2;
	// System.Int32 Oculus.Platform.CAPI/ovrKeyValuePair::intValue_
	int32_t ___intValue__3;
	// System.Double Oculus.Platform.CAPI/ovrKeyValuePair::doubleValue_
	double ___doubleValue__4;

public:
	inline static int32_t get_offset_of_key__0() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___key__0)); }
	inline String_t* get_key__0() const { return ___key__0; }
	inline String_t** get_address_of_key__0() { return &___key__0; }
	inline void set_key__0(String_t* value)
	{
		___key__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key__0), (void*)value);
	}

	inline static int32_t get_offset_of_valueType__1() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___valueType__1)); }
	inline int32_t get_valueType__1() const { return ___valueType__1; }
	inline int32_t* get_address_of_valueType__1() { return &___valueType__1; }
	inline void set_valueType__1(int32_t value)
	{
		___valueType__1 = value;
	}

	inline static int32_t get_offset_of_stringValue__2() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___stringValue__2)); }
	inline String_t* get_stringValue__2() const { return ___stringValue__2; }
	inline String_t** get_address_of_stringValue__2() { return &___stringValue__2; }
	inline void set_stringValue__2(String_t* value)
	{
		___stringValue__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue__2), (void*)value);
	}

	inline static int32_t get_offset_of_intValue__3() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___intValue__3)); }
	inline int32_t get_intValue__3() const { return ___intValue__3; }
	inline int32_t* get_address_of_intValue__3() { return &___intValue__3; }
	inline void set_intValue__3(int32_t value)
	{
		___intValue__3 = value;
	}

	inline static int32_t get_offset_of_doubleValue__4() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___doubleValue__4)); }
	inline double get_doubleValue__4() const { return ___doubleValue__4; }
	inline double* get_address_of_doubleValue__4() { return &___doubleValue__4; }
	inline void set_doubleValue__4(double value)
	{
		___doubleValue__4 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke
{
	char* ___key__0;
	int32_t ___valueType__1;
	char* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com
{
	Il2CppChar* ___key__0;
	int32_t ___valueType__1;
	Il2CppChar* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection>
struct Callback_tF9F4D8460A4E004732BB102490FB3CFAF3D31B32  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification>
struct Callback_t60F86BD9657BE364E22054946463272DE745A371  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PartyUpdateNotification>
struct Callback_t413C50F50EB8340B0AB5684D79EA7C09AEFE31BC  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>
struct Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<System.String>
struct Callback_tD043303749DFDABD54DB83282588105CC2ADB18D  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>
struct Callback_t827F915E827EE8044B5F300339FE951E4557B20A  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.AbuseReportRecording>
struct Message_1_t3036127626443BC8FB8B1FA7B2BD7C67E99ACCD6  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	AbuseReportRecording_t7967BBB0AF53223630AF72CAECE7C1B9686FFAB5 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t3036127626443BC8FB8B1FA7B2BD7C67E99ACCD6, ___data_4)); }
	inline AbuseReportRecording_t7967BBB0AF53223630AF72CAECE7C1B9686FFAB5 * get_data_4() const { return ___data_4; }
	inline AbuseReportRecording_t7967BBB0AF53223630AF72CAECE7C1B9686FFAB5 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(AbuseReportRecording_t7967BBB0AF53223630AF72CAECE7C1B9686FFAB5 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.InstalledApplicationList>
struct Message_1_t054CA5EA9EC803CFC64453756E83AE58E6E774D0  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	InstalledApplicationList_t4E55C2518F6CDA2938E9FD3F3F7933C76F785542 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t054CA5EA9EC803CFC64453756E83AE58E6E774D0, ___data_4)); }
	inline InstalledApplicationList_t4E55C2518F6CDA2938E9FD3F3F7933C76F785542 * get_data_4() const { return ___data_4; }
	inline InstalledApplicationList_t4E55C2518F6CDA2938E9FD3F3F7933C76F785542 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(InstalledApplicationList_t4E55C2518F6CDA2938E9FD3F3F7933C76F785542 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.LaunchReportFlowResult>
struct Message_1_t67C82384C80A94F2FF0D3ED56D2C373DF3BB784B  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	LaunchReportFlowResult_tEC944B3B39E377DA305B28D0E6C3A5C34EB44C7A * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t67C82384C80A94F2FF0D3ED56D2C373DF3BB784B, ___data_4)); }
	inline LaunchReportFlowResult_tEC944B3B39E377DA305B28D0E6C3A5C34EB44C7A * get_data_4() const { return ___data_4; }
	inline LaunchReportFlowResult_tEC944B3B39E377DA305B28D0E6C3A5C34EB44C7A ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(LaunchReportFlowResult_tEC944B3B39E377DA305B28D0E6C3A5C34EB44C7A * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.LinkedAccountList>
struct Message_1_tAF5762748052DA1D69915954464AA697D366E264  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	LinkedAccountList_t5F4E3E7E680E21AD2AA00A0DAA35732810323079 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tAF5762748052DA1D69915954464AA697D366E264, ___data_4)); }
	inline LinkedAccountList_t5F4E3E7E680E21AD2AA00A0DAA35732810323079 * get_data_4() const { return ___data_4; }
	inline LinkedAccountList_t5F4E3E7E680E21AD2AA00A0DAA35732810323079 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(LinkedAccountList_t5F4E3E7E680E21AD2AA00A0DAA35732810323079 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingApplicationStatus>
struct Message_1_tB91A0C137737FFA0A17AEB2C49F8862C8A174A97  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	LivestreamingApplicationStatus_t2B83D432A1BB4E9795DBFD0C6FA951F58C7E0753 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tB91A0C137737FFA0A17AEB2C49F8862C8A174A97, ___data_4)); }
	inline LivestreamingApplicationStatus_t2B83D432A1BB4E9795DBFD0C6FA951F58C7E0753 * get_data_4() const { return ___data_4; }
	inline LivestreamingApplicationStatus_t2B83D432A1BB4E9795DBFD0C6FA951F58C7E0753 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(LivestreamingApplicationStatus_t2B83D432A1BB4E9795DBFD0C6FA951F58C7E0753 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingStartResult>
struct Message_1_tA2242171472FC1083FCA5CA6C2308FD13B11A7CE  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	LivestreamingStartResult_tDA4379F243C6C795F5EAEE619FA0FD5C8AF779A7 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tA2242171472FC1083FCA5CA6C2308FD13B11A7CE, ___data_4)); }
	inline LivestreamingStartResult_tDA4379F243C6C795F5EAEE619FA0FD5C8AF779A7 * get_data_4() const { return ___data_4; }
	inline LivestreamingStartResult_tDA4379F243C6C795F5EAEE619FA0FD5C8AF779A7 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(LivestreamingStartResult_tDA4379F243C6C795F5EAEE619FA0FD5C8AF779A7 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingVideoStats>
struct Message_1_tF7B73D128858EC10A38BBD08419F58286D6D0164  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	LivestreamingVideoStats_t3B6872B99F9D9119807A4E1B2841BAE2C95FFCE0 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tF7B73D128858EC10A38BBD08419F58286D6D0164, ___data_4)); }
	inline LivestreamingVideoStats_t3B6872B99F9D9119807A4E1B2841BAE2C95FFCE0 * get_data_4() const { return ___data_4; }
	inline LivestreamingVideoStats_t3B6872B99F9D9119807A4E1B2841BAE2C95FFCE0 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(LivestreamingVideoStats_t3B6872B99F9D9119807A4E1B2841BAE2C95FFCE0 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncConnection>
struct Message_1_t2F2479116D4DE89FE4C54F41765B4AEC552E6B98  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t2F2479116D4DE89FE4C54F41765B4AEC552E6B98, ___data_4)); }
	inline NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324 * get_data_4() const { return ___data_4; }
	inline NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSessionList>
struct Message_1_tE9E60B021382FECDE2431715882C4538F34B884D  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tE9E60B021382FECDE2431715882C4538F34B884D, ___data_4)); }
	inline NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * get_data_4() const { return ___data_4; }
	inline NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSetSessionPropertyResult>
struct Message_1_t7478303AAE5B422455E5DDC351884190AD9B6ADA  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t7478303AAE5B422455E5DDC351884190AD9B6ADA, ___data_4)); }
	inline NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535 * get_data_4() const { return ___data_4; }
	inline NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncVoipAttenuationValueList>
struct Message_1_tEB1E03109B7E41BCA2CEB0B9021B8F5AE6792FB8  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tEB1E03109B7E41BCA2CEB0B9021B8F5AE6792FB8, ___data_4)); }
	inline NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF * get_data_4() const { return ___data_4; }
	inline NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<System.Object>
struct Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	RuntimeObject * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C, ___data_4)); }
	inline RuntimeObject * get_data_4() const { return ___data_4; }
	inline RuntimeObject ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(RuntimeObject * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.Party>
struct Message_1_t7EB985FD819510FC274E14DFCD22B9F4122A88B1  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t7EB985FD819510FC274E14DFCD22B9F4122A88B1, ___data_4)); }
	inline Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB * get_data_4() const { return ___data_4; }
	inline Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.PartyID>
struct Message_1_t5156A4F20567AC4811A8D80AFDA014C933E0C331  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t5156A4F20567AC4811A8D80AFDA014C933E0C331, ___data_4)); }
	inline PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59 * get_data_4() const { return ___data_4; }
	inline PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>
struct Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977, ___data_4)); }
	inline PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * get_data_4() const { return ___data_4; }
	inline PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>
struct Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279, ___data_4)); }
	inline Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * get_data_4() const { return ___data_4; }
	inline Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>
struct Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C, ___data_4)); }
	inline PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * get_data_4() const { return ___data_4; }
	inline PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.RejoinDialogResult>
struct Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72, ___data_4)); }
	inline RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * get_data_4() const { return ___data_4; }
	inline RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList>
struct Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9, ___data_4)); }
	inline SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * get_data_4() const { return ___data_4; }
	inline SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.SendInvitesResult>
struct Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254, ___data_4)); }
	inline SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * get_data_4() const { return ___data_4; }
	inline SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.ShareMediaResult>
struct Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932, ___data_4)); }
	inline ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * get_data_4() const { return ___data_4; }
	inline ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<System.String>
struct Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	String_t* ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84, ___data_4)); }
	inline String_t* get_data_4() const { return ___data_4; }
	inline String_t** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(String_t* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>
struct Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862, ___data_4)); }
	inline SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * get_data_4() const { return ___data_4; }
	inline SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.User>
struct Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5, ___data_4)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_data_4() const { return ___data_4; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserCapabilityList>
struct Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF, ___data_4)); }
	inline UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * get_data_4() const { return ___data_4; }
	inline UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6, ___data_4)); }
	inline UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * get_data_4() const { return ___data_4; }
	inline UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>
struct Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348, ___data_4)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_data_4() const { return ___data_4; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>
struct Message_1_t67E02792C2EB5CD9C1551009035703615D890699  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t67E02792C2EB5CD9C1551009035703615D890699, ___data_4)); }
	inline UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * get_data_4() const { return ___data_4; }
	inline UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserReportID>
struct Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF, ___data_4)); }
	inline UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * get_data_4() const { return ___data_4; }
	inline UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
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


// Oculus.Platform.PlatformSettings
struct PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Oculus.Platform.PlatformSettings::ovrAppID
	String_t* ___ovrAppID_4;
	// System.String Oculus.Platform.PlatformSettings::ovrMobileAppID
	String_t* ___ovrMobileAppID_5;
	// System.Boolean Oculus.Platform.PlatformSettings::ovrUseStandalonePlatform
	bool ___ovrUseStandalonePlatform_6;

public:
	inline static int32_t get_offset_of_ovrAppID_4() { return static_cast<int32_t>(offsetof(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB, ___ovrAppID_4)); }
	inline String_t* get_ovrAppID_4() const { return ___ovrAppID_4; }
	inline String_t** get_address_of_ovrAppID_4() { return &___ovrAppID_4; }
	inline void set_ovrAppID_4(String_t* value)
	{
		___ovrAppID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ovrAppID_4), (void*)value);
	}

	inline static int32_t get_offset_of_ovrMobileAppID_5() { return static_cast<int32_t>(offsetof(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB, ___ovrMobileAppID_5)); }
	inline String_t* get_ovrMobileAppID_5() const { return ___ovrMobileAppID_5; }
	inline String_t** get_address_of_ovrMobileAppID_5() { return &___ovrMobileAppID_5; }
	inline void set_ovrMobileAppID_5(String_t* value)
	{
		___ovrMobileAppID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ovrMobileAppID_5), (void*)value);
	}

	inline static int32_t get_offset_of_ovrUseStandalonePlatform_6() { return static_cast<int32_t>(offsetof(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB, ___ovrUseStandalonePlatform_6)); }
	inline bool get_ovrUseStandalonePlatform_6() const { return ___ovrUseStandalonePlatform_6; }
	inline bool* get_address_of_ovrUseStandalonePlatform_6() { return &___ovrUseStandalonePlatform_6; }
	inline void set_ovrUseStandalonePlatform_6(bool value)
	{
		___ovrUseStandalonePlatform_6 = value;
	}
};


// Oculus.Platform.CAPI/FilterCallback
struct FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Oculus.Platform.MessageWithAbuseReportRecording
struct MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393  : public Message_1_t3036127626443BC8FB8B1FA7B2BD7C67E99ACCD6
{
public:

public:
};


// Oculus.Platform.MessageWithInstalledApplicationList
struct MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4  : public Message_1_t054CA5EA9EC803CFC64453756E83AE58E6E774D0
{
public:

public:
};


// Oculus.Platform.MessageWithLaunchReportFlowResult
struct MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2  : public Message_1_t67C82384C80A94F2FF0D3ED56D2C373DF3BB784B
{
public:

public:
};


// Oculus.Platform.MessageWithLinkedAccountList
struct MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E  : public Message_1_tAF5762748052DA1D69915954464AA697D366E264
{
public:

public:
};


// Oculus.Platform.MessageWithLivestreamingApplicationStatus
struct MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197  : public Message_1_tB91A0C137737FFA0A17AEB2C49F8862C8A174A97
{
public:

public:
};


// Oculus.Platform.MessageWithLivestreamingStartResult
struct MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13  : public Message_1_tA2242171472FC1083FCA5CA6C2308FD13B11A7CE
{
public:

public:
};


// Oculus.Platform.MessageWithLivestreamingVideoStats
struct MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03  : public Message_1_tF7B73D128858EC10A38BBD08419F58286D6D0164
{
public:

public:
};


// Oculus.Platform.MessageWithNetSyncConnection
struct MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF  : public Message_1_t2F2479116D4DE89FE4C54F41765B4AEC552E6B98
{
public:

public:
};


// Oculus.Platform.MessageWithNetSyncSessionList
struct MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A  : public Message_1_tE9E60B021382FECDE2431715882C4538F34B884D
{
public:

public:
};


// Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult
struct MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA  : public Message_1_t7478303AAE5B422455E5DDC351884190AD9B6ADA
{
public:

public:
};


// Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList
struct MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5  : public Message_1_tEB1E03109B7E41BCA2CEB0B9021B8F5AE6792FB8
{
public:

public:
};


// Oculus.Platform.MessageWithParty
struct MessageWithParty_t47591733C170E4A940E558968881918663246F23  : public Message_1_t7EB985FD819510FC274E14DFCD22B9F4122A88B1
{
public:

public:
};


// Oculus.Platform.MessageWithPartyID
struct MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751  : public Message_1_t5156A4F20567AC4811A8D80AFDA014C933E0C331
{
public:

public:
};


// Oculus.Platform.MessageWithPartyUnderCurrentParty
struct MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2  : public Message_1_t7EB985FD819510FC274E14DFCD22B9F4122A88B1
{
public:

public:
};


// Oculus.Platform.MessageWithPurchase
struct MessageWithPurchase_tE30F406DC8C504934089A1EA7A45DECD96B52047  : public Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279
{
public:

public:
};


// Oculus.Platform.MessageWithPurchaseList
struct MessageWithPurchaseList_t8F80222245785E022F80CDD10120A8CBDDF65B0F  : public Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C
{
public:

public:
};


// Oculus.Platform.MessageWithRejoinDialogResult
struct MessageWithRejoinDialogResult_tC73257DF5EC93BF84847377C306402A728170569  : public Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72
{
public:

public:
};


// Oculus.Platform.MessageWithSdkAccountList
struct MessageWithSdkAccountList_tEDD9039DCFD8440604B127F54088D9F9FE64D112  : public Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9
{
public:

public:
};


// Oculus.Platform.MessageWithSendInvitesResult
struct MessageWithSendInvitesResult_t10849A0325BC8A7586D1075C121CC365317B136D  : public Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254
{
public:

public:
};


// Oculus.Platform.MessageWithShareMediaResult
struct MessageWithShareMediaResult_t5E0E9076577438BD1D2B152AAA28B14294BDA0FE  : public Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932
{
public:

public:
};


// Oculus.Platform.MessageWithString
struct MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416  : public Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84
{
public:

public:
};


// Oculus.Platform.MessageWithSystemVoipState
struct MessageWithSystemVoipState_t5B41C6A9BDB38F24CD305CDC0EDC0117A83EAAC3  : public Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862
{
public:

public:
};


// Oculus.Platform.MessageWithUser
struct MessageWithUser_tB1AA6D637359AC8DD3962CC88C54C2194CD02814  : public Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5
{
public:

public:
};


// Oculus.Platform.MessageWithUserCapabilityList
struct MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038  : public Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF
{
public:

public:
};


// Oculus.Platform.MessageWithUserDataStoreUpdateResponse
struct MessageWithUserDataStoreUpdateResponse_t8433BBA9C50E0088378CB9E969DD6AE0768C087F  : public Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6
{
public:

public:
};


// Oculus.Platform.MessageWithUserList
struct MessageWithUserList_t91526C487ECE33434977D1616F861F07043B84A7  : public Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348
{
public:

public:
};


// Oculus.Platform.MessageWithUserProof
struct MessageWithUserProof_t503174B6378B6608C060882ACFE51784BBBE5C0A  : public Message_1_t67E02792C2EB5CD9C1551009035703615D890699
{
public:

public:
};


// Oculus.Platform.MessageWithUserReportID
struct MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5  : public Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF
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


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Oculus.Platform.CallbackRunner
struct CallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Oculus.Platform.CallbackRunner::IsPersistantBetweenSceneLoads
	bool ___IsPersistantBetweenSceneLoads_4;

public:
	inline static int32_t get_offset_of_IsPersistantBetweenSceneLoads_4() { return static_cast<int32_t>(offsetof(CallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956, ___IsPersistantBetweenSceneLoads_4)); }
	inline bool get_IsPersistantBetweenSceneLoads_4() const { return ___IsPersistantBetweenSceneLoads_4; }
	inline bool* get_address_of_IsPersistantBetweenSceneLoads_4() { return &___IsPersistantBetweenSceneLoads_4; }
	inline void set_IsPersistantBetweenSceneLoads_4(bool value)
	{
		___IsPersistantBetweenSceneLoads_4 = value;
	}
};


// ReportingCallbackSample
struct ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ReportingCallbackSample::InVRConsole
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___InVRConsole_4;
	// UnityEngine.UI.Text ReportingCallbackSample::DestinationsConsole
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DestinationsConsole_5;

public:
	inline static int32_t get_offset_of_InVRConsole_4() { return static_cast<int32_t>(offsetof(ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC, ___InVRConsole_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_InVRConsole_4() const { return ___InVRConsole_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_InVRConsole_4() { return &___InVRConsole_4; }
	inline void set_InVRConsole_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___InVRConsole_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InVRConsole_4), (void*)value);
	}

	inline static int32_t get_offset_of_DestinationsConsole_5() { return static_cast<int32_t>(offsetof(ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC, ___DestinationsConsole_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DestinationsConsole_5() const { return ___DestinationsConsole_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DestinationsConsole_5() { return &___DestinationsConsole_5; }
	inline void set_DestinationsConsole_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DestinationsConsole_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestinationsConsole_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::initialPlaybackDelayMS
	int32_t ___initialPlaybackDelayMS_4;
	// UnityEngine.AudioSource Oculus.Platform.VoipAudioSourceHiLevel::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// System.Single Oculus.Platform.VoipAudioSourceHiLevel::peakAmplitude
	float ___peakAmplitude_6;
	// Oculus.Platform.IVoipPCMSource Oculus.Platform.VoipAudioSourceHiLevel::pcmSource
	RuntimeObject* ___pcmSource_7;

public:
	inline static int32_t get_offset_of_initialPlaybackDelayMS_4() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___initialPlaybackDelayMS_4)); }
	inline int32_t get_initialPlaybackDelayMS_4() const { return ___initialPlaybackDelayMS_4; }
	inline int32_t* get_address_of_initialPlaybackDelayMS_4() { return &___initialPlaybackDelayMS_4; }
	inline void set_initialPlaybackDelayMS_4(int32_t value)
	{
		___initialPlaybackDelayMS_4 = value;
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_peakAmplitude_6() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___peakAmplitude_6)); }
	inline float get_peakAmplitude_6() const { return ___peakAmplitude_6; }
	inline float* get_address_of_peakAmplitude_6() { return &___peakAmplitude_6; }
	inline void set_peakAmplitude_6(float value)
	{
		___peakAmplitude_6 = value;
	}

	inline static int32_t get_offset_of_pcmSource_7() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___pcmSource_7)); }
	inline RuntimeObject* get_pcmSource_7() const { return ___pcmSource_7; }
	inline RuntimeObject** get_address_of_pcmSource_7() { return &___pcmSource_7; }
	inline void set_pcmSource_7(RuntimeObject* value)
	{
		___pcmSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcmSource_7), (void*)value);
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Platform.VoipAudioSourceHiLevel Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::parent
	VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * ___parent_4;
	// System.Single[] Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::scratchBuffer
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___scratchBuffer_5;

public:
	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___parent_4)); }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * get_parent_4() const { return ___parent_4; }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_scratchBuffer_5() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___scratchBuffer_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_scratchBuffer_5() const { return ___scratchBuffer_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_scratchBuffer_5() { return &___scratchBuffer_5; }
	inline void set_scratchBuffer_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___scratchBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scratchBuffer_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// System.Object


// System.Object


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.ApplicationInvite>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.ApplicationInvite>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncSession>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncSession>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>


// Oculus.Platform.Models.DeserializableList`1<System.Object>


// Oculus.Platform.Models.DeserializableList`1<System.Object>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Pid>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Pid>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>


// System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>


// System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>


// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncSession>

struct List_1_t814689C58494A7CC08836709C95562576D4A3FD1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t814689C58494A7CC08836709C95562576D4A3FD1_StaticFields, ____emptyArray_5)); }
	inline NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NetSyncSessionU5BU5D_t2239DBB4E0A6748827E2D47FE1DB7EB8BE738BFE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncSession>


// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>

struct List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE_StaticFields, ____emptyArray_5)); }
	inline NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NetSyncVoipAttenuationValueU5BU5D_t3139ED4B2A1059CCAAD0D309E418E76BDF5A983E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>


// System.Collections.Generic.List`1<Oculus.Platform.Models.Pid>

struct List_1_t76614734F621AFD54E4A1505402DFEE94376947F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t76614734F621AFD54E4A1505402DFEE94376947F_StaticFields, ____emptyArray_5)); }
	inline PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PidU5BU5D_tCE83DC34A47A6A62CDE2B65581D634DDDF643C17* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Pid>


// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>

struct List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_StaticFields, ____emptyArray_5)); }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>


// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>

struct List_1_tEF576F33659755044A466574FB2C3AE99B17F353_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353_StaticFields, ____emptyArray_5)); }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>


// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>

struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_StaticFields, ____emptyArray_5)); }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>


// System.Collections.Generic.List`1<Oculus.Platform.Models.User>

struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_StaticFields, ____emptyArray_5)); }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.User>


// System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>

struct List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_StaticFields, ____emptyArray_5)); }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Oculus.Platform.Core

struct Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields
{
public:
	// System.Boolean Oculus.Platform.Core::IsPlatformInitialized
	bool ___IsPlatformInitialized_0;
	// System.Boolean Oculus.Platform.Core::LogMessages
	bool ___LogMessages_1;
	// System.String Oculus.Platform.Core::PlatformUninitializedError
	String_t* ___PlatformUninitializedError_2;

public:
	inline static int32_t get_offset_of_IsPlatformInitialized_0() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___IsPlatformInitialized_0)); }
	inline bool get_IsPlatformInitialized_0() const { return ___IsPlatformInitialized_0; }
	inline bool* get_address_of_IsPlatformInitialized_0() { return &___IsPlatformInitialized_0; }
	inline void set_IsPlatformInitialized_0(bool value)
	{
		___IsPlatformInitialized_0 = value;
	}

	inline static int32_t get_offset_of_LogMessages_1() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___LogMessages_1)); }
	inline bool get_LogMessages_1() const { return ___LogMessages_1; }
	inline bool* get_address_of_LogMessages_1() { return &___LogMessages_1; }
	inline void set_LogMessages_1(bool value)
	{
		___LogMessages_1 = value;
	}

	inline static int32_t get_offset_of_PlatformUninitializedError_2() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___PlatformUninitializedError_2)); }
	inline String_t* get_PlatformUninitializedError_2() const { return ___PlatformUninitializedError_2; }
	inline String_t** get_address_of_PlatformUninitializedError_2() { return &___PlatformUninitializedError_2; }
	inline void set_PlatformUninitializedError_2(String_t* value)
	{
		___PlatformUninitializedError_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformUninitializedError_2), (void*)value);
	}
};


// Oculus.Platform.Core


// Oculus.Platform.Models.Error


// Oculus.Platform.Models.Error


// Oculus.Platform.Models.MicrophoneAvailabilityState


// Oculus.Platform.Models.MicrophoneAvailabilityState


// Oculus.Platform.NetSync


// Oculus.Platform.NetSync


// Oculus.Platform.Models.NetSyncSession


// Oculus.Platform.Models.NetSyncSession


// Oculus.Platform.Models.NetSyncSessionsChangedNotification


// Oculus.Platform.Models.NetSyncSessionsChangedNotification


// Oculus.Platform.Models.NetSyncSetSessionPropertyResult


// Oculus.Platform.Models.NetSyncSetSessionPropertyResult


// Oculus.Platform.Models.NetSyncVoipAttenuationValue


// Oculus.Platform.Models.NetSyncVoipAttenuationValue


// Oculus.Platform.Notifications


// Oculus.Platform.Notifications


// Oculus.Platform.Models.OrgScopedID


// Oculus.Platform.Models.OrgScopedID


// Oculus.Platform.Parties


// Oculus.Platform.Parties


// Oculus.Platform.Models.Party


// Oculus.Platform.Models.Party


// Oculus.Platform.Models.PartyID


// Oculus.Platform.Models.PartyID


// Oculus.Platform.Models.Pid


// Oculus.Platform.Models.Pid


// Oculus.Platform.PlatformInternal


// Oculus.Platform.PlatformInternal


// Oculus.Platform.Models.Product


// Oculus.Platform.Models.Product


// Oculus.Platform.Models.RejoinDialogResult


// Oculus.Platform.Models.RejoinDialogResult


// Oculus.Platform.Request


// Oculus.Platform.Request


// Oculus.Platform.RichPresence


// Oculus.Platform.RichPresence


// Oculus.Platform.Models.SendInvitesResult


// Oculus.Platform.Models.SendInvitesResult


// Oculus.Platform.StandalonePlatform


// Oculus.Platform.StandalonePlatform


// Oculus.Platform.StandalonePlatformSettings


// Oculus.Platform.StandalonePlatformSettings


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


// Oculus.Platform.Models.SupplementaryMetric


// Oculus.Platform.Models.SupplementaryMetric


// Oculus.Platform.Models.UserCapability


// Oculus.Platform.Models.UserCapability


// Oculus.Platform.UserDataStore


// Oculus.Platform.UserDataStore


// Oculus.Platform.Models.UserDataStoreUpdateResponse


// Oculus.Platform.Models.UserDataStoreUpdateResponse


// Oculus.Platform.Models.UserProof


// Oculus.Platform.Models.UserProof


// Oculus.Platform.Models.UserReportID


// Oculus.Platform.Models.UserReportID


// Oculus.Platform.Users


// Oculus.Platform.Users


// System.ValueType


// System.ValueType


// Oculus.Platform.Voip


// Oculus.Platform.Voip


// Oculus.Platform.VoipPCMSourceNative


// Oculus.Platform.VoipPCMSourceNative


// Oculus.Platform.Vrcamera


// Oculus.Platform.Vrcamera


// Oculus.Platform.WindowsPlatform


// Oculus.Platform.WindowsPlatform


// Oculus.Platform.Callback/RequestCallback


// Oculus.Platform.Callback/RequestCallback


// Oculus.Platform.PlatformInternal/HTTP


// Oculus.Platform.PlatformInternal/HTTP


// Oculus.Platform.PlatformInternal/Users


// Oculus.Platform.PlatformInternal/Users


// System.Nullable`1<System.UInt64>


// System.Nullable`1<System.UInt64>


// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>


// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>


// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>


// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>


// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>


// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>


// Oculus.Platform.Request`1<Oculus.Platform.Models.Party>


// Oculus.Platform.Request`1<Oculus.Platform.Models.Party>


// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>


// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>


// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>


// Oculus.Platform.Request`1<System.String>


// Oculus.Platform.Request`1<System.String>


// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>


// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>


// Oculus.Platform.Request`1<Oculus.Platform.Models.User>


// Oculus.Platform.Request`1<Oculus.Platform.Models.User>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>


// Oculus.Platform.Models.ApplicationInviteList


// Oculus.Platform.Models.ApplicationInviteList


// Oculus.Platform.Models.BlockedUserList


// Oculus.Platform.Models.BlockedUserList


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


// UnityEngine.Color


// UnityEngine.Color


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


// Oculus.Platform.Models.DestinationList


// Oculus.Platform.Models.DestinationList


// System.Double

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


// System.Double


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


// System.Int16


// System.Int16


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


// Oculus.Platform.Models.NetSyncSessionList


// Oculus.Platform.Models.NetSyncSessionList


// Oculus.Platform.Models.NetSyncVoipAttenuationValueList


// Oculus.Platform.Models.NetSyncVoipAttenuationValueList


// Oculus.Platform.Models.PidList


// Oculus.Platform.Models.PidList


// Oculus.Platform.Models.ProductList


// Oculus.Platform.Models.ProductList


// Oculus.Platform.Models.PurchaseList


// Oculus.Platform.Models.PurchaseList


// Oculus.Platform.Models.SdkAccountList


// Oculus.Platform.Models.SdkAccountList


// System.Single


// System.Single


// System.UInt32


// System.UInt32


// System.UInt64


// System.UInt64


// System.UIntPtr

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.UIntPtr


// Oculus.Platform.Models.UserCapabilityList


// Oculus.Platform.Models.UserCapabilityList


// Oculus.Platform.Models.UserList


// Oculus.Platform.Models.UserList


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// Oculus.Platform.CAPI/OculusInitParams


// Oculus.Platform.CAPI/OculusInitParams


// Oculus.Platform.CAPI/ovrNetSyncVec3


// Oculus.Platform.CAPI/ovrNetSyncVec3


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


// Oculus.Platform.KeyValuePairType


// Oculus.Platform.KeyValuePairType


// Oculus.Platform.MultiplayerErrorErrorKey


// Oculus.Platform.MultiplayerErrorErrorKey


// Oculus.Platform.MultiplayerErrorOptions


// Oculus.Platform.MultiplayerErrorOptions


// Oculus.Platform.NetSyncConnectionStatus


// Oculus.Platform.NetSyncConnectionStatus


// Oculus.Platform.NetSyncDisconnectReason


// Oculus.Platform.NetSyncDisconnectReason


// Oculus.Platform.NetSyncOptions


// Oculus.Platform.NetSyncOptions


// Oculus.Platform.NetSyncVoipMicSource


// Oculus.Platform.NetSyncVoipMicSource


// Oculus.Platform.NetSyncVoipStreamMode


// Oculus.Platform.NetSyncVoipStreamMode


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


// Oculus.Platform.Packet


// Oculus.Platform.Packet


// Oculus.Platform.PartyMicState


// Oculus.Platform.PartyMicState


// Oculus.Platform.PartyUpdateAction


// Oculus.Platform.PartyUpdateAction


// Oculus.Platform.PermissionGrantStatus


// Oculus.Platform.PermissionGrantStatus


// Oculus.Platform.PermissionType


// Oculus.Platform.PermissionType


// Oculus.Platform.Models.PingResult


// Oculus.Platform.Models.PingResult


// Oculus.Platform.PlatformInitializeResult


// Oculus.Platform.PlatformInitializeResult


// Oculus.Platform.Models.Purchase


// Oculus.Platform.Models.Purchase


// Oculus.Platform.ReportRequestResponse


// Oculus.Platform.ReportRequestResponse


// Oculus.Platform.RichPresenceExtraContext


// Oculus.Platform.RichPresenceExtraContext


// Oculus.Platform.RichPresenceOptions


// Oculus.Platform.RichPresenceOptions


// Oculus.Platform.RosterOptions


// Oculus.Platform.RosterOptions


// Oculus.Platform.SdkAccountType


// Oculus.Platform.SdkAccountType


// Oculus.Platform.ServiceProvider


// Oculus.Platform.ServiceProvider


// Oculus.Platform.ShareMediaStatus


// Oculus.Platform.ShareMediaStatus


// Oculus.Platform.SystemVoipStatus


// Oculus.Platform.SystemVoipStatus


// Oculus.Platform.TimeWindow


// Oculus.Platform.TimeWindow


// Oculus.Platform.UserOptions


// Oculus.Platform.UserOptions


// Oculus.Platform.UserOrdering


// Oculus.Platform.UserOrdering


// Oculus.Platform.UserPresenceStatus


// Oculus.Platform.UserPresenceStatus


// Oculus.Platform.VoipBitrate


// Oculus.Platform.VoipBitrate


// Oculus.Platform.VoipDtxState


// Oculus.Platform.VoipDtxState


// Oculus.Platform.VoipMuteState


// Oculus.Platform.VoipMuteState


// Oculus.Platform.VoipOptions


// Oculus.Platform.VoipOptions


// Oculus.Platform.VoipSampleRate


// Oculus.Platform.VoipSampleRate


// Oculus.Platform.Message/MessageType


// Oculus.Platform.Message/MessageType


// Oculus.Platform.PlatformInternal/MessageTypeInternal


// Oculus.Platform.PlatformInternal/MessageTypeInternal


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// Oculus.Platform.Message

struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields
{
public:
	// Oculus.Platform.Message/ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields, ___U3CHandleExtraMessageTypesU3Ek__BackingField_3)); }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * get_U3CHandleExtraMessageTypesU3Ek__BackingField_3() const { return ___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF ** get_address_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return &___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline void set_U3CHandleExtraMessageTypesU3Ek__BackingField_3(ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * value)
	{
		___U3CHandleExtraMessageTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandleExtraMessageTypesU3Ek__BackingField_3), (void*)value);
	}
};


// Oculus.Platform.Message


// System.MulticastDelegate


// System.MulticastDelegate


// Oculus.Platform.Models.NetSyncConnection


// Oculus.Platform.Models.NetSyncConnection


// Oculus.Platform.Models.PartyUpdateNotification


// Oculus.Platform.Models.PartyUpdateNotification


// Oculus.Platform.Models.PlatformInitialize


// Oculus.Platform.Models.PlatformInitialize


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// Oculus.Platform.Models.SdkAccount


// Oculus.Platform.Models.SdkAccount


// Oculus.Platform.Models.ShareMediaResult


// Oculus.Platform.Models.ShareMediaResult


// System.SystemException


// System.SystemException


// Oculus.Platform.Models.SystemVoipState


// Oculus.Platform.Models.SystemVoipState


// UnityEngine.UnityException


// UnityEngine.UnityException


// Oculus.Platform.Models.User


// Oculus.Platform.Models.User


// Oculus.Platform.CAPI/ovrKeyValuePair


// Oculus.Platform.CAPI/ovrKeyValuePair


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PartyUpdateNotification>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PartyUpdateNotification>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>


// Oculus.Platform.Message`1/Callback<System.String>


// Oculus.Platform.Message`1/Callback<System.String>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>


// Oculus.Platform.Message`1<Oculus.Platform.Models.AbuseReportRecording>


// Oculus.Platform.Message`1<Oculus.Platform.Models.AbuseReportRecording>


// Oculus.Platform.Message`1<Oculus.Platform.Models.InstalledApplicationList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.InstalledApplicationList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LaunchReportFlowResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LaunchReportFlowResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LinkedAccountList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LinkedAccountList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingApplicationStatus>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingApplicationStatus>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingStartResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingStartResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingVideoStats>


// Oculus.Platform.Message`1<Oculus.Platform.Models.LivestreamingVideoStats>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncConnection>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncConnection>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSessionList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSessionList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSetSessionPropertyResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncSetSessionPropertyResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncVoipAttenuationValueList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetSyncVoipAttenuationValueList>


// Oculus.Platform.Message`1<System.Object>


// Oculus.Platform.Message`1<System.Object>


// Oculus.Platform.Message`1<Oculus.Platform.Models.Party>


// Oculus.Platform.Message`1<Oculus.Platform.Models.Party>


// Oculus.Platform.Message`1<Oculus.Platform.Models.PartyID>


// Oculus.Platform.Message`1<Oculus.Platform.Models.PartyID>


// Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>


// Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>


// Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>


// Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>


// Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.RejoinDialogResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.RejoinDialogResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.SendInvitesResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.SendInvitesResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.ShareMediaResult>


// Oculus.Platform.Message`1<Oculus.Platform.Models.ShareMediaResult>


// Oculus.Platform.Message`1<System.String>


// Oculus.Platform.Message`1<System.String>


// Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>


// Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>


// Oculus.Platform.Message`1<Oculus.Platform.Models.User>


// Oculus.Platform.Message`1<Oculus.Platform.Models.User>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserCapabilityList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserCapabilityList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserReportID>


// Oculus.Platform.Message`1<Oculus.Platform.Models.UserReportID>


// System.ArgumentException


// System.ArgumentException


// System.AsyncCallback


// System.AsyncCallback


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// Oculus.Platform.PlatformSettings

struct PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields
{
public:
	// Oculus.Platform.PlatformSettings Oculus.Platform.PlatformSettings::instance
	PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields, ___instance_7)); }
	inline PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * get_instance_7() const { return ___instance_7; }
	inline PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// Oculus.Platform.PlatformSettings


// Oculus.Platform.CAPI/FilterCallback


// Oculus.Platform.CAPI/FilterCallback


// Oculus.Platform.Message/Callback


// Oculus.Platform.Message/Callback


// Oculus.Platform.Message/ExtraMessageTypesHandler


// Oculus.Platform.Message/ExtraMessageTypesHandler


// Oculus.Platform.StandalonePlatform/UnityLogDelegate


// Oculus.Platform.StandalonePlatform/UnityLogDelegate


// Oculus.Platform.WindowsPlatform/UnityLogDelegate


// Oculus.Platform.WindowsPlatform/UnityLogDelegate


// UnityEngine.AudioBehaviour


// UnityEngine.AudioBehaviour


// Oculus.Platform.MessageWithAbuseReportRecording


// Oculus.Platform.MessageWithAbuseReportRecording


// Oculus.Platform.MessageWithInstalledApplicationList


// Oculus.Platform.MessageWithInstalledApplicationList


// Oculus.Platform.MessageWithLaunchReportFlowResult


// Oculus.Platform.MessageWithLaunchReportFlowResult


// Oculus.Platform.MessageWithLinkedAccountList


// Oculus.Platform.MessageWithLinkedAccountList


// Oculus.Platform.MessageWithLivestreamingApplicationStatus


// Oculus.Platform.MessageWithLivestreamingApplicationStatus


// Oculus.Platform.MessageWithLivestreamingStartResult


// Oculus.Platform.MessageWithLivestreamingStartResult


// Oculus.Platform.MessageWithLivestreamingVideoStats


// Oculus.Platform.MessageWithLivestreamingVideoStats


// Oculus.Platform.MessageWithNetSyncConnection


// Oculus.Platform.MessageWithNetSyncConnection


// Oculus.Platform.MessageWithNetSyncSessionList


// Oculus.Platform.MessageWithNetSyncSessionList


// Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult


// Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult


// Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList


// Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList


// Oculus.Platform.MessageWithParty


// Oculus.Platform.MessageWithParty


// Oculus.Platform.MessageWithPartyID


// Oculus.Platform.MessageWithPartyID


// Oculus.Platform.MessageWithPartyUnderCurrentParty


// Oculus.Platform.MessageWithPartyUnderCurrentParty


// Oculus.Platform.MessageWithPurchase


// Oculus.Platform.MessageWithPurchase


// Oculus.Platform.MessageWithPurchaseList


// Oculus.Platform.MessageWithPurchaseList


// Oculus.Platform.MessageWithRejoinDialogResult


// Oculus.Platform.MessageWithRejoinDialogResult


// Oculus.Platform.MessageWithSdkAccountList


// Oculus.Platform.MessageWithSdkAccountList


// Oculus.Platform.MessageWithSendInvitesResult


// Oculus.Platform.MessageWithSendInvitesResult


// Oculus.Platform.MessageWithShareMediaResult


// Oculus.Platform.MessageWithShareMediaResult


// Oculus.Platform.MessageWithString


// Oculus.Platform.MessageWithString


// Oculus.Platform.MessageWithSystemVoipState


// Oculus.Platform.MessageWithSystemVoipState


// Oculus.Platform.MessageWithUser


// Oculus.Platform.MessageWithUser


// Oculus.Platform.MessageWithUserCapabilityList


// Oculus.Platform.MessageWithUserCapabilityList


// Oculus.Platform.MessageWithUserDataStoreUpdateResponse


// Oculus.Platform.MessageWithUserDataStoreUpdateResponse


// Oculus.Platform.MessageWithUserList


// Oculus.Platform.MessageWithUserList


// Oculus.Platform.MessageWithUserProof


// Oculus.Platform.MessageWithUserProof


// Oculus.Platform.MessageWithUserReportID


// Oculus.Platform.MessageWithUserReportID


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.AudioSource


// UnityEngine.AudioSource


// Oculus.Platform.CallbackRunner


// Oculus.Platform.CallbackRunner


// ReportingCallbackSample


// ReportingCallbackSample


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// Oculus.Platform.VoipAudioSourceHiLevel

struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::audioSystemPlaybackFrequency
	int32_t ___audioSystemPlaybackFrequency_8;
	// System.Boolean Oculus.Platform.VoipAudioSourceHiLevel::verboseLogging
	bool ___verboseLogging_9;

public:
	inline static int32_t get_offset_of_audioSystemPlaybackFrequency_8() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___audioSystemPlaybackFrequency_8)); }
	inline int32_t get_audioSystemPlaybackFrequency_8() const { return ___audioSystemPlaybackFrequency_8; }
	inline int32_t* get_address_of_audioSystemPlaybackFrequency_8() { return &___audioSystemPlaybackFrequency_8; }
	inline void set_audioSystemPlaybackFrequency_8(int32_t value)
	{
		___audioSystemPlaybackFrequency_8 = value;
	}

	inline static int32_t get_offset_of_verboseLogging_9() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___verboseLogging_9)); }
	inline bool get_verboseLogging_9() const { return ___verboseLogging_9; }
	inline bool* get_address_of_verboseLogging_9() { return &___verboseLogging_9; }
	inline void set_verboseLogging_9(bool value)
	{
		___verboseLogging_9 = value;
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel


// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate


// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

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
// Oculus.Platform.CAPI/ovrKeyValuePair[]
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  m_Items[1];

public:
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___stringValue__2), (void*)NULL);
		#endif
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___stringValue__2), (void*)NULL);
		#endif
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Oculus.Platform.Message`1<System.Object>::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared (Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// T Oculus.Platform.Message`1<System.Object>::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline (Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.Object>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared (uint32_t ___type0, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Object>::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, uint64_t ___requestID0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.UInt64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_gshared_inline (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.UInt64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_gshared (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m82DC05B18FA4AE838A81789EED8A7A5832CCAC4A_gshared (const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared (Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Object>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * Request_1_OnComplete_m2ACE384D6DB84724178C79998F8BFC39C6B31818_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Models.DeserializableList`1<System.Object>::get_HasNextPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.String Oculus.Platform.Models.DeserializableList`1<System.Object>::get_NextUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0A1AC6616615D761104DE54318C385DA8168C3EA_gshared (Dictionary_2_tA83C5B43B5F4A13A6B2E489398D98C8BFE81B0B2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>::.ctor(System.IntPtr)
inline void Message_1__ctor_m6A5A70F1D07191554B3B90ACEA376E3808A5CBDC (Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>::get_Data()
inline Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * Message_1_get_Data_m86378EE0F124498A16BBE983E63118F62D925CBC_inline (Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279 * __this, const RuntimeMethod* method)
{
	return ((  Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * (*) (Message_1_t6DCE1FCBBCA5CB7B9E362CA114022BA6DCB97279 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetPurchase(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetPurchase_m54926CE98B1EB5799409A0B110E94A8A1DD5F61F (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Purchase::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>::.ctor(System.IntPtr)
inline void Message_1__ctor_m6B69FEEBB6BA1BAC2E2042126DE321550F881B9E (Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList>::get_Data()
inline PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * Message_1_get_Data_mFB18B16AC8B27F553306D41239F3BE8512F216B0_inline (Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C * __this, const RuntimeMethod* method)
{
	return ((  PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * (*) (Message_1_t4C628E5BB49C7770808CD31D7F6783D1D03A4F5C *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetPurchaseArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetPurchaseArray_mE812241B5443800081365A92C24F681292DB00BB (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.PurchaseList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseList__ctor_m9F6F5731BB0F2BE4D2592D58F800695E5EF6C9E8 (PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * __this, intptr_t ___a0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.RejoinDialogResult>::.ctor(System.IntPtr)
inline void Message_1__ctor_mCFF439D31A61C74E6F9FEE63603FFCF716FB6BB9 (Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.RejoinDialogResult>::get_Data()
inline RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * Message_1_get_Data_m6D8D4D99303FDC68FA1342E818BCE31E44A60C80_inline (Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72 * __this, const RuntimeMethod* method)
{
	return ((  RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * (*) (Message_1_t8E4C1BC6C25EE6C61464781BF5A5BEA945C37E72 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetRejoinDialogResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetRejoinDialogResult_m922168D0311A9E5261C2362F8FB1A203A87AFB8F (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.RejoinDialogResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RejoinDialogResult__ctor_m5C70362A2AC08F13639253A097FC718D5722F468 (RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList>::.ctor(System.IntPtr)
inline void Message_1__ctor_mD8524ADDCA39B06E2F16CC2C7B1425107FF8FFAA (Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.SdkAccountList>::get_Data()
inline SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * Message_1_get_Data_mBC32A7D51676A20F436A48462D9190C37595CAB3_inline (Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9 * __this, const RuntimeMethod* method)
{
	return ((  SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * (*) (Message_1_t18A6B512CC2F6607E0565F9EB61910E4EFB66FB9 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetSdkAccountArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetSdkAccountArray_mFA09C21CD0973CBEF169646912E230E3BA626CA3 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.SdkAccountList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccountList__ctor_m2569AC12C02DCE79DD2F4550750E2BD7CC3725A3 (SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * __this, intptr_t ___a0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.SendInvitesResult>::.ctor(System.IntPtr)
inline void Message_1__ctor_mD575FC4B2819DB53A87794348EED896164DE179D (Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.SendInvitesResult>::get_Data()
inline SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * Message_1_get_Data_m4D5FBBF797090009DB90155857A73A7DC70D031D_inline (Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254 * __this, const RuntimeMethod* method)
{
	return ((  SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * (*) (Message_1_t6875D3ADE65D3E85DD4DE7CB404F6C1B35887254 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetSendInvitesResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetSendInvitesResult_m73939EE77EFC748ACB1E274DD83A1C1B3397D0F6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.SendInvitesResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendInvitesResult__ctor_mC2AB2F39DB83CB86B7C2A9F980FFD268101C8354 (SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.ShareMediaResult>::.ctor(System.IntPtr)
inline void Message_1__ctor_mD27A6D0E98A84C59B1F0C96E0A11FD89F959F90E (Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.ShareMediaResult>::get_Data()
inline ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * Message_1_get_Data_m9DCC17362E8F6A8A4F8B75F31F14CFBE304AB8FD_inline (Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932 * __this, const RuntimeMethod* method)
{
	return ((  ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * (*) (Message_1_tD55E6C9934135A985A63113AC9D6A911DC45D932 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetShareMediaResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetShareMediaResult_m09B8170F8E5E611911EB2BF4C018D230769566CB (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.ShareMediaResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareMediaResult__ctor_m0AC8F70EACE4FF4E09F5BB82A1DB5D4AFFBD634E (ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<System.String>::.ctor(System.IntPtr)
inline void Message_1__ctor_m382EF902EB8C4AB6D8BF4D44CF55CCFE98EFD834 (Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<System.String>::get_Data()
inline String_t* Message_1_get_Data_mB486C604742D203CD0503E8F3484961A78DD7A3D_inline (Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.String Oculus.Platform.CAPI::ovr_Message_GetString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Message_GetString_mE80BB87731A20FFFED442FE261121F956D434DE9 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>::.ctor(System.IntPtr)
inline void Message_1__ctor_m63CAA32FA5A2642D0F491DC4AF3E81AA1CE243BB (Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>::get_Data()
inline SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * Message_1_get_Data_m08389972AB99036CC48CC68C41BCB11F8C651378_inline (Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862 * __this, const RuntimeMethod* method)
{
	return ((  SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * (*) (Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetSystemVoipState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetSystemVoipState_m9C8EC6B0CE3902EF4EF5109C5EC1A608FE8C984D (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.SystemVoipState::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemVoipState__ctor_m9CC93A6027110E1938F59AEA8CA304EAD75DE1A5 (SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.User>::.ctor(System.IntPtr)
inline void Message_1__ctor_mD975C122123EFD5E4E03A569AB4E55B3AFAAA8C4 (Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.User>::get_Data()
inline User_tA163463AE919860D9B337F6104B028990A44B69D * Message_1_get_Data_m34E2CA3CD0598E90ADCE5A341675B293460CAC67_inline (Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5 * __this, const RuntimeMethod* method)
{
	return ((  User_tA163463AE919860D9B337F6104B028990A44B69D * (*) (Message_1_t7660598183903C72F32DE55BC14F068AC3646DD5 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetUser(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetUser_m22D3848EF7C5E62062F0BA91837C95687F781D6E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961 (User_tA163463AE919860D9B337F6104B028990A44B69D * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.UserCapabilityList>::.ctor(System.IntPtr)
inline void Message_1__ctor_m77FA43E9C35513EB247784892C0AFC4DA3DF6B39 (Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserCapabilityList>::get_Data()
inline UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * Message_1_get_Data_mFB350CD32671DBBF7739B605F5BF265ABF8A1472_inline (Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF * __this, const RuntimeMethod* method)
{
	return ((  UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * (*) (Message_1_tF4A01C00A5E7AE401280EA514F3D6B31C9546BDF *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetUserCapabilityArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetUserCapabilityArray_m5D4B0E02E06958BB590D9DDB6FF11C069F61478A (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserCapabilityList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapabilityList__ctor_m5DBE9663571D2D276A8C9E21E860983C0D30C5D5 (UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * __this, intptr_t ___a0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>::.ctor(System.IntPtr)
inline void Message_1__ctor_m0670131EC1CEF12D96C7C5F66E7D3E7104E82744 (Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>::get_Data()
inline UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * Message_1_get_Data_m495270D04A1348D78D6F39B0F444A4C83DB129E5_inline (Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6 * __this, const RuntimeMethod* method)
{
	return ((  UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * (*) (Message_1_t3F1BD20CB272517DFC9B45247AFA59CF010CF1A6 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetUserDataStoreUpdateResponse(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetUserDataStoreUpdateResponse_m1CE9F9CF63767AB738FB033DB492097D88B29D45 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserDataStoreUpdateResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataStoreUpdateResponse__ctor_m3E731729E3C2C7895BFA9B683F4927F77FB144D0 (UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>::.ctor(System.IntPtr)
inline void Message_1__ctor_m3742CF83FD392211E9FA7D3815ABC7BC35CA834C (Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserList>::get_Data()
inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * Message_1_get_Data_mEF7E09C34A28D6EDB5254BCE61FBA692DBBF8423_inline (Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348 * __this, const RuntimeMethod* method)
{
	return ((  UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * (*) (Message_1_tA5F9608ED96921AD8395BB1DDAFD1E8A92A0C348 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetUserArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetUserArray_m6B14ED810C0EDE34CCA3E6E49675AC70E80235D6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * __this, intptr_t ___a0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>::.ctor(System.IntPtr)
inline void Message_1__ctor_m35CEA4697319241E68E0EBBFB00CA0CF79280A07 (Message_1_t67E02792C2EB5CD9C1551009035703615D890699 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_t67E02792C2EB5CD9C1551009035703615D890699 *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof>::get_Data()
inline UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * Message_1_get_Data_mD0A241216E707B8C45056F31AA2F5254041175B0_inline (Message_1_t67E02792C2EB5CD9C1551009035703615D890699 * __this, const RuntimeMethod* method)
{
	return ((  UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * (*) (Message_1_t67E02792C2EB5CD9C1551009035703615D890699 *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetUserProof(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetUserProof_m79539EB0C21AB700B48FA134E6A6C7C835D80E6E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserProof::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProof__ctor_m471A1FE83FF7096DF8FB1478D23CF69B322AE015 (UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1<Oculus.Platform.Models.UserReportID>::.ctor(System.IntPtr)
inline void Message_1__ctor_m8EBB9A8A08953B21D03640589E09C0854EA9F892 (Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	((  void (*) (Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF *, intptr_t, const RuntimeMethod*))Message_1__ctor_m7F21A8BB04E1CA3A2ADBBE9AAF64E9C6D72CAE5F_gshared)(__this, ___c_message0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.UserReportID>::get_Data()
inline UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * Message_1_get_Data_mCFB82BE284C9D4375FC3040E88976D77D0526318_inline (Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF * __this, const RuntimeMethod* method)
{
	return ((  UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * (*) (Message_1_tE34D1CC404916A419A885EC22C92352D8F7BE9DF *, const RuntimeMethod*))Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline)(__this, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_Message_GetUserReportID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Message_GetUserReportID_m0CB5173B4FD31239D321E7136BFFBC569AC9B459 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserReportID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserReportID__ctor_m803040AD62252F061FD2ABF0E74770B1AD920928 (UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable_m505FAC0E36949F3EA8D42679331429C4C51641A8 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_MultiplayerErrorOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_MultiplayerErrorOptions_Create_mCFCDB838E1609EEBD6C200405A33B38D41F7793E (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_MultiplayerErrorOptions_SetErrorKey(System.IntPtr,Oculus.Platform.MultiplayerErrorErrorKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_MultiplayerErrorOptions_SetErrorKey_m988A1C739EFC05649FACE3E1F0E4AD1B006F6EE9 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_MultiplayerErrorOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_MultiplayerErrorOptions_Destroy_m83368691C0DBB89BC74B0B864CB1FEBB3AF83649 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.NetSyncConnection>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisNetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324_mACFDAFE5B71C390DE1CAEF15936000053BED8045 (uint32_t ___type0, Callback_tF9F4D8460A4E004732BB102490FB3CFAF3D31B32 * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_tF9F4D8460A4E004732BB102490FB3CFAF3D31B32 *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.NetSyncSessionsChangedNotification>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisNetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289_m9B3B40950888BF8D54F127FC0FC517A2F5F3FA30 (uint32_t ___type0, Callback_t60F86BD9657BE364E22054946463272DE745A371 * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t60F86BD9657BE364E22054946463272DE745A371 *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared)(___type0, ___callback1, method);
}
// System.Int64 Oculus.Platform.CAPI::ovr_NetSyncConnection_GetConnectionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CAPI_ovr_NetSyncConnection_GetConnectionId_mBEBAE043D7EF9022E73D4C77C85DAA2481B06941 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.NetSyncDisconnectReason Oculus.Platform.CAPI::ovr_NetSyncConnection_GetDisconnectReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_NetSyncConnection_GetDisconnectReason_m32D563940CB948944DFB2980264012DB5E077DC9 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_NetSyncConnection_GetSessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_NetSyncConnection_GetSessionId_m62CEFBB853F443F901B209FDE311B55F83422959 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.NetSyncConnectionStatus Oculus.Platform.CAPI::ovr_NetSyncConnection_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_NetSyncConnection_GetStatus_mA489182E33C41E3B47744B6EA7801F7CA62D8AB6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_NetSyncConnection_GetZoneId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_NetSyncConnection_GetZoneId_m342A30BEB8CD07991504F61841CB6EF93CCEA34B (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_NetSyncOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_NetSyncOptions_Create_m2EC6864BC5222E27867B8AE77975B0FACDB622D7 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_NetSyncOptions_SetVoipGroup(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_NetSyncOptions_SetVoipGroup_mCA45B80C177C3C47CC0935E3B0A7ECCBF32373ED (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_NetSyncOptions_SetVoipStreamDefault(System.IntPtr,Oculus.Platform.NetSyncVoipStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_NetSyncOptions_SetVoipStreamDefault_mB7600E55481D7750C58F7ACD135FE786AC613C81 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_NetSyncOptions_SetZoneId(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_NetSyncOptions_SetZoneId_mF6C7F3ADD7D8327A94EA0EBE3FA4FB09A8938B12 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_NetSyncOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_NetSyncOptions_Destroy_mAB4BD18D0EC83DE7D9A2FA4296B0DCBF142FA2BF (intptr_t ___handle0, const RuntimeMethod* method);
// System.Int64 Oculus.Platform.CAPI::ovr_NetSyncSession_GetConnectionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CAPI_ovr_NetSyncSession_GetConnectionId_mF2691C1C0304FA9FF9AC6DD447E7641B9BB8696E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_NetSyncSession_GetMuted(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_NetSyncSession_GetMuted_m62BCCBAF3DCA9B50FD6DBEBAD7AC7D44009DA013 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_NetSyncSession_GetSessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_NetSyncSession_GetSessionId_m308F9CC4B80D88EDFF91CF86CDFF2C0AFB191A50 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_NetSyncSession_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_NetSyncSession_GetUserId_mF1EB91628B246D0E23A5F0EEC2A95DE47285D622 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_NetSyncSession_GetVoipGroup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_NetSyncSession_GetVoipGroup_m5F05E0F8F8679F3FB36F78337BD708CD6D1A751F (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncSession>::.ctor()
inline void DeserializableList_1__ctor_mDD1CBDBD04AF818D91B3BFE4DE641967466B06A2 (DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_NetSyncSessionArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_NetSyncSessionArray_GetSize_m450C8C3A8EBEB1571AFEDAD0CC3DDB6C03FEAF95 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5 (uintptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncSession>::.ctor(System.Int32)
inline void List_1__ctor_m72FE05C8D4575DB08E41D51CA886BC2B4E9D84C9 (List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t814689C58494A7CC08836709C95562576D4A3FD1 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D (uint64_t ___value0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_NetSyncSessionArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_NetSyncSessionArray_GetElement_m529A416A3CC7F87C79C140449E7411A5E544573C (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.NetSyncSession::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncSession__ctor_mB577A0CE105B49FFAAE241B880416A58D41317B8 (NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncSession>::Add(!0)
inline void List_1_Add_m74EFE0FCFCB65235BED773C94CBD1F5693DC75E5 (List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * __this, NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t814689C58494A7CC08836709C95562576D4A3FD1 *, NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int64 Oculus.Platform.CAPI::ovr_NetSyncSessionsChangedNotification_GetConnectionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CAPI_ovr_NetSyncSessionsChangedNotification_GetConnectionId_m0B278EE36831B12E61500425FF2D933A4250B3C4 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_NetSyncSessionsChangedNotification_GetSessions(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_NetSyncSessionsChangedNotification_GetSessions_m6249EE5EDF6075AFE25FAC9491C43FADBF1E323A (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.NetSyncSessionList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncSessionList__ctor_m2975C4EE609667BBD16BE3F4A583166C9F46A6FA (NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * __this, intptr_t ___a0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_NetSyncSetSessionPropertyResult_GetSession(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_NetSyncSetSessionPropertyResult_GetSession_mE51B95145562AD74AB923B6F2A702C9FD3AC79E9 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Single Oculus.Platform.CAPI::ovr_NetSyncVoipAttenuationValue_GetDecibels(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CAPI_ovr_NetSyncVoipAttenuationValue_GetDecibels_mB20D252C89D750DF3C5CE6E42417CCF20E28A378 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Single Oculus.Platform.CAPI::ovr_NetSyncVoipAttenuationValue_GetDistance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CAPI_ovr_NetSyncVoipAttenuationValue_GetDistance_mE3B63AAB1E156F14EF261146F430CA5AD36A3D37 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>::.ctor()
inline void DeserializableList_1__ctor_m1FBFD17AFB3C32796D4C153A7331DDFF51431BEE (DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_NetSyncVoipAttenuationValueArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_NetSyncVoipAttenuationValueArray_GetSize_mD7150C380068135EFEA3D3820B39989FE8A502FD (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>::.ctor(System.Int32)
inline void List_1__ctor_mBFDD29EEB5DF2688668D2AA10EE44CBE2A97E555 (List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_NetSyncVoipAttenuationValueArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_NetSyncVoipAttenuationValueArray_GetElement_m49B65D4C44C1B39383AA199934E5492BC489D638 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.NetSyncVoipAttenuationValue::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncVoipAttenuationValue__ctor_m8381C5CCF0C543C97D0695E3282AAF1EF10A6319 (NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.NetSyncVoipAttenuationValue>::Add(!0)
inline void List_1_Add_mA8863CA185BF1BD52EB0A3186C57DC03F87F1B96 (List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * __this, NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE *, NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean Oculus.Platform.Core::IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Notification_MarkAsRead(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Notification_MarkAsRead_m87CF1A9B9131F8BF4F852871EBC584F6A2349469 (uint64_t ___notificationID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___requestID0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_OrgScopedID_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_OrgScopedID_GetID_mD131B5B314E183C44CDFA498B5CCDEE97FEC7224 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Packet_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Packet_GetSize_m8C80B9FD7FE225A913BDCE0D6AEBF6EDED74AF11 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_m5BE0C5F6B2C91B503F2F0AC4EE76F475CCD9A125 (uintptr_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_Packet_GetBytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Packet_GetBytes_m783C2688F18A4760921022252BB8F80686B9D55F (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Packet_GetSenderID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Packet_GetSenderID_m7109739EED4DFC909B375C36789EC73ED2EB93D8 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Packet::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Dispose_m8660A927DFE7387F8EA24C1485890B3BE1A50C21 (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Packet_Free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Packet_Free_m6D955BA0E0340BE9189B53A0DD6345E8CFCB59AD (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Party_GetCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Party_GetCurrent_mC5EFBB2F0B0AEE921EC84747E0432275358EAF68 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.Party>::.ctor(System.UInt64)
inline void Request_1__ctor_mBF5B02E55E7EACCE5000A1DEB5C79D09092ED4E6 (Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.PartyUpdateNotification>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisPartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5_mC4E991245619E93C941E1C994B0A21E94FB49B21 (uint32_t ___type0, Callback_t413C50F50EB8340B0AB5684D79EA7C09AEFE31BC * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t413C50F50EB8340B0AB5684D79EA7C09AEFE31BC *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared)(___type0, ___callback1, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Party_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Party_GetID_mCD8D9A635AF0884CF5A5A5CC901814E8C7ACDA90 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_Party_GetInvitedUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Party_GetInvitedUsers_mEA375E164DFDE8740E4F38BBF05E933BE2EEC4D1 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_Party_GetLeader(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Party_GetLeader_m061DA537125BFC8DDF8BC18801037BBBB8850128 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_Party_GetUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Party_GetUsers_mE9A302579308A40B2A3A59144D1404D7C6BD4E31 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PartyID_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PartyID_GetID_m53F41687148C971E80E20966109255E5CBDE5034 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.PartyUpdateAction Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetAction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_PartyUpdateNotification_GetAction_mDFBBA36BB711D92367E08BADAEA21B4FB9FAB3FF (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetPartyId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PartyUpdateNotification_GetPartyId_m2D87ED5E4634DEC9384D6DDA169AA66182CDDA05 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetSenderId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PartyUpdateNotification_GetSenderId_m75A00293FB0257ADD681235A58263E3E0FD20FAE (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetUpdateTimestamp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_PartyUpdateNotification_GetUpdateTimestamp_m5232AC3BD5BCB6D261DECA5B77AE6D13561DA9C5 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetUserAlias(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_PartyUpdateNotification_GetUserAlias_m4494B94E34F99A96DB3AC4059DE60CF15C67E752 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PartyUpdateNotification_GetUserId_m105CCC36B417F6C3DC31A852855510ED4241A8FE (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_PartyUpdateNotification_GetUserName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_PartyUpdateNotification_GetUserName_m23B095B8D01B1114DD15080B1D32E80775B5A76A (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Pid_GetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Pid_GetId_m3BF9EF228478FFE4CD6BC160F5B4821B1A57FDF6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Pid>::.ctor()
inline void DeserializableList_1__ctor_m45E981B3CAD57FC3D2F05787E2E59490BFDE629B (DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_PidArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_PidArray_GetSize_m91778F9EA62F4D4CD4F02E0744B18055DA0CE316 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Pid>::.ctor(System.Int32)
inline void List_1__ctor_mBBEDF3751FFFC20A994E4509F6261E95EE1F0335 (List_1_t76614734F621AFD54E4A1505402DFEE94376947F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76614734F621AFD54E4A1505402DFEE94376947F *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_PidArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_PidArray_GetElement_m4E35B3AECFC4FE475B0C443024A47216972F37D2 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Pid::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pid__ctor_m2BD19BB59BA01B8CBED3A55F910A566C891C0877 (Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Pid>::Add(!0)
inline void List_1_Add_m4EA18BB63BFEAF76AA407442A4E145110CFB0EFF (List_1_t76614734F621AFD54E4A1505402DFEE94376947F * __this, Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76614734F621AFD54E4A1505402DFEE94376947F *, Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Oculus.Platform.Models.PingResult::set_ID(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PingResult_set_ID_mF198896BB8E0C1E23B74F439F12B179E5747D5A2_inline (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.UInt64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_inline (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *, const RuntimeMethod*))Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.UInt64>::get_Value()
inline uint64_t Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *, const RuntimeMethod*))Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_gshared)(__this, method);
}
// Oculus.Platform.PlatformInitializeResult Oculus.Platform.CAPI::ovr_PlatformInitialize_GetResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_PlatformInitialize_GetResult_m1C62B659D6FC74BE58CB2A3DB053C12210AA64C1 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_CrashApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_CrashApplication_mFD3B8BA997E721FED8B0EEF1CDE2202D975D53E3 (const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithAbuseReportRecording::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithAbuseReportRecording__ctor_mBFD88B68B6CD74195C0A6EAC8D2B5AE77FDF6742 (MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m1A40D0572AA2D65F83F585D5A181540D06436A78 (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithInstalledApplicationList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithInstalledApplicationList__ctor_m9F644ABC506351C01E655192262C6CAE640DDFF2 (MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithLaunchReportFlowResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithLaunchReportFlowResult__ctor_m86C2C6B01B44C2F71B921D84ED072D9827BCD266 (MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithLinkedAccountList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithLinkedAccountList__ctor_m2C9BE65D4FE0B4899BBE906F8429A194AF4730C6 (MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithLivestreamingApplicationStatus::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithLivestreamingApplicationStatus__ctor_mE203FE5F150E7055AB8C0A8A092F14E2500A2ADC (MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithLivestreamingStartResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithLivestreamingStartResult__ctor_mD0C6D08084DAC44BDFD307155447E180D6F053C7 (MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithLivestreamingVideoStats::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithLivestreamingVideoStats__ctor_m09A46D7551394A5DE8EE61A93140BDAB50028E9F (MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithNetSyncConnection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithNetSyncConnection__ctor_m446DB88513E55460ADDAB822FCD6E60BD956AB98 (MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithNetSyncSessionList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithNetSyncSessionList__ctor_m80BD6BBCEB04A7F3E46AE41B60FB40F0C538E4BA (MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithNetSyncSetSessionPropertyResult__ctor_mDF42B8B6F67786BB9B2935497D5FBAC44BC15A7E (MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithNetSyncVoipAttenuationValueList__ctor_m97C700DCF6F27B6AA4894756288CDEFEF5FA0E45 (MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithParty::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithParty__ctor_m89ED654642C9750ADE0674DDF68D349C2ADBE640 (MessageWithParty_t47591733C170E4A940E558968881918663246F23 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithPartyUnderCurrentParty::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithPartyUnderCurrentParty__ctor_m2FB74B3620D0628E27E76FB21EF5A757F6F7AB94 (MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithPartyID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithPartyID__ctor_mFBEFFC2A4371CF088D8C53F65C2CEBAB646E4EFC (MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithString::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithString__ctor_mEA5C5759B064A36D004C36522BD0BC216F931C14 (MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithUserCapabilityList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserCapabilityList__ctor_mEFAB0A520A4B079C1634B6DC2355B4822E4E0621 (MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.MessageWithUserReportID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserReportID__ctor_mD29E1AAD3DF9A65F5FE43FE420B1663D7A643795 (MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5 * __this, intptr_t ___c_message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.StandalonePlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatform__ctor_m3AE4474A8116A9398BB6F0430B68526EB20A56B2 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitialize(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Core::ForceInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Core_ForceInitialized_mFDF32C0D5CAA4CFCB504C543BFA9FC85FA8A5EDE (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Oculus.Platform.CallbackRunner>()
inline CallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956 * GameObject_AddComponent_TisCallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956_mA804A429919763B6A386C256F44F0559EE3D86CE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// Oculus.Platform.PlatformSettings Oculus.Platform.PlatformSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<Oculus.Platform.PlatformSettings>(System.String)
inline PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * Resources_Load_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_mA934F318B1F311E0D6520075254E0B177D434BE3 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared)(___path0, method);
}
// !!0 UnityEngine.ScriptableObject::CreateInstance<Oculus.Platform.PlatformSettings>()
inline PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * ScriptableObject_CreateInstance_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_m5DEF2C7120175951508210018FE61F2A7E2C3BE1 (const RuntimeMethod* method)
{
	return ((  PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_m82DC05B18FA4AE838A81789EED8A7A5832CCAC4A_gshared)(method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetDescription(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetDescription_m15B4D71ACDD687423958488545CFD9EA26125919 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetFormattedPrice(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetFormattedPrice_m56F448DE3D73C2666AF1834060BA1885DECADBCF (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetName_mCF13F3EAFFC8A9C24D6B9108B325B9C6479D1FD2 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetSKU(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetSKU_m14A717F1B65F995688518F2E5DD07AD263D55B8E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>::.ctor()
inline void DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340 (DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_ProductArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_ProductArray_GetSize_m40DC8DD02E29249F5FD58B9ACAC31048E68BA55E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Product>::.ctor(System.Int32)
inline void List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976 (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_ProductArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_ProductArray_GetElement_mA63580FBE27AB0DBABFDEE1BCF1B00FE16948646 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Product::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Product__ctor_mB7FB491D8CBF0441B194271CF38C221D2F568850 (Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Product>::Add(!0)
inline void List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9 (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * __this, Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D *, Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_ProductArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_ProductArray_GetNextUrl_m57F1FD1FD94E39D52FAC553F67917133B42620D5 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetDeveloperPayload(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetDeveloperPayload_mFF7FC7A1C3422069EC5A78F7AD71E3A6DFD7CFE1 (intptr_t ___obj0, const RuntimeMethod* method);
// System.DateTime Oculus.Platform.CAPI::ovr_Purchase_GetExpirationTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  CAPI_ovr_Purchase_GetExpirationTime_mD3DD5A8EBCEA863444C55B909BFEF48ACDCF2BBA (intptr_t ___obj0, const RuntimeMethod* method);
// System.DateTime Oculus.Platform.CAPI::ovr_Purchase_GetGrantTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  CAPI_ovr_Purchase_GetGrantTime_mBC9EE7DEDA704D90969EC8416EF68795607D7017 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetPurchaseStrID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetPurchaseStrID_mB63F95844403853F3905230E043DFD5E20E97624 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetReportingId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetReportingId_mC1598316FD43E3EB25E077CF2CCF2C1C7D0FF79C (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetSKU(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetSKU_mF5EFC4F0C73B4DA234B2215F572DB8C585BE003E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>::.ctor()
inline void DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60 (DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_PurchaseArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_PurchaseArray_GetSize_m8578F21A7F8ABD888FFF976DFA9062D3171D8CCB (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>::.ctor(System.Int32)
inline void List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2 (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_PurchaseArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_PurchaseArray_GetElement_mD205FBC22129D2F4BA7FADF07D082E894CF53AB6 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>::Add(!0)
inline void List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4 (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * __this, Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 *, Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_PurchaseArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_PurchaseArray_GetNextUrl_m495A713EEC702EF65070D261B63CBD29C49FFE73 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_RejoinDialogResult_GetRejoinSelected(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_RejoinDialogResult_GetRejoinSelected_m61B5E6D392ED7942ED091F03999CC9BD24285CAC (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void ReportingCallbackSample::UpdateConsole(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7 (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, String_t* ___value0, const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.Core::AsyncInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * Core_AsyncInitialize_m810A216428A23B318E7AD27857CC0BBE7F5523FE (String_t* ___appId0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41 (Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3 (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * __this, Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * (*) (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *, Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 *, const RuntimeMethod*))Request_1_OnComplete_m2ACE384D6DB84724178C79998F8BFC39C6B31818_gshared)(__this, ___callback0, method);
}
// System.Boolean Oculus.Platform.Message::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * __this, const RuntimeMethod* method);
// Oculus.Platform.Request Oculus.Platform.AbuseReport::ReportRequestHandled(Oculus.Platform.ReportRequestResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * AbuseReport_ReportRequestHandled_m46D967CF319961FA998674E529406F24F3B5E455 (int32_t ___response0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<System.String>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.AbuseReport::SetReportButtonPressedNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbuseReport_SetReportButtonPressedNotificationCallback_m831491BFAE4C6B2AFAD1B494B56B8D32C0C58FC1 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request::set_RequestID(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF_inline (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::AddRequest(Oculus.Platform.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_AddRequest_mFA701F763726249BE988194368240B026FC319B8 (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * ___request0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::RunCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_RunCallbacks_m5A78DD8A17B173692A0DB672DC6B442A807F2891 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::RunLimitedCallbacks(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_RunLimitedCallbacks_mE471A0A03052028BC1E4C43407E6EDF73DECD555 (uint32_t ___limit0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_RichPresence_Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_RichPresence_Clear_mD90AE0F0CE11041DE8CD4E12FA3B5B14729CAF06 (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_RichPresence_GetDestinations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_RichPresence_GetDestinations_m4428CC655FA8FF7B41D83BF79A02E172B66DDE26 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>::.ctor(System.UInt64)
inline void Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.IntPtr Oculus.Platform.RichPresenceOptions::op_Explicit(Oculus.Platform.RichPresenceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RichPresenceOptions_op_Explicit_mE0053F8C425039EA127AB948C75EBED9A5352C96 (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_RichPresence_Set(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_RichPresence_Set_m9C6E65BB5CE78F922D4E71B871D104A970BBAC1D (intptr_t ___richPresenceOptions0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539 (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_inline (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_HTTP_GetWithMessageType(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_HTTP_GetWithMessageType_m3ADC2C3BFF17A426ECE7CA61B3A84451BAD3CF40 (String_t* ___url0, int32_t ___messageType1, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_RichPresenceOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_RichPresenceOptions_Create_m2AB8FB70A3821D882751E0550CD7BCF1D132C618 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RichPresenceOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RichPresenceOptions_Destroy_m19E16B60CE67C76D0E0AB3A1B5E1A28593DF7D1E (intptr_t ___handle0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_RosterOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_RosterOptions_Create_mDC582A8A0E8CD840D59441D8714EF645D49A5973 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RosterOptions_AddSuggestedUser(System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RosterOptions_AddSuggestedUser_m42AA151EA6E2441B9DA1D0B52BC367995EA31AA6 (intptr_t ___handle0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RosterOptions_ClearSuggestedUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RosterOptions_ClearSuggestedUsers_m3F2DD787B8C9F0AB527B0842257F2C47BC98A2E6 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RosterOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RosterOptions_Destroy_m83C8373F00F3005BEFF54481812904D1DD1C21FC (intptr_t ___handle0, const RuntimeMethod* method);
// Oculus.Platform.SdkAccountType Oculus.Platform.CAPI::ovr_SdkAccount_GetAccountType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SdkAccount_GetAccountType_mBB04A3492BD6E249CFBD46CB52E803985520D3AB (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_SdkAccount_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_SdkAccount_GetUserId_mAE39490C9AB8DBCB161D3E06B9D26AB5C9F4E0C1 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>::.ctor()
inline void DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C (DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_SdkAccountArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_SdkAccountArray_GetSize_m4AF1A21051BFBE1E597980CA5B96680D691F577F (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>::.ctor(System.Int32)
inline void List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572 (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_SdkAccountArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_SdkAccountArray_GetElement_m1E5F9A8D7020989F0CB194CEBD5D0B0DA03508AB (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.SdkAccount::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7 (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>::Add(!0)
inline void List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288 (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * __this, SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *, SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_SendInvitesResult_GetInvites(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_SendInvitesResult_GetInvites_m1F148EEFC505EB8DCEEEF29EAD1DD7A192647ED3 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.ApplicationInviteList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationInviteList__ctor_mBF3A124C10AC8CCEFCD2EFB20D3F2EC4AA624EC5 (ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * __this, intptr_t ___a0, const RuntimeMethod* method);
// Oculus.Platform.ShareMediaStatus Oculus.Platform.CAPI::ovr_ShareMediaResult_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_ShareMediaResult_GetStatus_m19C6C4E0756E7A3E0F668077D8E0D462A3D0A9B4 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.PlatformSettings::get_MobileAppID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformSettings_get_MobileAppID_m08A26133A0E765EDCE4355FCC64A18F8FF67936B (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m14ED5FB11903CDC76E8B71BD88F67DF936CF6896_inline (const RuntimeMethod* method);
// System.UInt64 System.UInt64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mBD4E76B24B2A2E1E1A1A2ADBBCE3EB3CE7C9DEF5 (String_t* ___s0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UnityResetTestPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UnityResetTestPlatform_mA50C6C2E6BC8BC42371079CDE5D8712675549C49 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UnityInitGlobals(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UnityInitGlobals_m8D4B1C6F162D614F8F2752C2255CA8CA86B8F751 (intptr_t ___loggingCB0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PlatformInitializeWithAccessToken(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PlatformInitializeWithAccessToken_m55DD6B1B1C2C275D19BD75B1AF28C21C5F5B20EF (uint64_t ___appId0, String_t* ___accessToken1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>::.ctor(System.UInt64)
inline void Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688 (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>::get_Count()
inline int32_t Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1 (Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 *, const RuntimeMethod*))Dictionary_2_get_Count_m0A1AC6616615D761104DE54318C385DA8168C3EA_gshared)(__this, method);
}
// Oculus.Platform.CAPI/ovrKeyValuePair[] Oculus.Platform.CAPI::DictionaryToOVRKeyValuePairs(System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* CAPI_DictionaryToOVRKeyValuePairs_m57606B15D24964A421FC927CE20EC533F9EDC3C4 (Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * ___dict0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PlatformInitializeWithAccessTokenAndOptions(System.UInt64,System.String,Oculus.Platform.CAPI/ovrKeyValuePair[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PlatformInitializeWithAccessTokenAndOptions_m9B3BEA04BED5758CC53A047DD4330A064370DDC3 (uint64_t ___appId0, String_t* ___accessToken1, ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* ___configOptions2, uintptr_t ___numOptions3, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_SupplementaryMetric_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_SupplementaryMetric_GetID_mB5D18583CCB0329289FC45B2B2C7A481F405B2C4 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Int64 Oculus.Platform.CAPI::ovr_SupplementaryMetric_GetMetric(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CAPI_ovr_SupplementaryMetric_GetMetric_mEB8F1C3E11C2E4B9DBC625C644F01021AC42A77F (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.VoipMuteState Oculus.Platform.CAPI::ovr_SystemVoipState_GetMicrophoneMuted(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemVoipState_GetMicrophoneMuted_m60EB30C8995F1F189F0ADE1238602887BDFD323F (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.SystemVoipStatus Oculus.Platform.CAPI::ovr_SystemVoipState_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemVoipState_GetStatus_m3A93BFA14E0E22C882B6DDEA25217F4FA3691D6D (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetDisplayName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetDisplayName_m18F5227EC901969BBCFA99901A481FE3866C7A95 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetID_m08CEF10644360A7BD9561DA5DC56C5345DB1AF3F (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetImageUrl_m31D5066EF9ABCCA12877E996822FBD5567F0A843 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetOculusID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetOculusID_mBC734BE0BD3199E5B9ED123EDC9D29E7B048E8C1 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresence(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresence_mC3495E2F726B03AE064F9D4692A9BDC72266AACB (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceDeeplinkMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceDeeplinkMessage_m6C83B9B68AEF16AA4D42C53ECF81B6A763068AF2 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceDestinationApiName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceDestinationApiName_mB24E824A11BD5DF04393BEE842DB352C0C9574E8 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceLobbySessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceLobbySessionId_mA1A249DF2DABB3CE77286D4B3D0722EE58616043 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceMatchSessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceMatchSessionId_m035C67B001418780FB33CA7E2596FD28A3DEAFC1 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.UserPresenceStatus Oculus.Platform.CAPI::ovr_User_GetPresenceStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_User_GetPresenceStatus_m3C0870BDD40129850F6C5F46A322B5526A9B9448 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetSmallImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetSmallImageUrl_m0C35A6456A32B6C9B6B787112DAC8CFB9EB57961 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserCapability_GetDescription(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapability_GetDescription_m2052933D0FCCB10E63476232842F6FBD6179DBB3 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserCapability_GetIsEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserCapability_GetIsEnabled_mAB168B5A2CA2981CDA9949E269883609F5218417 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserCapability_GetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapability_GetName_m6DFB9753FE215B9E3CDCD1E6499CEBFD1476A65B (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserCapability_GetReasonCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapability_GetReasonCode_m6011AB5228DA04BA30B232533D125051136AA589 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>::.ctor()
inline void DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_UserCapabilityArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_UserCapabilityArray_GetSize_m1ADBD3641B2239284F4C5960693E3AA76FFAE6E8 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>::.ctor(System.Int32)
inline void List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242 (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_UserCapabilityArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserCapabilityArray_GetElement_mB5E8F564E27847005A67B01ABCACED83E166F914 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserCapability::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapability__ctor_m339976E7D4FAFFE7CD3D609F4876C530D7C74275 (UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>::Add(!0)
inline void List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * __this, UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 *, UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_UserCapabilityArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapabilityArray_GetNextUrl_mA259F4C600A4958425899F7268F347A97DB0FD2F (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateDeleteEntryByKey_m89C4B624BE152FBB6A6094B098A721418E9E151A (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>::.ctor(System.UInt64)
inline void Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408 (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateGetEntries_m692093C893D36D08CF5BEE85BC872F7C79AC51A0 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.UInt64)
inline void Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4 (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateGetEntryByKey_mEBBC00FE6981EEFAB94B080CCFE3255A87CF444D (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateWriteEntry_m02A96A2C37F0AC11EC2DCF014E4E1B067F00E19D (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicDeleteEntryByKey_m27BDD43C0A310F1B5BE047708F4D130760E26923 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicGetEntries_mD02FBE554BDBBA7713289C723A14386E43FD9005 (uint64_t ___userID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicGetEntryByKey_m8779297BF675EE71730C0ADBF82594DF28C371F6 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicWriteEntry_mEAFEF551D9B8FCB956338D433BB891D4D96C36AA (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserDataStoreUpdateResponse_GetSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_mA63027C7D7300E72B0C6F71F8AB46765D545884A (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::.ctor()
inline void DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_UserArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_UserArray_GetSize_m94FB2AD81FDF3E4D7A0BC7689D0AA85D1D32B323 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.User>::.ctor(System.Int32)
inline void List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_UserArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserArray_GetElement_m8A0921E2744E5AEC3E4130EE4F6E1D3A22EF8BC0 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.User>::Add(!0)
inline void List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8 (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * __this, User_tA163463AE919860D9B337F6104B028990A44B69D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_UserArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserArray_GetNextUrl_m40DF70E48DA3BECF9D8A191B6FC8BBB9EB5A52BB (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_UserOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserOptions_Create_m902AA881CD5C55FA555769CD617544C961A3E026 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_SetMaxUsers(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_SetMaxUsers_mB6BE88A30E10DC57BE25FC4DE98DC6E6923D7DF7 (intptr_t ___handle0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_AddServiceProvider(System.IntPtr,Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_AddServiceProvider_m053ECF1F364CB326B571FE8782C6EB6CAE8D003D (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_ClearServiceProviders(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_ClearServiceProviders_m12D3FB8B98FBC576DCE67BCE7AA69479C17EF9E6 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_SetTimeWindow(System.IntPtr,Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_SetTimeWindow_m683BEFE4C3831AA38E5F06F83C6A1AA833E1B53F (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_Destroy_m03B91E25FD0E220FF3F2D0D1368A791143936AA4 (intptr_t ___handle0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserProof_GetNonce(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserProof_GetNonce_m5181DB53493AB89FFBCB47064E8493FF4A36C359 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserReportID_GetDidCancel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserReportID_GetDidCancel_m903A4A66CEB6D5D1E9C460B92D4DF81D7A1FD40C (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserReportID_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserReportID_GetID_mBE8CD57DC82C3B8F47469521347421C7E17E5DE6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_GetLoggedInUserLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_GetLoggedInUserLocale_m7382144D856E9D0ADB2DF485EA5C6DBFDF2EFF2D (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_Get_m175163ECA9BAD96B63431FB1A8D2BAF4033D6883 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.User>::.ctor(System.UInt64)
inline void Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetAccessToken_m8508A690DA977C6ADFF1D6D9488B5EE4F061E69F (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.String>::.ctor(System.UInt64)
inline void Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetBlockedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetBlockedUsers_m6DAC989D4A098C68890AE539779155699A5E36CE (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>::.ctor(System.UInt64)
inline void Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUser_mC7B413996E0EB202657C62972624F77F1E0C5A17 (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUserFriends_m871915A1D3FBE204FC32F6320CFB4D4CBB96CD5C (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>::.ctor(System.UInt64)
inline void Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5 (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetOrgScopedID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetOrgScopedID_m06D828BA4BED0E3E278832538AFE0DEA37B9432E (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>::.ctor(System.UInt64)
inline void Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004 (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetSdkAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetSdkAccounts_mE900113342E5CDF8BA53EE7766C9DFC334DE72A4 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88 (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetUserProof_m78CE79C682AFAD8C361B4DEE2CEA26F499F9C1ED (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>::.ctor(System.UInt64)
inline void Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchBlockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchBlockFlow_mCA9A1B58F1F1686853AAE315832F6BB767CD2EA2 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchFriendRequestFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchFriendRequestFlow_mA9F0D2C95D10C7D91A761D31320994305A7FC517 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268 (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchUnblockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchUnblockFlow_m068A1DFE7BCD6F907FAD000A603A8C43C72DA100 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_inline (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_inline (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21 (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_inline (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>::.ctor(System.UInt64)
inline void Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.CAPI::ovr_Voip_Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Start_mD0C233B53819D87CA893B40211B762AC9E379478 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Accept_m795D198D962E7F05C33AEA209EE31F60AA031993 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Stop_mA96831A3F55FCF7A7A530662931E4EEEE891C325 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(Oculus.Platform.CAPI/FilterCallback,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer_mE2F262A083C820350ED4E4E54942D092054CE272 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * ___cb0, uintptr_t ___bufferSizeElements1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetMicrophoneMuted(Oculus.Platform.VoipMuteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetMicrophoneMuted_m4244C548A1880D0C4E7E81400C817C92B77299D8 (int32_t ___state0, const RuntimeMethod* method);
// Oculus.Platform.VoipMuteState Oculus.Platform.CAPI::ovr_Voip_GetSystemVoipMicrophoneMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetSystemVoipMicrophoneMuted_mAB60BA6E8A6E3236957394C390BCF1E0FE1E11AB (const RuntimeMethod* method);
// Oculus.Platform.SystemVoipStatus Oculus.Platform.CAPI::ovr_Voip_GetSystemVoipStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetSystemVoipStatus_mA6AFFF180D80B1A73095A946C538629D07F49375 (const RuntimeMethod* method);
// Oculus.Platform.VoipDtxState Oculus.Platform.CAPI::ovr_Voip_GetIsConnectionUsingDtx(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetIsConnectionUsingDtx_m546FF8874406F948C36BC1F774F5AD30B771B72E (uint64_t ___peerID0, const RuntimeMethod* method);
// Oculus.Platform.VoipBitrate Oculus.Platform.CAPI::ovr_Voip_GetLocalBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetLocalBitrate_mFE47DBC8368FA1844697AF1226170700245A681F (uint64_t ___peerID0, const RuntimeMethod* method);
// Oculus.Platform.VoipBitrate Oculus.Platform.CAPI::ovr_Voip_GetRemoteBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetRemoteBitrate_mE2183F7A67922598607D2DA6047711944C0982AD (uint64_t ___peerID0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.VoipOptions::op_Explicit(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VoipOptions_op_Explicit_m949FEA0ECF483B08E734A28EB01053C918D92FE8 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___options0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetNewConnectionOptions(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetNewConnectionOptions_m4C703A6768BF5C2E0E6006B08FFDB74A1B23AF2A (intptr_t ___voipOptions0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Voip_GetMicrophoneAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Voip_GetMicrophoneAvailability_m2DF154D6B934F07634CE2498B726BA42CD8C77B5 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>::.ctor(System.UInt64)
inline void Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Voip_SetSystemVoipSuppressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Voip_SetSystemVoipSuppressed_m5A60DF0D27ACFF7E8F7B8EC71E81D7005E03AF9D (bool ___suppressed0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>::.ctor(System.UInt64)
inline void Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052 (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.String>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175 (uint32_t ___type0, Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.SystemVoipState>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_mC5F3E3650FE95E74BAA8AE41E6DD47E16DAD5648 (uint32_t ___type0, Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t827F915E827EE8044B5F300339FE951E4557B20A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared)(___type0, ___callback1, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate>()
inline FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate>()
inline FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_m383C9850C4BC4A650AC832888A42A9D1E697E4EA (const RuntimeMethod* method);
// Oculus.Platform.VoipSampleRate Oculus.Platform.VoipAudioSourceHiLevel::SampleRateToEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, int32_t ___rate0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetOutputSampleRate(Oculus.Platform.VoipSampleRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetOutputSampleRate_m310EE93AA840ED25CAA1E180E045326911544E56 (int32_t ___rate0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m72BF100F3CFE21832B462EDDA71CF0FE28C0D093 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.VoipPCMSourceNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::MSToElements(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_MSToElements_m90216B8D9F0C0B7EBD8A656AF114F32E4980D461 (int32_t ___ms0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_VoipOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_VoipOptions_Create_m81F954E507F0B1974FBF6724836DD6DB293D8A2A (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_SetBitrateForNewConnections(System.IntPtr,Oculus.Platform.VoipBitrate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_SetBitrateForNewConnections_m0FA062578D4413E463FB4F33E3917B9BA0C5E7DC (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_SetCreateNewConnectionUseDtx(System.IntPtr,Oculus.Platform.VoipDtxState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_SetCreateNewConnectionUseDtx_m4B3ABA540AC9497923E9438E91EE429472EDA446 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_Destroy_mAAA6F764A040C2221DB99764B8B6171365CCABAC (intptr_t ___handle0, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetPCMFloat(System.UInt64,System.Single[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetPCMFloat_m5B5E7A78EB666A324C3C83AFBA80C9CB477A19C8 (uint64_t ___senderID0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___outputBuffer1, uintptr_t ___outputBufferNumElements2, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetPCMSize(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetPCMSize_mB51895D9BF6C192EDBDBD2C0BB544189649437B7 (uint64_t ___senderID0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8A04D9B38C53580B609A2A3179BDAA28FEC85F0E (intptr_t ___ptr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.WindowsPlatform::getCallbackPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UnityInitWrapperWindows(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UnityInitWrapperWindows_m0A0E2E8CF4D2F2E2ED7546CB2EF53E7730E22314 (String_t* ___appId0, intptr_t ___loggingCB1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UnityInitWrapperWindowsAsynchronous(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UnityInitWrapperWindowsAsynchronous_mB371F3B29CE4E3468406E80E4CA92BB6C1AEA08F (String_t* ___appId0, intptr_t ___loggingCB1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44 (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.HttpTransferUpdate>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mC13680157905408E3062BCDCA7EC876230AEBB05 (uint32_t ___type0, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m7AF8F2FF83F58CA3AF92CB28C0E47339A046D6FA_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mF3560C78C7B6E14615CC1B4D111AE3425DC99822 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLinkedAccounts(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLinkedAccounts_mD179F5F7B2478C69264051CD8E15ADB290213D90 (intptr_t ___userOptions0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6 (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetOutputBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetOutputBufferMaxSize_m9A9403AE7A22767F9DB95E3F925530E00B926D12 (const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m14F24D8DBE5A2FD747E8F94E2F7759FBA495DB1C (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m0376DF1FA13FFF5290B9AB27F9808F6632E9A8C7 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.MessageWithPurchase::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithPurchase__ctor_m3ED1CFC880644E537ADCE24BF9CF3F2F2378161C (MessageWithPurchase_tE30F406DC8C504934089A1EA7A45DECD96B52047 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m6A5A70F1D07191554B3B90ACEA376E3808A5CBDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithPurchase(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m6A5A70F1D07191554B3B90ACEA376E3808A5CBDC(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m6A5A70F1D07191554B3B90ACEA376E3808A5CBDC_RuntimeMethod_var);
		// public MessageWithPurchase(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.Purchase Oculus.Platform.MessageWithPurchase::GetPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * MessageWithPurchase_GetPurchase_m3A48A7F87C495A2E1CB28B6024F319716B73880E (MessageWithPurchase_tE30F406DC8C504934089A1EA7A45DECD96B52047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m86378EE0F124498A16BBE983E63118F62D925CBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Purchase GetPurchase() { return Data; }
		Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * L_0;
		L_0 = Message_1_get_Data_m86378EE0F124498A16BBE983E63118F62D925CBC_inline(__this, /*hidden argument*/Message_1_get_Data_m86378EE0F124498A16BBE983E63118F62D925CBC_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.Purchase Oculus.Platform.MessageWithPurchase::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * MessageWithPurchase_GetDataFromMessage_m18802C4D4F959C2010AA7CCF6F4C33943690047D (MessageWithPurchase_tE30F406DC8C504934089A1EA7A45DECD96B52047 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetPurchase(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetPurchase_m54926CE98B1EB5799409A0B110E94A8A1DD5F61F((intptr_t)L_1, /*hidden argument*/NULL);
		// return new Purchase(obj);
		Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * L_3 = (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 *)il2cpp_codegen_object_new(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var);
		Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithPurchaseList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithPurchaseList__ctor_m250CC62AA27840FBC8F0242247CAD677EAB61543 (MessageWithPurchaseList_t8F80222245785E022F80CDD10120A8CBDDF65B0F * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m6B69FEEBB6BA1BAC2E2042126DE321550F881B9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithPurchaseList(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m6B69FEEBB6BA1BAC2E2042126DE321550F881B9E(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m6B69FEEBB6BA1BAC2E2042126DE321550F881B9E_RuntimeMethod_var);
		// public MessageWithPurchaseList(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.PurchaseList Oculus.Platform.MessageWithPurchaseList::GetPurchaseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * MessageWithPurchaseList_GetPurchaseList_m0BB9A13F36A217BB5EF66499D91E3696BA55BF25 (MessageWithPurchaseList_t8F80222245785E022F80CDD10120A8CBDDF65B0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mFB18B16AC8B27F553306D41239F3BE8512F216B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override PurchaseList GetPurchaseList() { return Data; }
		PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * L_0;
		L_0 = Message_1_get_Data_mFB18B16AC8B27F553306D41239F3BE8512F216B0_inline(__this, /*hidden argument*/Message_1_get_Data_mFB18B16AC8B27F553306D41239F3BE8512F216B0_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.PurchaseList Oculus.Platform.MessageWithPurchaseList::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * MessageWithPurchaseList_GetDataFromMessage_mA53C64F9CEF8954A253D86603C04E0BEAFD931FE (MessageWithPurchaseList_t8F80222245785E022F80CDD10120A8CBDDF65B0F * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetPurchaseArray(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetPurchaseArray_mE812241B5443800081365A92C24F681292DB00BB((intptr_t)L_1, /*hidden argument*/NULL);
		// return new PurchaseList(obj);
		PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * L_3 = (PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 *)il2cpp_codegen_object_new(PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802_il2cpp_TypeInfo_var);
		PurchaseList__ctor_m9F6F5731BB0F2BE4D2592D58F800695E5EF6C9E8(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithRejoinDialogResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithRejoinDialogResult__ctor_m3B85768A31C254A5F9C448D7B49E318D435FA34E (MessageWithRejoinDialogResult_tC73257DF5EC93BF84847377C306402A728170569 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_mCFF439D31A61C74E6F9FEE63603FFCF716FB6BB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithRejoinDialogResult(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_mCFF439D31A61C74E6F9FEE63603FFCF716FB6BB9(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_mCFF439D31A61C74E6F9FEE63603FFCF716FB6BB9_RuntimeMethod_var);
		// public MessageWithRejoinDialogResult(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.RejoinDialogResult Oculus.Platform.MessageWithRejoinDialogResult::GetRejoinDialogResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * MessageWithRejoinDialogResult_GetRejoinDialogResult_mA75BE50835C5E199E453AC0A9EDF7C7C8BE3AEF9 (MessageWithRejoinDialogResult_tC73257DF5EC93BF84847377C306402A728170569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m6D8D4D99303FDC68FA1342E818BCE31E44A60C80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override RejoinDialogResult GetRejoinDialogResult() { return Data; }
		RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * L_0;
		L_0 = Message_1_get_Data_m6D8D4D99303FDC68FA1342E818BCE31E44A60C80_inline(__this, /*hidden argument*/Message_1_get_Data_m6D8D4D99303FDC68FA1342E818BCE31E44A60C80_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.RejoinDialogResult Oculus.Platform.MessageWithRejoinDialogResult::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * MessageWithRejoinDialogResult_GetDataFromMessage_m9F425B2F7AF6484205D5CC5838D91EB2AB7AA2A9 (MessageWithRejoinDialogResult_tC73257DF5EC93BF84847377C306402A728170569 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetRejoinDialogResult(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetRejoinDialogResult_m922168D0311A9E5261C2362F8FB1A203A87AFB8F((intptr_t)L_1, /*hidden argument*/NULL);
		// return new RejoinDialogResult(obj);
		RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * L_3 = (RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B *)il2cpp_codegen_object_new(RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B_il2cpp_TypeInfo_var);
		RejoinDialogResult__ctor_m5C70362A2AC08F13639253A097FC718D5722F468(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithSdkAccountList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithSdkAccountList__ctor_m4AF02715410C901F8295C0CC3611A53A9EC86EF4 (MessageWithSdkAccountList_tEDD9039DCFD8440604B127F54088D9F9FE64D112 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_mD8524ADDCA39B06E2F16CC2C7B1425107FF8FFAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithSdkAccountList(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_mD8524ADDCA39B06E2F16CC2C7B1425107FF8FFAA(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_mD8524ADDCA39B06E2F16CC2C7B1425107FF8FFAA_RuntimeMethod_var);
		// public MessageWithSdkAccountList(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.SdkAccountList Oculus.Platform.MessageWithSdkAccountList::GetSdkAccountList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * MessageWithSdkAccountList_GetSdkAccountList_mF2C4F27BEB39FF68333F311B5CEDFC2D623AFC0C (MessageWithSdkAccountList_tEDD9039DCFD8440604B127F54088D9F9FE64D112 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mBC32A7D51676A20F436A48462D9190C37595CAB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override SdkAccountList GetSdkAccountList() { return Data; }
		SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * L_0;
		L_0 = Message_1_get_Data_mBC32A7D51676A20F436A48462D9190C37595CAB3_inline(__this, /*hidden argument*/Message_1_get_Data_mBC32A7D51676A20F436A48462D9190C37595CAB3_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.SdkAccountList Oculus.Platform.MessageWithSdkAccountList::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * MessageWithSdkAccountList_GetDataFromMessage_m9B54654369D7AE02E79A1CD4F566DA80DBA620D6 (MessageWithSdkAccountList_tEDD9039DCFD8440604B127F54088D9F9FE64D112 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetSdkAccountArray(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetSdkAccountArray_mFA09C21CD0973CBEF169646912E230E3BA626CA3((intptr_t)L_1, /*hidden argument*/NULL);
		// return new SdkAccountList(obj);
		SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * L_3 = (SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 *)il2cpp_codegen_object_new(SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67_il2cpp_TypeInfo_var);
		SdkAccountList__ctor_m2569AC12C02DCE79DD2F4550750E2BD7CC3725A3(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithSendInvitesResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithSendInvitesResult__ctor_mF243F4C3F711585BE707B2CBE6A27CAAEE09141A (MessageWithSendInvitesResult_t10849A0325BC8A7586D1075C121CC365317B136D * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_mD575FC4B2819DB53A87794348EED896164DE179D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithSendInvitesResult(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_mD575FC4B2819DB53A87794348EED896164DE179D(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_mD575FC4B2819DB53A87794348EED896164DE179D_RuntimeMethod_var);
		// public MessageWithSendInvitesResult(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.SendInvitesResult Oculus.Platform.MessageWithSendInvitesResult::GetSendInvitesResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * MessageWithSendInvitesResult_GetSendInvitesResult_mA3E5CD45337CF6F7C59150BF4AED46F844FE3C28 (MessageWithSendInvitesResult_t10849A0325BC8A7586D1075C121CC365317B136D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m4D5FBBF797090009DB90155857A73A7DC70D031D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override SendInvitesResult GetSendInvitesResult() { return Data; }
		SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * L_0;
		L_0 = Message_1_get_Data_m4D5FBBF797090009DB90155857A73A7DC70D031D_inline(__this, /*hidden argument*/Message_1_get_Data_m4D5FBBF797090009DB90155857A73A7DC70D031D_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.SendInvitesResult Oculus.Platform.MessageWithSendInvitesResult::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * MessageWithSendInvitesResult_GetDataFromMessage_m804F2BA8AD07B5D6BB3AA73E76BEE5422F42F550 (MessageWithSendInvitesResult_t10849A0325BC8A7586D1075C121CC365317B136D * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetSendInvitesResult(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetSendInvitesResult_m73939EE77EFC748ACB1E274DD83A1C1B3397D0F6((intptr_t)L_1, /*hidden argument*/NULL);
		// return new SendInvitesResult(obj);
		SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * L_3 = (SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 *)il2cpp_codegen_object_new(SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130_il2cpp_TypeInfo_var);
		SendInvitesResult__ctor_mC2AB2F39DB83CB86B7C2A9F980FFD268101C8354(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithShareMediaResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithShareMediaResult__ctor_m3C0D7A2FDB8578A48D16AB61AF8A56EF1634590E (MessageWithShareMediaResult_t5E0E9076577438BD1D2B152AAA28B14294BDA0FE * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_mD27A6D0E98A84C59B1F0C96E0A11FD89F959F90E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithShareMediaResult(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_mD27A6D0E98A84C59B1F0C96E0A11FD89F959F90E(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_mD27A6D0E98A84C59B1F0C96E0A11FD89F959F90E_RuntimeMethod_var);
		// public MessageWithShareMediaResult(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.ShareMediaResult Oculus.Platform.MessageWithShareMediaResult::GetShareMediaResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * MessageWithShareMediaResult_GetShareMediaResult_m6D61C18FA0CC36C523315A8ECAD0941F48A96DD4 (MessageWithShareMediaResult_t5E0E9076577438BD1D2B152AAA28B14294BDA0FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m9DCC17362E8F6A8A4F8B75F31F14CFBE304AB8FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override ShareMediaResult GetShareMediaResult() { return Data; }
		ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * L_0;
		L_0 = Message_1_get_Data_m9DCC17362E8F6A8A4F8B75F31F14CFBE304AB8FD_inline(__this, /*hidden argument*/Message_1_get_Data_m9DCC17362E8F6A8A4F8B75F31F14CFBE304AB8FD_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.ShareMediaResult Oculus.Platform.MessageWithShareMediaResult::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * MessageWithShareMediaResult_GetDataFromMessage_mF7AB6223C3BAD7BDC82ACB308DD0144B6440A029 (MessageWithShareMediaResult_t5E0E9076577438BD1D2B152AAA28B14294BDA0FE * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetShareMediaResult(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetShareMediaResult_m09B8170F8E5E611911EB2BF4C018D230769566CB((intptr_t)L_1, /*hidden argument*/NULL);
		// return new ShareMediaResult(obj);
		ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * L_3 = (ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 *)il2cpp_codegen_object_new(ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7_il2cpp_TypeInfo_var);
		ShareMediaResult__ctor_m0AC8F70EACE4FF4E09F5BB82A1DB5D4AFFBD634E(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithString::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithString__ctor_mEA5C5759B064A36D004C36522BD0BC216F931C14 (MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m382EF902EB8C4AB6D8BF4D44CF55CCFE98EFD834_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithString(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m382EF902EB8C4AB6D8BF4D44CF55CCFE98EFD834(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m382EF902EB8C4AB6D8BF4D44CF55CCFE98EFD834_RuntimeMethod_var);
		// public MessageWithString(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// System.String Oculus.Platform.MessageWithString::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageWithString_GetString_mDBC4D96754FF692C2D2765F5F472C792E741DC10 (MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mB486C604742D203CD0503E8F3484961A78DD7A3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string GetString() { return Data; }
		String_t* L_0;
		L_0 = Message_1_get_Data_mB486C604742D203CD0503E8F3484961A78DD7A3D_inline(__this, /*hidden argument*/Message_1_get_Data_mB486C604742D203CD0503E8F3484961A78DD7A3D_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Oculus.Platform.MessageWithString::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageWithString_GetDataFromMessage_m6C91F5FDAC0E9B09C2479FE318CDD90F9C54B5C2 (MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CAPI.ovr_Message_GetString(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_Message_GetString_mE80BB87731A20FFFED442FE261121F956D434DE9((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Oculus.Platform.MessageWithSystemVoipState::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithSystemVoipState__ctor_m307D70E61F9B46C32C90C6C54EBA19A868D0BFA9 (MessageWithSystemVoipState_t5B41C6A9BDB38F24CD305CDC0EDC0117A83EAAC3 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m63CAA32FA5A2642D0F491DC4AF3E81AA1CE243BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithSystemVoipState(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m63CAA32FA5A2642D0F491DC4AF3E81AA1CE243BB(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m63CAA32FA5A2642D0F491DC4AF3E81AA1CE243BB_RuntimeMethod_var);
		// public MessageWithSystemVoipState(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.SystemVoipState Oculus.Platform.MessageWithSystemVoipState::GetSystemVoipState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * MessageWithSystemVoipState_GetSystemVoipState_m4CAD81A90BC61B52A66E0AC9277B86DA4FD99DDA (MessageWithSystemVoipState_t5B41C6A9BDB38F24CD305CDC0EDC0117A83EAAC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m08389972AB99036CC48CC68C41BCB11F8C651378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override SystemVoipState GetSystemVoipState() { return Data; }
		SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * L_0;
		L_0 = Message_1_get_Data_m08389972AB99036CC48CC68C41BCB11F8C651378_inline(__this, /*hidden argument*/Message_1_get_Data_m08389972AB99036CC48CC68C41BCB11F8C651378_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.SystemVoipState Oculus.Platform.MessageWithSystemVoipState::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * MessageWithSystemVoipState_GetDataFromMessage_m163ABA96515D21EE89F037592A40C8CC6C9AF5FC (MessageWithSystemVoipState_t5B41C6A9BDB38F24CD305CDC0EDC0117A83EAAC3 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetSystemVoipState(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetSystemVoipState_m9C8EC6B0CE3902EF4EF5109C5EC1A608FE8C984D((intptr_t)L_1, /*hidden argument*/NULL);
		// return new SystemVoipState(obj);
		SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * L_3 = (SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D *)il2cpp_codegen_object_new(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_il2cpp_TypeInfo_var);
		SystemVoipState__ctor_m9CC93A6027110E1938F59AEA8CA304EAD75DE1A5(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithUser::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUser__ctor_m730D7D735B30D18541ABD7EA7E96ACF9A71661A3 (MessageWithUser_tB1AA6D637359AC8DD3962CC88C54C2194CD02814 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_mD975C122123EFD5E4E03A569AB4E55B3AFAAA8C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithUser(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_mD975C122123EFD5E4E03A569AB4E55B3AFAAA8C4(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_mD975C122123EFD5E4E03A569AB4E55B3AFAAA8C4_RuntimeMethod_var);
		// public MessageWithUser(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.User Oculus.Platform.MessageWithUser::GetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_tA163463AE919860D9B337F6104B028990A44B69D * MessageWithUser_GetUser_m1AB02EE0029A36BCB3F01DDEEBA6088ABFAEBD94 (MessageWithUser_tB1AA6D637359AC8DD3962CC88C54C2194CD02814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m34E2CA3CD0598E90ADCE5A341675B293460CAC67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override User GetUser() { return Data; }
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_0;
		L_0 = Message_1_get_Data_m34E2CA3CD0598E90ADCE5A341675B293460CAC67_inline(__this, /*hidden argument*/Message_1_get_Data_m34E2CA3CD0598E90ADCE5A341675B293460CAC67_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.User Oculus.Platform.MessageWithUser::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_tA163463AE919860D9B337F6104B028990A44B69D * MessageWithUser_GetDataFromMessage_m9CCCA9CE34FCC122DF6E9AD32BB37CF3FBA24DAD (MessageWithUser_tB1AA6D637359AC8DD3962CC88C54C2194CD02814 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetUser(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetUser_m22D3848EF7C5E62062F0BA91837C95687F781D6E((intptr_t)L_1, /*hidden argument*/NULL);
		// return new User(obj);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_3 = (User_tA163463AE919860D9B337F6104B028990A44B69D *)il2cpp_codegen_object_new(User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithUserCapabilityList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserCapabilityList__ctor_mEFAB0A520A4B079C1634B6DC2355B4822E4E0621 (MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m77FA43E9C35513EB247784892C0AFC4DA3DF6B39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithUserCapabilityList(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m77FA43E9C35513EB247784892C0AFC4DA3DF6B39(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m77FA43E9C35513EB247784892C0AFC4DA3DF6B39_RuntimeMethod_var);
		// public MessageWithUserCapabilityList(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.UserCapabilityList Oculus.Platform.MessageWithUserCapabilityList::GetUserCapabilityList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * MessageWithUserCapabilityList_GetUserCapabilityList_m865244F2DDFD60481F7B3DFF4CEAA62B76C4DFB6 (MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mFB350CD32671DBBF7739B605F5BF265ABF8A1472_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override UserCapabilityList GetUserCapabilityList() { return Data; }
		UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * L_0;
		L_0 = Message_1_get_Data_mFB350CD32671DBBF7739B605F5BF265ABF8A1472_inline(__this, /*hidden argument*/Message_1_get_Data_mFB350CD32671DBBF7739B605F5BF265ABF8A1472_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.UserCapabilityList Oculus.Platform.MessageWithUserCapabilityList::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * MessageWithUserCapabilityList_GetDataFromMessage_mA3722D6FA87216A46F3DBA71007E0E76C0F1EA70 (MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetUserCapabilityArray(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetUserCapabilityArray_m5D4B0E02E06958BB590D9DDB6FF11C069F61478A((intptr_t)L_1, /*hidden argument*/NULL);
		// return new UserCapabilityList(obj);
		UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * L_3 = (UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 *)il2cpp_codegen_object_new(UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3_il2cpp_TypeInfo_var);
		UserCapabilityList__ctor_m5DBE9663571D2D276A8C9E21E860983C0D30C5D5(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithUserDataStoreUpdateResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserDataStoreUpdateResponse__ctor_m358009E8C89C752A36194735E890CB592CB274CC (MessageWithUserDataStoreUpdateResponse_t8433BBA9C50E0088378CB9E969DD6AE0768C087F * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m0670131EC1CEF12D96C7C5F66E7D3E7104E82744_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithUserDataStoreUpdateResponse(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m0670131EC1CEF12D96C7C5F66E7D3E7104E82744(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m0670131EC1CEF12D96C7C5F66E7D3E7104E82744_RuntimeMethod_var);
		// public MessageWithUserDataStoreUpdateResponse(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.UserDataStoreUpdateResponse Oculus.Platform.MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * MessageWithUserDataStoreUpdateResponse_GetUserDataStoreUpdateResponse_mF1FACAA566A5D238EF44029C48ED6D7B81D22698 (MessageWithUserDataStoreUpdateResponse_t8433BBA9C50E0088378CB9E969DD6AE0768C087F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m495270D04A1348D78D6F39B0F444A4C83DB129E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override UserDataStoreUpdateResponse GetUserDataStoreUpdateResponse() { return Data; }
		UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * L_0;
		L_0 = Message_1_get_Data_m495270D04A1348D78D6F39B0F444A4C83DB129E5_inline(__this, /*hidden argument*/Message_1_get_Data_m495270D04A1348D78D6F39B0F444A4C83DB129E5_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.UserDataStoreUpdateResponse Oculus.Platform.MessageWithUserDataStoreUpdateResponse::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * MessageWithUserDataStoreUpdateResponse_GetDataFromMessage_mCDF3B64D68331D171B12288BD750969238A0ED3B (MessageWithUserDataStoreUpdateResponse_t8433BBA9C50E0088378CB9E969DD6AE0768C087F * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetUserDataStoreUpdateResponse(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetUserDataStoreUpdateResponse_m1CE9F9CF63767AB738FB033DB492097D88B29D45((intptr_t)L_1, /*hidden argument*/NULL);
		// return new UserDataStoreUpdateResponse(obj);
		UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * L_3 = (UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 *)il2cpp_codegen_object_new(UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23_il2cpp_TypeInfo_var);
		UserDataStoreUpdateResponse__ctor_m3E731729E3C2C7895BFA9B683F4927F77FB144D0(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithUserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserList__ctor_m7C413ED3E7AFEBA4D51D57725FD1E39004BE5D08 (MessageWithUserList_t91526C487ECE33434977D1616F861F07043B84A7 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m3742CF83FD392211E9FA7D3815ABC7BC35CA834C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithUserList(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m3742CF83FD392211E9FA7D3815ABC7BC35CA834C(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m3742CF83FD392211E9FA7D3815ABC7BC35CA834C_RuntimeMethod_var);
		// public MessageWithUserList(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.UserList Oculus.Platform.MessageWithUserList::GetUserList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * MessageWithUserList_GetUserList_m8FD6B2013F63C6E1BDB371B4C8FE144A96774FD7 (MessageWithUserList_t91526C487ECE33434977D1616F861F07043B84A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mEF7E09C34A28D6EDB5254BCE61FBA692DBBF8423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override UserList GetUserList() { return Data; }
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_0;
		L_0 = Message_1_get_Data_mEF7E09C34A28D6EDB5254BCE61FBA692DBBF8423_inline(__this, /*hidden argument*/Message_1_get_Data_mEF7E09C34A28D6EDB5254BCE61FBA692DBBF8423_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.UserList Oculus.Platform.MessageWithUserList::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * MessageWithUserList_GetDataFromMessage_m7ADD85BF5FB3F66CFF64E2AB42EF769C253B5665 (MessageWithUserList_t91526C487ECE33434977D1616F861F07043B84A7 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetUserArray(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetUserArray_m6B14ED810C0EDE34CCA3E6E49675AC70E80235D6((intptr_t)L_1, /*hidden argument*/NULL);
		// return new UserList(obj);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_3 = (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B *)il2cpp_codegen_object_new(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithUserProof::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserProof__ctor_m40BB3E8C16C029979AE4B76AEA6C0A0E4AAF7FE3 (MessageWithUserProof_t503174B6378B6608C060882ACFE51784BBBE5C0A * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m35CEA4697319241E68E0EBBFB00CA0CF79280A07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithUserProof(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m35CEA4697319241E68E0EBBFB00CA0CF79280A07(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m35CEA4697319241E68E0EBBFB00CA0CF79280A07_RuntimeMethod_var);
		// public MessageWithUserProof(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.UserProof Oculus.Platform.MessageWithUserProof::GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * MessageWithUserProof_GetUserProof_mB181EBC2387A85817038F8C94BE28DDCE51A8C2B (MessageWithUserProof_t503174B6378B6608C060882ACFE51784BBBE5C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mD0A241216E707B8C45056F31AA2F5254041175B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override UserProof GetUserProof() { return Data; }
		UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * L_0;
		L_0 = Message_1_get_Data_mD0A241216E707B8C45056F31AA2F5254041175B0_inline(__this, /*hidden argument*/Message_1_get_Data_mD0A241216E707B8C45056F31AA2F5254041175B0_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.UserProof Oculus.Platform.MessageWithUserProof::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * MessageWithUserProof_GetDataFromMessage_m2DB393D2397DC7CC71ABACAE880BC6C8AA7DAD93 (MessageWithUserProof_t503174B6378B6608C060882ACFE51784BBBE5C0A * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetUserProof(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetUserProof_m79539EB0C21AB700B48FA134E6A6C7C835D80E6E((intptr_t)L_1, /*hidden argument*/NULL);
		// return new UserProof(obj);
		UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * L_3 = (UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 *)il2cpp_codegen_object_new(UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94_il2cpp_TypeInfo_var);
		UserProof__ctor_m471A1FE83FF7096DF8FB1478D23CF69B322AE015(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.MessageWithUserReportID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageWithUserReportID__ctor_mD29E1AAD3DF9A65F5FE43FE420B1663D7A643795 (MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1__ctor_m8EBB9A8A08953B21D03640589E09C0854EA9F892_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageWithUserReportID(IntPtr c_message) : base(c_message) { }
		intptr_t L_0 = ___c_message0;
		Message_1__ctor_m8EBB9A8A08953B21D03640589E09C0854EA9F892(__this, (intptr_t)L_0, /*hidden argument*/Message_1__ctor_m8EBB9A8A08953B21D03640589E09C0854EA9F892_RuntimeMethod_var);
		// public MessageWithUserReportID(IntPtr c_message) : base(c_message) { }
		return;
	}
}
// Oculus.Platform.Models.UserReportID Oculus.Platform.MessageWithUserReportID::GetUserReportID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * MessageWithUserReportID_GetUserReportID_m1F72BDFBD370612A796907DEA34F8C47CB15F8FE (MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mCFB82BE284C9D4375FC3040E88976D77D0526318_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override UserReportID GetUserReportID() { return Data; }
		UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * L_0;
		L_0 = Message_1_get_Data_mCFB82BE284C9D4375FC3040E88976D77D0526318_inline(__this, /*hidden argument*/Message_1_get_Data_mCFB82BE284C9D4375FC3040E88976D77D0526318_RuntimeMethod_var);
		return L_0;
	}
}
// Oculus.Platform.Models.UserReportID Oculus.Platform.MessageWithUserReportID::GetDataFromMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * MessageWithUserReportID_GetDataFromMessage_mFCFB95C6E1743402B95D432F45373D87C87E09FF (MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5 * __this, intptr_t ___c_message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var msg = CAPI.ovr_Message_GetNativeMessage(c_message);
		intptr_t L_0 = ___c_message0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Message_GetNativeMessage_m0980A10B5635FA700ADEBB6A88D4C8672B2E7868((intptr_t)L_0, /*hidden argument*/NULL);
		// var obj = CAPI.ovr_Message_GetUserReportID(msg);
		intptr_t L_2;
		L_2 = CAPI_ovr_Message_GetUserReportID_m0CB5173B4FD31239D321E7136BFFBC569AC9B459((intptr_t)L_1, /*hidden argument*/NULL);
		// return new UserReportID(obj);
		UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * L_3 = (UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB *)il2cpp_codegen_object_new(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB_il2cpp_TypeInfo_var);
		UserReportID__ctor_m803040AD62252F061FD2ABF0E74770B1AD920928(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.Models.MicrophoneAvailabilityState::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneAvailabilityState__ctor_m5B9C5CCB5278A4BCAD7B67A0D566DDF0697E6465 (MicrophoneAvailabilityState_t0427E2FFDB03FD29DF02E9A58315A8057B4E555E * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MicrophoneAvailabilityState(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MicrophoneAvailable = CAPI.ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable_m505FAC0E36949F3EA8D42679331429C4C51641A8((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_MicrophoneAvailable_0(L_1);
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
// System.Void Oculus.Platform.MultiplayerErrorOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerErrorOptions__ctor_mEB577853C685BE71C4A2F3CF3C370DC7BA93B902 (MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MultiplayerErrorOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_MultiplayerErrorOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_MultiplayerErrorOptions_Create_mCFCDB838E1609EEBD6C200405A33B38D41F7793E(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.MultiplayerErrorOptions::SetErrorKey(Oculus.Platform.MultiplayerErrorErrorKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerErrorOptions_SetErrorKey_m13B86599DD60C8953C48AAAFDDF2FC1755BA53A7 (MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_MultiplayerErrorOptions_SetErrorKey(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_MultiplayerErrorOptions_SetErrorKey_m988A1C739EFC05649FACE3E1F0E4AD1B006F6EE9((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.MultiplayerErrorOptions::op_Explicit(Oculus.Platform.MultiplayerErrorOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiplayerErrorOptions_op_Explicit_m93C93CD6B927D32A28949FA3AB0A1162FEDA8B4F (MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.MultiplayerErrorOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerErrorOptions_Finalize_mDD9FA923AEE52899D4D99330E949B4C96FF11F21 (MultiplayerErrorOptions_t646ED7B185420B3F8B3E989B85A7EDD4A72BFD31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_MultiplayerErrorOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_MultiplayerErrorOptions_Destroy_m83368691C0DBB89BC74B0B864CB1FEBB3AF83649((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void Oculus.Platform.NetSync::SetConnectionStatusChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSync_SetConnectionStatusChangedNotificationCallback_m455E2981D96B4026BA6D84A3DE09371B994767D8 (Callback_tF9F4D8460A4E004732BB102490FB3CFAF3D31B32 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisNetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324_mACFDAFE5B71C390DE1CAEF15936000053BED8045_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_NetSync_ConnectionStatusChanged,
		//   callback
		// );
		Callback_tF9F4D8460A4E004732BB102490FB3CFAF3D31B32 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisNetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324_mACFDAFE5B71C390DE1CAEF15936000053BED8045(((int32_t)120882378), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisNetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324_mACFDAFE5B71C390DE1CAEF15936000053BED8045_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.NetSync::SetSessionsChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSync_SetSessionsChangedNotificationCallback_m53281B81548A877809AE96A0ADB9621BD3509096 (Callback_t60F86BD9657BE364E22054946463272DE745A371 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisNetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289_m9B3B40950888BF8D54F127FC0FC517A2F5F3FA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_NetSync_SessionsChanged,
		//   callback
		// );
		Callback_t60F86BD9657BE364E22054946463272DE745A371 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisNetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289_m9B3B40950888BF8D54F127FC0FC517A2F5F3FA30(((int32_t)947814198), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisNetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289_m9B3B40950888BF8D54F127FC0FC517A2F5F3FA30_RuntimeMethod_var);
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
// System.Void Oculus.Platform.Models.NetSyncConnection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncConnection__ctor_mC289E460E28A06AA5DB4B7275BF32088321ED233 (NetSyncConnection_t2D5EA56A17B15D2EF489AF20CC3C9D8B9F4B5324 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetSyncConnection(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ConnectionId = CAPI.ovr_NetSyncConnection_GetConnectionId(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = CAPI_ovr_NetSyncConnection_GetConnectionId_mBEBAE043D7EF9022E73D4C77C85DAA2481B06941((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ConnectionId_0(L_1);
		// DisconnectReason = CAPI.ovr_NetSyncConnection_GetDisconnectReason(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CAPI_ovr_NetSyncConnection_GetDisconnectReason_m32D563940CB948944DFB2980264012DB5E077DC9((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_DisconnectReason_1(L_3);
		// SessionId = CAPI.ovr_NetSyncConnection_GetSessionId(o);
		intptr_t L_4 = ___o0;
		uint64_t L_5;
		L_5 = CAPI_ovr_NetSyncConnection_GetSessionId_m62CEFBB853F443F901B209FDE311B55F83422959((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_SessionId_2(L_5);
		// Status = CAPI.ovr_NetSyncConnection_GetStatus(o);
		intptr_t L_6 = ___o0;
		int32_t L_7;
		L_7 = CAPI_ovr_NetSyncConnection_GetStatus_mA489182E33C41E3B47744B6EA7801F7CA62D8AB6((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_Status_3(L_7);
		// ZoneId = CAPI.ovr_NetSyncConnection_GetZoneId(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_NetSyncConnection_GetZoneId_m342A30BEB8CD07991504F61841CB6EF93CCEA34B((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_ZoneId_4(L_9);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.NetSyncOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncOptions__ctor_m4F230BABBFAD58ECA19F97E3CA1CECEAA0EAA532 (NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetSyncOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_NetSyncOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_NetSyncOptions_Create_m2EC6864BC5222E27867B8AE77975B0FACDB622D7(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.NetSyncOptions::SetVoipGroup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncOptions_SetVoipGroup_m0C9CDCBFB1D234629F79B0B7FDF6B97CC0DCB7BD (NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_NetSyncOptions_SetVoipGroup(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		String_t* L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_NetSyncOptions_SetVoipGroup_mCA45B80C177C3C47CC0935E3B0A7ECCBF32373ED((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.NetSyncOptions::SetVoipStreamDefault(Oculus.Platform.NetSyncVoipStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncOptions_SetVoipStreamDefault_mD5C3E0F48BFA1D1367D1E26353AF37F9853F549C (NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_NetSyncOptions_SetVoipStreamDefault(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_NetSyncOptions_SetVoipStreamDefault_mB7600E55481D7750C58F7ACD135FE786AC613C81((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.NetSyncOptions::SetZoneId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncOptions_SetZoneId_mCD3BCC0F5E0B60BB484E8F776E3068F51FE0995B (NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_NetSyncOptions_SetZoneId(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		String_t* L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_NetSyncOptions_SetZoneId_mF6C7F3ADD7D8327A94EA0EBE3FA4FB09A8938B12((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.NetSyncOptions::op_Explicit(Oculus.Platform.NetSyncOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NetSyncOptions_op_Explicit_m0F37B879D76A73709ED4DA2483D62B13038CB6B4 (NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.NetSyncOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncOptions_Finalize_m939F9C3782C9529ADD3C78A200B763BF662CF109 (NetSyncOptions_t82C269BE48C98A19D7883B54BC643A9DCE068395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_NetSyncOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_NetSyncOptions_Destroy_mAB4BD18D0EC83DE7D9A2FA4296B0DCBF142FA2BF((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void Oculus.Platform.Models.NetSyncSession::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncSession__ctor_mB577A0CE105B49FFAAE241B880416A58D41317B8 (NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetSyncSession(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ConnectionId = CAPI.ovr_NetSyncSession_GetConnectionId(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = CAPI_ovr_NetSyncSession_GetConnectionId_mF2691C1C0304FA9FF9AC6DD447E7641B9BB8696E((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ConnectionId_0(L_1);
		// Muted = CAPI.ovr_NetSyncSession_GetMuted(o);
		intptr_t L_2 = ___o0;
		bool L_3;
		L_3 = CAPI_ovr_NetSyncSession_GetMuted_m62BCCBAF3DCA9B50FD6DBEBAD7AC7D44009DA013((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Muted_1(L_3);
		// SessionId = CAPI.ovr_NetSyncSession_GetSessionId(o);
		intptr_t L_4 = ___o0;
		uint64_t L_5;
		L_5 = CAPI_ovr_NetSyncSession_GetSessionId_m308F9CC4B80D88EDFF91CF86CDFF2C0AFB191A50((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_SessionId_2(L_5);
		// UserId = CAPI.ovr_NetSyncSession_GetUserId(o);
		intptr_t L_6 = ___o0;
		uint64_t L_7;
		L_7 = CAPI_ovr_NetSyncSession_GetUserId_mF1EB91628B246D0E23A5F0EEC2A95DE47285D622((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_UserId_3(L_7);
		// VoipGroup = CAPI.ovr_NetSyncSession_GetVoipGroup(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_NetSyncSession_GetVoipGroup_m5F05E0F8F8679F3FB36F78337BD708CD6D1A751F((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_VoipGroup_4(L_9);
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
// System.Void Oculus.Platform.Models.NetSyncSessionList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncSessionList__ctor_m2975C4EE609667BBD16BE3F4A583166C9F46A6FA (NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_mDD1CBDBD04AF818D91B3BFE4DE641967466B06A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m74EFE0FCFCB65235BED773C94CBD1F5693DC75E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72FE05C8D4575DB08E41D51CA886BC2B4E9D84C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t814689C58494A7CC08836709C95562576D4A3FD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public NetSyncSessionList(IntPtr a) {
		DeserializableList_1__ctor_mDD1CBDBD04AF818D91B3BFE4DE641967466B06A2(__this, /*hidden argument*/DeserializableList_1__ctor_mDD1CBDBD04AF818D91B3BFE4DE641967466B06A2_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_NetSyncSessionArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_NetSyncSessionArray_GetSize_m450C8C3A8EBEB1571AFEDAD0CC3DDB6C03FEAF95((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<NetSyncSession>(count);
		int32_t L_3 = V_0;
		List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * L_4 = (List_1_t814689C58494A7CC08836709C95562576D4A3FD1 *)il2cpp_codegen_object_new(List_1_t814689C58494A7CC08836709C95562576D4A3FD1_il2cpp_TypeInfo_var);
		List_1__ctor_m72FE05C8D4575DB08E41D51CA886BC2B4E9D84C9(L_4, L_3, /*hidden argument*/List_1__ctor_m72FE05C8D4575DB08E41D51CA886BC2B4E9D84C9_RuntimeMethod_var);
		((DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new NetSyncSession(CAPI.ovr_NetSyncSessionArray_GetElement(a, (UIntPtr)i)));
		List_1_t814689C58494A7CC08836709C95562576D4A3FD1 * L_5 = ((DeserializableList_1_tA04DB470B95CA88646B6B22C11FB4D107E4C306D *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_NetSyncSessionArray_GetElement_m529A416A3CC7F87C79C140449E7411A5E544573C((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * L_10 = (NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C *)il2cpp_codegen_object_new(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C_il2cpp_TypeInfo_var);
		NetSyncSession__ctor_mB577A0CE105B49FFAAE241B880416A58D41317B8(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m74EFE0FCFCB65235BED773C94CBD1F5693DC75E5(L_5, L_10, /*hidden argument*/List_1_Add_m74EFE0FCFCB65235BED773C94CBD1F5693DC75E5_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
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
// System.Void Oculus.Platform.Models.NetSyncSessionsChangedNotification::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncSessionsChangedNotification__ctor_m613C2B7C8D57A003A5B76F4D9AECFD3C4C092CBE (NetSyncSessionsChangedNotification_t87C9DA88F5DED376816765EC012ED79080B40289 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetSyncSessionsChangedNotification(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ConnectionId = CAPI.ovr_NetSyncSessionsChangedNotification_GetConnectionId(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = CAPI_ovr_NetSyncSessionsChangedNotification_GetConnectionId_m0B278EE36831B12E61500425FF2D933A4250B3C4((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ConnectionId_0(L_1);
		// Sessions = new NetSyncSessionList(CAPI.ovr_NetSyncSessionsChangedNotification_GetSessions(o));
		intptr_t L_2 = ___o0;
		intptr_t L_3;
		L_3 = CAPI_ovr_NetSyncSessionsChangedNotification_GetSessions_m6249EE5EDF6075AFE25FAC9491C43FADBF1E323A((intptr_t)L_2, /*hidden argument*/NULL);
		NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB * L_4 = (NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB *)il2cpp_codegen_object_new(NetSyncSessionList_t2F76CD91379D21C7DF41979738C984F622AF1CBB_il2cpp_TypeInfo_var);
		NetSyncSessionList__ctor_m2975C4EE609667BBD16BE3F4A583166C9F46A6FA(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_Sessions_1(L_4);
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
// System.Void Oculus.Platform.Models.NetSyncSetSessionPropertyResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncSetSessionPropertyResult__ctor_mCA8CA15C695C41B79AF7673330BA41C78F3FA3F7 (NetSyncSetSessionPropertyResult_tFCEA2F61938E59393B706C33A04601DFC843F535 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetSyncSetSessionPropertyResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Session = new NetSyncSession(CAPI.ovr_NetSyncSetSessionPropertyResult_GetSession(o));
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_NetSyncSetSessionPropertyResult_GetSession_mE51B95145562AD74AB923B6F2A702C9FD3AC79E9((intptr_t)L_0, /*hidden argument*/NULL);
		NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C * L_2 = (NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C *)il2cpp_codegen_object_new(NetSyncSession_t739AB02C8BCF22737D36CB64F2144EC37167FB1C_il2cpp_TypeInfo_var);
		NetSyncSession__ctor_mB577A0CE105B49FFAAE241B880416A58D41317B8(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_Session_0(L_2);
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
// System.Void Oculus.Platform.Models.NetSyncVoipAttenuationValue::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncVoipAttenuationValue__ctor_m8381C5CCF0C543C97D0695E3282AAF1EF10A6319 (NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetSyncVoipAttenuationValue(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Decibels = CAPI.ovr_NetSyncVoipAttenuationValue_GetDecibels(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CAPI_ovr_NetSyncVoipAttenuationValue_GetDecibels_mB20D252C89D750DF3C5CE6E42417CCF20E28A378((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Decibels_0(L_1);
		// Distance = CAPI.ovr_NetSyncVoipAttenuationValue_GetDistance(o);
		intptr_t L_2 = ___o0;
		float L_3;
		L_3 = CAPI_ovr_NetSyncVoipAttenuationValue_GetDistance_mE3B63AAB1E156F14EF261146F430CA5AD36A3D37((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Distance_1(L_3);
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
// System.Void Oculus.Platform.Models.NetSyncVoipAttenuationValueList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSyncVoipAttenuationValueList__ctor_mB25C244A39992342EDCCCCCCE1BE6481C63A7FD2 (NetSyncVoipAttenuationValueList_t8035C44D9A5692E3EEBDC7A6C5D677DF04D081BF * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m1FBFD17AFB3C32796D4C153A7331DDFF51431BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA8863CA185BF1BD52EB0A3186C57DC03F87F1B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFDD29EEB5DF2688668D2AA10EE44CBE2A97E555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public NetSyncVoipAttenuationValueList(IntPtr a) {
		DeserializableList_1__ctor_m1FBFD17AFB3C32796D4C153A7331DDFF51431BEE(__this, /*hidden argument*/DeserializableList_1__ctor_m1FBFD17AFB3C32796D4C153A7331DDFF51431BEE_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_NetSyncVoipAttenuationValueArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_NetSyncVoipAttenuationValueArray_GetSize_mD7150C380068135EFEA3D3820B39989FE8A502FD((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<NetSyncVoipAttenuationValue>(count);
		int32_t L_3 = V_0;
		List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * L_4 = (List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE *)il2cpp_codegen_object_new(List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE_il2cpp_TypeInfo_var);
		List_1__ctor_mBFDD29EEB5DF2688668D2AA10EE44CBE2A97E555(L_4, L_3, /*hidden argument*/List_1__ctor_mBFDD29EEB5DF2688668D2AA10EE44CBE2A97E555_RuntimeMethod_var);
		((DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new NetSyncVoipAttenuationValue(CAPI.ovr_NetSyncVoipAttenuationValueArray_GetElement(a, (UIntPtr)i)));
		List_1_tC50E971775E5905E6C9F427BD80DBF45C06297FE * L_5 = ((DeserializableList_1_tE14C481F6F6DD115EB01A58474BD7B4C01A78DDA *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_NetSyncVoipAttenuationValueArray_GetElement_m49B65D4C44C1B39383AA199934E5492BC489D638((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B * L_10 = (NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B *)il2cpp_codegen_object_new(NetSyncVoipAttenuationValue_t3BF8F4649F8477243333AFD0A871BE76F1B6D30B_il2cpp_TypeInfo_var);
		NetSyncVoipAttenuationValue__ctor_m8381C5CCF0C543C97D0695E3282AAF1EF10A6319(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_mA8863CA185BF1BD52EB0A3186C57DC03F87F1B96(L_5, L_10, /*hidden argument*/List_1_Add_mA8863CA185BF1BD52EB0A3186C57DC03F87F1B96_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request Oculus.Platform.Notifications::MarkAsRead(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Notifications_MarkAsRead_mDD0AF2117C3DF2FD2CECCAD74AB2431A1DC81C1E (uint64_t ___notificationID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request(CAPI.ovr_Notification_MarkAsRead(notificationID));
		uint64_t L_1 = ___notificationID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Notification_MarkAsRead_m87CF1A9B9131F8BF4F852871EBC584F6A2349469(L_1, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_3 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
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
// System.Void Oculus.Platform.Models.OrgScopedID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrgScopedID__ctor_m8E653E69DC22393635B356CB6006E0A20C1E0BEE (OrgScopedID_tB1BEECC4583C752389EFF379941DE6B72090B261 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OrgScopedID(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ID = CAPI.ovr_OrgScopedID_GetID(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_OrgScopedID_GetID_mD131B5B314E183C44CDFA498B5CCDEE97FEC7224((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ID_0(L_1);
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
// System.Void Oculus.Platform.Packet::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_m2B22160FAB4028F51DED7D513D6695A9F8695344 (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, intptr_t ___packetHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Packet(IntPtr packetHandle)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.packetHandle = packetHandle;
		intptr_t L_0 = ___packetHandle0;
		__this->set_packetHandle_1((intptr_t)L_0);
		// size = (ulong) CAPI.ovr_Packet_GetSize(packetHandle);
		intptr_t L_1 = ___packetHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = CAPI_ovr_Packet_GetSize_m8C80B9FD7FE225A913BDCE0D6AEBF6EDED74AF11((intptr_t)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = UIntPtr_op_Explicit_m5BE0C5F6B2C91B503F2F0AC4EE76F475CCD9A125(L_2, /*hidden argument*/NULL);
		__this->set_size_0(L_3);
		// }
		return;
	}
}
// System.UInt64 Oculus.Platform.Packet::ReadBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_ReadBytes_m0380D2B990896E5EC95075B6938695C856431D05 (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((ulong) destination.LongLength < size)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___destination0;
		NullCheck(L_0);
		uint64_t L_1 = __this->get_size_0();
		if ((!(((uint64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))))) < ((uint64_t)L_1))))
		{
			goto IL_0026;
		}
	}
	{
		// throw new System.ArgumentException(String.Format("Destination array was not big enough to hold {0} bytes", size));
		uint64_t L_2 = __this->get_size_0();
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE386A93B8C53D7B4E1348948EA384D48B27414CB)), L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadBytes_m0380D2B990896E5EC95075B6938695C856431D05_RuntimeMethod_var)));
	}

IL_0026:
	{
		// Marshal.Copy(CAPI.ovr_Packet_GetBytes(packetHandle), destination, 0, (int) size);
		intptr_t L_7 = __this->get_packetHandle_1();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = CAPI_ovr_Packet_GetBytes_m783C2688F18A4760921022252BB8F80686B9D55F((intptr_t)L_7, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___destination0;
		uint64_t L_10 = __this->get_size_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716((intptr_t)L_8, L_9, 0, ((int32_t)((int32_t)L_10)), /*hidden argument*/NULL);
		// return size;
		uint64_t L_11 = __this->get_size_0();
		return L_11;
	}
}
// System.UInt64 Oculus.Platform.Packet::get_SenderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_get_SenderID_m9B1AF58B764E2A6FE83FEA19C03FBEA6BCDE0F09 (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return CAPI.ovr_Packet_GetSenderID(packetHandle); }
		intptr_t L_0 = __this->get_packetHandle_1();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Packet_GetSenderID_m7109739EED4DFC909B375C36789EC73ED2EB93D8((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt64 Oculus.Platform.Packet::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_get_Size_m81363C510F076AB1B61C269DD311AE3532670001 (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, const RuntimeMethod* method)
{
	{
		// get { return size; }
		uint64_t L_0 = __this->get_size_0();
		return L_0;
	}
}
// System.Void Oculus.Platform.Packet::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Finalize_mA3C304628FC4CE533D6E88633E13798F3F95860C (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose();
		Packet_Dispose_m8660A927DFE7387F8EA24C1485890B3BE1A50C21(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Packet::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Dispose_m8660A927DFE7387F8EA24C1485890B3BE1A50C21 (Packet_t1B5C94FD74B0FCB7FBBE67D137CC0BAA36B3540A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_Packet_Free(packetHandle);
		intptr_t L_0 = __this->get_packetHandle_1();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Packet_Free_m6D955BA0E0340BE9189B53A0DD6345E8CFCB59AD((intptr_t)L_0, /*hidden argument*/NULL);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E(__this, /*hidden argument*/NULL);
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.Party> Oculus.Platform.Parties::GetCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035 * Parties_GetCurrent_mF9F1319BCB93C4AB726393D6617436DFA70C1DB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mBF5B02E55E7EACCE5000A1DEB5C79D09092ED4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.Party>(CAPI.ovr_Party_GetCurrent());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Party_GetCurrent_mC5EFBB2F0B0AEE921EC84747E0432275358EAF68(/*hidden argument*/NULL);
		Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035 * L_2 = (Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035 *)il2cpp_codegen_object_new(Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035_il2cpp_TypeInfo_var);
		Request_1__ctor_mBF5B02E55E7EACCE5000A1DEB5C79D09092ED4E6(L_2, L_1, /*hidden argument*/Request_1__ctor_mBF5B02E55E7EACCE5000A1DEB5C79D09092ED4E6_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tB5293422543EA1E44432A7E6E4A90D0E3C096035 *)NULL;
	}
}
// System.Void Oculus.Platform.Parties::SetPartyUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PartyUpdateNotification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parties_SetPartyUpdateNotificationCallback_mDD804DF0D6B3ABC46BA4F787E2B3EC7CFA5EFAD3 (Callback_t413C50F50EB8340B0AB5684D79EA7C09AEFE31BC * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisPartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5_mC4E991245619E93C941E1C994B0A21E94FB49B21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Party_PartyUpdate,
		//   callback
		// );
		Callback_t413C50F50EB8340B0AB5684D79EA7C09AEFE31BC * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisPartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5_mC4E991245619E93C941E1C994B0A21E94FB49B21(((int32_t)487688882), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisPartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5_mC4E991245619E93C941E1C994B0A21E94FB49B21_RuntimeMethod_var);
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
// System.Void Oculus.Platform.Models.Party::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Party__ctor_m5C796690334ABDABF17CB3632878ADA96D4B37DE (Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// public Party(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ID = CAPI.ovr_Party_GetID(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Party_GetID_mCD8D9A635AF0884CF5A5A5CC901814E8C7ACDA90((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ID_0(L_1);
		// var pointer = CAPI.ovr_Party_GetInvitedUsers(o);
		intptr_t L_2 = ___o0;
		intptr_t L_3;
		L_3 = CAPI_ovr_Party_GetInvitedUsers_mEA375E164DFDE8740E4F38BBF05E933BE2EEC4D1((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		// InvitedUsers = new UserList(pointer);
		intptr_t L_4 = V_0;
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_5 = (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B *)il2cpp_codegen_object_new(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_InvitedUsers_2(L_5);
		// if (pointer == IntPtr.Zero) {
		intptr_t L_6 = V_0;
		bool L_7;
		L_7 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// InvitedUsersOptional = null;
		__this->set_InvitedUsersOptional_1((UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B *)NULL);
		// } else {
		goto IL_0047;
	}

IL_003b:
	{
		// InvitedUsersOptional = InvitedUsers;
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_8 = __this->get_InvitedUsers_2();
		__this->set_InvitedUsersOptional_1(L_8);
	}

IL_0047:
	{
		// var pointer = CAPI.ovr_Party_GetLeader(o);
		intptr_t L_9 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = CAPI_ovr_Party_GetLeader_m061DA537125BFC8DDF8BC18801037BBBB8850128((intptr_t)L_9, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		// Leader = new User(pointer);
		intptr_t L_11 = V_1;
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_12 = (User_tA163463AE919860D9B337F6104B028990A44B69D *)il2cpp_codegen_object_new(User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961(L_12, (intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_Leader_4(L_12);
		// if (pointer == IntPtr.Zero) {
		intptr_t L_13 = V_1;
		bool L_14;
		L_14 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// LeaderOptional = null;
		__this->set_LeaderOptional_3((User_tA163463AE919860D9B337F6104B028990A44B69D *)NULL);
		// } else {
		goto IL_007c;
	}

IL_0070:
	{
		// LeaderOptional = Leader;
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_15 = __this->get_Leader_4();
		__this->set_LeaderOptional_3(L_15);
	}

IL_007c:
	{
		// var pointer = CAPI.ovr_Party_GetUsers(o);
		intptr_t L_16 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_17;
		L_17 = CAPI_ovr_Party_GetUsers_mE9A302579308A40B2A3A59144D1404D7C6BD4E31((intptr_t)L_16, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_17;
		// Users = new UserList(pointer);
		intptr_t L_18 = V_2;
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_19 = (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B *)il2cpp_codegen_object_new(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB(L_19, (intptr_t)L_18, /*hidden argument*/NULL);
		__this->set_Users_6(L_19);
		// if (pointer == IntPtr.Zero) {
		intptr_t L_20 = V_2;
		bool L_21;
		L_21 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_20, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		// UsersOptional = null;
		__this->set_UsersOptional_5((UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B *)NULL);
		// } else {
		return;
	}

IL_00a4:
	{
		// UsersOptional = Users;
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_22 = __this->get_Users_6();
		__this->set_UsersOptional_5(L_22);
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
// System.Void Oculus.Platform.Models.PartyID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartyID__ctor_m3BE1A3E44FD6DB114FEA3B8442282678A7C27E1B (PartyID_t885D13954216C8038402FF2D1F2B045654C6BA59 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PartyID(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ID = CAPI.ovr_PartyID_GetID(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_PartyID_GetID_m53F41687148C971E80E20966109255E5CBDE5034((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ID_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.PartyUpdateNotification::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartyUpdateNotification__ctor_m41B52CB6B04F8EFBB0A1B582C494B4C878A260D2 (PartyUpdateNotification_t9A4B180D376DE7EEFF2C79680C75B7A41E4F19D5 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PartyUpdateNotification(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Action = CAPI.ovr_PartyUpdateNotification_GetAction(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_PartyUpdateNotification_GetAction_mDFBBA36BB711D92367E08BADAEA21B4FB9FAB3FF((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Action_0(L_1);
		// PartyId = CAPI.ovr_PartyUpdateNotification_GetPartyId(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_PartyUpdateNotification_GetPartyId_m2D87ED5E4634DEC9384D6DDA169AA66182CDDA05((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_PartyId_1(L_3);
		// SenderId = CAPI.ovr_PartyUpdateNotification_GetSenderId(o);
		intptr_t L_4 = ___o0;
		uint64_t L_5;
		L_5 = CAPI_ovr_PartyUpdateNotification_GetSenderId_m75A00293FB0257ADD681235A58263E3E0FD20FAE((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_SenderId_2(L_5);
		// UpdateTimestamp = CAPI.ovr_PartyUpdateNotification_GetUpdateTimestamp(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_PartyUpdateNotification_GetUpdateTimestamp_m5232AC3BD5BCB6D261DECA5B77AE6D13561DA9C5((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_UpdateTimestamp_3(L_7);
		// UserAlias = CAPI.ovr_PartyUpdateNotification_GetUserAlias(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_PartyUpdateNotification_GetUserAlias_m4494B94E34F99A96DB3AC4059DE60CF15C67E752((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_UserAlias_4(L_9);
		// UserId = CAPI.ovr_PartyUpdateNotification_GetUserId(o);
		intptr_t L_10 = ___o0;
		uint64_t L_11;
		L_11 = CAPI_ovr_PartyUpdateNotification_GetUserId_m105CCC36B417F6C3DC31A852855510ED4241A8FE((intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_UserId_5(L_11);
		// UserName = CAPI.ovr_PartyUpdateNotification_GetUserName(o);
		intptr_t L_12 = ___o0;
		String_t* L_13;
		L_13 = CAPI_ovr_PartyUpdateNotification_GetUserName_m23B095B8D01B1114DD15080B1D32E80775B5A76A((intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_UserName_6(L_13);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.Pid::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pid__ctor_m2BD19BB59BA01B8CBED3A55F910A566C891C0877 (Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pid(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Id = CAPI.ovr_Pid_GetId(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_Pid_GetId_m3BF9EF228478FFE4CD6BC160F5B4821B1A57FDF6((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Id_0(L_1);
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
// System.Void Oculus.Platform.Models.PidList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PidList__ctor_m21442E690E1FC01F57A8A3B61073FE47BBBEC1DF (PidList_t891283A24E8065477D9F74286AE24A0AA94E50DC * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m45E981B3CAD57FC3D2F05787E2E59490BFDE629B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4EA18BB63BFEAF76AA407442A4E145110CFB0EFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBBEDF3751FFFC20A994E4509F6261E95EE1F0335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t76614734F621AFD54E4A1505402DFEE94376947F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public PidList(IntPtr a) {
		DeserializableList_1__ctor_m45E981B3CAD57FC3D2F05787E2E59490BFDE629B(__this, /*hidden argument*/DeserializableList_1__ctor_m45E981B3CAD57FC3D2F05787E2E59490BFDE629B_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_PidArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_PidArray_GetSize_m91778F9EA62F4D4CD4F02E0744B18055DA0CE316((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<Pid>(count);
		int32_t L_3 = V_0;
		List_1_t76614734F621AFD54E4A1505402DFEE94376947F * L_4 = (List_1_t76614734F621AFD54E4A1505402DFEE94376947F *)il2cpp_codegen_object_new(List_1_t76614734F621AFD54E4A1505402DFEE94376947F_il2cpp_TypeInfo_var);
		List_1__ctor_mBBEDF3751FFFC20A994E4509F6261E95EE1F0335(L_4, L_3, /*hidden argument*/List_1__ctor_mBBEDF3751FFFC20A994E4509F6261E95EE1F0335_RuntimeMethod_var);
		((DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new Pid(CAPI.ovr_PidArray_GetElement(a, (UIntPtr)i)));
		List_1_t76614734F621AFD54E4A1505402DFEE94376947F * L_5 = ((DeserializableList_1_t2B453A6BCB085AF02783A19CA28B9339DC3C1413 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_PidArray_GetElement_m4E35B3AECFC4FE475B0C443024A47216972F37D2((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5 * L_10 = (Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5 *)il2cpp_codegen_object_new(Pid_t3C0E388353BA69BB08D4C1B0199D7F92D6CEA5C5_il2cpp_TypeInfo_var);
		Pid__ctor_m2BD19BB59BA01B8CBED3A55F910A566C891C0877(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m4EA18BB63BFEAF76AA407442A4E145110CFB0EFF(L_5, L_10, /*hidden argument*/List_1_Add_m4EA18BB63BFEAF76AA407442A4E145110CFB0EFF_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
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
// System.Void Oculus.Platform.Models.PingResult::.ctor(System.UInt64,System.Nullable`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingResult__ctor_m927D3A2019192396815FBF407B162AA86A515AAE (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, uint64_t ___id0, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___pingTimeUsec1, const RuntimeMethod* method)
{
	{
		// public PingResult(UInt64 id, UInt64? pingTimeUsec) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.ID = id;
		uint64_t L_0 = ___id0;
		PingResult_set_ID_mF198896BB8E0C1E23B74F439F12B179E5747D5A2_inline(__this, L_0, /*hidden argument*/NULL);
		// this.pingTimeUsec = pingTimeUsec;
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  L_1 = ___pingTimeUsec1;
		__this->set_pingTimeUsec_1(L_1);
		// }
		return;
	}
}
// System.UInt64 Oculus.Platform.Models.PingResult::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PingResult_get_ID_mDF782C297DA1365591EDFB22741A75FEC8E9C724 (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, const RuntimeMethod* method)
{
	{
		// public UInt64 ID { get; private set; }
		uint64_t L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Oculus.Platform.Models.PingResult::set_ID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingResult_set_ID_mF198896BB8E0C1E23B74F439F12B179E5747D5A2 (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public UInt64 ID { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.UInt64 Oculus.Platform.Models.PingResult::get_PingTimeUsec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PingResult_get_PingTimeUsec_m70F0A542DAF04C6192FE3CB341DEEF5B4EB6C928 (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pingTimeUsec.HasValue ? pingTimeUsec.Value : 0;
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * L_0 = __this->get_address_of_pingTimeUsec_1();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_inline((Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *)L_0, /*hidden argument*/Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return ((int64_t)((int64_t)0));
	}

IL_0010:
	{
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * L_2 = __this->get_address_of_pingTimeUsec_1();
		uint64_t L_3;
		L_3 = Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB((Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *)L_2, /*hidden argument*/Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Oculus.Platform.Models.PingResult::get_IsTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PingResult_get_IsTimeout_mF482A82D5C03A7094D89463EE52141B6016EDCCE (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !pingTimeUsec.HasValue;
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * L_0 = __this->get_address_of_pingTimeUsec_1();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_inline((Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *)L_0, /*hidden argument*/Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void Oculus.Platform.Models.PlatformInitialize::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformInitialize__ctor_m5A95062D1CE9262141FEEE0E93D7980C988DBF30 (PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlatformInitialize(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Result = CAPI.ovr_PlatformInitialize_GetResult(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_PlatformInitialize_GetResult_m1C62B659D6FC74BE58CB2A3DB053C12210AA64C1((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Result_0(L_1);
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
// System.Void Oculus.Platform.PlatformInternal::CrashApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformInternal_CrashApplication_mCE253A4EAC2E2D2B3644B9F4C7FCCC44439EAB73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_CrashApplication();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_CrashApplication_mFD3B8BA997E721FED8B0EEF1CDE2202D975D53E3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// Oculus.Platform.Message Oculus.Platform.PlatformInternal::ParseMessageHandle(System.IntPtr,Oculus.Platform.Message/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * PlatformInternal_ParseMessageHandle_m7E786D5296CAD465173D2593820473355FDAC889 (intptr_t ___messageHandle0, uint32_t ___messageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithParty_t47591733C170E4A940E558968881918663246F23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// Message message = null;
		V_0 = (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *)NULL;
		// switch ((PlatformInternal.MessageTypeInternal)messageType)
		uint32_t L_0 = ___messageType1;
		V_1 = L_0;
		uint32_t L_1 = V_1;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)1317270237)))))
		{
			goto IL_01f2;
		}
	}
	{
		uint32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)645772532)))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)359268021)))))
		{
			goto IL_008e;
		}
	}
	{
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)271557598)))))
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)65065289))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)191729014))))
		{
			goto IL_041a;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)271557598))))
		{
			goto IL_0474;
		}
	}
	{
		goto IL_048d;
	}

IL_0050:
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)292822787)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)288016919))))
		{
			goto IL_0450;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)292822787))))
		{
			goto IL_0474;
		}
	}
	{
		goto IL_048d;
	}

IL_0073:
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)303837564))))
		{
			goto IL_047d;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)359268021))))
		{
			goto IL_0435;
		}
	}
	{
		goto IL_048d;
	}

IL_008e:
	{
		uint32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)432190251)))))
		{
			goto IL_00bc;
		}
	}
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)408048078))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)409847005))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)432190251))))
		{
			goto IL_0486;
		}
	}
	{
		goto IL_048d;
	}

IL_00bc:
	{
		uint32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)475495815)))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)450042703))))
		{
			goto IL_046b;
		}
	}
	{
		uint32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)475495815))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_00df:
	{
		uint32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)517416647))))
		{
			goto IL_0474;
		}
	}
	{
		uint32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)645772532))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_00fa:
	{
		uint32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)878018226)))))
		{
			goto IL_016e;
		}
	}
	{
		uint32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)822018158)))))
		{
			goto IL_0130;
		}
	}
	{
		uint32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)661065560))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)766496213))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)822018158))))
		{
			goto IL_0474;
		}
	}
	{
		goto IL_048d;
	}

IL_0130:
	{
		uint32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)848430801)))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)840263277))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)848430801))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_0153:
	{
		uint32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)855832432))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)878018226))))
		{
			goto IL_0474;
		}
	}
	{
		goto IL_048d;
	}

IL_016e:
	{
		uint32_t L_32 = V_1;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)1050353505)))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_33 = V_1;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)901104867)))))
		{
			goto IL_0199;
		}
	}
	{
		uint32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)882366454))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_35 = V_1;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)901104867))))
		{
			goto IL_046b;
		}
	}
	{
		goto IL_048d;
	}

IL_0199:
	{
		uint32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)921194380))))
		{
			goto IL_0474;
		}
	}
	{
		uint32_t L_37 = V_1;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)1050353505))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_01b4:
	{
		uint32_t L_38 = V_1;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)1286683246)))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_39 = V_1;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)1155796426))))
		{
			goto IL_042c;
		}
	}
	{
		uint32_t L_40 = V_1;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)1286683246))))
		{
			goto IL_0408;
		}
	}
	{
		goto IL_048d;
	}

IL_01d7:
	{
		uint32_t L_41 = V_1;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)1317133401))))
		{
			goto IL_0474;
		}
	}
	{
		uint32_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)1317270237))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_01f2:
	{
		uint32_t L_43 = V_1;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)1675623566)))))
		{
			goto IL_02f5;
		}
	}
	{
		uint32_t L_44 = V_1;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)1469314134)))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_45 = V_1;
		if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)1376744524)))))
		{
			goto IL_0233;
		}
	}
	{
		uint32_t L_46 = V_1;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)1328734477))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_47 = V_1;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)1343932350))))
		{
			goto IL_0423;
		}
	}
	{
		uint32_t L_48 = V_1;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)1376744524))))
		{
			goto IL_03fc;
		}
	}
	{
		goto IL_048d;
	}

IL_0233:
	{
		uint32_t L_49 = V_1;
		if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)1449304081)))))
		{
			goto IL_0256;
		}
	}
	{
		uint32_t L_50 = V_1;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)1434844938))))
		{
			goto IL_0447;
		}
	}
	{
		uint32_t L_51 = V_1;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)1449304081))))
		{
			goto IL_0486;
		}
	}
	{
		goto IL_048d;
	}

IL_0256:
	{
		uint32_t L_52 = V_1;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)1467721888))))
		{
			goto IL_0450;
		}
	}
	{
		uint32_t L_53 = V_1;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)1469314134))))
		{
			goto IL_0411;
		}
	}
	{
		goto IL_048d;
	}

IL_0271:
	{
		uint32_t L_54 = V_1;
		if ((!(((uint32_t)L_54) <= ((uint32_t)((int32_t)1553310963)))))
		{
			goto IL_02b7;
		}
	}
	{
		uint32_t L_55 = V_1;
		if ((!(((uint32_t)L_55) <= ((uint32_t)((int32_t)1480774160)))))
		{
			goto IL_029c;
		}
	}
	{
		uint32_t L_56 = V_1;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1477614734))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_57 = V_1;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)1480774160))))
		{
			goto IL_0474;
		}
	}
	{
		goto IL_048d;
	}

IL_029c:
	{
		uint32_t L_58 = V_1;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)1489764138))))
		{
			goto IL_0462;
		}
	}
	{
		uint32_t L_59 = V_1;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)1553310963))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_02b7:
	{
		uint32_t L_60 = V_1;
		if ((!(((uint32_t)L_60) <= ((uint32_t)((int32_t)1590749746)))))
		{
			goto IL_02da;
		}
	}
	{
		uint32_t L_61 = V_1;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)1586058173))))
		{
			goto IL_0459;
		}
	}
	{
		uint32_t L_62 = V_1;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)1590749746))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_02da:
	{
		uint32_t L_63 = V_1;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)1618513035))))
		{
			goto IL_0486;
		}
	}
	{
		uint32_t L_64 = V_1;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)1675623566))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_02f5:
	{
		uint32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) <= ((uint32_t)((int32_t)1819161571)))))
		{
			goto IL_0369;
		}
	}
	{
		uint32_t L_66 = V_1;
		if ((!(((uint32_t)L_66) <= ((uint32_t)((int32_t)1742839095)))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_67 = V_1;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)1684899167))))
		{
			goto IL_0435;
		}
	}
	{
		uint32_t L_68 = V_1;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)1701884605))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_69 = V_1;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)1742839095))))
		{
			goto IL_0447;
		}
	}
	{
		goto IL_048d;
	}

IL_032b:
	{
		uint32_t L_70 = V_1;
		if ((!(((uint32_t)L_70) <= ((uint32_t)((int32_t)1788128654)))))
		{
			goto IL_034e;
		}
	}
	{
		uint32_t L_71 = V_1;
		if ((((int32_t)L_71) == ((int32_t)((int32_t)1744993395))))
		{
			goto IL_046b;
		}
	}
	{
		uint32_t L_72 = V_1;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)1788128654))))
		{
			goto IL_03f0;
		}
	}
	{
		goto IL_048d;
	}

IL_034e:
	{
		uint32_t L_73 = V_1;
		if ((((int32_t)L_73) == ((int32_t)((int32_t)1798743375))))
		{
			goto IL_0474;
		}
	}
	{
		uint32_t L_74 = V_1;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)1819161571))))
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_048d;
	}

IL_0369:
	{
		uint32_t L_75 = V_1;
		if ((!(((uint32_t)L_75) <= ((uint32_t)((int32_t)1921499523)))))
		{
			goto IL_03ac;
		}
	}
	{
		uint32_t L_76 = V_1;
		if ((!(((uint32_t)L_76) <= ((uint32_t)((int32_t)1874211363)))))
		{
			goto IL_0394;
		}
	}
	{
		uint32_t L_77 = V_1;
		if ((((int32_t)L_77) == ((int32_t)((int32_t)1859521077))))
		{
			goto IL_043e;
		}
	}
	{
		uint32_t L_78 = V_1;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)1874211363))))
		{
			goto IL_0474;
		}
	}
	{
		goto IL_048d;
	}

IL_0394:
	{
		uint32_t L_79 = V_1;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)1895893271))))
		{
			goto IL_03f0;
		}
	}
	{
		uint32_t L_80 = V_1;
		if ((((int32_t)L_80) == ((int32_t)((int32_t)1921499523))))
		{
			goto IL_046b;
		}
	}
	{
		goto IL_048d;
	}

IL_03ac:
	{
		uint32_t L_81 = V_1;
		if ((!(((uint32_t)L_81) <= ((uint32_t)((int32_t)2066701532)))))
		{
			goto IL_03cc;
		}
	}
	{
		uint32_t L_82 = V_1;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)1990567876))))
		{
			goto IL_0474;
		}
	}
	{
		uint32_t L_83 = V_1;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)2066701532))))
		{
			goto IL_0423;
		}
	}
	{
		goto IL_048d;
	}

IL_03cc:
	{
		uint32_t L_84 = V_1;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)2077219214))))
		{
			goto IL_0474;
		}
	}
	{
		uint32_t L_85 = V_1;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)2139314275))))
		{
			goto IL_0408;
		}
	}
	{
		goto IL_048d;
	}

IL_03e4:
	{
		// message = new MessageWithAbuseReportRecording(messageHandle);
		intptr_t L_86 = ___messageHandle0;
		MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393 * L_87 = (MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393 *)il2cpp_codegen_object_new(MessageWithAbuseReportRecording_tFF93689E4EF8BC1ECEAB821554B7090D99998393_il2cpp_TypeInfo_var);
		MessageWithAbuseReportRecording__ctor_mBFD88B68B6CD74195C0A6EAC8D2B5AE77FDF6742(L_87, (intptr_t)L_86, /*hidden argument*/NULL);
		V_0 = L_87;
		// break;
		goto IL_048d;
	}

IL_03f0:
	{
		// message = new Message(messageHandle);
		intptr_t L_88 = ___messageHandle0;
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_89 = (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *)il2cpp_codegen_object_new(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_il2cpp_TypeInfo_var);
		Message__ctor_m1A40D0572AA2D65F83F585D5A181540D06436A78(L_89, (intptr_t)L_88, /*hidden argument*/NULL);
		V_0 = L_89;
		// break;
		goto IL_048d;
	}

IL_03fc:
	{
		// message = new MessageWithInstalledApplicationList(messageHandle);
		intptr_t L_90 = ___messageHandle0;
		MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4 * L_91 = (MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4 *)il2cpp_codegen_object_new(MessageWithInstalledApplicationList_t7113CB511EF3E462FEEB787582391FA3D8582DF4_il2cpp_TypeInfo_var);
		MessageWithInstalledApplicationList__ctor_m9F644ABC506351C01E655192262C6CAE640DDFF2(L_91, (intptr_t)L_90, /*hidden argument*/NULL);
		V_0 = L_91;
		// break;
		goto IL_048d;
	}

IL_0408:
	{
		// message = new MessageWithLaunchReportFlowResult(messageHandle);
		intptr_t L_92 = ___messageHandle0;
		MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2 * L_93 = (MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2 *)il2cpp_codegen_object_new(MessageWithLaunchReportFlowResult_t94E14C2558077B6B5B12E50C9D71AE30E42918A2_il2cpp_TypeInfo_var);
		MessageWithLaunchReportFlowResult__ctor_m86C2C6B01B44C2F71B921D84ED072D9827BCD266(L_93, (intptr_t)L_92, /*hidden argument*/NULL);
		V_0 = L_93;
		// break;
		goto IL_048d;
	}

IL_0411:
	{
		// message = new MessageWithLinkedAccountList(messageHandle);
		intptr_t L_94 = ___messageHandle0;
		MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E * L_95 = (MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E *)il2cpp_codegen_object_new(MessageWithLinkedAccountList_t3EA821069A0E468ACA5FBB51747C7FD50BDB096E_il2cpp_TypeInfo_var);
		MessageWithLinkedAccountList__ctor_m2C9BE65D4FE0B4899BBE906F8429A194AF4730C6(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		V_0 = L_95;
		// break;
		goto IL_048d;
	}

IL_041a:
	{
		// message = new MessageWithLivestreamingApplicationStatus(messageHandle);
		intptr_t L_96 = ___messageHandle0;
		MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197 * L_97 = (MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197 *)il2cpp_codegen_object_new(MessageWithLivestreamingApplicationStatus_t12B51B4EFBF6334DD1306E10E16A0B555BCDB197_il2cpp_TypeInfo_var);
		MessageWithLivestreamingApplicationStatus__ctor_mE203FE5F150E7055AB8C0A8A092F14E2500A2ADC(L_97, (intptr_t)L_96, /*hidden argument*/NULL);
		V_0 = L_97;
		// break;
		goto IL_048d;
	}

IL_0423:
	{
		// message = new MessageWithLivestreamingStartResult(messageHandle);
		intptr_t L_98 = ___messageHandle0;
		MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13 * L_99 = (MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13 *)il2cpp_codegen_object_new(MessageWithLivestreamingStartResult_t82AF73169F096F06881D2BDAEA24E28CE7673F13_il2cpp_TypeInfo_var);
		MessageWithLivestreamingStartResult__ctor_mD0C6D08084DAC44BDFD307155447E180D6F053C7(L_99, (intptr_t)L_98, /*hidden argument*/NULL);
		V_0 = L_99;
		// break;
		goto IL_048d;
	}

IL_042c:
	{
		// message = new MessageWithLivestreamingVideoStats(messageHandle);
		intptr_t L_100 = ___messageHandle0;
		MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03 * L_101 = (MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03 *)il2cpp_codegen_object_new(MessageWithLivestreamingVideoStats_t8F01CC42D962B6B041AB7082F8E346CE0F638F03_il2cpp_TypeInfo_var);
		MessageWithLivestreamingVideoStats__ctor_m09A46D7551394A5DE8EE61A93140BDAB50028E9F(L_101, (intptr_t)L_100, /*hidden argument*/NULL);
		V_0 = L_101;
		// break;
		goto IL_048d;
	}

IL_0435:
	{
		// message = new MessageWithNetSyncConnection(messageHandle);
		intptr_t L_102 = ___messageHandle0;
		MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF * L_103 = (MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF *)il2cpp_codegen_object_new(MessageWithNetSyncConnection_t53DA53BF4AA3CB862793CD705F28293566464FEF_il2cpp_TypeInfo_var);
		MessageWithNetSyncConnection__ctor_m446DB88513E55460ADDAB822FCD6E60BD956AB98(L_103, (intptr_t)L_102, /*hidden argument*/NULL);
		V_0 = L_103;
		// break;
		goto IL_048d;
	}

IL_043e:
	{
		// message = new MessageWithNetSyncSessionList(messageHandle);
		intptr_t L_104 = ___messageHandle0;
		MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A * L_105 = (MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A *)il2cpp_codegen_object_new(MessageWithNetSyncSessionList_tEA7897143720D031BF73A1A4CA10EC88404DEB6A_il2cpp_TypeInfo_var);
		MessageWithNetSyncSessionList__ctor_m80BD6BBCEB04A7F3E46AE41B60FB40F0C538E4BA(L_105, (intptr_t)L_104, /*hidden argument*/NULL);
		V_0 = L_105;
		// break;
		goto IL_048d;
	}

IL_0447:
	{
		// message = new MessageWithNetSyncSetSessionPropertyResult(messageHandle);
		intptr_t L_106 = ___messageHandle0;
		MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA * L_107 = (MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA *)il2cpp_codegen_object_new(MessageWithNetSyncSetSessionPropertyResult_tC1AEC3AEA3194D76548FA3DC009E9BE37EC0A3EA_il2cpp_TypeInfo_var);
		MessageWithNetSyncSetSessionPropertyResult__ctor_mDF42B8B6F67786BB9B2935497D5FBAC44BC15A7E(L_107, (intptr_t)L_106, /*hidden argument*/NULL);
		V_0 = L_107;
		// break;
		goto IL_048d;
	}

IL_0450:
	{
		// message = new MessageWithNetSyncVoipAttenuationValueList(messageHandle);
		intptr_t L_108 = ___messageHandle0;
		MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5 * L_109 = (MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5 *)il2cpp_codegen_object_new(MessageWithNetSyncVoipAttenuationValueList_t881380F1E2F4E9818357501C43185D4539C808C5_il2cpp_TypeInfo_var);
		MessageWithNetSyncVoipAttenuationValueList__ctor_m97C700DCF6F27B6AA4894756288CDEFEF5FA0E45(L_109, (intptr_t)L_108, /*hidden argument*/NULL);
		V_0 = L_109;
		// break;
		goto IL_048d;
	}

IL_0459:
	{
		// message = new MessageWithParty(messageHandle);
		intptr_t L_110 = ___messageHandle0;
		MessageWithParty_t47591733C170E4A940E558968881918663246F23 * L_111 = (MessageWithParty_t47591733C170E4A940E558968881918663246F23 *)il2cpp_codegen_object_new(MessageWithParty_t47591733C170E4A940E558968881918663246F23_il2cpp_TypeInfo_var);
		MessageWithParty__ctor_m89ED654642C9750ADE0674DDF68D349C2ADBE640(L_111, (intptr_t)L_110, /*hidden argument*/NULL);
		V_0 = L_111;
		// break;
		goto IL_048d;
	}

IL_0462:
	{
		// message = new MessageWithPartyUnderCurrentParty(messageHandle);
		intptr_t L_112 = ___messageHandle0;
		MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2 * L_113 = (MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2 *)il2cpp_codegen_object_new(MessageWithPartyUnderCurrentParty_t19C60DA9A79F63BC4EE0CF2F8750D8426CDF55E2_il2cpp_TypeInfo_var);
		MessageWithPartyUnderCurrentParty__ctor_m2FB74B3620D0628E27E76FB21EF5A757F6F7AB94(L_113, (intptr_t)L_112, /*hidden argument*/NULL);
		V_0 = L_113;
		// break;
		goto IL_048d;
	}

IL_046b:
	{
		// message = new MessageWithPartyID(messageHandle);
		intptr_t L_114 = ___messageHandle0;
		MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751 * L_115 = (MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751 *)il2cpp_codegen_object_new(MessageWithPartyID_t813B7D11655F5DD08B803A74D3F1A2DB1995A751_il2cpp_TypeInfo_var);
		MessageWithPartyID__ctor_mFBEFFC2A4371CF088D8C53F65C2CEBAB646E4EFC(L_115, (intptr_t)L_114, /*hidden argument*/NULL);
		V_0 = L_115;
		// break;
		goto IL_048d;
	}

IL_0474:
	{
		// message = new MessageWithString(messageHandle);
		intptr_t L_116 = ___messageHandle0;
		MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416 * L_117 = (MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416 *)il2cpp_codegen_object_new(MessageWithString_t8EF805C8B83F2FC72F3EB775E06BA6A85F56E416_il2cpp_TypeInfo_var);
		MessageWithString__ctor_mEA5C5759B064A36D004C36522BD0BC216F931C14(L_117, (intptr_t)L_116, /*hidden argument*/NULL);
		V_0 = L_117;
		// break;
		goto IL_048d;
	}

IL_047d:
	{
		// message = new MessageWithUserCapabilityList(messageHandle);
		intptr_t L_118 = ___messageHandle0;
		MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038 * L_119 = (MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038 *)il2cpp_codegen_object_new(MessageWithUserCapabilityList_tFC2B7FB058ACD2B2C093CACBC1FA3D93DB0F0038_il2cpp_TypeInfo_var);
		MessageWithUserCapabilityList__ctor_mEFAB0A520A4B079C1634B6DC2355B4822E4E0621(L_119, (intptr_t)L_118, /*hidden argument*/NULL);
		V_0 = L_119;
		// break;
		goto IL_048d;
	}

IL_0486:
	{
		// message = new MessageWithUserReportID(messageHandle);
		intptr_t L_120 = ___messageHandle0;
		MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5 * L_121 = (MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5 *)il2cpp_codegen_object_new(MessageWithUserReportID_tE907291C451176FAA049D711108B843C53D352F5_il2cpp_TypeInfo_var);
		MessageWithUserReportID__ctor_mD29E1AAD3DF9A65F5FE43FE420B1663D7A643795(L_121, (intptr_t)L_120, /*hidden argument*/NULL);
		V_0 = L_121;
	}

IL_048d:
	{
		// return message;
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_122 = V_0;
		return L_122;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.PlatformInternal::InitializeStandaloneAsync(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * PlatformInternal_InitializeStandaloneAsync_mB06B54E4E0C5547DD8411AE503DE49F2D54FADF9 (uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956_mA804A429919763B6A386C256F44F0559EE3D86CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9B869E8231B0DF58267CE8D7759A44EA3A1D964);
		s_Il2CppMethodInitialized = true;
	}
	Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * G_B2_0 = NULL;
	Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * G_B1_0 = NULL;
	{
		// var platform = new StandalonePlatform();
		StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * L_0 = (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A *)il2cpp_codegen_object_new(StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A_il2cpp_TypeInfo_var);
		StandalonePlatform__ctor_m3AE4474A8116A9398BB6F0430B68526EB20A56B2(L_0, /*hidden argument*/NULL);
		// var initRequest = platform.AsyncInitialize(appID, accessToken);
		uint64_t L_1 = ___appID0;
		String_t* L_2 = ___accessToken1;
		NullCheck(L_0);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_3;
		L_3 = StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E(L_0, L_1, L_2, /*hidden argument*/NULL);
		// if (initRequest == null)
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001a;
		}
	}
	{
		// throw new UnityException("Oculus Platform failed to initialize.");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_5 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46C357A4C93691C83EFEDB04BD0E8ED0A6E202CF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformInternal_InitializeStandaloneAsync_mB06B54E4E0C5547DD8411AE503DE49F2D54FADF9_RuntimeMethod_var)));
	}

IL_001a:
	{
		// Platform.Core.ForceInitialized();
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		Core_ForceInitialized_mFDF32C0D5CAA4CFCB504C543BFA9FC85FA8A5EDE(/*hidden argument*/NULL);
		// (new GameObject("Oculus.Platform.CallbackRunner")).AddComponent<CallbackRunner>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_6, _stringLiteralB9B869E8231B0DF58267CE8D7759A44EA3A1D964, /*hidden argument*/NULL);
		NullCheck(L_6);
		CallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956 * L_7;
		L_7 = GameObject_AddComponent_TisCallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956_mA804A429919763B6A386C256F44F0559EE3D86CE(L_6, /*hidden argument*/GameObject_AddComponent_TisCallbackRunner_tFB2E315BCCE4D13E83D948A4DBA42CB2624BA956_mA804A429919763B6A386C256F44F0559EE3D86CE_RuntimeMethod_var);
		// return initRequest;
		return G_B2_0;
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
// System.String Oculus.Platform.PlatformSettings::get_AppID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformSettings_get_AppID_m6097EA582644A8063A9D45489245D6AB9E902B54 (const RuntimeMethod* method)
{
	{
		// get { return Instance.ovrAppID; }
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0;
		L_0 = PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_ovrAppID_4();
		return L_1;
	}
}
// System.Void Oculus.Platform.PlatformSettings::set_AppID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSettings_set_AppID_m2AE9C1995F881853D58609D99D33B398F6B15B93 (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { Instance.ovrAppID = value; }
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0;
		L_0 = PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843(/*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		L_0->set_ovrAppID_4(L_1);
		// set { Instance.ovrAppID = value; }
		return;
	}
}
// System.String Oculus.Platform.PlatformSettings::get_MobileAppID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformSettings_get_MobileAppID_m08A26133A0E765EDCE4355FCC64A18F8FF67936B (const RuntimeMethod* method)
{
	{
		// get { return Instance.ovrMobileAppID; }
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0;
		L_0 = PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_ovrMobileAppID_5();
		return L_1;
	}
}
// System.Void Oculus.Platform.PlatformSettings::set_MobileAppID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSettings_set_MobileAppID_m5E2BB7F779C9B8A74719209E02890854F70486D3 (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { Instance.ovrMobileAppID = value; }
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0;
		L_0 = PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843(/*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		L_0->set_ovrMobileAppID_5(L_1);
		// set { Instance.ovrMobileAppID = value; }
		return;
	}
}
// System.Boolean Oculus.Platform.PlatformSettings::get_UseStandalonePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformSettings_get_UseStandalonePlatform_m667FFD8C8C5CC391972EB214D25F6ADEB66E087E (const RuntimeMethod* method)
{
	{
		// get { return Instance.ovrUseStandalonePlatform; }
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0;
		L_0 = PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = L_0->get_ovrUseStandalonePlatform_6();
		return L_1;
	}
}
// System.Void Oculus.Platform.PlatformSettings::set_UseStandalonePlatform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSettings_set_UseStandalonePlatform_mEA189C90CEC61B4B8A51201C85DD6BA995BCCA4F (bool ___value0, const RuntimeMethod* method)
{
	{
		// set { Instance.ovrUseStandalonePlatform = value; }
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0;
		L_0 = PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843(/*hidden argument*/NULL);
		bool L_1 = ___value0;
		NullCheck(L_0);
		L_0->set_ovrUseStandalonePlatform_6(L_1);
		// set { Instance.ovrUseStandalonePlatform = value; }
		return;
	}
}
// Oculus.Platform.PlatformSettings Oculus.Platform.PlatformSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * PlatformSettings_get_Instance_mBA4670054455746D813450B62CF9E002023CE843 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_mA934F318B1F311E0D6520075254E0B177D434BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_m5DEF2C7120175951508210018FE61F2A7E2C3BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral116E4E447ED60DC267CBBA2F800CCBEAC8DC4677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0 = ((PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields*)il2cpp_codegen_static_fields_for(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// instance = Resources.Load<PlatformSettings>("OculusPlatformSettings");
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_2;
		L_2 = Resources_Load_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_mA934F318B1F311E0D6520075254E0B177D434BE3(_stringLiteral116E4E447ED60DC267CBBA2F800CCBEAC8DC4677, /*hidden argument*/Resources_Load_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_mA934F318B1F311E0D6520075254E0B177D434BE3_RuntimeMethod_var);
		((PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields*)il2cpp_codegen_static_fields_for(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var))->set_instance_7(L_2);
		// if (instance == null)
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_3 = ((PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields*)il2cpp_codegen_static_fields_for(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// instance = ScriptableObject.CreateInstance<PlatformSettings>();
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_5;
		L_5 = ScriptableObject_CreateInstance_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_m5DEF2C7120175951508210018FE61F2A7E2C3BE1(/*hidden argument*/ScriptableObject_CreateInstance_TisPlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_m5DEF2C7120175951508210018FE61F2A7E2C3BE1_RuntimeMethod_var);
		((PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields*)il2cpp_codegen_static_fields_for(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var))->set_instance_7(L_5);
	}

IL_0033:
	{
		// return instance;
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_6 = ((PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields*)il2cpp_codegen_static_fields_for(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var))->get_instance_7();
		return L_6;
	}
}
// System.Void Oculus.Platform.PlatformSettings::set_Instance(Oculus.Platform.PlatformSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSettings_set_Instance_m01DA4C1EDAC24E9971E1EEAD984021A789D5EA41 (PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = value;
		PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * L_0 = ___value0;
		((PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_StaticFields*)il2cpp_codegen_static_fields_for(PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_il2cpp_TypeInfo_var))->set_instance_7(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.PlatformSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSettings__ctor_mD42716FCFC435E3D04E4D58AF6DA201ECFCF16AE (PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string ovrAppID = "";
		__this->set_ovrAppID_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string ovrMobileAppID = "";
		__this->set_ovrMobileAppID_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private bool ovrUseStandalonePlatform = true;
		__this->set_ovrUseStandalonePlatform_6((bool)1);
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
// System.Void Oculus.Platform.Models.Product::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Product__ctor_mB7FB491D8CBF0441B194271CF38C221D2F568850 (Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Product(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Description = CAPI.ovr_Product_GetDescription(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_Product_GetDescription_m15B4D71ACDD687423958488545CFD9EA26125919((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Description_0(L_1);
		// FormattedPrice = CAPI.ovr_Product_GetFormattedPrice(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CAPI_ovr_Product_GetFormattedPrice_m56F448DE3D73C2666AF1834060BA1885DECADBCF((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_FormattedPrice_1(L_3);
		// Name = CAPI.ovr_Product_GetName(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_Product_GetName_mCF13F3EAFFC8A9C24D6B9108B325B9C6479D1FD2((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_Name_2(L_5);
		// Sku = CAPI.ovr_Product_GetSKU(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_Product_GetSKU_m14A717F1B65F995688518F2E5DD07AD263D55B8E((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_Sku_3(L_7);
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
// System.Void Oculus.Platform.Models.ProductList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductList__ctor_m58AF4F93816E9220F25C729A900621211795F6BF (ProductList_tC2405EC15E1F8BA7208810CB03DC828362BE293F * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public ProductList(IntPtr a) {
		DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340(__this, /*hidden argument*/DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_ProductArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_ProductArray_GetSize_m40DC8DD02E29249F5FD58B9ACAC31048E68BA55E((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<Product>(count);
		int32_t L_3 = V_0;
		List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * L_4 = (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D *)il2cpp_codegen_object_new(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_il2cpp_TypeInfo_var);
		List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976(L_4, L_3, /*hidden argument*/List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976_RuntimeMethod_var);
		((DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new Product(CAPI.ovr_ProductArray_GetElement(a, (UIntPtr)i)));
		List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * L_5 = ((DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_ProductArray_GetElement_mA63580FBE27AB0DBABFDEE1BCF1B00FE16948646((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * L_10 = (Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 *)il2cpp_codegen_object_new(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70_il2cpp_TypeInfo_var);
		Product__ctor_mB7FB491D8CBF0441B194271CF38C221D2F568850(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9(L_5, L_10, /*hidden argument*/List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_ProductArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_ProductArray_GetNextUrl_m57F1FD1FD94E39D52FAC553F67917133B42620D5((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *)__this)->set__NextUrl_1(L_15);
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
// System.Void Oculus.Platform.Models.Purchase::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Purchase(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DeveloperPayload = CAPI.ovr_Purchase_GetDeveloperPayload(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_Purchase_GetDeveloperPayload_mFF7FC7A1C3422069EC5A78F7AD71E3A6DFD7CFE1((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DeveloperPayload_0(L_1);
		// ExpirationTime = CAPI.ovr_Purchase_GetExpirationTime(o);
		intptr_t L_2 = ___o0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = CAPI_ovr_Purchase_GetExpirationTime_mD3DD5A8EBCEA863444C55B909BFEF48ACDCF2BBA((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ExpirationTime_1(L_3);
		// GrantTime = CAPI.ovr_Purchase_GetGrantTime(o);
		intptr_t L_4 = ___o0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = CAPI_ovr_Purchase_GetGrantTime_mBC9EE7DEDA704D90969EC8416EF68795607D7017((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_GrantTime_2(L_5);
		// ID = CAPI.ovr_Purchase_GetPurchaseStrID(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_Purchase_GetPurchaseStrID_mB63F95844403853F3905230E043DFD5E20E97624((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_ID_3(L_7);
		// ReportingId = CAPI.ovr_Purchase_GetReportingId(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_Purchase_GetReportingId_mC1598316FD43E3EB25E077CF2CCF2C1C7D0FF79C((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_ReportingId_4(L_9);
		// Sku = CAPI.ovr_Purchase_GetSKU(o);
		intptr_t L_10 = ___o0;
		String_t* L_11;
		L_11 = CAPI_ovr_Purchase_GetSKU_mF5EFC4F0C73B4DA234B2215F572DB8C585BE003E((intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_Sku_5(L_11);
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
// System.Void Oculus.Platform.Models.PurchaseList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseList__ctor_m9F6F5731BB0F2BE4D2592D58F800695E5EF6C9E8 (PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEF576F33659755044A466574FB2C3AE99B17F353_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public PurchaseList(IntPtr a) {
		DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60(__this, /*hidden argument*/DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_PurchaseArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_PurchaseArray_GetSize_m8578F21A7F8ABD888FFF976DFA9062D3171D8CCB((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<Purchase>(count);
		int32_t L_3 = V_0;
		List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * L_4 = (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 *)il2cpp_codegen_object_new(List_1_tEF576F33659755044A466574FB2C3AE99B17F353_il2cpp_TypeInfo_var);
		List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2(L_4, L_3, /*hidden argument*/List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2_RuntimeMethod_var);
		((DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new Purchase(CAPI.ovr_PurchaseArray_GetElement(a, (UIntPtr)i)));
		List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * L_5 = ((DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_PurchaseArray_GetElement_mD205FBC22129D2F4BA7FADF07D082E894CF53AB6((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * L_10 = (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 *)il2cpp_codegen_object_new(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var);
		Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4(L_5, L_10, /*hidden argument*/List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_PurchaseArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_PurchaseArray_GetNextUrl_m495A713EEC702EF65070D261B63CBD29C49FFE73((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *)__this)->set__NextUrl_1(L_15);
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
// System.Void Oculus.Platform.Models.RejoinDialogResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RejoinDialogResult__ctor_m5C70362A2AC08F13639253A097FC718D5722F468 (RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RejoinDialogResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// RejoinSelected = CAPI.ovr_RejoinDialogResult_GetRejoinSelected(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_RejoinDialogResult_GetRejoinSelected_m61B5E6D392ED7942ED091F03999CC9BD24285CAC((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_RejoinSelected_0(L_1);
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
// System.Void ReportingCallbackSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_Start_m06256C70B115DA25C94BA0902DACA4759450E8BF (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB40CF1C1F630131B1A52C4D34047CFF6EA8550);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateConsole("Init Oculus Platform SDK...");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral6FB40CF1C1F630131B1A52C4D34047CFF6EA8550, /*hidden argument*/NULL);
		// Core.AsyncInitialize().OnComplete(message => {
		//   if (message.IsError)
		//   {
		//     // Init failed, nothing will work
		//     UpdateConsole(message.GetError().Message);
		//   }
		//   else
		//   {
		//     UpdateConsole("Init complete!");
		// 
		//     /**
		//      * Listen for when user clicks AUI report button
		//      */
		//     AbuseReport.SetReportButtonPressedNotificationCallback(OnReportButtonIntentNotif);
		//     UpdateConsole("Registered callback");
		//   }
		// });
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_0;
		L_0 = Core_AsyncInitialize_m810A216428A23B318E7AD27857CC0BBE7F5523FE((String_t*)NULL, /*hidden argument*/NULL);
		Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * L_1 = (Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 *)il2cpp_codegen_object_new(Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65_il2cpp_TypeInfo_var);
		Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41(L_1, __this, (intptr_t)((intptr_t)ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41_RuntimeMethod_var);
		NullCheck(L_0);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_2;
		L_2 = Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3(L_0, L_1, /*hidden argument*/Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ReportingCallbackSample::OnReportButtonIntentNotif(Oculus.Platform.Message`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816745CC7F0FA623F30FB7047D44B28470A22E3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B005016BA6EACBD6E43AE5406ED06DC90B5130);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message.IsError)
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// UpdateConsole(message.GetError().Message);
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_2 = ___message0;
		NullCheck(L_2);
		Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * L_3;
		L_3 = VirtFuncInvoker0< Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_Message_2();
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, L_4, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_001a:
	{
		// UpdateConsole("Send that response is handled");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral85B005016BA6EACBD6E43AE5406ED06DC90B5130, /*hidden argument*/NULL);
		// AbuseReport.ReportRequestHandled(ReportRequestResponse.Handled);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_5;
		L_5 = AbuseReport_ReportRequestHandled_m46D967CF319961FA998674E529406F24F3B5E455(1, /*hidden argument*/NULL);
		// UpdateConsole("Response has been handled!");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral816745CC7F0FA623F30FB7047D44B28470A22E3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReportingCallbackSample::UpdateConsole(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7 (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00058DA5D352C716F467D078B396A55F8B3E577B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(value);
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_0, /*hidden argument*/NULL);
		// InVRConsole.text =
		//   "Welcome to the Sample Reporting Callback App\n\n" + value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_InVRConsole_4();
		String_t* L_2 = ___value0;
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral00058DA5D352C716F467D078B396A55F8B3E577B, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void ReportingCallbackSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample__ctor_mDD84CF8E45829F1CDC7760C095D6F3801EC6B35C (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ReportingCallbackSample::<Start>b__2_0(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3 (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A48AE0244C4827DF94FFD923478E861AB533848);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56CBBCD2565BB1E1874EA571ED1232298CB88E75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message.IsError)
		Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977 * L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// UpdateConsole(message.GetError().Message);
		Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977 * L_2 = ___message0;
		NullCheck(L_2);
		Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * L_3;
		L_3 = VirtFuncInvoker0< Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_Message_2();
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// UpdateConsole("Init complete!");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral56CBBCD2565BB1E1874EA571ED1232298CB88E75, /*hidden argument*/NULL);
		// AbuseReport.SetReportButtonPressedNotificationCallback(OnReportButtonIntentNotif);
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_5 = (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *)il2cpp_codegen_object_new(Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var);
		Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47(L_5, __this, (intptr_t)((intptr_t)ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC_RuntimeMethod_var), /*hidden argument*/Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var);
		AbuseReport_SetReportButtonPressedNotificationCallback_m831491BFAE4C6B2AFAD1B494B56B8D32C0C58FC1(L_5, /*hidden argument*/NULL);
		// UpdateConsole("Registered callback");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral4A48AE0244C4827DF94FFD923478E861AB533848, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.Request::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	{
		// public Request(ulong requestID) {this.RequestID = requestID;}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public Request(ulong requestID) {this.RequestID = requestID;}
		uint64_t L_0 = ___requestID0;
		Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF_inline(__this, L_0, /*hidden argument*/NULL);
		// public Request(ulong requestID) {this.RequestID = requestID;}
		return;
	}
}
// System.UInt64 Oculus.Platform.Request::get_RequestID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Request_get_RequestID_m2FC9CBB00C4E9062465F6B4A7487104F8A7338BC (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, const RuntimeMethod* method)
{
	{
		// public ulong RequestID {get; set;}
		uint64_t L_0 = __this->get_U3CRequestIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Platform.Request::set_RequestID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong RequestID {get; set;}
		uint64_t L_0 = ___value0;
		__this->set_U3CRequestIDU3Ek__BackingField_1(L_0);
		return;
	}
}
// Oculus.Platform.Request Oculus.Platform.Request::OnComplete(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Request_OnComplete_mDD83CB14C5B7BC1C0B9CE8DE61D77F43F918588B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callback_ = callback;
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = ___callback0;
		__this->set_callback__0(L_0);
		// Callback.AddRequest(this);
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_AddRequest_mFA701F763726249BE988194368240B026FC319B8(__this, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// System.Void Oculus.Platform.Request::HandleMessage(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_HandleMessage_mECFAD6677F9DBD582011DFDA2BE7FD1B87DD3F13 (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method)
{
	{
		// if (callback_ != null)
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = __this->get_callback__0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// callback_(msg);
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_1 = __this->get_callback__0();
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_2 = ___msg0;
		NullCheck(L_1);
		Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0015:
	{
		// throw new UnityException("Request with no handler.  This should never happen.");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_3 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral490E7A78D754BCECC6CF945C78681E1F4248DFB5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Request_HandleMessage_mECFAD6677F9DBD582011DFDA2BE7FD1B87DD3F13_RuntimeMethod_var)));
	}
}
// System.Void Oculus.Platform.Request::RunCallbacks(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_RunCallbacks_mFF290C76CEC75A31D2BA6E8003906915952F7CB6 (uint32_t ___limit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (limit == 0)
		uint32_t L_0 = ___limit0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// Callback.RunCallbacks();
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_RunCallbacks_m5A78DD8A17B173692A0DB672DC6B442A807F2891(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0009:
	{
		// Callback.RunLimitedCallbacks(limit);
		uint32_t L_1 = ___limit0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_RunLimitedCallbacks_mE471A0A03052028BC1E4C43407E6EDF73DECD555(L_1, /*hidden argument*/NULL);
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
// Oculus.Platform.Request Oculus.Platform.RichPresence::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * RichPresence_Clear_m5ED6344375C9CE20DC9ACB7C90247D557BA20976 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request(CAPI.ovr_RichPresence_Clear());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_RichPresence_Clear_mD90AE0F0CE11041DE8CD4E12FA3B5B14729CAF06(/*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_2 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList> Oculus.Platform.RichPresence::GetDestinations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * RichPresence_GetDestinations_mAE1065C77D2BD22ED58D9A97AFD6045F40C1BB88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.DestinationList>(CAPI.ovr_RichPresence_GetDestinations());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_RichPresence_GetDestinations_m4428CC655FA8FF7B41D83BF79A02E172B66DDE26(/*hidden argument*/NULL);
		Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * L_2 = (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)il2cpp_codegen_object_new(Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A(L_2, L_1, /*hidden argument*/Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)NULL;
	}
}
// Oculus.Platform.Request Oculus.Platform.RichPresence::Set(Oculus.Platform.RichPresenceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * RichPresence_Set_m636715734D8858F2EF1E723BB7830224B99B543C (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * ___richPresenceOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// return new Request(CAPI.ovr_RichPresence_Set((IntPtr)richPresenceOptions));
		RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * L_1 = ___richPresenceOptions0;
		intptr_t L_2;
		L_2 = RichPresenceOptions_op_Explicit_mE0053F8C425039EA127AB948C75EBED9A5352C96(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_RichPresence_Set_m9C6E65BB5CE78F922D4E71B871D104A970BBAC1D((intptr_t)L_2, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_4 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0018:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList> Oculus.Platform.RichPresence::GetNextDestinationListPage(Oculus.Platform.Models.DestinationList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * RichPresence_GetNextDestinationListPage_m83AA9F089FDACB79E5CFED51997112C0F0ECB4EF (DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33157D9C9F7D31AF8194BEB1C5D43B3972AC216D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextDestinationListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral33157D9C9F7D31AF8194BEB1C5D43B3972AC216D, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.DestinationList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.RichPresence_GetNextDestinationArrayPage
		//   )
		// );
		DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m3ADC2C3BFF17A426ECE7CA61B3A84451BAD3CF40(L_4, ((int32_t)1731624773), /*hidden argument*/NULL);
		Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * L_6 = (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)il2cpp_codegen_object_new(Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A(L_6, L_5, /*hidden argument*/Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)NULL;
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
// System.Void Oculus.Platform.RichPresenceOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RichPresenceOptions__ctor_m9982F99C3C2AECF8DD7C8F3C5BE56D151D0766B4 (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RichPresenceOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_RichPresenceOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_RichPresenceOptions_Create_m2AB8FB70A3821D882751E0550CD7BCF1D132C618(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.RichPresenceOptions::op_Explicit(Oculus.Platform.RichPresenceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RichPresenceOptions_op_Explicit_mE0053F8C425039EA127AB948C75EBED9A5352C96 (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.RichPresenceOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RichPresenceOptions_Finalize_mB3870233C19145F22AD397A57FE2195665603473 (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_RichPresenceOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RichPresenceOptions_Destroy_m19E16B60CE67C76D0E0AB3A1B5E1A28593DF7D1E((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void Oculus.Platform.RosterOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions__ctor_mC2D8EC73EBD1BA5EA04BB93BF0A875803C8DDCB5 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RosterOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_RosterOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_RosterOptions_Create_mDC582A8A0E8CD840D59441D8714EF645D49A5973(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RosterOptions::AddSuggestedUser(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions_AddSuggestedUser_mACB06D9032944F0BD08268AA17F7D861D9A11EC7 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RosterOptions_AddSuggestedUser(Handle, userID);
		intptr_t L_0 = __this->get_Handle_0();
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RosterOptions_AddSuggestedUser_m42AA151EA6E2441B9DA1D0B52BC367995EA31AA6((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RosterOptions::ClearSuggestedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions_ClearSuggestedUsers_m6A6860509561C23357F21271F78409F797F97595 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RosterOptions_ClearSuggestedUsers(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RosterOptions_ClearSuggestedUsers_m3F2DD787B8C9F0AB527B0842257F2C47BC98A2E6((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.RosterOptions::op_Explicit(Oculus.Platform.RosterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RosterOptions_op_Explicit_mC14BA33FBF168629F0B383E428ECC177A8A6F438 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.RosterOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions_Finalize_mF553D67F532DDE2E3BB037A393D15E0F53CCFD42 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_RosterOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RosterOptions_Destroy_m83C8373F00F3005BEFF54481812904D1DD1C21FC((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void Oculus.Platform.Models.SdkAccount::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7 (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SdkAccount(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AccountType = CAPI.ovr_SdkAccount_GetAccountType(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_SdkAccount_GetAccountType_mBB04A3492BD6E249CFBD46CB52E803985520D3AB((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_AccountType_0(L_1);
		// UserId = CAPI.ovr_SdkAccount_GetUserId(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_SdkAccount_GetUserId_mAE39490C9AB8DBCB161D3E06B9D26AB5C9F4E0C1((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_UserId_1(L_3);
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
// System.Void Oculus.Platform.Models.SdkAccountList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccountList__ctor_m2569AC12C02DCE79DD2F4550750E2BD7CC3725A3 (SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public SdkAccountList(IntPtr a) {
		DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C(__this, /*hidden argument*/DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_SdkAccountArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_SdkAccountArray_GetSize_m4AF1A21051BFBE1E597980CA5B96680D691F577F((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<SdkAccount>(count);
		int32_t L_3 = V_0;
		List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * L_4 = (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *)il2cpp_codegen_object_new(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var);
		List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572(L_4, L_3, /*hidden argument*/List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var);
		((DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new SdkAccount(CAPI.ovr_SdkAccountArray_GetElement(a, (UIntPtr)i)));
		List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * L_5 = ((DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_SdkAccountArray_GetElement_m1E5F9A8D7020989F0CB194CEBD5D0B0DA03508AB((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * L_10 = (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A *)il2cpp_codegen_object_new(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var);
		SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288(L_5, L_10, /*hidden argument*/List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
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
// System.Void Oculus.Platform.Models.SendInvitesResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendInvitesResult__ctor_mC2AB2F39DB83CB86B7C2A9F980FFD268101C8354 (SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SendInvitesResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Invites = new ApplicationInviteList(CAPI.ovr_SendInvitesResult_GetInvites(o));
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_SendInvitesResult_GetInvites_m1F148EEFC505EB8DCEEEF29EAD1DD7A192647ED3((intptr_t)L_0, /*hidden argument*/NULL);
		ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * L_2 = (ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 *)il2cpp_codegen_object_new(ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360_il2cpp_TypeInfo_var);
		ApplicationInviteList__ctor_mBF3A124C10AC8CCEFCD2EFB20D3F2EC4AA624EC5(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_Invites_0(L_2);
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
// System.Void Oculus.Platform.Models.ShareMediaResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareMediaResult__ctor_m0AC8F70EACE4FF4E09F5BB82A1DB5D4AFFBD634E (ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShareMediaResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Status = CAPI.ovr_ShareMediaResult_GetStatus(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_ShareMediaResult_GetStatus_m19C6C4E0756E7A3E0F668077D8E0D462A3D0A9B4((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Status_0(L_1);
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::InitializeInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (String.IsNullOrEmpty(PlatformSettings.MobileAppID))
		String_t* L_0;
		L_0 = PlatformSettings_get_MobileAppID_m08A26133A0E765EDCE4355FCC64A18F8FF67936B(/*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new UnityException("Update your App ID by selecting 'Oculus Platform' -> 'Edit Settings'");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6502DBEA7DCA489774648AC2338DB14B68A43496)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var)));
	}

IL_0017:
	{
		// var appID = PlatformSettings.MobileAppID;
		String_t* L_3;
		L_3 = PlatformSettings_get_MobileAppID_m08A26133A0E765EDCE4355FCC64A18F8FF67936B(/*hidden argument*/NULL);
		V_0 = L_3;
		// if (String.IsNullOrEmpty(StandalonePlatformSettings.OculusPlatformTestUserAccessToken))
		String_t* L_4;
		L_4 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m14ED5FB11903CDC76E8B71BD88F67DF936CF6896_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// throw new UnityException("Update your standalone credentials by selecting 'Oculus Platform' -> 'Edit Settings'");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral141DB8E2222B0556D3C6A55EC404DB7A9D4332CF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var)));
	}

IL_0034:
	{
		// var accessToken = StandalonePlatformSettings.OculusPlatformTestUserAccessToken;
		String_t* L_7;
		L_7 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m14ED5FB11903CDC76E8B71BD88F67DF936CF6896_inline(/*hidden argument*/NULL);
		V_1 = L_7;
		// return AsyncInitialize(UInt64.Parse(appID), accessToken);
		String_t* L_8 = V_0;
		uint64_t L_9;
		L_9 = UInt64_Parse_mBD4E76B24B2A2E1E1A1A2ADBBCE3EB3CE7C9DEF5(L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_11;
		L_11 = StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitialize(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UnityResetTestPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UnityResetTestPlatform_mA50C6C2E6BC8BC42371079CDE5D8712675549C49(/*hidden argument*/NULL);
		// CAPI.ovr_UnityInitGlobals(IntPtr.Zero);
		CAPI_ovr_UnityInitGlobals_m8D4B1C6F162D614F8F2752C2255CA8CA86B8F751((intptr_t)(0), /*hidden argument*/NULL);
		// return new Request<Models.PlatformInitialize>(CAPI.ovr_PlatformInitializeWithAccessToken(appID, accessToken));
		uint64_t L_0 = ___appID0;
		String_t* L_1 = ___accessToken1;
		uint64_t L_2;
		L_2 = CAPI_ovr_PlatformInitializeWithAccessToken_m55DD6B1B1C2C275D19BD75B1AF28C21C5F5B20EF(L_0, L_1, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_3 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_3, L_2, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_3;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitializeWithAccessTokenAndOptions(System.String,System.String,System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitializeWithAccessTokenAndOptions_m267A43AB012CCF7B8DC80232AFEBA2702D0C09E6 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, String_t* ___appId0, String_t* ___accessToken1, Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * ___initConfigOptions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* V_1 = NULL;
	{
		// var configCount = (UIntPtr)initConfigOptions.Count;
		Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * L_0 = ___initConfigOptions2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1(L_0, /*hidden argument*/Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// var configPairs = CAPI.DictionaryToOVRKeyValuePairs(initConfigOptions);
		Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * L_3 = ___initConfigOptions2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_4;
		L_4 = CAPI_DictionaryToOVRKeyValuePairs_m57606B15D24964A421FC927CE20EC533F9EDC3C4(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// return new Request<Models.PlatformInitialize>(CAPI.ovr_PlatformInitializeWithAccessTokenAndOptions(UInt64.Parse(appId), accessToken, configPairs, configCount));
		String_t* L_5 = ___appId0;
		uint64_t L_6;
		L_6 = UInt64_Parse_mBD4E76B24B2A2E1E1A1A2ADBBCE3EB3CE7C9DEF5(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___accessToken1;
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_8 = V_1;
		uintptr_t L_9 = V_0;
		uint64_t L_10;
		L_10 = CAPI_ovr_PlatformInitializeWithAccessTokenAndOptions_m9B3BEA04BED5758CC53A047DD4330A064370DDC3(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_11 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_11, L_10, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Oculus.Platform.StandalonePlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatform__ctor_m3AE4474A8116A9398BB6F0430B68526EB20A56B2 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method)
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
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserEmail_mE56C509416F1258FCC47020D08318FC12404061B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserEmail_mD3B03DA1553C241A479FBA98C5E122159761F79A (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserPassword_mFE8FBDE809F3B443BC71D13B8389C33406CE4A71 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserPassword_m0409158F7D6EB4F38ECE86FEBABAE07F8F0E9792 (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m14ED5FB11903CDC76E8B71BD88F67DF936CF6896 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserAccessToken_m3CC460E8CA09577F496DF36600C5B82EA53672F2 (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings__ctor_mE40843F44FD1FB58636DE57723CD5ED1570FD762 (StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Models.SupplementaryMetric::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupplementaryMetric__ctor_mABF7CC54C159B31D2F27F7F2BDCDE160FF222279 (SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SupplementaryMetric(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ID = CAPI.ovr_SupplementaryMetric_GetID(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_SupplementaryMetric_GetID_mB5D18583CCB0329289FC45B2B2C7A481F405B2C4((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ID_0(L_1);
		// Metric = CAPI.ovr_SupplementaryMetric_GetMetric(o);
		intptr_t L_2 = ___o0;
		int64_t L_3;
		L_3 = CAPI_ovr_SupplementaryMetric_GetMetric_mEB8F1C3E11C2E4B9DBC625C644F01021AC42A77F((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Metric_1(L_3);
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
// System.Void Oculus.Platform.Models.SystemVoipState::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemVoipState__ctor_m9CC93A6027110E1938F59AEA8CA304EAD75DE1A5 (SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SystemVoipState(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MicrophoneMuted = CAPI.ovr_SystemVoipState_GetMicrophoneMuted(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_SystemVoipState_GetMicrophoneMuted_m60EB30C8995F1F189F0ADE1238602887BDFD323F((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_MicrophoneMuted_0(L_1);
		// Status = CAPI.ovr_SystemVoipState_GetStatus(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CAPI_ovr_SystemVoipState_GetStatus_m3A93BFA14E0E22C882B6DDEA25217F4FA3691D6D((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Status_1(L_3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961 (User_tA163463AE919860D9B337F6104B028990A44B69D * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public User(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DisplayName = CAPI.ovr_User_GetDisplayName(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_User_GetDisplayName_m18F5227EC901969BBCFA99901A481FE3866C7A95((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DisplayName_0(L_1);
		// ID = CAPI.ovr_User_GetID(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_User_GetID_m08CEF10644360A7BD9561DA5DC56C5345DB1AF3F((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ID_1(L_3);
		// ImageURL = CAPI.ovr_User_GetImageUrl(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_User_GetImageUrl_m31D5066EF9ABCCA12877E996822FBD5567F0A843((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_ImageURL_2(L_5);
		// OculusID = CAPI.ovr_User_GetOculusID(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_User_GetOculusID_mBC734BE0BD3199E5B9ED123EDC9D29E7B048E8C1((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_OculusID_3(L_7);
		// Presence = CAPI.ovr_User_GetPresence(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_User_GetPresence_mC3495E2F726B03AE064F9D4692A9BDC72266AACB((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_Presence_4(L_9);
		// PresenceDeeplinkMessage = CAPI.ovr_User_GetPresenceDeeplinkMessage(o);
		intptr_t L_10 = ___o0;
		String_t* L_11;
		L_11 = CAPI_ovr_User_GetPresenceDeeplinkMessage_m6C83B9B68AEF16AA4D42C53ECF81B6A763068AF2((intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_PresenceDeeplinkMessage_5(L_11);
		// PresenceDestinationApiName = CAPI.ovr_User_GetPresenceDestinationApiName(o);
		intptr_t L_12 = ___o0;
		String_t* L_13;
		L_13 = CAPI_ovr_User_GetPresenceDestinationApiName_mB24E824A11BD5DF04393BEE842DB352C0C9574E8((intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_PresenceDestinationApiName_6(L_13);
		// PresenceLobbySessionId = CAPI.ovr_User_GetPresenceLobbySessionId(o);
		intptr_t L_14 = ___o0;
		String_t* L_15;
		L_15 = CAPI_ovr_User_GetPresenceLobbySessionId_mA1A249DF2DABB3CE77286D4B3D0722EE58616043((intptr_t)L_14, /*hidden argument*/NULL);
		__this->set_PresenceLobbySessionId_7(L_15);
		// PresenceMatchSessionId = CAPI.ovr_User_GetPresenceMatchSessionId(o);
		intptr_t L_16 = ___o0;
		String_t* L_17;
		L_17 = CAPI_ovr_User_GetPresenceMatchSessionId_m035C67B001418780FB33CA7E2596FD28A3DEAFC1((intptr_t)L_16, /*hidden argument*/NULL);
		__this->set_PresenceMatchSessionId_8(L_17);
		// PresenceStatus = CAPI.ovr_User_GetPresenceStatus(o);
		intptr_t L_18 = ___o0;
		int32_t L_19;
		L_19 = CAPI_ovr_User_GetPresenceStatus_m3C0870BDD40129850F6C5F46A322B5526A9B9448((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set_PresenceStatus_9(L_19);
		// SmallImageUrl = CAPI.ovr_User_GetSmallImageUrl(o);
		intptr_t L_20 = ___o0;
		String_t* L_21;
		L_21 = CAPI_ovr_User_GetSmallImageUrl_m0C35A6456A32B6C9B6B787112DAC8CFB9EB57961((intptr_t)L_20, /*hidden argument*/NULL);
		__this->set_SmallImageUrl_10(L_21);
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
// System.Void Oculus.Platform.Models.UserCapability::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapability__ctor_m339976E7D4FAFFE7CD3D609F4876C530D7C74275 (UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserCapability(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Description = CAPI.ovr_UserCapability_GetDescription(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_UserCapability_GetDescription_m2052933D0FCCB10E63476232842F6FBD6179DBB3((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Description_0(L_1);
		// IsEnabled = CAPI.ovr_UserCapability_GetIsEnabled(o);
		intptr_t L_2 = ___o0;
		bool L_3;
		L_3 = CAPI_ovr_UserCapability_GetIsEnabled_mAB168B5A2CA2981CDA9949E269883609F5218417((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_IsEnabled_1(L_3);
		// Name = CAPI.ovr_UserCapability_GetName(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_UserCapability_GetName_m6DFB9753FE215B9E3CDCD1E6499CEBFD1476A65B((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_Name_2(L_5);
		// ReasonCode = CAPI.ovr_UserCapability_GetReasonCode(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_UserCapability_GetReasonCode_m6011AB5228DA04BA30B232533D125051136AA589((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_ReasonCode_3(L_7);
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
// System.Void Oculus.Platform.Models.UserCapabilityList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapabilityList__ctor_m5DBE9663571D2D276A8C9E21E860983C0D30C5D5 (UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserCapabilityList(IntPtr a) {
		DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C(__this, /*hidden argument*/DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_UserCapabilityArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_UserCapabilityArray_GetSize_m1ADBD3641B2239284F4C5960693E3AA76FFAE6E8((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<UserCapability>(count);
		int32_t L_3 = V_0;
		List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * L_4 = (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 *)il2cpp_codegen_object_new(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_il2cpp_TypeInfo_var);
		List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242(L_4, L_3, /*hidden argument*/List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242_RuntimeMethod_var);
		((DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new UserCapability(CAPI.ovr_UserCapabilityArray_GetElement(a, (UIntPtr)i)));
		List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * L_5 = ((DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_UserCapabilityArray_GetElement_mB5E8F564E27847005A67B01ABCACED83E166F914((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * L_10 = (UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F *)il2cpp_codegen_object_new(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F_il2cpp_TypeInfo_var);
		UserCapability__ctor_m339976E7D4FAFFE7CD3D609F4876C530D7C74275(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC(L_5, L_10, /*hidden argument*/List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_UserCapabilityArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_UserCapabilityArray_GetNextUrl_mA259F4C600A4958425899F7268F347A97DB0FD2F((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *)__this)->set__NextUrl_1(L_15);
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PrivateDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PrivateDeleteEntryByKey_mE2B2FBFCAB0A5BD0F6BE1C5F979B0C519C598B45 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PrivateDeleteEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PrivateDeleteEntryByKey_m89C4B624BE152FBB6A6094B098A721418E9E151A(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_4 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_4, L_3, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PrivateGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PrivateGetEntries_m0511F93BCEBB7A24F042C0EF6F27EA2D753624F4 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PrivateGetEntries(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserDataStore_PrivateGetEntries_m692093C893D36D08CF5BEE85BC872F7C79AC51A0(L_1, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_3 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_3, L_2, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PrivateGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PrivateGetEntryByKey_m98220191676ADAB8D86FA73CEEEA49773CD20851 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PrivateGetEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PrivateGetEntryByKey_mEBBC00FE6981EEFAB94B080CCFE3255A87CF444D(L_1, L_2, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_4 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_4, L_3, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PrivateWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PrivateWriteEntry_mCD60D826A1783230F6602145AED934051A4DD6E5 (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PrivateWriteEntry(userID, key, value));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_UserDataStore_PrivateWriteEntry_m02A96A2C37F0AC11EC2DCF014E4E1B067F00E19D(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_5 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_5, L_4, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_6, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PublicDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PublicDeleteEntryByKey_m3CEBC9FFC5F75BEE4C844EDE8B16BE56B2424B3F (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PublicDeleteEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PublicDeleteEntryByKey_m27BDD43C0A310F1B5BE047708F4D130760E26923(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_4 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_4, L_3, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PublicGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PublicGetEntries_m28CDCF3C4E42149E10A660614E8CF35AD4ED7068 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PublicGetEntries(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserDataStore_PublicGetEntries_mD02FBE554BDBBA7713289C723A14386E43FD9005(L_1, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_3 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_3, L_2, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PublicGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PublicGetEntryByKey_mB2281314B29BF14BC571145D92D681615878BAF6 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PublicGetEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PublicGetEntryByKey_m8779297BF675EE71730C0ADBF82594DF28C371F6(L_1, L_2, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_4 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_4, L_3, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PublicWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PublicWriteEntry_m391D761540811B37E0F7D9241AD3079C6A920702 (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PublicWriteEntry(userID, key, value));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_UserDataStore_PublicWriteEntry_mEAFEF551D9B8FCB956338D433BB891D4D96C36AA(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_5 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_5, L_4, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_6, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
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
// System.Void Oculus.Platform.Models.UserDataStoreUpdateResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataStoreUpdateResponse__ctor_m3E731729E3C2C7895BFA9B683F4927F77FB144D0 (UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserDataStoreUpdateResponse(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Success = CAPI.ovr_UserDataStoreUpdateResponse_GetSuccess(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_mA63027C7D7300E72B0C6F71F8AB46765D545884A((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Success_0(L_1);
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
// System.Void Oculus.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserList(IntPtr a) {
		DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090(__this, /*hidden argument*/DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_UserArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_UserArray_GetSize_m94FB2AD81FDF3E4D7A0BC7689D0AA85D1D32B323((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<User>(count);
		int32_t L_3 = V_0;
		List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * L_4 = (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *)il2cpp_codegen_object_new(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var);
		List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF(L_4, L_3, /*hidden argument*/List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var);
		((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new User(CAPI.ovr_UserArray_GetElement(a, (UIntPtr)i)));
		List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * L_5 = ((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_UserArray_GetElement_m8A0921E2744E5AEC3E4130EE4F6E1D3A22EF8BC0((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_10 = (User_tA163463AE919860D9B337F6104B028990A44B69D *)il2cpp_codegen_object_new(User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8(L_5, L_10, /*hidden argument*/List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_UserArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_UserArray_GetNextUrl_m40DF70E48DA3BECF9D8A191B6FC8BBB9EB5A52BB((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->set__NextUrl_1(L_15);
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
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_UserOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_UserOptions_Create_m902AA881CD5C55FA555769CD617544C961A3E026(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::SetMaxUsers(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_SetMaxUsers_mEFF3198E7239A108005098C5165E40774D59728C (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_SetMaxUsers(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		uint32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_SetMaxUsers_mB6BE88A30E10DC57BE25FC4DE98DC6E6923D7DF7((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_AddServiceProvider(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_AddServiceProvider_m053ECF1F364CB326B571FE8782C6EB6CAE8D003D((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::ClearServiceProviders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_ClearServiceProviders_m887F0C1CC06AD92A20D2178F99957AEE12C6991E (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_ClearServiceProviders(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_ClearServiceProviders_m12D3FB8B98FBC576DCE67BCE7AA69479C17EF9E6((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::SetTimeWindow(Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_SetTimeWindow_m658F7DA0EFFE210A40028214926BE49A21D2325D (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_SetTimeWindow(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_SetTimeWindow_m683BEFE4C3831AA38E5F06F83C6A1AA833E1B53F((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mF3560C78C7B6E14615CC1B4D111AE3425DC99822 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.UserOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_Finalize_mD8821B4A02C933008F2BDF9F3219E884E0651279 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_UserOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_Destroy_m03B91E25FD0E220FF3F2D0D1368A791143936AA4((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserProof::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProof__ctor_m471A1FE83FF7096DF8FB1478D23CF69B322AE015 (UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserProof(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Value = CAPI.ovr_UserProof_GetNonce(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_UserProof_GetNonce_m5181DB53493AB89FFBCB47064E8493FF4A36C359((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Value_0(L_1);
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
// System.Void Oculus.Platform.Models.UserReportID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserReportID__ctor_m803040AD62252F061FD2ABF0E74770B1AD920928 (UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserReportID(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DidCancel = CAPI.ovr_UserReportID_GetDidCancel(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_UserReportID_GetDidCancel_m903A4A66CEB6D5D1E9C460B92D4DF81D7A1FD40C((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DidCancel_0(L_1);
		// ID = CAPI.ovr_UserReportID_GetID(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_UserReportID_GetID_mBE8CD57DC82C3B8F47469521347421C7E17E5DE6((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ID_1(L_3);
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
// System.String Oculus.Platform.Users::GetLoggedInUserLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Users_GetLoggedInUserLocale_m61B9ADD5869FB4406780A511C53669C2F8006251 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_GetLoggedInUserLocale();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_GetLoggedInUserLocale_m7382144D856E9D0ADB2DF485EA5C6DBFDF2EFF2D(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * Users_Get_mD861844906AD9AA7E11C3D007F7AAF4F10DA1C12 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.User>(CAPI.ovr_User_Get(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_Get_m175163ECA9BAD96B63431FB1A8D2BAF4033D6883(L_1, /*hidden argument*/NULL);
		Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * L_3 = (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)il2cpp_codegen_object_new(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA(L_3, L_2, /*hidden argument*/Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.String> Oculus.Platform.Users::GetAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * Users_GetAccessToken_m15AB576AAF9B037F88B3E384D2CBBA8320655E7D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<string>(CAPI.ovr_User_GetAccessToken());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetAccessToken_m8508A690DA977C6ADFF1D6D9488B5EE4F061E69F(/*hidden argument*/NULL);
		Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * L_2 = (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *)il2cpp_codegen_object_new(Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var);
		Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA(L_2, L_1, /*hidden argument*/Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList> Oculus.Platform.Users::GetBlockedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * Users_GetBlockedUsers_m3E6779DD44196AAC5C5B1A4E784A15D1A77F7C1F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.BlockedUserList>(CAPI.ovr_User_GetBlockedUsers());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetBlockedUsers_m6DAC989D4A098C68890AE539779155699A5E36CE(/*hidden argument*/NULL);
		Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * L_2 = (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)il2cpp_codegen_object_new(Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF(L_2, L_1, /*hidden argument*/Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * Users_GetLoggedInUser_m6F1A4910792CD6D18B5EAA750029F29CCC4D887B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.User>(CAPI.ovr_User_GetLoggedInUser());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUser_mC7B413996E0EB202657C62972624F77F1E0C5A17(/*hidden argument*/NULL);
		Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * L_2 = (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)il2cpp_codegen_object_new(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA(L_2, L_1, /*hidden argument*/Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Users_GetLoggedInUserFriends_m5AC0C302F23C933723509AFB58CB616D2FE9C1B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserList>(CAPI.ovr_User_GetLoggedInUserFriends());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUserFriends_m871915A1D3FBE204FC32F6320CFB4D4CBB96CD5C(/*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_2 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_2, L_1, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> Oculus.Platform.Users::GetOrgScopedID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * Users_GetOrgScopedID_m8B93CF21F1E56DFE20F4952838914545376C12F4 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.OrgScopedID>(CAPI.ovr_User_GetOrgScopedID(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_GetOrgScopedID_m06D828BA4BED0E3E278832538AFE0DEA37B9432E(L_1, /*hidden argument*/NULL);
		Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * L_3 = (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *)il2cpp_codegen_object_new(Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var);
		Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004(L_3, L_2, /*hidden argument*/Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> Oculus.Platform.Users::GetSdkAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * Users_GetSdkAccounts_m8944995104C90EF1B1A6D9D8F1827251F7BF25D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.SdkAccountList>(CAPI.ovr_User_GetSdkAccounts());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetSdkAccounts_mE900113342E5CDF8BA53EE7766C9DFC334DE72A4(/*hidden argument*/NULL);
		Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * L_2 = (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *)il2cpp_codegen_object_new(Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var);
		Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88(L_2, L_1, /*hidden argument*/Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> Oculus.Platform.Users::GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * Users_GetUserProof_m80E09D62995D435A71A28E3DF30E709F651AD0BD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserProof>(CAPI.ovr_User_GetUserProof());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetUserProof_m78CE79C682AFAD8C361B4DEE2CEA26F499F9C1ED(/*hidden argument*/NULL);
		Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * L_2 = (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *)il2cpp_codegen_object_new(Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var);
		Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB(L_2, L_1, /*hidden argument*/Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult> Oculus.Platform.Users::LaunchBlockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 * Users_LaunchBlockFlow_mC27D817580179615E9F9E24F641087A3A2DECB90 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchBlockFlowResult>(CAPI.ovr_User_LaunchBlockFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchBlockFlow_mCA9A1B58F1F1686853AAE315832F6BB767CD2EA2(L_1, /*hidden argument*/NULL);
		Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 * L_3 = (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 *)il2cpp_codegen_object_new(Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0_il2cpp_TypeInfo_var);
		Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A(L_3, L_2, /*hidden argument*/Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> Oculus.Platform.Users::LaunchFriendRequestFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * Users_LaunchFriendRequestFlow_m07CD2F82F785CD4E8C28ED3E220746853BE1626C (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchFriendRequestFlowResult>(CAPI.ovr_User_LaunchFriendRequestFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchFriendRequestFlow_mA9F0D2C95D10C7D91A761D31320994305A7FC517(L_1, /*hidden argument*/NULL);
		Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * L_3 = (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *)il2cpp_codegen_object_new(Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var);
		Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268(L_3, L_2, /*hidden argument*/Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult> Oculus.Platform.Users::LaunchUnblockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 * Users_LaunchUnblockFlow_mC645B9D3B0C1BA684213AD7EECBC00AFE53190C6 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchUnblockFlowResult>(CAPI.ovr_User_LaunchUnblockFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchUnblockFlow_m068A1DFE7BCD6F907FAD000A603A8C43C72DA100(L_1, /*hidden argument*/NULL);
		Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 * L_3 = (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 *)il2cpp_codegen_object_new(Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474_il2cpp_TypeInfo_var);
		Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED(L_3, L_2, /*hidden argument*/Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList> Oculus.Platform.Users::GetNextBlockedUserListPage(Oculus.Platform.Models.BlockedUserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * Users_GetNextBlockedUserListPage_mD6AA2473FB19074A1EC12EB9DB9EF5183D879C0A (BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DE12A61CB8F5C6AE93E6A588A18C0FC42E00E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217 * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextBlockedUserListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral58DE12A61CB8F5C6AE93E6A588A18C0FC42E00E3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.BlockedUserList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextBlockedUserArrayPage
		//   )
		// );
		BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217 * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m3ADC2C3BFF17A426ECE7CA61B3A84451BAD3CF40(L_4, ((int32_t)2083192267), /*hidden argument*/NULL);
		Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * L_6 = (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)il2cpp_codegen_object_new(Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF(L_6, L_5, /*hidden argument*/Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetNextUserListPage(Oculus.Platform.Models.UserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Users_GetNextUserListPage_m60BA69EA05F06FDBA1FB25CDFA24C74F7945B54E (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextUserListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.UserList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextUserArrayPage
		//   )
		// );
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m3ADC2C3BFF17A426ECE7CA61B3A84451BAD3CF40(L_4, ((int32_t)645723971), /*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_6 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_6, L_5, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList> Oculus.Platform.Users::GetNextUserCapabilityListPage(Oculus.Platform.Models.UserCapabilityList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 * Users_GetNextUserCapabilityListPage_m7845CD8B4006821399DE4891CA3A6D76999D630C (UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F44D94A63BEE6D780718FB25538264AEC6ED92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextUserCapabilityListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral21F44D94A63BEE6D780718FB25538264AEC6ED92, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.UserCapabilityList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextUserCapabilityArrayPage
		//   )
		// );
		UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m3ADC2C3BFF17A426ECE7CA61B3A84451BAD3CF40(L_4, ((int32_t)587854745), /*hidden argument*/NULL);
		Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 * L_6 = (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *)il2cpp_codegen_object_new(Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2_il2cpp_TypeInfo_var);
		Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E(L_6, L_5, /*hidden argument*/Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *)NULL;
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
// System.Void Oculus.Platform.Voip::Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Start_mC1AF913E43A3BF582BEF0380AF4EA99E1EA5C6BB (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Start(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Start_mD0C233B53819D87CA893B40211B762AC9E379478(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Accept_m3ECBD358B2FE2AE09F7C3A0FF506F1946328E2E0 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Accept(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Accept_m795D198D962E7F05C33AEA209EE31F60AA031993(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Stop_m4E07F4776A9A9F1F19C950DB0330C8F203449610 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Stop(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Stop_mA96831A3F55FCF7A7A530662931E4EEEE891C325(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneFilterCallback(Oculus.Platform.CAPI/FilterCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneFilterCallback_mB63EF287AF3A076B408AE6A1C8A5C671797B0D65 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// CAPI.ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(callback, (UIntPtr)CAPI.VoipFilterBufferSize);
		FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)((int32_t)480))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer_mE2F262A083C820350ED4E4E54942D092054CE272(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneMuted(Oculus.Platform.VoipMuteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneMuted_m73F36DEE257B7ABE1CC50D4678C9A2679BA00201 (int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_SetMicrophoneMuted(state);
		int32_t L_1 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetMicrophoneMuted_m4244C548A1880D0C4E7E81400C817C92B77299D8(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// Oculus.Platform.VoipMuteState Oculus.Platform.Voip::GetSystemVoipMicrophoneMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetSystemVoipMicrophoneMuted_m0358673A4D9FCCBA4860C82CF3CF48407F4F778A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_Voip_GetSystemVoipMicrophoneMuted();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_Voip_GetSystemVoipMicrophoneMuted_mAB60BA6E8A6E3236957394C390BCF1E0FE1E11AB(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return VoipMuteState.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.SystemVoipStatus Oculus.Platform.Voip::GetSystemVoipStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetSystemVoipStatus_m957CE63AC4FE4C1BD21A1BBA45978A8200553433 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_Voip_GetSystemVoipStatus();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_Voip_GetSystemVoipStatus_mA6AFFF180D80B1A73095A946C538629D07F49375(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return SystemVoipStatus.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipDtxState Oculus.Platform.Voip::GetIsConnectionUsingDtx(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetIsConnectionUsingDtx_m8DC290D14FA700D7D6F9D085FEC54828EA64A3C2 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetIsConnectionUsingDtx(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetIsConnectionUsingDtx_m546FF8874406F948C36BC1F774F5AD30B771B72E(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipDtxState.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipBitrate Oculus.Platform.Voip::GetLocalBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetLocalBitrate_m78D390EB31B22D5711AF2B9ED3DB5C240963A871 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetLocalBitrate(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetLocalBitrate_mFE47DBC8368FA1844697AF1226170700245A681F(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipBitrate.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipBitrate Oculus.Platform.Voip::GetRemoteBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetRemoteBitrate_m066E8D12D0C6ACCE3BAD182168A16FA378934E41 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetRemoteBitrate(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetRemoteBitrate_mE2183F7A67922598607D2DA6047711944C0982AD(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipBitrate.Unknown;
		return (int32_t)(0);
	}
}
// System.Void Oculus.Platform.Voip::SetNewConnectionOptions(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetNewConnectionOptions_mB1BDDE5328E2A88421CCAF6B112A38FCE84DD730 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___voipOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CAPI.ovr_Voip_SetNewConnectionOptions((IntPtr)voipOptions);
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_1 = ___voipOptions0;
		intptr_t L_2;
		L_2 = VoipOptions_op_Explicit_m949FEA0ECF483B08E734A28EB01053C918D92FE8(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetNewConnectionOptions_m4C703A6768BF5C2E0E6006B08FFDB74A1B23AF2A((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState> Oculus.Platform.Voip::GetMicrophoneAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 * Voip_GetMicrophoneAvailability_mF516A49C326A6183BDA8A3CD5EAA94EBD588F2CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.MicrophoneAvailabilityState>(CAPI.ovr_Voip_GetMicrophoneAvailability());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Voip_GetMicrophoneAvailability_m2DF154D6B934F07634CE2498B726BA42CD8C77B5(/*hidden argument*/NULL);
		Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 * L_2 = (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 *)il2cpp_codegen_object_new(Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20_il2cpp_TypeInfo_var);
		Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F(L_2, L_1, /*hidden argument*/Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState> Oculus.Platform.Voip::SetSystemVoipSuppressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * Voip_SetSystemVoipSuppressed_m6596BDE6F83AA0E977297F0314170F9B965FB1E7 (bool ___suppressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.SystemVoipState>(CAPI.ovr_Voip_SetSystemVoipSuppressed(suppressed));
		bool L_1 = ___suppressed0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Voip_SetSystemVoipSuppressed_m5A60DF0D27ACFF7E8F7B8EC71E81D7005E03AF9D(L_1, /*hidden argument*/NULL);
		Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * L_3 = (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *)il2cpp_codegen_object_new(Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var);
		Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052(L_3, L_2, /*hidden argument*/Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *)NULL;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneAvailabilityStateUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneAvailabilityStateUpdateNotificationCallback_m29EB9393ABD0E236916633D125255B3F3D5EBE58 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_MicrophoneAvailabilityStateUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175(((int32_t)1042336599), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetSystemVoipStateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetSystemVoipStateNotificationCallback_mFF81403523B304C71F8E9E6A02C35C84ADF4365E (Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_mC5F3E3650FE95E74BAA8AE41E6DD47E16DAD5648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_SystemVoipState,
		//   callback
		// );
		Callback_t827F915E827EE8044B5F300339FE951E4557B20A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_mC5F3E3650FE95E74BAA8AE41E6DD47E16DAD5648(((int32_t)1490179237), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_mC5F3E3650FE95E74BAA8AE41E6DD47E16DAD5648_RuntimeMethod_var);
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
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::set_senderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_set_senderID_m288B4C24C5D9628FC7FC0A35B1AC80A3DFE10193 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource.SetSenderID(value);
		RuntimeObject* L_0 = __this->get_pcmSource_7();
		uint64_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Oculus.Platform.IVoipPCMSource::SetSenderID(System.UInt64) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Stop_mFC59095BE1119B99A7B4A44DC25CC5E9FA1B2DB5 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		// protected void Stop() {}
		return;
	}
}
// Oculus.Platform.VoipSampleRate Oculus.Platform.VoipAudioSourceHiLevel::SampleRateToEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, int32_t ___rate0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___rate0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24000))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___rate0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)44100))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___rate0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)48000)))))
		{
			goto IL_001e;
		}
	}
	{
		// return VoipSampleRate.HZ48000;
		return (int32_t)(3);
	}

IL_001a:
	{
		// return VoipSampleRate.HZ44100;
		return (int32_t)(2);
	}

IL_001c:
	{
		// return VoipSampleRate.HZ24000;
		return (int32_t)(1);
	}

IL_001e:
	{
		// return VoipSampleRate.Unknown;
		return (int32_t)(0);
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Awake_mE7525A754D5B14E3EA9931C0ACC5F071DCE02D23 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreatePCMSource();
		VirtActionInvoker0::Invoke(4 /* System.Void Oculus.Platform.VoipAudioSourceHiLevel::CreatePCMSource() */, __this);
		// if(audioSource == null) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		__this->set_audioSource_5(L_3);
	}

IL_0025:
	{
		// audioSource.gameObject.AddComponent<FilterReadDelegate>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * L_6;
		L_6 = GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD(L_5, /*hidden argument*/GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD_RuntimeMethod_var);
		// var filterDelegate = audioSource.gameObject.GetComponent<FilterReadDelegate>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_5();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * L_9;
		L_9 = GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29(L_8, /*hidden argument*/GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29_RuntimeMethod_var);
		// filterDelegate.parent = this;
		NullCheck(L_9);
		L_9->set_parent_4(__this);
		// initialPlaybackDelayMS = 40;
		__this->set_initialPlaybackDelayMS_4(((int32_t)40));
		// audioSystemPlaybackFrequency = AudioSettings.outputSampleRate;
		int32_t L_10;
		L_10 = AudioSettings_get_outputSampleRate_m383C9850C4BC4A650AC832888A42A9D1E697E4EA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->set_audioSystemPlaybackFrequency_8(L_10);
		// CAPI.ovr_Voip_SetOutputSampleRate(SampleRateToEnum(audioSystemPlaybackFrequency));
		int32_t L_11 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		int32_t L_12;
		L_12 = VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1(__this, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetOutputSampleRate_m310EE93AA840ED25CAA1E180E045326911544E56(L_12, /*hidden argument*/NULL);
		// if(verboseLogging) {
		bool L_13 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// Debug.LogFormat("freq {0}", audioSystemPlaybackFrequency);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_16 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m72BF100F3CFE21832B462EDDA71CF0FE28C0D093(_stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6, L_15, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Start_m5FD556DFBAE15AA023F598D238A7AB753ADF2674 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::CreatePCMSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_CreatePCMSource_m81783FF495599298C6EFC14A6C36821811333B73 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource = new VoipPCMSourceNative();
		VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * L_0 = (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 *)il2cpp_codegen_object_new(VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var);
		VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92(L_0, /*hidden argument*/NULL);
		__this->set_pcmSource_7(L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::MSToElements(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_MSToElements_m90216B8D9F0C0B7EBD8A656AF114F32E4980D461 (int32_t ___ms0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ms * audioSystemPlaybackFrequency / 1000;
		int32_t L_0 = ___ms0;
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))/(int32_t)((int32_t)1000)));
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Update_m7D9272AB8D68F55948FAEC2CE7D04AA2B31CD72E (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource.Update();
		RuntimeObject* L_0 = __this->get_pcmSource_7();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Oculus.Platform.IVoipPCMSource::Update() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_0);
		// if (!audioSource.isPlaying && pcmSource.PeekSizeElements() >= MSToElements(initialPlaybackDelayMS)) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_pcmSource_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = __this->get_initialPlaybackDelayMS_4();
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = VoipAudioSourceHiLevel_MSToElements_m90216B8D9F0C0B7EBD8A656AF114F32E4980D461(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0065;
		}
	}
	{
		// if(verboseLogging) {
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_7 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogFormat("buffered {0} elements, starting playback", pcmSource.PeekSizeElements());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		RuntimeObject* L_10 = __this->get_pcmSource_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m72BF100F3CFE21832B462EDDA71CF0FE28C0D093(_stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD, L_9, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = __this->get_audioSource_5();
		NullCheck(L_14);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel__ctor_mA5EA82C6470B9890562ED05C00B9FDF23ED1EE2D (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel__cctor_m6691008FAC0BE1959BB1F89C026720D12E7F1562 (const RuntimeMethod* method)
{
	{
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
// System.Void Oculus.Platform.VoipOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions__ctor_m349A78ED85161639C44A484886D4BB94AB28259B (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoipOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_VoipOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_VoipOptions_Create_m81F954E507F0B1974FBF6724836DD6DB293D8A2A(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipOptions::SetBitrateForNewConnections(Oculus.Platform.VoipBitrate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_SetBitrateForNewConnections_m5DD59D56FBC6DC31DC85458D333CCEF48FE0FC74 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_VoipOptions_SetBitrateForNewConnections(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_SetBitrateForNewConnections_m0FA062578D4413E463FB4F33E3917B9BA0C5E7DC((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipOptions::SetCreateNewConnectionUseDtx(Oculus.Platform.VoipDtxState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_SetCreateNewConnectionUseDtx_m5724ECB20B91C3AAD9BF41BDB22D5947C983F8D2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_VoipOptions_SetCreateNewConnectionUseDtx(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_SetCreateNewConnectionUseDtx_m4B3ABA540AC9497923E9438E91EE429472EDA446((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.VoipOptions::op_Explicit(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VoipOptions_op_Explicit_m949FEA0ECF483B08E734A28EB01053C918D92FE8 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.VoipOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_Finalize_mA8150FC50480BDF0BC9E3392C68BC20EAF8D9336 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_VoipOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_Destroy_mAAA6F764A040C2221DB99764B8B6171365CCABAC((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Int32 Oculus.Platform.VoipPCMSourceNative::GetPCM(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipPCMSourceNative_GetPCM_m330D8B296E58AF7E92216E6E52E2410EACB722D9 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dest0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)CAPI.ovr_Voip_GetPCMFloat(senderID, dest, (UIntPtr)length);
		uint64_t L_0 = __this->get_senderID_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___dest0;
		int32_t L_2 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_mB450491035620A2BAF1EE6558DD140C9351BBA2D(((int64_t)((int64_t)L_2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = CAPI_ovr_Voip_GetPCMFloat_m5B5E7A78EB666A324C3C83AFBA80C9CB477A19C8(L_0, L_1, L_3, /*hidden argument*/NULL);
		uint32_t L_5;
		L_5 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::SetSenderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative_SetSenderID_mB83CE6ECD69B5C9D557A3FCA29C9AFE2D42C5949 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, uint64_t ___senderID0, const RuntimeMethod* method)
{
	{
		// this.senderID = senderID;
		uint64_t L_0 = ___senderID0;
		__this->set_senderID_0(L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Platform.VoipPCMSourceNative::PeekSizeElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipPCMSourceNative_PeekSizeElements_m29BBD16775799A2003520BAB51263D5F2B672A0B (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)CAPI.ovr_Voip_GetPCMSize(senderID);
		uint64_t L_0 = __this->get_senderID_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_Voip_GetPCMSize_mB51895D9BF6C192EDBDBD2C0BB544189649437B7(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative_Update_m11989EE78BA0D517D7B34C344F02CFF908165D27 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	{
		// public void Update() { }
		return;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Vrcamera::SetGetDataChannelMessageUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vrcamera_SetGetDataChannelMessageUpdateNotificationCallback_m58C2E3D5D3D5074226CF4B1484E7A848B120A5FC (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Vrcamera_GetDataChannelMessageUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175(((int32_t)1860498236), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Vrcamera::SetGetSurfaceUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vrcamera_SetGetSurfaceUpdateNotificationCallback_m5AE316134DBF8D41AC037CFC6102FE41489AEFCA (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Vrcamera_GetSurfaceUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175(((int32_t)938610820), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_m4FFF3B10227BB784015B26973B0F0E06C1F4E175_RuntimeMethod_var);
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
// System.Void Oculus.Platform.WindowsPlatform::CPPLogCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPlatform_CPPLogCallback_m15852470B6EB7DE65D27DBE1C2F71E60CE6AE95B (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, intptr_t ___tag0, intptr_t ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("{0}: {1}", Marshal.PtrToStringAnsi(tag), Marshal.PtrToStringAnsi(message)));
		intptr_t L_0 = ___tag0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m8A04D9B38C53580B609A2A3179BDAA28FEC85F0E((intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___message1;
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m8A04D9B38C53580B609A2A3179BDAA28FEC85F0E((intptr_t)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_1, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.WindowsPlatform::getCallbackPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Boolean Oculus.Platform.WindowsPlatform::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(String.IsNullOrEmpty(appId))
		String_t* L_0 = ___appId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new UnityException("AppID must not be null or empty");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347_RuntimeMethod_var)));
	}

IL_0013:
	{
		// CAPI.ovr_UnityInitWrapperWindows(appId, getCallbackPointer());
		String_t* L_3 = ___appId0;
		intptr_t L_4;
		L_4 = WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = CAPI_ovr_UnityInitWrapperWindows_m0A0E2E8CF4D2F2E2ED7546CB2EF53E7730E22314(L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.WindowsPlatform::AsyncInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(String.IsNullOrEmpty(appId))
		String_t* L_0 = ___appId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new UnityException("AppID must not be null or empty");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new Request<Models.PlatformInitialize>(CAPI.ovr_UnityInitWrapperWindowsAsynchronous(appId, getCallbackPointer()));
		String_t* L_3 = ___appId0;
		intptr_t L_4;
		L_4 = WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_UnityInitWrapperWindowsAsynchronous_mB371F3B29CE4E3468406E80E4CA92BB6C1AEA08F(L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_6 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_6, L_5, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Oculus.Platform.WindowsPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPlatform__ctor_m9912552D07BB1447E692D1D40FE8CCB1BBB3C6BF (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(int16_t*, uintptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___pcmData0' to native representation
	int16_t* ____pcmData0_marshaled = NULL;
	if (___pcmData0 != NULL)
	{
		____pcmData0_marshaled = reinterpret_cast<int16_t*>((___pcmData0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____pcmData0_marshaled, ___pcmDataLength1, ___frequency2, ___numChannels3);

}
// System.Void Oculus.Platform.CAPI/FilterCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback__ctor_mAFC9FE121057123728CE41E392E4C07FDF2C1FB6 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.CAPI/FilterCallback::Invoke(System.Int16[],System.UIntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback_Invoke_mE02FDBF7FFA47F639A2B77241ADEC097956300E1 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
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
						GenericInterfaceActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
					else
						GenericVirtActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
					else
						VirtActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef void (*FunctionPointerType) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.CAPI/FilterCallback::BeginInvoke(System.Int16[],System.UIntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterCallback_BeginInvoke_mBAD9199C195E160A7F2E6488EB6A15C2C77550EA (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___pcmData0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___pcmDataLength1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frequency2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___numChannels3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Oculus.Platform.CAPI/FilterCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback_EndInvoke_mE5D9DD6BAB4992838DC9D38F15DC0CD8B93CF411 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled)
{
	marshaled.___sType_0 = unmarshaled.get_sType_0();
	marshaled.___email_1 = il2cpp_codegen_marshal_string(unmarshaled.get_email_1());
	marshaled.___password_2 = il2cpp_codegen_marshal_string(unmarshaled.get_password_2());
	marshaled.___appId_3 = unmarshaled.get_appId_3();
	marshaled.___uriPrefixOverride_4 = il2cpp_codegen_marshal_string(unmarshaled.get_uriPrefixOverride_4());
}
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke_back(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled)
{
	int32_t unmarshaled_sType_temp_0 = 0;
	unmarshaled_sType_temp_0 = marshaled.___sType_0;
	unmarshaled.set_sType_0(unmarshaled_sType_temp_0);
	unmarshaled.set_email_1(il2cpp_codegen_marshal_string_result(marshaled.___email_1));
	unmarshaled.set_password_2(il2cpp_codegen_marshal_string_result(marshaled.___password_2));
	uint64_t unmarshaled_appId_temp_3 = 0;
	unmarshaled_appId_temp_3 = marshaled.___appId_3;
	unmarshaled.set_appId_3(unmarshaled_appId_temp_3);
	unmarshaled.set_uriPrefixOverride_4(il2cpp_codegen_marshal_string_result(marshaled.___uriPrefixOverride_4));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke_cleanup(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___email_1);
	marshaled.___email_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___password_2);
	marshaled.___password_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___uriPrefixOverride_4);
	marshaled.___uriPrefixOverride_4 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled)
{
	marshaled.___sType_0 = unmarshaled.get_sType_0();
	marshaled.___email_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_email_1());
	marshaled.___password_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_password_2());
	marshaled.___appId_3 = unmarshaled.get_appId_3();
	marshaled.___uriPrefixOverride_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_uriPrefixOverride_4());
}
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com_back(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled)
{
	int32_t unmarshaled_sType_temp_0 = 0;
	unmarshaled_sType_temp_0 = marshaled.___sType_0;
	unmarshaled.set_sType_0(unmarshaled_sType_temp_0);
	unmarshaled.set_email_1(il2cpp_codegen_marshal_bstring_result(marshaled.___email_1));
	unmarshaled.set_password_2(il2cpp_codegen_marshal_bstring_result(marshaled.___password_2));
	uint64_t unmarshaled_appId_temp_3 = 0;
	unmarshaled_appId_temp_3 = marshaled.___appId_3;
	unmarshaled.set_appId_3(unmarshaled_appId_temp_3);
	unmarshaled.set_uriPrefixOverride_4(il2cpp_codegen_marshal_bstring_result(marshaled.___uriPrefixOverride_4));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com_cleanup(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___email_1);
	marshaled.___email_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___password_2);
	marshaled.___password_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___uriPrefixOverride_4);
	marshaled.___uriPrefixOverride_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_string(unmarshaled.get_key__0());
	marshaled.___valueType__1 = unmarshaled.get_valueType__1();
	marshaled.___stringValue__2 = il2cpp_codegen_marshal_string(unmarshaled.get_stringValue__2());
	marshaled.___intValue__3 = unmarshaled.get_intValue__3();
	marshaled.___doubleValue__4 = unmarshaled.get_doubleValue__4();
}
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke_back(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_string_result(marshaled.___key__0));
	int32_t unmarshaled_valueType__temp_1 = 0;
	unmarshaled_valueType__temp_1 = marshaled.___valueType__1;
	unmarshaled.set_valueType__1(unmarshaled_valueType__temp_1);
	unmarshaled.set_stringValue__2(il2cpp_codegen_marshal_string_result(marshaled.___stringValue__2));
	int32_t unmarshaled_intValue__temp_3 = 0;
	unmarshaled_intValue__temp_3 = marshaled.___intValue__3;
	unmarshaled.set_intValue__3(unmarshaled_intValue__temp_3);
	double unmarshaled_doubleValue__temp_4 = 0.0;
	unmarshaled_doubleValue__temp_4 = marshaled.___doubleValue__4;
	unmarshaled.set_doubleValue__4(unmarshaled_doubleValue__temp_4);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke_cleanup(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___key__0);
	marshaled.___key__0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___stringValue__2);
	marshaled.___stringValue__2 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_key__0());
	marshaled.___valueType__1 = unmarshaled.get_valueType__1();
	marshaled.___stringValue__2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_stringValue__2());
	marshaled.___intValue__3 = unmarshaled.get_intValue__3();
	marshaled.___doubleValue__4 = unmarshaled.get_doubleValue__4();
}
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com_back(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_bstring_result(marshaled.___key__0));
	int32_t unmarshaled_valueType__temp_1 = 0;
	unmarshaled_valueType__temp_1 = marshaled.___valueType__1;
	unmarshaled.set_valueType__1(unmarshaled_valueType__temp_1);
	unmarshaled.set_stringValue__2(il2cpp_codegen_marshal_bstring_result(marshaled.___stringValue__2));
	int32_t unmarshaled_intValue__temp_3 = 0;
	unmarshaled_intValue__temp_3 = marshaled.___intValue__3;
	unmarshaled.set_intValue__3(unmarshaled_intValue__temp_3);
	double unmarshaled_doubleValue__temp_4 = 0.0;
	unmarshaled_doubleValue__temp_4 = marshaled.___doubleValue__4;
	unmarshaled.set_doubleValue__4(unmarshaled_doubleValue__temp_4);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com_cleanup(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___key__0);
	marshaled.___key__0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___stringValue__2);
	marshaled.___stringValue__2 = NULL;
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44 (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.String;
		__this->set_valueType__1(0);
		// stringValue_ = value;
		String_t* L_1 = ___value1;
		__this->set_stringValue__2(L_1);
		// intValue_ = 0;
		__this->set_intValue__3(0);
		// doubleValue_ = 0.0;
		__this->set_doubleValue__4((0.0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.Int;
		__this->set_valueType__1(1);
		// intValue_ = value;
		int32_t L_1 = ___value1;
		__this->set_intValue__3(L_1);
		// stringValue_ = null;
		__this->set_stringValue__2((String_t*)NULL);
		// doubleValue_ = 0.0;
		__this->set_doubleValue__4((0.0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.Double;
		__this->set_valueType__1(2);
		// doubleValue_ = value;
		double L_1 = ___value1;
		__this->set_doubleValue__4(L_1);
		// stringValue_ = null;
		__this->set_stringValue__2((String_t*)NULL);
		// intValue_ = 0;
		__this->set_intValue__3(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E(_thisAdjusted, ___key0, ___value1, method);
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
// System.Void Oculus.Platform.Callback/RequestCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback__ctor_m3B77D4730A2A359D3EA979B86606A15D203283C1 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, const RuntimeMethod* method)
{
	{
		// public RequestCallback() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public RequestCallback() { }
		return;
	}
}
// System.Void Oculus.Platform.Callback/RequestCallback::.ctor(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback__ctor_mB95BB8E3F42EBDB5546542F47CB412DD97FCAE03 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback0, const RuntimeMethod* method)
{
	{
		// public RequestCallback(Message.Callback callback)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.messageCallback = callback;
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = ___callback0;
		__this->set_messageCallback_0(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Callback/RequestCallback::HandleMessage(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback_HandleMessage_mE69959A7787F575EE024BDBF803CB42538E2D3C3 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method)
{
	{
		// if (messageCallback != null)
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = __this->get_messageCallback_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// messageCallback(msg);
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_1 = __this->get_messageCallback_0();
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_2 = ___msg0;
		NullCheck(L_1);
		Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
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
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mAC564D6964EDAEDEB158A4FEB741444645CEFAEB (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Message/Callback::BeginInvoke(Oculus.Platform.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m5B4DC917F8773EDCD11662E01027295E04086E30 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Message/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_m629498715CDFA7B26764CEDBEA3DB2A2F29FE27F (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Message/ExtraMessageTypesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraMessageTypesHandler__ctor_m8CCAD880D1B65AC804C1C29FEEAC2309AB794672 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::Invoke(System.IntPtr,Oculus.Platform.Message/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_Invoke_mF3C0E6177A016D6B3AAB79420833149C6A171873 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, const RuntimeMethod* method)
{
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * result = NULL;
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
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___messageHandle0, ___message_type1, targetMethod);
			}
			else
			{
				// closed
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___messageHandle0, ___message_type1);
					else
						result = GenericVirtFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___messageHandle0, ___message_type1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___messageHandle0, ___message_type1);
					else
						result = VirtFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___messageHandle0, ___message_type1);
				}
			}
			else
			{
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Message/ExtraMessageTypesHandler::BeginInvoke(System.IntPtr,Oculus.Platform.Message/MessageType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtraMessageTypesHandler_BeginInvoke_m2EEB388D56B9E86FB9AF9055E09E94CA1080B7B9 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___messageHandle0);
	__d_args[1] = Box(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var, &___message_type1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_EndInvoke_mC66AAD40993CE67A2E25F6FE2A45284E5DA71A6D (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *)__result;;
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
// System.Void Oculus.Platform.PlatformInternal/HTTP::SetHttpTransferUpdateCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_SetHttpTransferUpdateCallback_mED993055DA85449BB4D55481CE809A14AF4AA997 (Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mC13680157905408E3062BCDCA7EC876230AEBB05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_HTTP_Transfer,
		//   callback
		// );
		Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mC13680157905408E3062BCDCA7EC876230AEBB05(((int32_t)2111073839), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mC13680157905408E3062BCDCA7EC876230AEBB05_RuntimeMethod_var);
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> Oculus.Platform.PlatformInternal/Users::GetLinkedAccounts(Oculus.Platform.ServiceProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * Users_GetLinkedAccounts_m9AEECF2E266061D65F99D7F14833D636F50396E4 (ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* ___providers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * V_0 = NULL;
	ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// UserOptions userOpts = new UserOptions();
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 *)il2cpp_codegen_object_new(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_2 = ___providers0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0022;
	}

IL_0013:
	{
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// userOpts.AddServiceProvider(provider);
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6(L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0022:
	{
		// foreach (ServiceProvider provider in providers)
		int32_t L_10 = V_2;
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LinkedAccountList>(CAPI.ovr_User_GetLinkedAccounts((IntPtr)userOpts));
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_12 = V_0;
		intptr_t L_13;
		L_13 = UserOptions_op_Explicit_mF3560C78C7B6E14615CC1B4D111AE3425DC99822(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_14;
		L_14 = CAPI_ovr_User_GetLinkedAccounts_mD179F5F7B2478C69264051CD8E15ADB290213D90((intptr_t)L_13, /*hidden argument*/NULL);
		Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * L_15 = (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)il2cpp_codegen_object_new(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6(L_15, L_14, /*hidden argument*/Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		return L_15;
	}

IL_0039:
	{
		// return null;
		return (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)NULL;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_mE62CADC1A93D3878C4AF2CAB4600B7A43E8D656E (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_m4CBFE3D9C43F42E512587B34F68FA069B9EF9989 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___msg1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.StandalonePlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m951569774A2ED1032DEB433269D86118D66270F9 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mD26CA4B73B70214F81E2A8D930EF8EE00EC37A92 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_Awake_m9538F15D80113236A3A698AD436CB902883F5080 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bufferSizeElements = (int)CAPI.ovr_Voip_GetOutputBufferMaxSize();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_0;
		L_0 = CAPI_ovr_Voip_GetOutputBufferMaxSize_m9A9403AE7A22767F9DB95E3F925530E00B926D12(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = UIntPtr_op_Explicit_m42F9C132618855421CA747B04DE939BCC71449F5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// scratchBuffer = new float[bufferSizeElements];
		int32_t L_2 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_scratchBuffer_5(L_3);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	{
		// int sizeToFetch = data.Length / channels;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = ___channels1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))/(int32_t)L_1));
		// int sourceBufferSize = sizeToFetch;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// if (sourceBufferSize > scratchBuffer.Length)
		int32_t L_3 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_scratchBuffer_5();
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// Array.Clear(data, 0, data.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___data0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___data0;
		NullCheck(L_6);
		Array_Clear_m14F24D8DBE5A2FD747E8F94E2F7759FBA495DB1C((RuntimeArray *)(RuntimeArray *)L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// throw new Exception(string.Format("Audio system tried to pull {0} bytes, max voip internal ring buffer size {1}", sizeToFetch, scratchBuffer.Length));
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = __this->get_scratchBuffer_5();
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66)), L_9, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var)));
	}

IL_0040:
	{
		// int available = parent.pcmSource.PeekSizeElements();
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_15 = __this->get_parent_4();
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->get_pcmSource_7();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
		// if (available < sourceBufferSize)
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_007f;
		}
	}
	{
		// if (verboseLogging)
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_20 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_20)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogFormat(
		//   "Voip starved! Want {0}, but only have {1} available",
		//   sourceBufferSize,
		//   available);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m72BF100F3CFE21832B462EDDA71CF0FE28C0D093(_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0, L_26, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return;
		return;
	}

IL_007f:
	{
		// int copied = parent.pcmSource.GetPCM(scratchBuffer, sourceBufferSize);
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_30 = __this->get_parent_4();
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->get_pcmSource_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = __this->get_scratchBuffer_5();
		int32_t L_33 = V_1;
		NullCheck(L_31);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker2< int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int32_t >::Invoke(0 /* System.Int32 Oculus.Platform.IVoipPCMSource::GetPCM(System.Single[],System.Int32) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_31, L_32, L_33);
		V_3 = L_34;
		// if (copied < sourceBufferSize)
		int32_t L_35 = V_3;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00be;
		}
	}
	{
		// Debug.LogWarningFormat(
		//   "GetPCM() returned {0} samples, expected {1}",
		//   copied,
		//   sourceBufferSize);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
		int32_t L_39 = V_3;
		int32_t L_40 = L_39;
		RuntimeObject * L_41 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_38;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_45);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m0376DF1FA13FFF5290B9AB27F9808F6632E9A8C7(_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D, L_42, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00be:
	{
		// int dest = 0;
		V_4 = 0;
		// float tmpPeakAmp = -1;
		V_5 = (-1.0f);
		// for (int i = 0; i < sizeToFetch; i++)
		V_6 = 0;
		goto IL_0103;
	}

IL_00cd:
	{
		// float val = scratchBuffer[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = __this->get_scratchBuffer_5();
		int32_t L_47 = V_6;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		float L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_7 = L_49;
		// for (int j = 0; j < channels; j++)
		V_8 = 0;
		goto IL_00f8;
	}

IL_00dd:
	{
		// data[dest++] = val;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = ___data0;
		int32_t L_51 = V_4;
		int32_t L_52 = L_51;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		float L_53 = V_7;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (float)L_53);
		// if (val > tmpPeakAmp)
		float L_54 = V_7;
		float L_55 = V_5;
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_00f2;
		}
	}
	{
		// tmpPeakAmp = val;
		float L_56 = V_7;
		V_5 = L_56;
	}

IL_00f2:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_57 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_00f8:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_58 = V_8;
		int32_t L_59 = ___channels1;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0103:
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_61 = V_6;
		int32_t L_62 = V_0;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00cd;
		}
	}
	{
		// parent.peakAmplitude = tmpPeakAmp;
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_63 = __this->get_parent_4();
		float L_64 = V_5;
		NullCheck(L_63);
		L_63->set_peakAmplitude_6(L_64);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate__ctor_m30ADF76B8C36FA9BEC6180830B5B661E457DDD78 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_m75D3B3850C8B2DE6435D1495E90BDF37BDEA5124 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_mED9E5A5F33A4FC185CA7A813EF24AB13080A2F30 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___msg1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.WindowsPlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m0384626C20F86718E03B4DA02A456C3067B49029 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mBC6914A5F0EE519B48B8E21FF21FE3DE3E93B658 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_m9D4BF9E9EA02826796994CCEB16369FF205115D6_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsPlatformInitialized;
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_IsPlatformInitialized_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PingResult_set_ID_mF198896BB8E0C1E23B74F439F12B179E5747D5A2_inline (PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public UInt64 ID { get; private set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF_inline (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong RequestID {get; set;}
		uint64_t L_0 = ___value0;
		__this->set_U3CRequestIDU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m14ED5FB11903CDC76E8B71BD88F67DF936CF6896_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Message_1_get_Data_m965B8E04244F3B3526637D10A79FD7002B07232A_gshared_inline (Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C * __this, const RuntimeMethod* method)
{
	{
		// public T Data { get { return data; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_data_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB2420C0D6B3AA027BB9C15B0E9B3FFEFB30C0662_gshared_inline (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method)
{
	{
		// public string NextUrl         { get { return _NextUrl;                                  } }
		String_t* L_0 = (String_t*)__this->get__NextUrl_1();
		return (String_t*)L_0;
	}
}
