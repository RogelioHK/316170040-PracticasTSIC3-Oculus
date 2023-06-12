#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>>
struct Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Oculus.Interaction.IInteractorView>
struct Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681;
// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>
struct Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22;
// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs>
struct Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699;
// System.Action`1<Oculus.Interaction.PointerEvent>
struct Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0;
// System.Action`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>
struct Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`2<System.Int32,System.Boolean>
struct Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00;
// System.Action`2<Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose>
struct Action_2_t937D2F8DD9E6D2947F8C8F33B84D8A196148C439;
// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916;
// System.Converter`2<Oculus.Interaction.IUpdateDriver,UnityEngine.Object>
struct Converter_2_t463C17C861A4A9E709E900E4DC5CA54DD7591422;
// System.Converter`2<UnityEngine.Object,Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster>
struct Converter_2_t78D1B93B085653DB223C4E5214457480310B2E08;
// System.Converter`2<UnityEngine.Object,Oculus.Interaction.IUpdateDriver>
struct Converter_2_t35D61379A4660072721586BAA7EFD8F400D2CC34;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.IPointableCanvas,System.Action`1<Oculus.Interaction.PointerEvent>>
struct Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.PointableCanvasModule/Pointer>
struct Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055;
// System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,UnityEngine.Coroutine>
struct Dictionary_2_t899021F096CEE12E19D5D79695545EF36FCD0FB2;
// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>
struct Dictionary_2_t19ECEBB30BE7A296A9706DAACCC539EAAEB8FD42;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>
struct Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.PokeInteractor>
struct EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.RayInteractor>
struct EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>
struct FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>
struct FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>
struct FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103;
// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>
struct FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Single>
struct Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740;
// System.Func`2<System.Single[],UnityEngine.Quaternion>
struct Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59;
// System.Func`2<System.Single[],UnityEngine.Vector2>
struct Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E;
// System.Func`2<System.Single[],UnityEngine.Vector3>
struct Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D;
// System.Func`2<System.Single[],UnityEngine.Vector4>
struct Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231;
// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8;
// System.Func`2<Oculus.Interaction.PoseDetection.TransformFeature,System.Nullable`1<System.Single>>
struct Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655;
// System.Func`2<Oculus.Interaction.PoseDetection.TransformFeature,System.Int32>
struct Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4;
// System.Func`3<UnityEngine.Quaternion,System.Int32,System.Single>
struct Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C;
// System.Func`3<UnityEngine.Vector2,System.Int32,System.Single>
struct Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F;
// System.Func`3<UnityEngine.Vector3,System.Int32,System.Single>
struct Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF;
// System.Func`3<UnityEngine.Vector4,System.Int32,System.Single>
struct Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0;
// System.Collections.Generic.IDictionary`2<Oculus.Interaction.Input.HandFinger,Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]>
struct IDictionary_2_t63A2B8ABB8B4DBCDC13DF81DCAD58C08EFD7E54B;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>>
struct IEnumerator_1_t5EF0C1AF9CB863B48EE66DFE0E99B6E1883F3902;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Interaction.PokeInteractable>
struct IEqualityComparer_1_t2D9DC93EDA8FFD807985D70723005A8DDBCE5C76;
// Oculus.Interaction.PoseDetection.IFeatureThresholds`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>
struct IFeatureThresholds_2_tD2B692B859606DE987EB912E30ACEBF4D839E79A;
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription>
struct IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38;
// System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>
struct IReadOnlyList_1_t1C2F6B3EF30FCAB9A5333B2031E0D697CF33A5E6;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>
struct InteractableRegistry_2_t1DA54923E9270E6B9C75F9620DBF8FF0150663D5;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>
struct InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>
struct KeyCollection_t9684650F139ADE34AE3DE8A03CD59032055EA396;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter>
struct List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>
struct List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427;
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig>
struct List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE;
// System.Collections.Generic.List`1<Oculus.Interaction.PointableCanvasModule/Pointer>
struct List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5;
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>
struct List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.PokeInteractor>
struct MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.RayInteractor>
struct MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA;
// System.Predicate`1<UnityEngine.Rigidbody>
struct Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD;
// System.Predicate`1<Oculus.Interaction.Tween/TweenCurve>
struct Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>
struct ValueCollection_t5BFF327FFF508D20A514E0250731DE613565BBCA;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>[]
struct EntryU5BU5D_t8D8DC1D3225C550FF9C89665927E2EC768C340A5;
// Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<Oculus.Interaction.PoseDetection.TransformFeature,System.String>[]
struct FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1;
// Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>[]
struct IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Oculus.Interaction.PoseDetection.FeatureStateDescription[]
struct FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440;
// Oculus.Interaction.Input.HandJointId[]
struct HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
// Oculus.Interaction.Throw.ReleaseVelocityInformation[]
struct ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Oculus.Interaction.PoseDetection.TransformFeature[]
struct TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8;
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig[]
struct JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7;
// Oculus.Interaction.PointableCanvasModule/Pointer[]
struct PointerU5BU5D_t893261D33852F80BABFF982B576070DD3D286BCD;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]
struct FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Oculus.Interaction.PoseDetection.FeatureDescription
struct FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D;
// Oculus.Interaction.PoseDetection.FeatureStateDescription
struct FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1;
// Oculus.Interaction.FloatConstraint
struct FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Oculus.Interaction.IActiveState
struct IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster
struct ILocomotionEventBroadcaster_t9029D456C57C873BFF03293F4FCD4925F8871B5F;
// Oculus.Interaction.IMovementProvider
struct IMovementProvider_t27BD4945FC620329E5B814FB5CF1D97616510E24;
// Oculus.Interaction.IPointableCanvas
struct IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918;
// Oculus.Interaction.IPointableElement
struct IPointableElement_t842C048A71D3ECDAA023437399BE8654657B3C7D;
// Oculus.Interaction.Surfaces.ISurface
struct ISurface_tA887537497D6C88323C26BB9A920F4A9ACBD6E32;
// Oculus.Interaction.Surfaces.ISurfacePatch
struct ISurfacePatch_t07DD38A9DC9FCDE0EB99F65CF071DD8E50A0EF2E;
// Oculus.Interaction.IUpdateDriver
struct IUpdateDriver_t7837C44A5DEDE547C09FFC70F56FA9541AE91E39;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Oculus.Interaction.PointableCanvasModule
struct PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Oculus.Interaction.PokeInteractable
struct PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7;
// Oculus.Interaction.ProgressCurve
struct ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4;
// Oculus.Interaction.RayInteractable
struct RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E;
// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Oculus.Interaction.PoseDetection.ShapeRecognizer
struct ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6;
// System.String
struct String_t;
// Oculus.Interaction.Locomotion.TeleportInteractable
struct TeleportInteractable_tF0F7128379D82BE999E04F28573FF9C3045C8463;
// Oculus.Interaction.Locomotion.TeleportInteractor
struct TeleportInteractor_t33FF7AC0359F2D85D81E3441065F5A71AED865D9;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Oculus.Interaction.PoseDetection.TransformConfig
struct TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505;
// Oculus.Interaction.PoseDetection.TransformFeatureConfig
struct TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8;
// Oculus.Interaction.PoseDetection.TransformFeatureStateThresholds
struct TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1;
// Oculus.Interaction.PoseDetection.TransformJointData
struct TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList
struct JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB;
// Oculus.Interaction.ListLayout/<>c
struct U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621;
// Oculus.Interaction.ListLayout/ListElement
struct ListElement_t114C14FF067EA290036811AD6F3827392A6028FA;
// Oculus.Interaction.ListLayoutEase/ListElementEase
struct ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2;
// Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c
struct U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D;
// Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c
struct U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54;
// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4
struct U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF;
// Oculus.Interaction.Input.OneEuroFilter/<>c
struct U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878;
// Oculus.Interaction.Input.OneEuroFilter/LowPassFilter
struct LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38;
// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c
struct U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB;
// Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints
struct OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A;
// Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints
struct OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355;
// Oculus.Interaction.PhysicsGrabbable/<>c
struct U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B;
// Oculus.Interaction.Locomotion.PlayerLocomotor/<>c
struct U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E;
// Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t5B7C30904B4BA3D6A031B421D8CF578D88F86F17;
// Oculus.Interaction.PointableCanvasModule/Pointer
struct Pointer_t8F177D393665020358C0C4520193ACBBC99BF489;
// Oculus.Interaction.PointableDebugGizmos/PointData
struct PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90;
// Oculus.Interaction.PointableElement/<>c
struct U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// Oculus.Interaction.PokeInteractable/DragThresholdsConfig
struct DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A;
// Oculus.Interaction.PokeInteractable/MinThresholdsConfig
struct MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC;
// Oculus.Interaction.PokeInteractable/PositionPinningConfig
struct PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA;
// Oculus.Interaction.PokeInteractable/RecoilAssistConfig
struct RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE;
// Oculus.Interaction.PokeInteractor/<>c
struct U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F;
// Oculus.Interaction.PokeInteractor/SurfaceHitCache
struct SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED;
// Oculus.Interaction.ProgressCurve/<>c
struct U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2;
// Oculus.Interaction.RayInteractor/RayCandidateProperties
struct RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16;
// Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5;
// Oculus.Interaction.PoseDetection.Sequence/<>c
struct U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D;
// Oculus.Interaction.PoseDetection.Sequence/ActivationStep
struct ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54;
// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21
struct U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig
struct FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList
struct FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF;
// Oculus.Interaction.SnapInteractor/<>c
struct U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773;
// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c
struct U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C;
// Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams
struct BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C;
// Oculus.Interaction.Input.SyntheticHand/<>c
struct U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367;
// Oculus.Interaction.Locomotion.TeleportInteractor/<>c
struct U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA;
// Oculus.Interaction.TouchHandGrabInteractor/<>c
struct U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4;
// Oculus.Interaction.TouchHandGrabInteractor/FingerStatus
struct FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C;
// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c
struct U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B;
// Oculus.Interaction.TouchShadowHand/GrabTouchInfo
struct GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585;
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c
struct U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7;
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder
struct TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D;
// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c
struct U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97;
// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F;
// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo
struct TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9;
// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c
struct U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4;
// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c
struct U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4;
// Oculus.Interaction.Tween/<>c
struct U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04;
// Oculus.Interaction.Tween/TweenCurve
struct TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135;
// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
struct TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40;
// Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints
struct TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A;
// Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints
struct TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01;
// Oculus.Interaction.UpdateDriverGroup/<>c
struct U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F;
// Oculus.Interaction.VirtualPointable/<>c
struct U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F;
// Oculus.Interaction.VirtualSelector/<>c
struct U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B;
// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c
struct U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocomotionEventBroadcaster_t9029D456C57C873BFF03293F4FCD4925F8871B5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tCDA0DC7D0725EF547CDB8BD64CC747B646C98740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISurfacePatch_t07DD38A9DC9FCDE0EB99F65CF071DD8E50A0EF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISurface_tA887537497D6C88323C26BB9A920F4A9ACBD6E32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUpdateDriver_t7837C44A5DEDE547C09FFC70F56FA9541AE91E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndOfFrameCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m32FDEFE9F31D12A630C6BC41BF192A5E4424DACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m11117DBA3B3403BF14D9C5F0A7636FB8D06C922D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mFBA074B176B2BF568D385D9EF65250FE559A9B56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_Reset_m905A925870ABD7B37A389A72C603496F596C69E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mE22BFAD5D601ADA32C0790CB75C325CF887A58AD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440;
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>
struct Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8D8DC1D3225C550FF9C89665927E2EC768C340A5* ___entries_1;
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
	KeyCollection_t9684650F139ADE34AE3DE8A03CD59032055EA396 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5BFF327FFF508D20A514E0250731DE613565BBCA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___entries_1)); }
	inline EntryU5BU5D_t8D8DC1D3225C550FF9C89665927E2EC768C340A5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8D8DC1D3225C550FF9C89665927E2EC768C340A5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8D8DC1D3225C550FF9C89665927E2EC768C340A5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___keys_7)); }
	inline KeyCollection_t9684650F139ADE34AE3DE8A03CD59032055EA396 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9684650F139ADE34AE3DE8A03CD59032055EA396 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9684650F139ADE34AE3DE8A03CD59032055EA396 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ___values_8)); }
	inline ValueCollection_t5BFF327FFF508D20A514E0250731DE613565BBCA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5BFF327FFF508D20A514E0250731DE613565BBCA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5BFF327FFF508D20A514E0250731DE613565BBCA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>
struct FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.FeatureStateProvider`2::<LastUpdatedFrameId>k__BackingField
	int32_t ___U3CLastUpdatedFrameIdU3Ek__BackingField_0;
	// Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<TFeature,TFeatureState>[] Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureToCurrentState
	FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1* ____featureToCurrentState_1;
	// Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>[] Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureToThresholds
	IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366* ____featureToThresholds_2;
	// System.Func`2<TFeature,System.Nullable`1<System.Single>> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_valueReader
	Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 * ____valueReader_3;
	// System.Func`2<TFeature,System.Int32> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureToInt
	Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * ____featureToInt_4;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_timeProvider
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ____timeProvider_5;
	// Oculus.Interaction.PoseDetection.IFeatureThresholds`2<TFeature,TFeatureState> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureThresholds
	RuntimeObject* ____featureThresholds_7;

public:
	inline static int32_t get_offset_of_U3CLastUpdatedFrameIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ___U3CLastUpdatedFrameIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CLastUpdatedFrameIdU3Ek__BackingField_0() const { return ___U3CLastUpdatedFrameIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLastUpdatedFrameIdU3Ek__BackingField_0() { return &___U3CLastUpdatedFrameIdU3Ek__BackingField_0; }
	inline void set_U3CLastUpdatedFrameIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CLastUpdatedFrameIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__featureToCurrentState_1() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureToCurrentState_1)); }
	inline FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1* get__featureToCurrentState_1() const { return ____featureToCurrentState_1; }
	inline FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1** get_address_of__featureToCurrentState_1() { return &____featureToCurrentState_1; }
	inline void set__featureToCurrentState_1(FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1* value)
	{
		____featureToCurrentState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureToCurrentState_1), (void*)value);
	}

	inline static int32_t get_offset_of__featureToThresholds_2() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureToThresholds_2)); }
	inline IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366* get__featureToThresholds_2() const { return ____featureToThresholds_2; }
	inline IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366** get_address_of__featureToThresholds_2() { return &____featureToThresholds_2; }
	inline void set__featureToThresholds_2(IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366* value)
	{
		____featureToThresholds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureToThresholds_2), (void*)value);
	}

	inline static int32_t get_offset_of__valueReader_3() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____valueReader_3)); }
	inline Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 * get__valueReader_3() const { return ____valueReader_3; }
	inline Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 ** get_address_of__valueReader_3() { return &____valueReader_3; }
	inline void set__valueReader_3(Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 * value)
	{
		____valueReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueReader_3), (void*)value);
	}

	inline static int32_t get_offset_of__featureToInt_4() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureToInt_4)); }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * get__featureToInt_4() const { return ____featureToInt_4; }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 ** get_address_of__featureToInt_4() { return &____featureToInt_4; }
	inline void set__featureToInt_4(Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * value)
	{
		____featureToInt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureToInt_4), (void*)value);
	}

	inline static int32_t get_offset_of__timeProvider_5() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____timeProvider_5)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get__timeProvider_5() const { return ____timeProvider_5; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of__timeProvider_5() { return &____timeProvider_5; }
	inline void set__timeProvider_5(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		____timeProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of__featureThresholds_7() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureThresholds_7)); }
	inline RuntimeObject* get__featureThresholds_7() const { return ____featureThresholds_7; }
	inline RuntimeObject** get_address_of__featureThresholds_7() { return &____featureThresholds_7; }
	inline void set__featureThresholds_7(RuntimeObject* value)
	{
		____featureThresholds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureThresholds_7), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>
struct List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____items_1)); }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* get__items_1() const { return ____items_1; }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig>
struct List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____items_1)); }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* get__items_1() const { return ____items_1; }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>
struct List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____items_1)); }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* get__items_1() const { return ____items_1; }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Interaction.PoseDetection.FeatureDescription
struct FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D  : public RuntimeObject
{
public:
	// System.String Oculus.Interaction.PoseDetection.FeatureDescription::<ShortDescription>k__BackingField
	String_t* ___U3CShortDescriptionU3Ek__BackingField_0;
	// System.String Oculus.Interaction.PoseDetection.FeatureDescription::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.PoseDetection.FeatureDescription::<MinValueHint>k__BackingField
	float ___U3CMinValueHintU3Ek__BackingField_2;
	// System.Single Oculus.Interaction.PoseDetection.FeatureDescription::<MaxValueHint>k__BackingField
	float ___U3CMaxValueHintU3Ek__BackingField_3;
	// Oculus.Interaction.PoseDetection.FeatureStateDescription[] Oculus.Interaction.PoseDetection.FeatureDescription::<FeatureStates>k__BackingField
	FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* ___U3CFeatureStatesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CShortDescriptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CShortDescriptionU3Ek__BackingField_0)); }
	inline String_t* get_U3CShortDescriptionU3Ek__BackingField_0() const { return ___U3CShortDescriptionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CShortDescriptionU3Ek__BackingField_0() { return &___U3CShortDescriptionU3Ek__BackingField_0; }
	inline void set_U3CShortDescriptionU3Ek__BackingField_0(String_t* value)
	{
		___U3CShortDescriptionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShortDescriptionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CDescriptionU3Ek__BackingField_1)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_1() const { return ___U3CDescriptionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_1() { return &___U3CDescriptionU3Ek__BackingField_1; }
	inline void set_U3CDescriptionU3Ek__BackingField_1(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMinValueHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CMinValueHintU3Ek__BackingField_2)); }
	inline float get_U3CMinValueHintU3Ek__BackingField_2() const { return ___U3CMinValueHintU3Ek__BackingField_2; }
	inline float* get_address_of_U3CMinValueHintU3Ek__BackingField_2() { return &___U3CMinValueHintU3Ek__BackingField_2; }
	inline void set_U3CMinValueHintU3Ek__BackingField_2(float value)
	{
		___U3CMinValueHintU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxValueHintU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CMaxValueHintU3Ek__BackingField_3)); }
	inline float get_U3CMaxValueHintU3Ek__BackingField_3() const { return ___U3CMaxValueHintU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxValueHintU3Ek__BackingField_3() { return &___U3CMaxValueHintU3Ek__BackingField_3; }
	inline void set_U3CMaxValueHintU3Ek__BackingField_3(float value)
	{
		___U3CMaxValueHintU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFeatureStatesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CFeatureStatesU3Ek__BackingField_4)); }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* get_U3CFeatureStatesU3Ek__BackingField_4() const { return ___U3CFeatureStatesU3Ek__BackingField_4; }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440** get_address_of_U3CFeatureStatesU3Ek__BackingField_4() { return &___U3CFeatureStatesU3Ek__BackingField_4; }
	inline void set_U3CFeatureStatesU3Ek__BackingField_4(FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* value)
	{
		___U3CFeatureStatesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFeatureStatesU3Ek__BackingField_4), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureStateDescription
struct FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1  : public RuntimeObject
{
public:
	// System.String Oculus.Interaction.PoseDetection.FeatureStateDescription::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Oculus.Interaction.PoseDetection.FeatureStateDescription::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}
};


// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions
struct MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E  : public RuntimeObject
{
public:
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::_poses
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____poses_0;

public:
	inline static int32_t get_offset_of__poses_0() { return static_cast<int32_t>(offsetof(ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E, ____poses_0)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__poses_0() const { return ____poses_0; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__poses_0() { return &____poses_0; }
	inline void set__poses_0(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____poses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poses_0), (void*)value);
	}
};


// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822  : public RuntimeObject
{
public:
	// UnityEngine.Pose[] Oculus.Interaction.Input.ReadOnlyHandJointPoses::_poses
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____poses_0;

public:
	inline static int32_t get_offset_of__poses_0() { return static_cast<int32_t>(offsetof(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822, ____poses_0)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__poses_0() const { return ____poses_0; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__poses_0() { return &____poses_0; }
	inline void set__poses_0(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____poses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poses_0), (void*)value);
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


// Oculus.Interaction.PoseDetection.TransformFeatureProperties
struct TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA  : public RuntimeObject
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

// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList
struct JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig> Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList::_values
	List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * ____values_0;

public:
	inline static int32_t get_offset_of__values_0() { return static_cast<int32_t>(offsetof(JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB, ____values_0)); }
	inline List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * get__values_0() const { return ____values_0; }
	inline List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE ** get_address_of__values_0() { return &____values_0; }
	inline void set__values_0(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * value)
	{
		____values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_0), (void*)value);
	}
};


// Oculus.Interaction.ListLayout/<>c
struct U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.ListLayout/ListElement
struct ListElement_t114C14FF067EA290036811AD6F3827392A6028FA  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.ListLayout/ListElement::id
	int32_t ___id_0;
	// System.Single Oculus.Interaction.ListLayout/ListElement::pos
	float ___pos_1;
	// System.Single Oculus.Interaction.ListLayout/ListElement::halfSize
	float ___halfSize_2;
	// Oculus.Interaction.ListLayout/ListElement Oculus.Interaction.ListLayout/ListElement::prev
	ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * ___prev_3;
	// Oculus.Interaction.ListLayout/ListElement Oculus.Interaction.ListLayout/ListElement::next
	ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * ___next_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA, ___pos_1)); }
	inline float get_pos_1() const { return ___pos_1; }
	inline float* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(float value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_halfSize_2() { return static_cast<int32_t>(offsetof(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA, ___halfSize_2)); }
	inline float get_halfSize_2() const { return ___halfSize_2; }
	inline float* get_address_of_halfSize_2() { return &___halfSize_2; }
	inline void set_halfSize_2(float value)
	{
		___halfSize_2 = value;
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA, ___prev_3)); }
	inline ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * get_prev_3() const { return ___prev_3; }
	inline ListElement_t114C14FF067EA290036811AD6F3827392A6028FA ** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_3), (void*)value);
	}

	inline static int32_t get_offset_of_next_4() { return static_cast<int32_t>(offsetof(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA, ___next_4)); }
	inline ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * get_next_4() const { return ___next_4; }
	inline ListElement_t114C14FF067EA290036811AD6F3827392A6028FA ** get_address_of_next_4() { return &___next_4; }
	inline void set_next_4(ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * value)
	{
		___next_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_4), (void*)value);
	}
};


// Oculus.Interaction.ListLayoutEase/ListElementEase
struct ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve Oculus.Interaction.ListLayoutEase/ListElementEase::_curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____curve_0;
	// System.Single Oculus.Interaction.ListLayoutEase/ListElementEase::_curveTime
	float ____curveTime_1;
	// System.Single Oculus.Interaction.ListLayoutEase/ListElementEase::_startTime
	float ____startTime_2;
	// System.Single Oculus.Interaction.ListLayoutEase/ListElementEase::_start
	float ____start_3;
	// System.Single Oculus.Interaction.ListLayoutEase/ListElementEase::_target
	float ____target_4;
	// System.Single Oculus.Interaction.ListLayoutEase/ListElementEase::position
	float ___position_5;

public:
	inline static int32_t get_offset_of__curve_0() { return static_cast<int32_t>(offsetof(ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2, ____curve_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__curve_0() const { return ____curve_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__curve_0() { return &____curve_0; }
	inline void set__curve_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____curve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____curve_0), (void*)value);
	}

	inline static int32_t get_offset_of__curveTime_1() { return static_cast<int32_t>(offsetof(ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2, ____curveTime_1)); }
	inline float get__curveTime_1() const { return ____curveTime_1; }
	inline float* get_address_of__curveTime_1() { return &____curveTime_1; }
	inline void set__curveTime_1(float value)
	{
		____curveTime_1 = value;
	}

	inline static int32_t get_offset_of__startTime_2() { return static_cast<int32_t>(offsetof(ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2, ____startTime_2)); }
	inline float get__startTime_2() const { return ____startTime_2; }
	inline float* get_address_of__startTime_2() { return &____startTime_2; }
	inline void set__startTime_2(float value)
	{
		____startTime_2 = value;
	}

	inline static int32_t get_offset_of__start_3() { return static_cast<int32_t>(offsetof(ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2, ____start_3)); }
	inline float get__start_3() const { return ____start_3; }
	inline float* get_address_of__start_3() { return &____start_3; }
	inline void set__start_3(float value)
	{
		____start_3 = value;
	}

	inline static int32_t get_offset_of__target_4() { return static_cast<int32_t>(offsetof(ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2, ____target_4)); }
	inline float get__target_4() const { return ____target_4; }
	inline float* get_address_of__target_4() { return &____target_4; }
	inline void set__target_4(float value)
	{
		____target_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2, ___position_5)); }
	inline float get_position_5() const { return ___position_5; }
	inline float* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(float value)
	{
		___position_5 = value;
	}
};


// Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c
struct U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c
struct U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4
struct U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Action Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF, ___callback_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_2() const { return ___callback_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// Oculus.Interaction.Input.OneEuroFilter/<>c
struct U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Input.OneEuroFilter/LowPassFilter
struct LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::_isFirstUpdate
	bool ____isFirstUpdate_0;
	// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::_hatx
	float ____hatx_1;
	// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::_hatxprev
	float ____hatxprev_2;

public:
	inline static int32_t get_offset_of__isFirstUpdate_0() { return static_cast<int32_t>(offsetof(LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38, ____isFirstUpdate_0)); }
	inline bool get__isFirstUpdate_0() const { return ____isFirstUpdate_0; }
	inline bool* get_address_of__isFirstUpdate_0() { return &____isFirstUpdate_0; }
	inline void set__isFirstUpdate_0(bool value)
	{
		____isFirstUpdate_0 = value;
	}

	inline static int32_t get_offset_of__hatx_1() { return static_cast<int32_t>(offsetof(LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38, ____hatx_1)); }
	inline float get__hatx_1() const { return ____hatx_1; }
	inline float* get_address_of__hatx_1() { return &____hatx_1; }
	inline void set__hatx_1(float value)
	{
		____hatx_1 = value;
	}

	inline static int32_t get_offset_of__hatxprev_2() { return static_cast<int32_t>(offsetof(LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38, ____hatxprev_2)); }
	inline float get__hatxprev_2() const { return ____hatxprev_2; }
	inline float* get_address_of__hatxprev_2() { return &____hatxprev_2; }
	inline void set__hatxprev_2(float value)
	{
		____hatxprev_2 = value;
	}
};


// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c
struct U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints
struct OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A  : public RuntimeObject
{
public:
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints::MinAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinAngle_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints::MaxAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxAngle_1;

public:
	inline static int32_t get_offset_of_MinAngle_0() { return static_cast<int32_t>(offsetof(OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A, ___MinAngle_0)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinAngle_0() const { return ___MinAngle_0; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinAngle_0() { return &___MinAngle_0; }
	inline void set_MinAngle_0(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinAngle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinAngle_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxAngle_1() { return static_cast<int32_t>(offsetof(OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A, ___MaxAngle_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxAngle_1() const { return ___MaxAngle_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxAngle_1() { return &___MaxAngle_1; }
	inline void set_MaxAngle_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxAngle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxAngle_1), (void*)value);
	}
};


// Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints
struct OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::ConstraintsAreRelative
	bool ___ConstraintsAreRelative_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MinX
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinX_1;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MaxX
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxX_2;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MinY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinY_3;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MaxY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxY_4;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MinZ
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinZ_5;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MaxZ
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxZ_6;

public:
	inline static int32_t get_offset_of_ConstraintsAreRelative_0() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___ConstraintsAreRelative_0)); }
	inline bool get_ConstraintsAreRelative_0() const { return ___ConstraintsAreRelative_0; }
	inline bool* get_address_of_ConstraintsAreRelative_0() { return &___ConstraintsAreRelative_0; }
	inline void set_ConstraintsAreRelative_0(bool value)
	{
		___ConstraintsAreRelative_0 = value;
	}

	inline static int32_t get_offset_of_MinX_1() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MinX_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinX_1() const { return ___MinX_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinX_1() { return &___MinX_1; }
	inline void set_MinX_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinX_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinX_1), (void*)value);
	}

	inline static int32_t get_offset_of_MaxX_2() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MaxX_2)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxX_2() const { return ___MaxX_2; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxX_2() { return &___MaxX_2; }
	inline void set_MaxX_2(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxX_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxX_2), (void*)value);
	}

	inline static int32_t get_offset_of_MinY_3() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MinY_3)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinY_3() const { return ___MinY_3; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinY_3() { return &___MinY_3; }
	inline void set_MinY_3(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinY_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinY_3), (void*)value);
	}

	inline static int32_t get_offset_of_MaxY_4() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MaxY_4)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxY_4() const { return ___MaxY_4; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxY_4() { return &___MaxY_4; }
	inline void set_MaxY_4(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxY_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxY_4), (void*)value);
	}

	inline static int32_t get_offset_of_MinZ_5() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MinZ_5)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinZ_5() const { return ___MinZ_5; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinZ_5() { return &___MinZ_5; }
	inline void set_MinZ_5(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinZ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinZ_5), (void*)value);
	}

	inline static int32_t get_offset_of_MaxZ_6() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MaxZ_6)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxZ_6() const { return ___MaxZ_6; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxZ_6() { return &___MaxZ_6; }
	inline void set_MaxZ_6(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxZ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxZ_6), (void*)value);
	}
};


// Oculus.Interaction.PhysicsGrabbable/<>c
struct U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Locomotion.PlayerLocomotor/<>c
struct U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t5B7C30904B4BA3D6A031B421D8CF578D88F86F17  : public RuntimeObject
{
public:
	// Oculus.Interaction.PointableCanvasModule Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0::<>4__this
	PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * ___U3CU3E4__this_0;
	// Oculus.Interaction.IPointableCanvas Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0::pointerCanvas
	RuntimeObject* ___pointerCanvas_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t5B7C30904B4BA3D6A031B421D8CF578D88F86F17, ___U3CU3E4__this_0)); }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_pointerCanvas_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t5B7C30904B4BA3D6A031B421D8CF578D88F86F17, ___pointerCanvas_1)); }
	inline RuntimeObject* get_pointerCanvas_1() const { return ___pointerCanvas_1; }
	inline RuntimeObject** get_address_of_pointerCanvas_1() { return &___pointerCanvas_1; }
	inline void set_pointerCanvas_1(RuntimeObject* value)
	{
		___pointerCanvas_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerCanvas_1), (void*)value);
	}
};


// Oculus.Interaction.PointableElement/<>c
struct U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PokeInteractable/DragThresholdsConfig
struct DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PokeInteractable/DragThresholdsConfig::Enabled
	bool ___Enabled_0;
	// System.Single Oculus.Interaction.PokeInteractable/DragThresholdsConfig::DragNormal
	float ___DragNormal_1;
	// System.Single Oculus.Interaction.PokeInteractable/DragThresholdsConfig::DragTangent
	float ___DragTangent_2;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.PokeInteractable/DragThresholdsConfig::DragEaseCurve
	ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * ___DragEaseCurve_3;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_DragNormal_1() { return static_cast<int32_t>(offsetof(DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A, ___DragNormal_1)); }
	inline float get_DragNormal_1() const { return ___DragNormal_1; }
	inline float* get_address_of_DragNormal_1() { return &___DragNormal_1; }
	inline void set_DragNormal_1(float value)
	{
		___DragNormal_1 = value;
	}

	inline static int32_t get_offset_of_DragTangent_2() { return static_cast<int32_t>(offsetof(DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A, ___DragTangent_2)); }
	inline float get_DragTangent_2() const { return ___DragTangent_2; }
	inline float* get_address_of_DragTangent_2() { return &___DragTangent_2; }
	inline void set_DragTangent_2(float value)
	{
		___DragTangent_2 = value;
	}

	inline static int32_t get_offset_of_DragEaseCurve_3() { return static_cast<int32_t>(offsetof(DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A, ___DragEaseCurve_3)); }
	inline ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * get_DragEaseCurve_3() const { return ___DragEaseCurve_3; }
	inline ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 ** get_address_of_DragEaseCurve_3() { return &___DragEaseCurve_3; }
	inline void set_DragEaseCurve_3(ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * value)
	{
		___DragEaseCurve_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DragEaseCurve_3), (void*)value);
	}
};


// Oculus.Interaction.PokeInteractable/MinThresholdsConfig
struct MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PokeInteractable/MinThresholdsConfig::Enabled
	bool ___Enabled_0;
	// System.Single Oculus.Interaction.PokeInteractable/MinThresholdsConfig::MinNormal
	float ___MinNormal_1;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_MinNormal_1() { return static_cast<int32_t>(offsetof(MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC, ___MinNormal_1)); }
	inline float get_MinNormal_1() const { return ___MinNormal_1; }
	inline float* get_address_of_MinNormal_1() { return &___MinNormal_1; }
	inline void set_MinNormal_1(float value)
	{
		___MinNormal_1 = value;
	}
};


// Oculus.Interaction.PokeInteractable/PositionPinningConfig
struct PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PokeInteractable/PositionPinningConfig::Enabled
	bool ___Enabled_0;
	// System.Single Oculus.Interaction.PokeInteractable/PositionPinningConfig::MaxPinDistance
	float ___MaxPinDistance_1;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_MaxPinDistance_1() { return static_cast<int32_t>(offsetof(PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA, ___MaxPinDistance_1)); }
	inline float get_MaxPinDistance_1() const { return ___MaxPinDistance_1; }
	inline float* get_address_of_MaxPinDistance_1() { return &___MaxPinDistance_1; }
	inline void set_MaxPinDistance_1(float value)
	{
		___MaxPinDistance_1 = value;
	}
};


// Oculus.Interaction.PokeInteractable/RecoilAssistConfig
struct RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PokeInteractable/RecoilAssistConfig::Enabled
	bool ___Enabled_0;
	// System.Single Oculus.Interaction.PokeInteractable/RecoilAssistConfig::ExitDistance
	float ___ExitDistance_1;
	// System.Single Oculus.Interaction.PokeInteractable/RecoilAssistConfig::ReEnterDistance
	float ___ReEnterDistance_2;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_ExitDistance_1() { return static_cast<int32_t>(offsetof(RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE, ___ExitDistance_1)); }
	inline float get_ExitDistance_1() const { return ___ExitDistance_1; }
	inline float* get_address_of_ExitDistance_1() { return &___ExitDistance_1; }
	inline void set_ExitDistance_1(float value)
	{
		___ExitDistance_1 = value;
	}

	inline static int32_t get_offset_of_ReEnterDistance_2() { return static_cast<int32_t>(offsetof(RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE, ___ReEnterDistance_2)); }
	inline float get_ReEnterDistance_2() const { return ___ReEnterDistance_2; }
	inline float* get_address_of_ReEnterDistance_2() { return &___ReEnterDistance_2; }
	inline void set_ReEnterDistance_2(float value)
	{
		___ReEnterDistance_2 = value;
	}
};


// Oculus.Interaction.PokeInteractor/<>c
struct U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.ProgressCurve/<>c
struct U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PoseDetection.Sequence/<>c
struct U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PoseDetection.Sequence/ActivationStep
struct ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54  : public RuntimeObject
{
public:
	// UnityEngine.Object Oculus.Interaction.PoseDetection.Sequence/ActivationStep::_activeState
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____activeState_0;
	// Oculus.Interaction.IActiveState Oculus.Interaction.PoseDetection.Sequence/ActivationStep::<ActiveState>k__BackingField
	RuntimeObject* ___U3CActiveStateU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::_minActiveTime
	float ____minActiveTime_2;
	// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::_maxStepTime
	float ____maxStepTime_3;

public:
	inline static int32_t get_offset_of__activeState_0() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ____activeState_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__activeState_0() const { return ____activeState_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__activeState_0() { return &____activeState_0; }
	inline void set__activeState_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____activeState_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeState_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActiveStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ___U3CActiveStateU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CActiveStateU3Ek__BackingField_1() const { return ___U3CActiveStateU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CActiveStateU3Ek__BackingField_1() { return &___U3CActiveStateU3Ek__BackingField_1; }
	inline void set_U3CActiveStateU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CActiveStateU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveStateU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of__minActiveTime_2() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ____minActiveTime_2)); }
	inline float get__minActiveTime_2() const { return ____minActiveTime_2; }
	inline float* get_address_of__minActiveTime_2() { return &____minActiveTime_2; }
	inline void set__minActiveTime_2(float value)
	{
		____minActiveTime_2 = value;
	}

	inline static int32_t get_offset_of__maxStepTime_3() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ____maxStepTime_3)); }
	inline float get__maxStepTime_3() const { return ____maxStepTime_3; }
	inline float* get_address_of__maxStepTime_3() { return &____maxStepTime_3; }
	inline void set__maxStepTime_3(float value)
	{
		____maxStepTime_3 = value;
	}
};


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList
struct FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::_value
	List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF, ____value_0)); }
	inline List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * get__value_0() const { return ____value_0; }
	inline List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}
};


// Oculus.Interaction.SnapInteractor/<>c
struct U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c
struct U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams
struct BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C  : public RuntimeObject
{
public:
	// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::BufferLengthSeconds
	float ___BufferLengthSeconds_0;
	// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::SampleFrequency
	float ___SampleFrequency_1;

public:
	inline static int32_t get_offset_of_BufferLengthSeconds_0() { return static_cast<int32_t>(offsetof(BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C, ___BufferLengthSeconds_0)); }
	inline float get_BufferLengthSeconds_0() const { return ___BufferLengthSeconds_0; }
	inline float* get_address_of_BufferLengthSeconds_0() { return &___BufferLengthSeconds_0; }
	inline void set_BufferLengthSeconds_0(float value)
	{
		___BufferLengthSeconds_0 = value;
	}

	inline static int32_t get_offset_of_SampleFrequency_1() { return static_cast<int32_t>(offsetof(BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C, ___SampleFrequency_1)); }
	inline float get_SampleFrequency_1() const { return ___SampleFrequency_1; }
	inline float* get_address_of_SampleFrequency_1() { return &___SampleFrequency_1; }
	inline void set_SampleFrequency_1(float value)
	{
		___SampleFrequency_1 = value;
	}
};


// Oculus.Interaction.Input.SyntheticHand/<>c
struct U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Locomotion.TeleportInteractor/<>c
struct U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.TouchHandGrabInteractor/<>c
struct U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.TouchHandGrabInteractor/FingerStatus
struct FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Locked
	bool ___Locked_0;
	// System.Boolean Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Selecting
	bool ___Selecting_1;
	// Oculus.Interaction.Input.HandJointId[] Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Joints
	HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565* ___Joints_2;
	// UnityEngine.Pose[] Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::LocalJoints
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___LocalJoints_3;
	// System.Single Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::CurlValueAtLock
	float ___CurlValueAtLock_4;
	// System.Single Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Timer
	float ___Timer_5;

public:
	inline static int32_t get_offset_of_Locked_0() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Locked_0)); }
	inline bool get_Locked_0() const { return ___Locked_0; }
	inline bool* get_address_of_Locked_0() { return &___Locked_0; }
	inline void set_Locked_0(bool value)
	{
		___Locked_0 = value;
	}

	inline static int32_t get_offset_of_Selecting_1() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Selecting_1)); }
	inline bool get_Selecting_1() const { return ___Selecting_1; }
	inline bool* get_address_of_Selecting_1() { return &___Selecting_1; }
	inline void set_Selecting_1(bool value)
	{
		___Selecting_1 = value;
	}

	inline static int32_t get_offset_of_Joints_2() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Joints_2)); }
	inline HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565* get_Joints_2() const { return ___Joints_2; }
	inline HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565** get_address_of_Joints_2() { return &___Joints_2; }
	inline void set_Joints_2(HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565* value)
	{
		___Joints_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_2), (void*)value);
	}

	inline static int32_t get_offset_of_LocalJoints_3() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___LocalJoints_3)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get_LocalJoints_3() const { return ___LocalJoints_3; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of_LocalJoints_3() { return &___LocalJoints_3; }
	inline void set_LocalJoints_3(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		___LocalJoints_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalJoints_3), (void*)value);
	}

	inline static int32_t get_offset_of_CurlValueAtLock_4() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___CurlValueAtLock_4)); }
	inline float get_CurlValueAtLock_4() const { return ___CurlValueAtLock_4; }
	inline float* get_address_of_CurlValueAtLock_4() { return &___CurlValueAtLock_4; }
	inline void set_CurlValueAtLock_4(float value)
	{
		___CurlValueAtLock_4 = value;
	}

	inline static int32_t get_offset_of_Timer_5() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Timer_5)); }
	inline float get_Timer_5() const { return ___Timer_5; }
	inline float* get_address_of_Timer_5() { return &___Timer_5; }
	inline void set_Timer_5(float value)
	{
		___Timer_5 = value;
	}
};


// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c
struct U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c
struct U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c
struct U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.TransformJointData Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::jointData
	TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * ___jointData_0;
	// Oculus.Interaction.PoseDetection.TransformConfig Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::transformConfig
	TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___transformConfig_1;

public:
	inline static int32_t get_offset_of_jointData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F, ___jointData_0)); }
	inline TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * get_jointData_0() const { return ___jointData_0; }
	inline TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 ** get_address_of_jointData_0() { return &___jointData_0; }
	inline void set_jointData_0(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * value)
	{
		___jointData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointData_0), (void*)value);
	}

	inline static int32_t get_offset_of_transformConfig_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F, ___transformConfig_1)); }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * get_transformConfig_1() const { return ___transformConfig_1; }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 ** get_address_of_transformConfig_1() { return &___transformConfig_1; }
	inline void set_transformConfig_1(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * value)
	{
		___transformConfig_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformConfig_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo
struct TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.TransformConfig Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo::Config
	TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___Config_0;
	// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String> Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo::StateProvider
	FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * ___StateProvider_1;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9, ___Config_0)); }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * get_Config_0() const { return ___Config_0; }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Config_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateProvider_1() { return static_cast<int32_t>(offsetof(TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9, ___StateProvider_1)); }
	inline FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * get_StateProvider_1() const { return ___StateProvider_1; }
	inline FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 ** get_address_of_StateProvider_1() { return &___StateProvider_1; }
	inline void set_StateProvider_1(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * value)
	{
		___StateProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateProvider_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c
struct U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c
struct U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.Tween/<>c
struct U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
struct TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::ConstraintsAreRelative
	bool ___ConstraintsAreRelative_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::MinScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinScale_1;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::MaxScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxScale_2;

public:
	inline static int32_t get_offset_of_ConstraintsAreRelative_0() { return static_cast<int32_t>(offsetof(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40, ___ConstraintsAreRelative_0)); }
	inline bool get_ConstraintsAreRelative_0() const { return ___ConstraintsAreRelative_0; }
	inline bool* get_address_of_ConstraintsAreRelative_0() { return &___ConstraintsAreRelative_0; }
	inline void set_ConstraintsAreRelative_0(bool value)
	{
		___ConstraintsAreRelative_0 = value;
	}

	inline static int32_t get_offset_of_MinScale_1() { return static_cast<int32_t>(offsetof(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40, ___MinScale_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinScale_1() const { return ___MinScale_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinScale_1() { return &___MinScale_1; }
	inline void set_MinScale_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinScale_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinScale_1), (void*)value);
	}

	inline static int32_t get_offset_of_MaxScale_2() { return static_cast<int32_t>(offsetof(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40, ___MaxScale_2)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxScale_2() const { return ___MaxScale_2; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxScale_2() { return &___MaxScale_2; }
	inline void set_MaxScale_2(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxScale_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxScale_2), (void*)value);
	}
};


// Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints
struct TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A  : public RuntimeObject
{
public:
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MinScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinScale_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MaxScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxScale_1;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MinY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinY_2;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MaxY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxY_3;

public:
	inline static int32_t get_offset_of_MinScale_0() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MinScale_0)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinScale_0() const { return ___MinScale_0; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinScale_0() { return &___MinScale_0; }
	inline void set_MinScale_0(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinScale_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinScale_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxScale_1() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MaxScale_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxScale_1() const { return ___MaxScale_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxScale_1() { return &___MaxScale_1; }
	inline void set_MaxScale_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxScale_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxScale_1), (void*)value);
	}

	inline static int32_t get_offset_of_MinY_2() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MinY_2)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinY_2() const { return ___MinY_2; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinY_2() { return &___MinY_2; }
	inline void set_MinY_2(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinY_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinY_2), (void*)value);
	}

	inline static int32_t get_offset_of_MaxY_3() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MaxY_3)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxY_3() const { return ___MaxY_3; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxY_3() { return &___MaxY_3; }
	inline void set_MaxY_3(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxY_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxY_3), (void*)value);
	}
};


// Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints
struct TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01  : public RuntimeObject
{
public:
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints::MinAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinAngle_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints::MaxAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxAngle_1;

public:
	inline static int32_t get_offset_of_MinAngle_0() { return static_cast<int32_t>(offsetof(TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01, ___MinAngle_0)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinAngle_0() const { return ___MinAngle_0; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinAngle_0() { return &___MinAngle_0; }
	inline void set_MinAngle_0(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinAngle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinAngle_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxAngle_1() { return static_cast<int32_t>(offsetof(TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01, ___MaxAngle_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxAngle_1() const { return ___MaxAngle_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxAngle_1() { return &___MaxAngle_1; }
	inline void set_MaxAngle_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxAngle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxAngle_1), (void*)value);
	}
};


// Oculus.Interaction.UpdateDriverGroup/<>c
struct U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.VirtualPointable/<>c
struct U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.VirtualSelector/<>c
struct U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B  : public RuntimeObject
{
public:

public:
};


// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c
struct U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
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


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t1D07E0BE79730E98B98862A6ACA03CAF8E883CAD 
{
public:
	// System.Boolean Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0::forwardDirection
	bool ___forwardDirection_0;

public:
	inline static int32_t get_offset_of_forwardDirection_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t1D07E0BE79730E98B98862A6ACA03CAF8E883CAD, ___forwardDirection_0)); }
	inline bool get_forwardDirection_0() const { return ___forwardDirection_0; }
	inline bool* get_address_of_forwardDirection_0() { return &___forwardDirection_0; }
	inline void set_forwardDirection_0(bool value)
	{
		___forwardDirection_0 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t02A343DCDAB4C249B9ECB35EB6A39C8A34C53BD2 
{
public:
	// System.Collections.Generic.IDictionary`2<Oculus.Interaction.Input.HandFinger,Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]> Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0::fingerFeatureConfigs
	RuntimeObject* ___fingerFeatureConfigs_0;

public:
	inline static int32_t get_offset_of_fingerFeatureConfigs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t02A343DCDAB4C249B9ECB35EB6A39C8A34C53BD2, ___fingerFeatureConfigs_0)); }
	inline RuntimeObject* get_fingerFeatureConfigs_0() const { return ___fingerFeatureConfigs_0; }
	inline RuntimeObject** get_address_of_fingerFeatureConfigs_0() { return &___fingerFeatureConfigs_0; }
	inline void set_fingerFeatureConfigs_0(RuntimeObject* value)
	{
		___fingerFeatureConfigs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerFeatureConfigs_0), (void*)value);
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Oculus.Interaction.PoseDetection.FeatureStateActiveMode
struct FeatureStateActiveMode_tD5B42DE65F6F5A1A3BB4BCE64BB01789A1E990E8 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.FeatureStateActiveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FeatureStateActiveMode_tD5B42DE65F6F5A1A3BB4BCE64BB01789A1E990E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.FingerFeature
struct FingerFeature_tA7B4DA2BB61902F57A009E4CC443C6F6D1E2AE68 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.FingerFeature::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FingerFeature_tA7B4DA2BB61902F57A009E4CC443C6F6D1E2AE68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.HandFinger
struct HandFinger_t4015F4AA497AE22648530B80D96ACE6C2BCC0773 
{
public:
	// System.Int32 Oculus.Interaction.Input.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_t4015F4AA497AE22648530B80D96ACE6C2BCC0773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.Handedness
struct Handedness_tEB0C4A1C9050B998705E7134F47D2368BD692786 
{
public:
	// System.Int32 Oculus.Interaction.Input.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tEB0C4A1C9050B998705E7134F47D2368BD692786, ___value___2)); }
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


// Oculus.Interaction.InteractableState
struct InteractableState_tA9B703B04AA3473E94B51A1EE56DD821D239E75C 
{
public:
	// System.Int32 Oculus.Interaction.InteractableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractableState_tA9B703B04AA3473E94B51A1EE56DD821D239E75C, ___value___2)); }
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

// Oculus.Interaction.PointerEventType
struct PointerEventType_t4E31B567AE7DAA712AC31390A4B91A5112AAC018 
{
public:
	// System.Int32 Oculus.Interaction.PointerEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerEventType_t4E31B567AE7DAA712AC31390A4B91A5112AAC018, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Oculus.Interaction.Throw.ReleaseVelocityInformation
struct ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.Throw.ReleaseVelocityInformation::LinearVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_0;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.ReleaseVelocityInformation::AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_1;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.ReleaseVelocityInformation::Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	// System.Boolean Oculus.Interaction.Throw.ReleaseVelocityInformation::IsSelectedVelocity
	bool ___IsSelectedVelocity_3;

public:
	inline static int32_t get_offset_of_LinearVelocity_0() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___LinearVelocity_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LinearVelocity_0() const { return ___LinearVelocity_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LinearVelocity_0() { return &___LinearVelocity_0; }
	inline void set_LinearVelocity_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LinearVelocity_0 = value;
	}

	inline static int32_t get_offset_of_AngularVelocity_1() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___AngularVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_AngularVelocity_1() const { return ___AngularVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_AngularVelocity_1() { return &___AngularVelocity_1; }
	inline void set_AngularVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___AngularVelocity_1 = value;
	}

	inline static int32_t get_offset_of_Origin_2() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___Origin_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Origin_2() const { return ___Origin_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Origin_2() { return &___Origin_2; }
	inline void set_Origin_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Origin_2 = value;
	}

	inline static int32_t get_offset_of_IsSelectedVelocity_3() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___IsSelectedVelocity_3)); }
	inline bool get_IsSelectedVelocity_3() const { return ___IsSelectedVelocity_3; }
	inline bool* get_address_of_IsSelectedVelocity_3() { return &___IsSelectedVelocity_3; }
	inline void set_IsSelectedVelocity_3(bool value)
	{
		___IsSelectedVelocity_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.Throw.ReleaseVelocityInformation
struct ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	int32_t ___IsSelectedVelocity_3;
};
// Native definition for COM marshalling of Oculus.Interaction.Throw.ReleaseVelocityInformation
struct ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	int32_t ___IsSelectedVelocity_3;
};

// Oculus.Interaction.Surfaces.SurfaceHit
struct SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.Surfaces.SurfaceHit::<Point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_0;
	// UnityEngine.Vector3 Oculus.Interaction.Surfaces.SurfaceHit::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.Surfaces.SurfaceHit::<Distance>k__BackingField
	float ___U3CDistanceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913, ___U3CPointU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointU3Ek__BackingField_0() const { return ___U3CPointU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointU3Ek__BackingField_0() { return &___U3CPointU3Ek__BackingField_0; }
	inline void set_U3CPointU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913, ___U3CNormalU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_1() const { return ___U3CNormalU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_1() { return &___U3CNormalU3Ek__BackingField_1; }
	inline void set_U3CNormalU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDistanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913, ___U3CDistanceU3Ek__BackingField_2)); }
	inline float get_U3CDistanceU3Ek__BackingField_2() const { return ___U3CDistanceU3Ek__BackingField_2; }
	inline float* get_address_of_U3CDistanceU3Ek__BackingField_2() { return &___U3CDistanceU3Ek__BackingField_2; }
	inline void set_U3CDistanceU3Ek__BackingField_2(float value)
	{
		___U3CDistanceU3Ek__BackingField_2 = value;
	}
};


// Oculus.Interaction.PoseDetection.TransformFeature
struct TransformFeature_t3BB470292C781360CBF9CBDDA8505BD9BF162D56 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.TransformFeature::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformFeature_t3BB470292C781360CBF9CBDDA8505BD9BF162D56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.UpVectorType
struct UpVectorType_t3D58DF60C808CB797F6EB99BCB0827633DCBF897 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.UpVectorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpVectorType_t3D58DF60C808CB797F6EB99BCB0827633DCBF897, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState
struct JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::TargetVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TargetVector_0;
	// System.Single Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::Amount
	float ___Amount_1;

public:
	inline static int32_t get_offset_of_TargetVector_0() { return static_cast<int32_t>(offsetof(JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14, ___TargetVector_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TargetVector_0() const { return ___TargetVector_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TargetVector_0() { return &___TargetVector_0; }
	inline void set_TargetVector_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TargetVector_0 = value;
	}

	inline static int32_t get_offset_of_Amount_1() { return static_cast<int32_t>(offsetof(JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14, ___Amount_1)); }
	inline float get_Amount_1() const { return ___Amount_1; }
	inline float* get_address_of_Amount_1() { return &___Amount_1; }
	inline void set_Amount_1(float value)
	{
		___Amount_1 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo
struct RelativeTo_t1C555C78C625EAB034F3F59F45592FC08D9C8ECA 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RelativeTo_t1C555C78C625EAB034F3F59F45592FC08D9C8ECA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis
struct WorldAxis_t0FF86FDD7F2698F6BCEC7B100D023B58089A0B6D 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldAxis_t0FF86FDD7F2698F6BCEC7B100D023B58089A0B6D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Locomotion.LocomotionEvent/RotationType
struct RotationType_t4975F315B7C498D66BC1B0A8136524AE177EDB3A 
{
public:
	// System.Int32 Oculus.Interaction.Locomotion.LocomotionEvent/RotationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationType_t4975F315B7C498D66BC1B0A8136524AE177EDB3A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType
struct TranslationType_t1D87689243901F2BE85BAC6F137CEA66187D486F 
{
public:
	// System.Int32 Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TranslationType_t1D87689243901F2BE85BAC6F137CEA66187D486F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Locomotion.LocomotionGate/LocomotionMode
struct LocomotionMode_t3AC9911912F660D62A9726931B4031816B5BCEC9 
{
public:
	// System.Int32 Oculus.Interaction.Locomotion.LocomotionGate/LocomotionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocomotionMode_t3AC9911912F660D62A9726931B4031816B5BCEC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.OneGrabRotateTransformer/Axis
struct Axis_t4AED6E002422C7AF45A6AA36EC5C4C8CAC80D1F2 
{
public:
	// System.Int32 Oculus.Interaction.OneGrabRotateTransformer/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t4AED6E002422C7AF45A6AA36EC5C4C8CAC80D1F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.OptionalAttribute/Flag
struct Flag_tD3BD783E916B4874351DDBCAE6B80DEB2775597A 
{
public:
	// System.Int32 Oculus.Interaction.OptionalAttribute/Flag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flag_tD3BD783E916B4874351DDBCAE6B80DEB2775597A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Surfaces.PlaneSurface/NormalFacing
struct NormalFacing_t63A31FBD2A238CD3674EB147385347EFC9C99E1C 
{
public:
	// System.Int32 Oculus.Interaction.Surfaces.PlaneSurface/NormalFacing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalFacing_t63A31FBD2A238CD3674EB147385347EFC9C99E1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PointableCanvasModule/Pointer
struct Pointer_t8F177D393665020358C0C4520193ACBBC99BF489  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData Oculus.Interaction.PointableCanvasModule/Pointer::<PointerEventData>k__BackingField
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___U3CPointerEventDataU3Ek__BackingField_0;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::<MarkedForDeletion>k__BackingField
	bool ___U3CMarkedForDeletionU3Ek__BackingField_1;
	// UnityEngine.Canvas Oculus.Interaction.PointableCanvasModule/Pointer::_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ____canvas_2;
	// UnityEngine.Vector3 Oculus.Interaction.PointableCanvasModule/Pointer::_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____position_3;
	// UnityEngine.GameObject Oculus.Interaction.PointableCanvasModule/Pointer::_hoveredSelectable
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____hoveredSelectable_4;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::_pressing
	bool ____pressing_5;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::_pressed
	bool ____pressed_6;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::_released
	bool ____released_7;

public:
	inline static int32_t get_offset_of_U3CPointerEventDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ___U3CPointerEventDataU3Ek__BackingField_0)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_U3CPointerEventDataU3Ek__BackingField_0() const { return ___U3CPointerEventDataU3Ek__BackingField_0; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_U3CPointerEventDataU3Ek__BackingField_0() { return &___U3CPointerEventDataU3Ek__BackingField_0; }
	inline void set_U3CPointerEventDataU3Ek__BackingField_0(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___U3CPointerEventDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerEventDataU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMarkedForDeletionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ___U3CMarkedForDeletionU3Ek__BackingField_1)); }
	inline bool get_U3CMarkedForDeletionU3Ek__BackingField_1() const { return ___U3CMarkedForDeletionU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CMarkedForDeletionU3Ek__BackingField_1() { return &___U3CMarkedForDeletionU3Ek__BackingField_1; }
	inline void set_U3CMarkedForDeletionU3Ek__BackingField_1(bool value)
	{
		___U3CMarkedForDeletionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__canvas_2() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____canvas_2)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get__canvas_2() const { return ____canvas_2; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of__canvas_2() { return &____canvas_2; }
	inline void set__canvas_2(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		____canvas_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvas_2), (void*)value);
	}

	inline static int32_t get_offset_of__position_3() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__position_3() const { return ____position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__position_3() { return &____position_3; }
	inline void set__position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____position_3 = value;
	}

	inline static int32_t get_offset_of__hoveredSelectable_4() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____hoveredSelectable_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__hoveredSelectable_4() const { return ____hoveredSelectable_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__hoveredSelectable_4() { return &____hoveredSelectable_4; }
	inline void set__hoveredSelectable_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____hoveredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoveredSelectable_4), (void*)value);
	}

	inline static int32_t get_offset_of__pressing_5() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____pressing_5)); }
	inline bool get__pressing_5() const { return ____pressing_5; }
	inline bool* get_address_of__pressing_5() { return &____pressing_5; }
	inline void set__pressing_5(bool value)
	{
		____pressing_5 = value;
	}

	inline static int32_t get_offset_of__pressed_6() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____pressed_6)); }
	inline bool get__pressed_6() const { return ____pressed_6; }
	inline bool* get_address_of__pressed_6() { return &____pressed_6; }
	inline void set__pressed_6(bool value)
	{
		____pressed_6 = value;
	}

	inline static int32_t get_offset_of__released_7() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____released_7)); }
	inline bool get__released_7() const { return ____released_7; }
	inline bool* get_address_of__released_7() { return &____released_7; }
	inline void set__released_7(bool value)
	{
		____released_7 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PokeInteractor/SurfaceHitCache
struct SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo> Oculus.Interaction.PokeInteractor/SurfaceHitCache::_surfacePatchHitCache
	Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * ____surfacePatchHitCache_0;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo> Oculus.Interaction.PokeInteractor/SurfaceHitCache::_backingSurfaceHitCache
	Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * ____backingSurfaceHitCache_1;
	// UnityEngine.Vector3 Oculus.Interaction.PokeInteractor/SurfaceHitCache::_origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____origin_2;

public:
	inline static int32_t get_offset_of__surfacePatchHitCache_0() { return static_cast<int32_t>(offsetof(SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F, ____surfacePatchHitCache_0)); }
	inline Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * get__surfacePatchHitCache_0() const { return ____surfacePatchHitCache_0; }
	inline Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 ** get_address_of__surfacePatchHitCache_0() { return &____surfacePatchHitCache_0; }
	inline void set__surfacePatchHitCache_0(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * value)
	{
		____surfacePatchHitCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____surfacePatchHitCache_0), (void*)value);
	}

	inline static int32_t get_offset_of__backingSurfaceHitCache_1() { return static_cast<int32_t>(offsetof(SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F, ____backingSurfaceHitCache_1)); }
	inline Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * get__backingSurfaceHitCache_1() const { return ____backingSurfaceHitCache_1; }
	inline Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 ** get_address_of__backingSurfaceHitCache_1() { return &____backingSurfaceHitCache_1; }
	inline void set__backingSurfaceHitCache_1(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * value)
	{
		____backingSurfaceHitCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backingSurfaceHitCache_1), (void*)value);
	}

	inline static int32_t get_offset_of__origin_2() { return static_cast<int32_t>(offsetof(SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F, ____origin_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__origin_2() const { return ____origin_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__origin_2() { return &____origin_2; }
	inline void set__origin_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____origin_2 = value;
	}
};


// Oculus.Interaction.RayInteractor/RayCandidateProperties
struct RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E  : public RuntimeObject
{
public:
	// Oculus.Interaction.RayInteractable Oculus.Interaction.RayInteractor/RayCandidateProperties::<ClosestInteractable>k__BackingField
	RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * ___U3CClosestInteractableU3Ek__BackingField_0;
	// UnityEngine.Vector3 Oculus.Interaction.RayInteractor/RayCandidateProperties::<CandidatePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CCandidatePositionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClosestInteractableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E, ___U3CClosestInteractableU3Ek__BackingField_0)); }
	inline RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * get_U3CClosestInteractableU3Ek__BackingField_0() const { return ___U3CClosestInteractableU3Ek__BackingField_0; }
	inline RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 ** get_address_of_U3CClosestInteractableU3Ek__BackingField_0() { return &___U3CClosestInteractableU3Ek__BackingField_0; }
	inline void set_U3CClosestInteractableU3Ek__BackingField_0(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * value)
	{
		___U3CClosestInteractableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClosestInteractableU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCandidatePositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E, ___U3CCandidatePositionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CCandidatePositionU3Ek__BackingField_1() const { return ___U3CCandidatePositionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CCandidatePositionU3Ek__BackingField_1() { return &___U3CCandidatePositionU3Ek__BackingField_1; }
	inline void set_U3CCandidatePositionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CCandidatePositionU3Ek__BackingField_1 = value;
	}
};


// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode
struct TeleportReticleMode_t02CBD88DC196A8D5E7D76BA171676EC47DB1EBC2 
{
public:
	// System.Int32 Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TeleportReticleMode_t02CBD88DC196A8D5E7D76BA171676EC47DB1EBC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags
struct VisibilityFlags_tFC708C2881DF2998070AEB073E45720F49E11650 
{
public:
	// System.Int32 Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisibilityFlags_tFC708C2881DF2998070AEB073E45720F49E11650, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.SyntheticHand/WristLockMode
struct WristLockMode_t656E1FE2DB41A68470666A826AB438C826B63A1E 
{
public:
	// System.Int32 Oculus.Interaction.Input.SyntheticHand/WristLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WristLockMode_t656E1FE2DB41A68470666A826AB438C826B63A1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.TouchShadowHand/GrabTouchInfo
struct GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.TouchShadowHand/GrabTouchInfo::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_0;
	// System.Boolean Oculus.Interaction.TouchShadowHand/GrabTouchInfo::grabbing
	bool ___grabbing_1;
	// System.Boolean[] Oculus.Interaction.TouchShadowHand/GrabTouchInfo::grabbingFingers
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___grabbingFingers_2;
	// System.Single Oculus.Interaction.TouchShadowHand/GrabTouchInfo::grabT
	float ___grabT_3;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___offset_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_0() const { return ___offset_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_grabbing_1() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___grabbing_1)); }
	inline bool get_grabbing_1() const { return ___grabbing_1; }
	inline bool* get_address_of_grabbing_1() { return &___grabbing_1; }
	inline void set_grabbing_1(bool value)
	{
		___grabbing_1 = value;
	}

	inline static int32_t get_offset_of_grabbingFingers_2() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___grabbingFingers_2)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_grabbingFingers_2() const { return ___grabbingFingers_2; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_grabbingFingers_2() { return &___grabbingFingers_2; }
	inline void set_grabbingFingers_2(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___grabbingFingers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabbingFingers_2), (void*)value);
	}

	inline static int32_t get_offset_of_grabT_3() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___grabT_3)); }
	inline float get_grabT_3() const { return ___grabT_3; }
	inline float* get_address_of_grabT_3() { return &___grabT_3; }
	inline void set_grabT_3(float value)
	{
		___grabT_3 = value;
	}
};


// Oculus.Interaction.TubeRenderer/VertexLayout
struct VertexLayout_t85C430A9D9A2B3CBA9197A01170A21BFB35312F0 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.TubeRenderer/VertexLayout::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_0;
	// UnityEngine.Color32 Oculus.Interaction.TubeRenderer/VertexLayout::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_1;
	// UnityEngine.Vector2 Oculus.Interaction.TubeRenderer/VertexLayout::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_2;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(VertexLayout_t85C430A9D9A2B3CBA9197A01170A21BFB35312F0, ___pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_0() const { return ___pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(VertexLayout_t85C430A9D9A2B3CBA9197A01170A21BFB35312F0, ___color_1)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_1() const { return ___color_1; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_uv_2() { return static_cast<int32_t>(offsetof(VertexLayout_t85C430A9D9A2B3CBA9197A01170A21BFB35312F0, ___uv_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_2() const { return ___uv_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_2() { return &___uv_2; }
	inline void set_uv_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_2 = value;
	}
};


// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode
struct TurnMode_tE7E9B065AA254ADE2ED9BB18CB5F05AA1C98F47B 
{
public:
	// System.Int32 Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TurnMode_tE7E9B065AA254ADE2ED9BB18CB5F05AA1C98F47B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.TwoGrabRotateTransformer/Axis
struct Axis_t47D7BA126BC7D35FFB56479392176209E424C955 
{
public:
	// System.Int32 Oculus.Interaction.TwoGrabRotateTransformer/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t47D7BA126BC7D35FFB56479392176209E424C955, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>
struct FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>
struct FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>
struct FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>
struct ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54, ___Item2_1)); }
	inline RuntimeObject* get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject* value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32Enum,System.Object>
struct ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
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


// Oculus.Interaction.Locomotion.LocomotionEvent
struct LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4 
{
public:
	// System.Int32 Oculus.Interaction.Locomotion.LocomotionEvent::<Identifier>k__BackingField
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	// UnityEngine.Pose Oculus.Interaction.Locomotion.LocomotionEvent::<Pose>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_1;
	// Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType Oculus.Interaction.Locomotion.LocomotionEvent::<Translation>k__BackingField
	int32_t ___U3CTranslationU3Ek__BackingField_2;
	// Oculus.Interaction.Locomotion.LocomotionEvent/RotationType Oculus.Interaction.Locomotion.LocomotionEvent::<Rotation>k__BackingField
	int32_t ___U3CRotationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdentifierU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4, ___U3CIdentifierU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdentifierU3Ek__BackingField_0() const { return ___U3CIdentifierU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdentifierU3Ek__BackingField_0() { return &___U3CIdentifierU3Ek__BackingField_0; }
	inline void set_U3CIdentifierU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdentifierU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4, ___U3CPoseU3Ek__BackingField_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPoseU3Ek__BackingField_1() const { return ___U3CPoseU3Ek__BackingField_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPoseU3Ek__BackingField_1() { return &___U3CPoseU3Ek__BackingField_1; }
	inline void set_U3CPoseU3Ek__BackingField_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPoseU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTranslationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4, ___U3CTranslationU3Ek__BackingField_2)); }
	inline int32_t get_U3CTranslationU3Ek__BackingField_2() const { return ___U3CTranslationU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTranslationU3Ek__BackingField_2() { return &___U3CTranslationU3Ek__BackingField_2; }
	inline void set_U3CTranslationU3Ek__BackingField_2(int32_t value)
	{
		___U3CTranslationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4, ___U3CRotationU3Ek__BackingField_3)); }
	inline int32_t get_U3CRotationU3Ek__BackingField_3() const { return ___U3CRotationU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRotationU3Ek__BackingField_3() { return &___U3CRotationU3Ek__BackingField_3; }
	inline void set_U3CRotationU3Ek__BackingField_3(int32_t value)
	{
		___U3CRotationU3Ek__BackingField_3 = value;
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

// Oculus.Interaction.PointerEvent
struct PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B 
{
public:
	// System.Int32 Oculus.Interaction.PointerEvent::<Identifier>k__BackingField
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	// Oculus.Interaction.PointerEventType Oculus.Interaction.PointerEvent::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// UnityEngine.Pose Oculus.Interaction.PointerEvent::<Pose>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_2;
	// System.Object Oculus.Interaction.PointerEvent::<Data>k__BackingField
	RuntimeObject * ___U3CDataU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdentifierU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CIdentifierU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdentifierU3Ek__BackingField_0() const { return ___U3CIdentifierU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdentifierU3Ek__BackingField_0() { return &___U3CIdentifierU3Ek__BackingField_0; }
	inline void set_U3CIdentifierU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdentifierU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CPoseU3Ek__BackingField_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPoseU3Ek__BackingField_2() const { return ___U3CPoseU3Ek__BackingField_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPoseU3Ek__BackingField_2() { return &___U3CPoseU3Ek__BackingField_2; }
	inline void set_U3CPoseU3Ek__BackingField_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPoseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CDataU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CDataU3Ek__BackingField_3() const { return ___U3CDataU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CDataU3Ek__BackingField_3() { return &___U3CDataU3Ek__BackingField_3; }
	inline void set_U3CDataU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CDataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.PointerEvent
struct PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B_marshaled_pinvoke
{
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_2;
	Il2CppIUnknown* ___U3CDataU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Oculus.Interaction.PointerEvent
struct PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B_marshaled_com
{
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_2;
	Il2CppIUnknown* ___U3CDataU3Ek__BackingField_3;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653 
{
public:
	// UnityEngine.Transform Oculus.Interaction.Locomotion.TeleportHit::relativeTo
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___relativeTo_0;
	// System.Single Oculus.Interaction.Locomotion.TeleportHit::<SnapRadius>k__BackingField
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	// UnityEngine.Pose Oculus.Interaction.Locomotion.TeleportHit::_localPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____localPose_2;

public:
	inline static int32_t get_offset_of_relativeTo_0() { return static_cast<int32_t>(offsetof(TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653, ___relativeTo_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_relativeTo_0() const { return ___relativeTo_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_relativeTo_0() { return &___relativeTo_0; }
	inline void set_relativeTo_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___relativeTo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relativeTo_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSnapRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653, ___U3CSnapRadiusU3Ek__BackingField_1)); }
	inline float get_U3CSnapRadiusU3Ek__BackingField_1() const { return ___U3CSnapRadiusU3Ek__BackingField_1; }
	inline float* get_address_of_U3CSnapRadiusU3Ek__BackingField_1() { return &___U3CSnapRadiusU3Ek__BackingField_1; }
	inline void set_U3CSnapRadiusU3Ek__BackingField_1(float value)
	{
		___U3CSnapRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__localPose_2() { return static_cast<int32_t>(offsetof(TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653, ____localPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__localPose_2() const { return ____localPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__localPose_2() { return &____localPose_2; }
	inline void set__localPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____localPose_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653_marshaled_pinvoke
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___relativeTo_0;
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____localPose_2;
};
// Native definition for COM marshalling of Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653_marshaled_com
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___relativeTo_0;
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____localPose_2;
};

// Oculus.Interaction.PoseDetection.TransformConfig
struct TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformConfig::PositionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionOffset_0;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformConfig::RotationOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RotationOffset_1;
	// Oculus.Interaction.PoseDetection.UpVectorType Oculus.Interaction.PoseDetection.TransformConfig::UpVectorType
	int32_t ___UpVectorType_2;
	// Oculus.Interaction.PoseDetection.TransformFeatureStateThresholds Oculus.Interaction.PoseDetection.TransformConfig::FeatureThresholds
	TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 * ___FeatureThresholds_3;
	// System.Int32 Oculus.Interaction.PoseDetection.TransformConfig::<InstanceId>k__BackingField
	int32_t ___U3CInstanceIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_PositionOffset_0() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___PositionOffset_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_PositionOffset_0() const { return ___PositionOffset_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_PositionOffset_0() { return &___PositionOffset_0; }
	inline void set_PositionOffset_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___PositionOffset_0 = value;
	}

	inline static int32_t get_offset_of_RotationOffset_1() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___RotationOffset_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RotationOffset_1() const { return ___RotationOffset_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RotationOffset_1() { return &___RotationOffset_1; }
	inline void set_RotationOffset_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RotationOffset_1 = value;
	}

	inline static int32_t get_offset_of_UpVectorType_2() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___UpVectorType_2)); }
	inline int32_t get_UpVectorType_2() const { return ___UpVectorType_2; }
	inline int32_t* get_address_of_UpVectorType_2() { return &___UpVectorType_2; }
	inline void set_UpVectorType_2(int32_t value)
	{
		___UpVectorType_2 = value;
	}

	inline static int32_t get_offset_of_FeatureThresholds_3() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___FeatureThresholds_3)); }
	inline TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 * get_FeatureThresholds_3() const { return ___FeatureThresholds_3; }
	inline TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 ** get_address_of_FeatureThresholds_3() { return &___FeatureThresholds_3; }
	inline void set_FeatureThresholds_3(TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 * value)
	{
		___FeatureThresholds_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FeatureThresholds_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___U3CInstanceIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CInstanceIdU3Ek__BackingField_4() const { return ___U3CInstanceIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CInstanceIdU3Ek__BackingField_4() { return &___U3CInstanceIdU3Ek__BackingField_4; }
	inline void set_U3CInstanceIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CInstanceIdU3Ek__BackingField_4 = value;
	}
};


// Oculus.Interaction.PoseDetection.TransformJointData
struct TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PoseDetection.TransformJointData::IsValid
	bool ___IsValid_0;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.PoseDetection.TransformJointData::Handedness
	int32_t ___Handedness_1;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformJointData::CenterEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___CenterEyePose_2;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformJointData::WristPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___WristPose_3;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformJointData::TrackingSystemUp
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemUp_4;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformJointData::TrackingSystemForward
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemForward_5;

public:
	inline static int32_t get_offset_of_IsValid_0() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___IsValid_0)); }
	inline bool get_IsValid_0() const { return ___IsValid_0; }
	inline bool* get_address_of_IsValid_0() { return &___IsValid_0; }
	inline void set_IsValid_0(bool value)
	{
		___IsValid_0 = value;
	}

	inline static int32_t get_offset_of_Handedness_1() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___Handedness_1)); }
	inline int32_t get_Handedness_1() const { return ___Handedness_1; }
	inline int32_t* get_address_of_Handedness_1() { return &___Handedness_1; }
	inline void set_Handedness_1(int32_t value)
	{
		___Handedness_1 = value;
	}

	inline static int32_t get_offset_of_CenterEyePose_2() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___CenterEyePose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_CenterEyePose_2() const { return ___CenterEyePose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_CenterEyePose_2() { return &___CenterEyePose_2; }
	inline void set_CenterEyePose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___CenterEyePose_2 = value;
	}

	inline static int32_t get_offset_of_WristPose_3() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___WristPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_WristPose_3() const { return ___WristPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_WristPose_3() { return &___WristPose_3; }
	inline void set_WristPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___WristPose_3 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemUp_4() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___TrackingSystemUp_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemUp_4() const { return ___TrackingSystemUp_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemUp_4() { return &___TrackingSystemUp_4; }
	inline void set_TrackingSystemUp_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemUp_4 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemForward_5() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___TrackingSystemForward_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemForward_5() const { return ___TrackingSystemForward_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemForward_5() { return &___TrackingSystemForward_5; }
	inline void set_TrackingSystemForward_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemForward_5 = value;
	}
};


// Oculus.Interaction.PointableDebugGizmos/PointData
struct PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90  : public RuntimeObject
{
public:
	// UnityEngine.Pose Oculus.Interaction.PointableDebugGizmos/PointData::<Pose>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_0;
	// System.Boolean Oculus.Interaction.PointableDebugGizmos/PointData::<Selecting>k__BackingField
	bool ___U3CSelectingU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90, ___U3CPoseU3Ek__BackingField_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPoseU3Ek__BackingField_0() const { return ___U3CPoseU3Ek__BackingField_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPoseU3Ek__BackingField_0() { return &___U3CPoseU3Ek__BackingField_0; }
	inline void set_U3CPoseU3Ek__BackingField_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPoseU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSelectingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90, ___U3CSelectingU3Ek__BackingField_1)); }
	inline bool get_U3CSelectingU3Ek__BackingField_1() const { return ___U3CSelectingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CSelectingU3Ek__BackingField_1() { return &___U3CSelectingU3Ek__BackingField_1; }
	inline void set_U3CSelectingU3Ek__BackingField_1(bool value)
	{
		___U3CSelectingU3Ek__BackingField_1 = value;
	}
};


// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>2__current
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CU3E2__current_1;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>4__this
	ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * ___U3CU3E4__this_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>7__wrap1
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___U3CU3E7__wrap1_3;
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16, ___U3CU3E2__current_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16, ___U3CU3E4__this_2)); }
	inline ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16, ___U3CU3E7__wrap1_3)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Pose Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>2__current
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CU3E2__current_1;
	// Oculus.Interaction.Input.ReadOnlyHandJointPoses Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>4__this
	ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * ___U3CU3E4__this_2;
	// UnityEngine.Pose[] Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>7__wrap1
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___U3CU3E7__wrap1_3;
	// System.Int32 Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E2__current_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E4__this_2)); }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E7__wrap1_3)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D 
{
public:
	// Oculus.Interaction.Input.HandFinger Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage::handFinger
	int32_t ___handFinger_0;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage::config
	FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * ___config_1;

public:
	inline static int32_t get_offset_of_handFinger_0() { return static_cast<int32_t>(offsetof(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D, ___handFinger_0)); }
	inline int32_t get_handFinger_0() const { return ___handFinger_0; }
	inline int32_t* get_address_of_handFinger_0() { return &___handFinger_0; }
	inline void set_handFinger_0(int32_t value)
	{
		___handFinger_0 = value;
	}

	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D, ___config_1)); }
	inline FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * get_config_1() const { return ___config_1; }
	inline FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke
{
	int32_t ___handFinger_0;
	FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * ___config_1;
};
// Native definition for COM marshalling of Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com
{
	int32_t ___handFinger_0;
	FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * ___config_1;
};

// Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData
struct SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 
{
public:
	// UnityEngine.Pose Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::TransformPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___TransformPose_0;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::LinearVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_1;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_2;
	// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::Time
	float ___Time_3;

public:
	inline static int32_t get_offset_of_TransformPose_0() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___TransformPose_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_TransformPose_0() const { return ___TransformPose_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_TransformPose_0() { return &___TransformPose_0; }
	inline void set_TransformPose_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___TransformPose_0 = value;
	}

	inline static int32_t get_offset_of_LinearVelocity_1() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___LinearVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LinearVelocity_1() const { return ___LinearVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LinearVelocity_1() { return &___LinearVelocity_1; }
	inline void set_LinearVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LinearVelocity_1 = value;
	}

	inline static int32_t get_offset_of_AngularVelocity_2() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___AngularVelocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_AngularVelocity_2() const { return ___AngularVelocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_AngularVelocity_2() { return &___AngularVelocity_2; }
	inline void set_AngularVelocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___AngularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_Time_3() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___Time_3)); }
	inline float get_Time_3() const { return ___Time_3; }
	inline float* get_address_of_Time_3() { return &___Time_3; }
	inline void set_Time_3(float value)
	{
		___Time_3 = value;
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder
struct TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::_mode
	int32_t ____mode_0;
	// Oculus.Interaction.PoseDetection.TransformFeature Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::_transformFeature
	int32_t ____transformFeature_1;
	// Oculus.Interaction.PoseDetection.FeatureStateDescription[] Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::_states
	FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* ____states_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__transformFeature_1() { return static_cast<int32_t>(offsetof(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D, ____transformFeature_1)); }
	inline int32_t get__transformFeature_1() const { return ____transformFeature_1; }
	inline int32_t* get_address_of__transformFeature_1() { return &____transformFeature_1; }
	inline void set__transformFeature_1(int32_t value)
	{
		____transformFeature_1 = value;
	}

	inline static int32_t get_offset_of__states_2() { return static_cast<int32_t>(offsetof(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D, ____states_2)); }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* get__states_2() const { return ____states_2; }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440** get_address_of__states_2() { return &____states_2; }
	inline void set__states_2(FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* value)
	{
		____states_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____states_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties
struct TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 
{
public:
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::CenterEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___CenterEyePose_0;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::WristPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___WristPose_1;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::Handedness
	int32_t ___Handedness_2;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::TrackingSystemUp
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemUp_3;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::TrackingSystemForward
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemForward_4;

public:
	inline static int32_t get_offset_of_CenterEyePose_0() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___CenterEyePose_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_CenterEyePose_0() const { return ___CenterEyePose_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_CenterEyePose_0() { return &___CenterEyePose_0; }
	inline void set_CenterEyePose_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___CenterEyePose_0 = value;
	}

	inline static int32_t get_offset_of_WristPose_1() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___WristPose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_WristPose_1() const { return ___WristPose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_WristPose_1() { return &___WristPose_1; }
	inline void set_WristPose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___WristPose_1 = value;
	}

	inline static int32_t get_offset_of_Handedness_2() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___Handedness_2)); }
	inline int32_t get_Handedness_2() const { return ___Handedness_2; }
	inline int32_t* get_address_of_Handedness_2() { return &___Handedness_2; }
	inline void set_Handedness_2(int32_t value)
	{
		___Handedness_2 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemUp_3() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___TrackingSystemUp_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemUp_3() const { return ___TrackingSystemUp_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemUp_3() { return &___TrackingSystemUp_3; }
	inline void set_TrackingSystemUp_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemUp_3 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemForward_4() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___TrackingSystemForward_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemForward_4() const { return ___TrackingSystemForward_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemForward_4() { return &___TrackingSystemForward_4; }
	inline void set_TrackingSystemForward_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemForward_4 = value;
	}
};


// Oculus.Interaction.Tween/TweenCurve
struct TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135  : public RuntimeObject
{
public:
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Tween/TweenCurve::Curve
	ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * ___Curve_0;
	// System.Single Oculus.Interaction.Tween/TweenCurve::PrevProgress
	float ___PrevProgress_1;
	// UnityEngine.Pose Oculus.Interaction.Tween/TweenCurve::Current
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___Current_2;
	// UnityEngine.Pose Oculus.Interaction.Tween/TweenCurve::Target
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___Target_3;

public:
	inline static int32_t get_offset_of_Curve_0() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___Curve_0)); }
	inline ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * get_Curve_0() const { return ___Curve_0; }
	inline ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 ** get_address_of_Curve_0() { return &___Curve_0; }
	inline void set_Curve_0(ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * value)
	{
		___Curve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Curve_0), (void*)value);
	}

	inline static int32_t get_offset_of_PrevProgress_1() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___PrevProgress_1)); }
	inline float get_PrevProgress_1() const { return ___PrevProgress_1; }
	inline float* get_address_of_PrevProgress_1() { return &___PrevProgress_1; }
	inline void set_PrevProgress_1(float value)
	{
		___PrevProgress_1 = value;
	}

	inline static int32_t get_offset_of_Current_2() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___Current_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_Current_2() const { return ___Current_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_Current_2() { return &___Current_2; }
	inline void set_Current_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___Current_2 = value;
	}

	inline static int32_t get_offset_of_Target_3() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___Target_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_Target_3() const { return ___Target_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_Target_3() { return &___Target_3; }
	inline void set_Target_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___Target_3 = value;
	}
};


// Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
struct HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC 
{
public:
	// System.Boolean Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo::IsValid
	bool ___IsValid_0;
	// Oculus.Interaction.Surfaces.SurfaceHit Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo::Hit
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  ___Hit_1;

public:
	inline static int32_t get_offset_of_IsValid_0() { return static_cast<int32_t>(offsetof(HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC, ___IsValid_0)); }
	inline bool get_IsValid_0() const { return ___IsValid_0; }
	inline bool* get_address_of_IsValid_0() { return &___IsValid_0; }
	inline void set_IsValid_0(bool value)
	{
		___IsValid_0 = value;
	}

	inline static int32_t get_offset_of_Hit_1() { return static_cast<int32_t>(offsetof(HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC, ___Hit_1)); }
	inline SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  get_Hit_1() const { return ___Hit_1; }
	inline SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 * get_address_of_Hit_1() { return &___Hit_1; }
	inline void set_Hit_1(SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  value)
	{
		___Hit_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
struct HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_pinvoke
{
	int32_t ___IsValid_0;
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  ___Hit_1;
};
// Native definition for COM marshalling of Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
struct HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_com
{
	int32_t ___IsValid_0;
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  ___Hit_1;
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer
struct ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Oculus.Interaction.PoseDetection.ShapeRecognizer::_shapeName
	String_t* ____shapeName_4;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_thumbFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____thumbFeatureConfigs_5;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_indexFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____indexFeatureConfigs_6;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_middleFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____middleFeatureConfigs_7;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_ringFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____ringFeatureConfigs_8;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_pinkyFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____pinkyFeatureConfigs_9;

public:
	inline static int32_t get_offset_of__shapeName_4() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____shapeName_4)); }
	inline String_t* get__shapeName_4() const { return ____shapeName_4; }
	inline String_t** get_address_of__shapeName_4() { return &____shapeName_4; }
	inline void set__shapeName_4(String_t* value)
	{
		____shapeName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shapeName_4), (void*)value);
	}

	inline static int32_t get_offset_of__thumbFeatureConfigs_5() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____thumbFeatureConfigs_5)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__thumbFeatureConfigs_5() const { return ____thumbFeatureConfigs_5; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__thumbFeatureConfigs_5() { return &____thumbFeatureConfigs_5; }
	inline void set__thumbFeatureConfigs_5(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____thumbFeatureConfigs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thumbFeatureConfigs_5), (void*)value);
	}

	inline static int32_t get_offset_of__indexFeatureConfigs_6() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____indexFeatureConfigs_6)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__indexFeatureConfigs_6() const { return ____indexFeatureConfigs_6; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__indexFeatureConfigs_6() { return &____indexFeatureConfigs_6; }
	inline void set__indexFeatureConfigs_6(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____indexFeatureConfigs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexFeatureConfigs_6), (void*)value);
	}

	inline static int32_t get_offset_of__middleFeatureConfigs_7() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____middleFeatureConfigs_7)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__middleFeatureConfigs_7() const { return ____middleFeatureConfigs_7; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__middleFeatureConfigs_7() { return &____middleFeatureConfigs_7; }
	inline void set__middleFeatureConfigs_7(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____middleFeatureConfigs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____middleFeatureConfigs_7), (void*)value);
	}

	inline static int32_t get_offset_of__ringFeatureConfigs_8() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____ringFeatureConfigs_8)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__ringFeatureConfigs_8() const { return ____ringFeatureConfigs_8; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__ringFeatureConfigs_8() { return &____ringFeatureConfigs_8; }
	inline void set__ringFeatureConfigs_8(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____ringFeatureConfigs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ringFeatureConfigs_8), (void*)value);
	}

	inline static int32_t get_offset_of__pinkyFeatureConfigs_9() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____pinkyFeatureConfigs_9)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__pinkyFeatureConfigs_9() const { return ____pinkyFeatureConfigs_9; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__pinkyFeatureConfigs_9() { return &____pinkyFeatureConfigs_9; }
	inline void set__pinkyFeatureConfigs_9(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____pinkyFeatureConfigs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinkyFeatureConfigs_9), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfig
struct TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8  : public FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103
{
public:

public:
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21
struct U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>2__current
	ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  ___U3CU3E2__current_1;
	// System.Int32 Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>4__this
	ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * ___U3CU3E4__this_3;
	// System.Int32 Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<fingerIdx>5__2
	int32_t ___U3CfingerIdxU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3E4__this_3)); }
	inline ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfingerIdxU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CfingerIdxU3E5__2_4)); }
	inline int32_t get_U3CfingerIdxU3E5__2_4() const { return ___U3CfingerIdxU3E5__2_4; }
	inline int32_t* get_address_of_U3CfingerIdxU3E5__2_4() { return &___U3CfingerIdxU3E5__2_4; }
	inline void set_U3CfingerIdxU3E5__2_4(int32_t value)
	{
		___U3CfingerIdxU3E5__2_4 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig
struct FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4  : public FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C
{
public:

public:
};


// Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t94170504EE0D991F25CCD02A8A73CCBA1550531E 
{
public:
	// UnityEngine.Pose Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0::origin
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___origin_0;
	// System.Single Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0::bestScore
	float ___bestScore_1;
	// Oculus.Interaction.Locomotion.TeleportInteractor Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0::<>4__this
	TeleportInteractor_t33FF7AC0359F2D85D81E3441065F5A71AED865D9 * ___U3CU3E4__this_2;
	// Oculus.Interaction.Locomotion.TeleportInteractable Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0::bestCandidate
	TeleportInteractable_tF0F7128379D82BE999E04F28573FF9C3045C8463 * ___bestCandidate_3;
	// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0::bestHit
	TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653  ___bestHit_4;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t94170504EE0D991F25CCD02A8A73CCBA1550531E, ___origin_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_origin_0() const { return ___origin_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_bestScore_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t94170504EE0D991F25CCD02A8A73CCBA1550531E, ___bestScore_1)); }
	inline float get_bestScore_1() const { return ___bestScore_1; }
	inline float* get_address_of_bestScore_1() { return &___bestScore_1; }
	inline void set_bestScore_1(float value)
	{
		___bestScore_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t94170504EE0D991F25CCD02A8A73CCBA1550531E, ___U3CU3E4__this_2)); }
	inline TeleportInteractor_t33FF7AC0359F2D85D81E3441065F5A71AED865D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportInteractor_t33FF7AC0359F2D85D81E3441065F5A71AED865D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportInteractor_t33FF7AC0359F2D85D81E3441065F5A71AED865D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestCandidate_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t94170504EE0D991F25CCD02A8A73CCBA1550531E, ___bestCandidate_3)); }
	inline TeleportInteractable_tF0F7128379D82BE999E04F28573FF9C3045C8463 * get_bestCandidate_3() const { return ___bestCandidate_3; }
	inline TeleportInteractable_tF0F7128379D82BE999E04F28573FF9C3045C8463 ** get_address_of_bestCandidate_3() { return &___bestCandidate_3; }
	inline void set_bestCandidate_3(TeleportInteractable_tF0F7128379D82BE999E04F28573FF9C3045C8463 * value)
	{
		___bestCandidate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestCandidate_3), (void*)value);
	}

	inline static int32_t get_offset_of_bestHit_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t94170504EE0D991F25CCD02A8A73CCBA1550531E, ___bestHit_4)); }
	inline TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653  get_bestHit_4() const { return ___bestHit_4; }
	inline TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653 * get_address_of_bestHit_4() { return &___bestHit_4; }
	inline void set_bestHit_4(TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653  value)
	{
		___bestHit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestHit_4))->___relativeTo_0), (void*)NULL);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// Oculus.Interaction.Interactable`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>
struct Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Object> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject * ___U3CDataU3Ek__BackingField_9;
	// System.Boolean Oculus.Interaction.Interactable`2::_started
	bool ____started_10;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 * ____interactors_11;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 * ____selectingInteractors_12;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_13;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * ___WhenStateChanged_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenInteractorViewAdded_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenInteractorViewRemoved_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenSelectingInteractorViewAdded_17;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenSelectingInteractorViewRemoved_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * ____whenInteractorAdded_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * ____whenInteractorRemoved_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * ____whenSelectingInteractorAdded_21;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * ____whenSelectingInteractorRemoved_22;

public:
	inline static int32_t get_offset_of__interactorFilters_4() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____interactorFilters_4)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get__interactorFilters_4() const { return ____interactorFilters_4; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of__interactorFilters_4() { return &____interactorFilters_4; }
	inline void set__interactorFilters_4(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		____interactorFilters_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactorFilters_4), (void*)value);
	}

	inline static int32_t get_offset_of_InteractorFilters_5() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___InteractorFilters_5)); }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * get_InteractorFilters_5() const { return ___InteractorFilters_5; }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 ** get_address_of_InteractorFilters_5() { return &___InteractorFilters_5; }
	inline void set_InteractorFilters_5(List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * value)
	{
		___InteractorFilters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractorFilters_5), (void*)value);
	}

	inline static int32_t get_offset_of__maxInteractors_6() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____maxInteractors_6)); }
	inline int32_t get__maxInteractors_6() const { return ____maxInteractors_6; }
	inline int32_t* get_address_of__maxInteractors_6() { return &____maxInteractors_6; }
	inline void set__maxInteractors_6(int32_t value)
	{
		____maxInteractors_6 = value;
	}

	inline static int32_t get_offset_of__maxSelectingInteractors_7() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____maxSelectingInteractors_7)); }
	inline int32_t get__maxSelectingInteractors_7() const { return ____maxSelectingInteractors_7; }
	inline int32_t* get_address_of__maxSelectingInteractors_7() { return &____maxSelectingInteractors_7; }
	inline void set__maxSelectingInteractors_7(int32_t value)
	{
		____maxSelectingInteractors_7 = value;
	}

	inline static int32_t get_offset_of__data_8() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____data_8)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__data_8() const { return ____data_8; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__data_8() { return &____data_8; }
	inline void set__data_8(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____data_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___U3CDataU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CDataU3Ek__BackingField_9() const { return ___U3CDataU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CDataU3Ek__BackingField_9() { return &___U3CDataU3Ek__BackingField_9; }
	inline void set_U3CDataU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CDataU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__started_10() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____started_10)); }
	inline bool get__started_10() const { return ____started_10; }
	inline bool* get_address_of__started_10() { return &____started_10; }
	inline void set__started_10(bool value)
	{
		____started_10 = value;
	}

	inline static int32_t get_offset_of__interactors_11() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____interactors_11)); }
	inline EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 * get__interactors_11() const { return ____interactors_11; }
	inline EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 ** get_address_of__interactors_11() { return &____interactors_11; }
	inline void set__interactors_11(EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 * value)
	{
		____interactors_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactors_11), (void*)value);
	}

	inline static int32_t get_offset_of__selectingInteractors_12() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____selectingInteractors_12)); }
	inline EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 * get__selectingInteractors_12() const { return ____selectingInteractors_12; }
	inline EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 ** get_address_of__selectingInteractors_12() { return &____selectingInteractors_12; }
	inline void set__selectingInteractors_12(EnumerableHashSet_1_t573B54B39BE91D7B9E0BF8F4CF64A7A14690C557 * value)
	{
		____selectingInteractors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectingInteractors_12), (void*)value);
	}

	inline static int32_t get_offset_of__state_13() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____state_13)); }
	inline int32_t get__state_13() const { return ____state_13; }
	inline int32_t* get_address_of__state_13() { return &____state_13; }
	inline void set__state_13(int32_t value)
	{
		____state_13 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_14() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___WhenStateChanged_14)); }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * get_WhenStateChanged_14() const { return ___WhenStateChanged_14; }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 ** get_address_of_WhenStateChanged_14() { return &___WhenStateChanged_14; }
	inline void set_WhenStateChanged_14(Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * value)
	{
		___WhenStateChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorViewAdded_15() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___WhenInteractorViewAdded_15)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenInteractorViewAdded_15() const { return ___WhenInteractorViewAdded_15; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenInteractorViewAdded_15() { return &___WhenInteractorViewAdded_15; }
	inline void set_WhenInteractorViewAdded_15(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenInteractorViewAdded_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorViewAdded_15), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorViewRemoved_16() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___WhenInteractorViewRemoved_16)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenInteractorViewRemoved_16() const { return ___WhenInteractorViewRemoved_16; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenInteractorViewRemoved_16() { return &___WhenInteractorViewRemoved_16; }
	inline void set_WhenInteractorViewRemoved_16(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenInteractorViewRemoved_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorViewRemoved_16), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorViewAdded_17() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___WhenSelectingInteractorViewAdded_17)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenSelectingInteractorViewAdded_17() const { return ___WhenSelectingInteractorViewAdded_17; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenSelectingInteractorViewAdded_17() { return &___WhenSelectingInteractorViewAdded_17; }
	inline void set_WhenSelectingInteractorViewAdded_17(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenSelectingInteractorViewAdded_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorViewAdded_17), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorViewRemoved_18() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ___WhenSelectingInteractorViewRemoved_18)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenSelectingInteractorViewRemoved_18() const { return ___WhenSelectingInteractorViewRemoved_18; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenSelectingInteractorViewRemoved_18() { return &___WhenSelectingInteractorViewRemoved_18; }
	inline void set_WhenSelectingInteractorViewRemoved_18(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenSelectingInteractorViewRemoved_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorViewRemoved_18), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorAdded_19() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____whenInteractorAdded_19)); }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * get__whenInteractorAdded_19() const { return ____whenInteractorAdded_19; }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC ** get_address_of__whenInteractorAdded_19() { return &____whenInteractorAdded_19; }
	inline void set__whenInteractorAdded_19(MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * value)
	{
		____whenInteractorAdded_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorAdded_19), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorRemoved_20() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____whenInteractorRemoved_20)); }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * get__whenInteractorRemoved_20() const { return ____whenInteractorRemoved_20; }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC ** get_address_of__whenInteractorRemoved_20() { return &____whenInteractorRemoved_20; }
	inline void set__whenInteractorRemoved_20(MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * value)
	{
		____whenInteractorRemoved_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorRemoved_20), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorAdded_21() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____whenSelectingInteractorAdded_21)); }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * get__whenSelectingInteractorAdded_21() const { return ____whenSelectingInteractorAdded_21; }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC ** get_address_of__whenSelectingInteractorAdded_21() { return &____whenSelectingInteractorAdded_21; }
	inline void set__whenSelectingInteractorAdded_21(MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * value)
	{
		____whenSelectingInteractorAdded_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorAdded_21), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorRemoved_22() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6, ____whenSelectingInteractorRemoved_22)); }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * get__whenSelectingInteractorRemoved_22() const { return ____whenSelectingInteractorRemoved_22; }
	inline MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC ** get_address_of__whenSelectingInteractorRemoved_22() { return &____whenSelectingInteractorRemoved_22; }
	inline void set__whenSelectingInteractorRemoved_22(MultiAction_1_t37AC06F8E5FC04DF818E88878F010D88ED3353BC * value)
	{
		____whenSelectingInteractorRemoved_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorRemoved_22), (void*)value);
	}
};


// Oculus.Interaction.Interactable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>
struct Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Object> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject * ___U3CDataU3Ek__BackingField_9;
	// System.Boolean Oculus.Interaction.Interactable`2::_started
	bool ____started_10;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 * ____interactors_11;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 * ____selectingInteractors_12;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_13;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * ___WhenStateChanged_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenInteractorViewAdded_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenInteractorViewRemoved_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenSelectingInteractorViewAdded_17;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenSelectingInteractorViewRemoved_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenInteractorAdded_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenInteractorRemoved_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenSelectingInteractorAdded_21;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenSelectingInteractorRemoved_22;

public:
	inline static int32_t get_offset_of__interactorFilters_4() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____interactorFilters_4)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get__interactorFilters_4() const { return ____interactorFilters_4; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of__interactorFilters_4() { return &____interactorFilters_4; }
	inline void set__interactorFilters_4(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		____interactorFilters_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactorFilters_4), (void*)value);
	}

	inline static int32_t get_offset_of_InteractorFilters_5() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___InteractorFilters_5)); }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * get_InteractorFilters_5() const { return ___InteractorFilters_5; }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 ** get_address_of_InteractorFilters_5() { return &___InteractorFilters_5; }
	inline void set_InteractorFilters_5(List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * value)
	{
		___InteractorFilters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractorFilters_5), (void*)value);
	}

	inline static int32_t get_offset_of__maxInteractors_6() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____maxInteractors_6)); }
	inline int32_t get__maxInteractors_6() const { return ____maxInteractors_6; }
	inline int32_t* get_address_of__maxInteractors_6() { return &____maxInteractors_6; }
	inline void set__maxInteractors_6(int32_t value)
	{
		____maxInteractors_6 = value;
	}

	inline static int32_t get_offset_of__maxSelectingInteractors_7() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____maxSelectingInteractors_7)); }
	inline int32_t get__maxSelectingInteractors_7() const { return ____maxSelectingInteractors_7; }
	inline int32_t* get_address_of__maxSelectingInteractors_7() { return &____maxSelectingInteractors_7; }
	inline void set__maxSelectingInteractors_7(int32_t value)
	{
		____maxSelectingInteractors_7 = value;
	}

	inline static int32_t get_offset_of__data_8() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____data_8)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__data_8() const { return ____data_8; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__data_8() { return &____data_8; }
	inline void set__data_8(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____data_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___U3CDataU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CDataU3Ek__BackingField_9() const { return ___U3CDataU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CDataU3Ek__BackingField_9() { return &___U3CDataU3Ek__BackingField_9; }
	inline void set_U3CDataU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CDataU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__started_10() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____started_10)); }
	inline bool get__started_10() const { return ____started_10; }
	inline bool* get_address_of__started_10() { return &____started_10; }
	inline void set__started_10(bool value)
	{
		____started_10 = value;
	}

	inline static int32_t get_offset_of__interactors_11() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____interactors_11)); }
	inline EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 * get__interactors_11() const { return ____interactors_11; }
	inline EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 ** get_address_of__interactors_11() { return &____interactors_11; }
	inline void set__interactors_11(EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 * value)
	{
		____interactors_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactors_11), (void*)value);
	}

	inline static int32_t get_offset_of__selectingInteractors_12() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____selectingInteractors_12)); }
	inline EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 * get__selectingInteractors_12() const { return ____selectingInteractors_12; }
	inline EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 ** get_address_of__selectingInteractors_12() { return &____selectingInteractors_12; }
	inline void set__selectingInteractors_12(EnumerableHashSet_1_t7973829A01DAA418A05D2C11DFEAF15000F76067 * value)
	{
		____selectingInteractors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectingInteractors_12), (void*)value);
	}

	inline static int32_t get_offset_of__state_13() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____state_13)); }
	inline int32_t get__state_13() const { return ____state_13; }
	inline int32_t* get_address_of__state_13() { return &____state_13; }
	inline void set__state_13(int32_t value)
	{
		____state_13 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_14() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenStateChanged_14)); }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * get_WhenStateChanged_14() const { return ___WhenStateChanged_14; }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 ** get_address_of_WhenStateChanged_14() { return &___WhenStateChanged_14; }
	inline void set_WhenStateChanged_14(Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * value)
	{
		___WhenStateChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorViewAdded_15() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenInteractorViewAdded_15)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenInteractorViewAdded_15() const { return ___WhenInteractorViewAdded_15; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenInteractorViewAdded_15() { return &___WhenInteractorViewAdded_15; }
	inline void set_WhenInteractorViewAdded_15(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenInteractorViewAdded_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorViewAdded_15), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorViewRemoved_16() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenInteractorViewRemoved_16)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenInteractorViewRemoved_16() const { return ___WhenInteractorViewRemoved_16; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenInteractorViewRemoved_16() { return &___WhenInteractorViewRemoved_16; }
	inline void set_WhenInteractorViewRemoved_16(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenInteractorViewRemoved_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorViewRemoved_16), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorViewAdded_17() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenSelectingInteractorViewAdded_17)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenSelectingInteractorViewAdded_17() const { return ___WhenSelectingInteractorViewAdded_17; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenSelectingInteractorViewAdded_17() { return &___WhenSelectingInteractorViewAdded_17; }
	inline void set_WhenSelectingInteractorViewAdded_17(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenSelectingInteractorViewAdded_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorViewAdded_17), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorViewRemoved_18() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenSelectingInteractorViewRemoved_18)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenSelectingInteractorViewRemoved_18() const { return ___WhenSelectingInteractorViewRemoved_18; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenSelectingInteractorViewRemoved_18() { return &___WhenSelectingInteractorViewRemoved_18; }
	inline void set_WhenSelectingInteractorViewRemoved_18(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenSelectingInteractorViewRemoved_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorViewRemoved_18), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorAdded_19() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenInteractorAdded_19)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenInteractorAdded_19() const { return ____whenInteractorAdded_19; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenInteractorAdded_19() { return &____whenInteractorAdded_19; }
	inline void set__whenInteractorAdded_19(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenInteractorAdded_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorAdded_19), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorRemoved_20() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenInteractorRemoved_20)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenInteractorRemoved_20() const { return ____whenInteractorRemoved_20; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenInteractorRemoved_20() { return &____whenInteractorRemoved_20; }
	inline void set__whenInteractorRemoved_20(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenInteractorRemoved_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorRemoved_20), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorAdded_21() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenSelectingInteractorAdded_21)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenSelectingInteractorAdded_21() const { return ____whenSelectingInteractorAdded_21; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenSelectingInteractorAdded_21() { return &____whenSelectingInteractorAdded_21; }
	inline void set__whenSelectingInteractorAdded_21(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenSelectingInteractorAdded_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorAdded_21), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorRemoved_22() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenSelectingInteractorRemoved_22)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenSelectingInteractorRemoved_22() const { return ____whenSelectingInteractorRemoved_22; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenSelectingInteractorRemoved_22() { return &____whenSelectingInteractorRemoved_22; }
	inline void set__whenSelectingInteractorRemoved_22(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenSelectingInteractorRemoved_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorRemoved_22), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>
struct PointerInteractable_2_tC5E13E0F5209A10358F26B10BB56F2A073E49E07  : public Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6
{
public:
	// UnityEngine.Object Oculus.Interaction.PointerInteractable`2::_pointableElement
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____pointableElement_24;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.PointerInteractable`2::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_25;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.PointerInteractable`2::WhenPointerEventRaised
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___WhenPointerEventRaised_26;

public:
	inline static int32_t get_offset_of__pointableElement_24() { return static_cast<int32_t>(offsetof(PointerInteractable_2_tC5E13E0F5209A10358F26B10BB56F2A073E49E07, ____pointableElement_24)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__pointableElement_24() const { return ____pointableElement_24; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__pointableElement_24() { return &____pointableElement_24; }
	inline void set__pointableElement_24(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____pointableElement_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointableElement_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointableElementU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerInteractable_2_tC5E13E0F5209A10358F26B10BB56F2A073E49E07, ___U3CPointableElementU3Ek__BackingField_25)); }
	inline RuntimeObject* get_U3CPointableElementU3Ek__BackingField_25() const { return ___U3CPointableElementU3Ek__BackingField_25; }
	inline RuntimeObject** get_address_of_U3CPointableElementU3Ek__BackingField_25() { return &___U3CPointableElementU3Ek__BackingField_25; }
	inline void set_U3CPointableElementU3Ek__BackingField_25(RuntimeObject* value)
	{
		___U3CPointableElementU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointableElementU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_WhenPointerEventRaised_26() { return static_cast<int32_t>(offsetof(PointerInteractable_2_tC5E13E0F5209A10358F26B10BB56F2A073E49E07, ___WhenPointerEventRaised_26)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_WhenPointerEventRaised_26() const { return ___WhenPointerEventRaised_26; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_WhenPointerEventRaised_26() { return &___WhenPointerEventRaised_26; }
	inline void set_WhenPointerEventRaised_26(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___WhenPointerEventRaised_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenPointerEventRaised_26), (void*)value);
	}
};


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>
struct PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A  : public Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C
{
public:
	// UnityEngine.Object Oculus.Interaction.PointerInteractable`2::_pointableElement
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____pointableElement_24;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.PointerInteractable`2::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_25;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.PointerInteractable`2::WhenPointerEventRaised
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___WhenPointerEventRaised_26;

public:
	inline static int32_t get_offset_of__pointableElement_24() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ____pointableElement_24)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__pointableElement_24() const { return ____pointableElement_24; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__pointableElement_24() { return &____pointableElement_24; }
	inline void set__pointableElement_24(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____pointableElement_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointableElement_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointableElementU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ___U3CPointableElementU3Ek__BackingField_25)); }
	inline RuntimeObject* get_U3CPointableElementU3Ek__BackingField_25() const { return ___U3CPointableElementU3Ek__BackingField_25; }
	inline RuntimeObject** get_address_of_U3CPointableElementU3Ek__BackingField_25() { return &___U3CPointableElementU3Ek__BackingField_25; }
	inline void set_U3CPointableElementU3Ek__BackingField_25(RuntimeObject* value)
	{
		___U3CPointableElementU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointableElementU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_WhenPointerEventRaised_26() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ___WhenPointerEventRaised_26)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_WhenPointerEventRaised_26() const { return ___WhenPointerEventRaised_26; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_WhenPointerEventRaised_26() { return &___WhenPointerEventRaised_26; }
	inline void set_WhenPointerEventRaised_26(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___WhenPointerEventRaised_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenPointerEventRaised_26), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// Oculus.Interaction.PokeInteractable
struct PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7  : public PointerInteractable_2_tC5E13E0F5209A10358F26B10BB56F2A073E49E07
{
public:
	// UnityEngine.Object Oculus.Interaction.PokeInteractable::_surfacePatch
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____surfacePatch_27;
	// Oculus.Interaction.Surfaces.ISurfacePatch Oculus.Interaction.PokeInteractable::<SurfacePatch>k__BackingField
	RuntimeObject* ___U3CSurfacePatchU3Ek__BackingField_28;
	// System.Single Oculus.Interaction.PokeInteractable::_enterHoverNormal
	float ____enterHoverNormal_29;
	// System.Single Oculus.Interaction.PokeInteractable::_enterHoverTangent
	float ____enterHoverTangent_30;
	// System.Single Oculus.Interaction.PokeInteractable::_exitHoverNormal
	float ____exitHoverNormal_31;
	// System.Single Oculus.Interaction.PokeInteractable::_exitHoverTangent
	float ____exitHoverTangent_32;
	// System.Single Oculus.Interaction.PokeInteractable::_cancelSelectNormal
	float ____cancelSelectNormal_33;
	// System.Single Oculus.Interaction.PokeInteractable::_cancelSelectTangent
	float ____cancelSelectTangent_34;
	// Oculus.Interaction.PokeInteractable/MinThresholdsConfig Oculus.Interaction.PokeInteractable::_minThresholds
	MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC * ____minThresholds_35;
	// Oculus.Interaction.PokeInteractable/DragThresholdsConfig Oculus.Interaction.PokeInteractable::_dragThresholds
	DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A * ____dragThresholds_36;
	// Oculus.Interaction.PokeInteractable/PositionPinningConfig Oculus.Interaction.PokeInteractable::_positionPinning
	PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA * ____positionPinning_37;
	// Oculus.Interaction.PokeInteractable/RecoilAssistConfig Oculus.Interaction.PokeInteractable::_recoilAssist
	RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE * ____recoilAssist_38;
	// System.Single Oculus.Interaction.PokeInteractable::_closeDistanceThreshold
	float ____closeDistanceThreshold_39;
	// System.Int32 Oculus.Interaction.PokeInteractable::_tiebreakerScore
	int32_t ____tiebreakerScore_40;

public:
	inline static int32_t get_offset_of__surfacePatch_27() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____surfacePatch_27)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__surfacePatch_27() const { return ____surfacePatch_27; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__surfacePatch_27() { return &____surfacePatch_27; }
	inline void set__surfacePatch_27(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____surfacePatch_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____surfacePatch_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSurfacePatchU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ___U3CSurfacePatchU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CSurfacePatchU3Ek__BackingField_28() const { return ___U3CSurfacePatchU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CSurfacePatchU3Ek__BackingField_28() { return &___U3CSurfacePatchU3Ek__BackingField_28; }
	inline void set_U3CSurfacePatchU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CSurfacePatchU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSurfacePatchU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of__enterHoverNormal_29() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____enterHoverNormal_29)); }
	inline float get__enterHoverNormal_29() const { return ____enterHoverNormal_29; }
	inline float* get_address_of__enterHoverNormal_29() { return &____enterHoverNormal_29; }
	inline void set__enterHoverNormal_29(float value)
	{
		____enterHoverNormal_29 = value;
	}

	inline static int32_t get_offset_of__enterHoverTangent_30() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____enterHoverTangent_30)); }
	inline float get__enterHoverTangent_30() const { return ____enterHoverTangent_30; }
	inline float* get_address_of__enterHoverTangent_30() { return &____enterHoverTangent_30; }
	inline void set__enterHoverTangent_30(float value)
	{
		____enterHoverTangent_30 = value;
	}

	inline static int32_t get_offset_of__exitHoverNormal_31() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____exitHoverNormal_31)); }
	inline float get__exitHoverNormal_31() const { return ____exitHoverNormal_31; }
	inline float* get_address_of__exitHoverNormal_31() { return &____exitHoverNormal_31; }
	inline void set__exitHoverNormal_31(float value)
	{
		____exitHoverNormal_31 = value;
	}

	inline static int32_t get_offset_of__exitHoverTangent_32() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____exitHoverTangent_32)); }
	inline float get__exitHoverTangent_32() const { return ____exitHoverTangent_32; }
	inline float* get_address_of__exitHoverTangent_32() { return &____exitHoverTangent_32; }
	inline void set__exitHoverTangent_32(float value)
	{
		____exitHoverTangent_32 = value;
	}

	inline static int32_t get_offset_of__cancelSelectNormal_33() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____cancelSelectNormal_33)); }
	inline float get__cancelSelectNormal_33() const { return ____cancelSelectNormal_33; }
	inline float* get_address_of__cancelSelectNormal_33() { return &____cancelSelectNormal_33; }
	inline void set__cancelSelectNormal_33(float value)
	{
		____cancelSelectNormal_33 = value;
	}

	inline static int32_t get_offset_of__cancelSelectTangent_34() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____cancelSelectTangent_34)); }
	inline float get__cancelSelectTangent_34() const { return ____cancelSelectTangent_34; }
	inline float* get_address_of__cancelSelectTangent_34() { return &____cancelSelectTangent_34; }
	inline void set__cancelSelectTangent_34(float value)
	{
		____cancelSelectTangent_34 = value;
	}

	inline static int32_t get_offset_of__minThresholds_35() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____minThresholds_35)); }
	inline MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC * get__minThresholds_35() const { return ____minThresholds_35; }
	inline MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC ** get_address_of__minThresholds_35() { return &____minThresholds_35; }
	inline void set__minThresholds_35(MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC * value)
	{
		____minThresholds_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minThresholds_35), (void*)value);
	}

	inline static int32_t get_offset_of__dragThresholds_36() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____dragThresholds_36)); }
	inline DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A * get__dragThresholds_36() const { return ____dragThresholds_36; }
	inline DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A ** get_address_of__dragThresholds_36() { return &____dragThresholds_36; }
	inline void set__dragThresholds_36(DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A * value)
	{
		____dragThresholds_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dragThresholds_36), (void*)value);
	}

	inline static int32_t get_offset_of__positionPinning_37() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____positionPinning_37)); }
	inline PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA * get__positionPinning_37() const { return ____positionPinning_37; }
	inline PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA ** get_address_of__positionPinning_37() { return &____positionPinning_37; }
	inline void set__positionPinning_37(PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA * value)
	{
		____positionPinning_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____positionPinning_37), (void*)value);
	}

	inline static int32_t get_offset_of__recoilAssist_38() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____recoilAssist_38)); }
	inline RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE * get__recoilAssist_38() const { return ____recoilAssist_38; }
	inline RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE ** get_address_of__recoilAssist_38() { return &____recoilAssist_38; }
	inline void set__recoilAssist_38(RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE * value)
	{
		____recoilAssist_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recoilAssist_38), (void*)value);
	}

	inline static int32_t get_offset_of__closeDistanceThreshold_39() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____closeDistanceThreshold_39)); }
	inline float get__closeDistanceThreshold_39() const { return ____closeDistanceThreshold_39; }
	inline float* get_address_of__closeDistanceThreshold_39() { return &____closeDistanceThreshold_39; }
	inline void set__closeDistanceThreshold_39(float value)
	{
		____closeDistanceThreshold_39 = value;
	}

	inline static int32_t get_offset_of__tiebreakerScore_40() { return static_cast<int32_t>(offsetof(PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7, ____tiebreakerScore_40)); }
	inline int32_t get__tiebreakerScore_40() const { return ____tiebreakerScore_40; }
	inline int32_t* get_address_of__tiebreakerScore_40() { return &____tiebreakerScore_40; }
	inline void set__tiebreakerScore_40(int32_t value)
	{
		____tiebreakerScore_40 = value;
	}
};


// Oculus.Interaction.RayInteractable
struct RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175  : public PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A
{
public:
	// UnityEngine.Object Oculus.Interaction.RayInteractable::_surface
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____surface_27;
	// Oculus.Interaction.Surfaces.ISurface Oculus.Interaction.RayInteractable::<Surface>k__BackingField
	RuntimeObject* ___U3CSurfaceU3Ek__BackingField_28;
	// UnityEngine.Object Oculus.Interaction.RayInteractable::_selectSurface
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____selectSurface_29;
	// Oculus.Interaction.Surfaces.ISurface Oculus.Interaction.RayInteractable::SelectSurface
	RuntimeObject* ___SelectSurface_30;
	// UnityEngine.Object Oculus.Interaction.RayInteractable::_movementProvider
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____movementProvider_31;
	// Oculus.Interaction.IMovementProvider Oculus.Interaction.RayInteractable::<MovementProvider>k__BackingField
	RuntimeObject* ___U3CMovementProviderU3Ek__BackingField_32;
	// System.Int32 Oculus.Interaction.RayInteractable::_tiebreakerScore
	int32_t ____tiebreakerScore_33;

public:
	inline static int32_t get_offset_of__surface_27() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____surface_27)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__surface_27() const { return ____surface_27; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__surface_27() { return &____surface_27; }
	inline void set__surface_27(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____surface_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____surface_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSurfaceU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ___U3CSurfaceU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CSurfaceU3Ek__BackingField_28() const { return ___U3CSurfaceU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CSurfaceU3Ek__BackingField_28() { return &___U3CSurfaceU3Ek__BackingField_28; }
	inline void set_U3CSurfaceU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CSurfaceU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSurfaceU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of__selectSurface_29() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____selectSurface_29)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__selectSurface_29() const { return ____selectSurface_29; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__selectSurface_29() { return &____selectSurface_29; }
	inline void set__selectSurface_29(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____selectSurface_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectSurface_29), (void*)value);
	}

	inline static int32_t get_offset_of_SelectSurface_30() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ___SelectSurface_30)); }
	inline RuntimeObject* get_SelectSurface_30() const { return ___SelectSurface_30; }
	inline RuntimeObject** get_address_of_SelectSurface_30() { return &___SelectSurface_30; }
	inline void set_SelectSurface_30(RuntimeObject* value)
	{
		___SelectSurface_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectSurface_30), (void*)value);
	}

	inline static int32_t get_offset_of__movementProvider_31() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____movementProvider_31)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__movementProvider_31() const { return ____movementProvider_31; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__movementProvider_31() { return &____movementProvider_31; }
	inline void set__movementProvider_31(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____movementProvider_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____movementProvider_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMovementProviderU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ___U3CMovementProviderU3Ek__BackingField_32)); }
	inline RuntimeObject* get_U3CMovementProviderU3Ek__BackingField_32() const { return ___U3CMovementProviderU3Ek__BackingField_32; }
	inline RuntimeObject** get_address_of_U3CMovementProviderU3Ek__BackingField_32() { return &___U3CMovementProviderU3Ek__BackingField_32; }
	inline void set_U3CMovementProviderU3Ek__BackingField_32(RuntimeObject* value)
	{
		___U3CMovementProviderU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMovementProviderU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of__tiebreakerScore_33() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____tiebreakerScore_33)); }
	inline int32_t get__tiebreakerScore_33() const { return ____tiebreakerScore_33; }
	inline int32_t* get_address_of__tiebreakerScore_33() { return &____tiebreakerScore_33; }
	inline void set__tiebreakerScore_33(int32_t value)
	{
		____tiebreakerScore_33 = value;
	}
};


// Oculus.Interaction.PointableCanvasModule
struct PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Boolean Oculus.Interaction.PointableCanvasModule::_useInitialPressPositionForDrag
	bool ____useInitialPressPositionForDrag_20;
	// UnityEngine.Camera Oculus.Interaction.PointableCanvasModule::_pointerEventCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____pointerEventCamera_21;
	// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.PointableCanvasModule/Pointer> Oculus.Interaction.PointableCanvasModule::_pointerMap
	Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 * ____pointerMap_23;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Oculus.Interaction.PointableCanvasModule::_raycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ____raycastResultCache_24;
	// System.Collections.Generic.List`1<Oculus.Interaction.PointableCanvasModule/Pointer> Oculus.Interaction.PointableCanvasModule::_pointersForDeletion
	List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 * ____pointersForDeletion_25;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.IPointableCanvas,System.Action`1<Oculus.Interaction.PointerEvent>> Oculus.Interaction.PointableCanvasModule::_pointerCanvasActionMap
	Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 * ____pointerCanvasActionMap_26;
	// Oculus.Interaction.PointableCanvasModule/Pointer[] Oculus.Interaction.PointableCanvasModule::_pointersToProcessScratch
	PointerU5BU5D_t893261D33852F80BABFF982B576070DD3D286BCD* ____pointersToProcessScratch_27;
	// System.Boolean Oculus.Interaction.PointableCanvasModule::_started
	bool ____started_28;

public:
	inline static int32_t get_offset_of__useInitialPressPositionForDrag_20() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____useInitialPressPositionForDrag_20)); }
	inline bool get__useInitialPressPositionForDrag_20() const { return ____useInitialPressPositionForDrag_20; }
	inline bool* get_address_of__useInitialPressPositionForDrag_20() { return &____useInitialPressPositionForDrag_20; }
	inline void set__useInitialPressPositionForDrag_20(bool value)
	{
		____useInitialPressPositionForDrag_20 = value;
	}

	inline static int32_t get_offset_of__pointerEventCamera_21() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointerEventCamera_21)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__pointerEventCamera_21() const { return ____pointerEventCamera_21; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__pointerEventCamera_21() { return &____pointerEventCamera_21; }
	inline void set__pointerEventCamera_21(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____pointerEventCamera_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerEventCamera_21), (void*)value);
	}

	inline static int32_t get_offset_of__pointerMap_23() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointerMap_23)); }
	inline Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 * get__pointerMap_23() const { return ____pointerMap_23; }
	inline Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 ** get_address_of__pointerMap_23() { return &____pointerMap_23; }
	inline void set__pointerMap_23(Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 * value)
	{
		____pointerMap_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerMap_23), (void*)value);
	}

	inline static int32_t get_offset_of__raycastResultCache_24() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____raycastResultCache_24)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get__raycastResultCache_24() const { return ____raycastResultCache_24; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of__raycastResultCache_24() { return &____raycastResultCache_24; }
	inline void set__raycastResultCache_24(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		____raycastResultCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastResultCache_24), (void*)value);
	}

	inline static int32_t get_offset_of__pointersForDeletion_25() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointersForDeletion_25)); }
	inline List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 * get__pointersForDeletion_25() const { return ____pointersForDeletion_25; }
	inline List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 ** get_address_of__pointersForDeletion_25() { return &____pointersForDeletion_25; }
	inline void set__pointersForDeletion_25(List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 * value)
	{
		____pointersForDeletion_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointersForDeletion_25), (void*)value);
	}

	inline static int32_t get_offset_of__pointerCanvasActionMap_26() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointerCanvasActionMap_26)); }
	inline Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 * get__pointerCanvasActionMap_26() const { return ____pointerCanvasActionMap_26; }
	inline Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 ** get_address_of__pointerCanvasActionMap_26() { return &____pointerCanvasActionMap_26; }
	inline void set__pointerCanvasActionMap_26(Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 * value)
	{
		____pointerCanvasActionMap_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerCanvasActionMap_26), (void*)value);
	}

	inline static int32_t get_offset_of__pointersToProcessScratch_27() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointersToProcessScratch_27)); }
	inline PointerU5BU5D_t893261D33852F80BABFF982B576070DD3D286BCD* get__pointersToProcessScratch_27() const { return ____pointersToProcessScratch_27; }
	inline PointerU5BU5D_t893261D33852F80BABFF982B576070DD3D286BCD** get_address_of__pointersToProcessScratch_27() { return &____pointersToProcessScratch_27; }
	inline void set__pointersToProcessScratch_27(PointerU5BU5D_t893261D33852F80BABFF982B576070DD3D286BCD* value)
	{
		____pointersToProcessScratch_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointersToProcessScratch_27), (void*)value);
	}

	inline static int32_t get_offset_of__started_28() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____started_28)); }
	inline bool get__started_28() const { return ____started_28; }
	inline bool* get_address_of__started_28() { return &____started_28; }
	inline void set__started_28(bool value)
	{
		____started_28 = value;
	}
};


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>


// System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>


// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>

struct FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466_StaticFields
{
public:
	// TFeature[] Oculus.Interaction.PoseDetection.FeatureStateProvider`2::FeatureEnumValues
	TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8* ___FeatureEnumValues_6;

public:
	inline static int32_t get_offset_of_FeatureEnumValues_6() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466_StaticFields, ___FeatureEnumValues_6)); }
	inline TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8* get_FeatureEnumValues_6() const { return ___FeatureEnumValues_6; }
	inline TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8** get_address_of_FeatureEnumValues_6() { return &___FeatureEnumValues_6; }
	inline void set_FeatureEnumValues_6(TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8* value)
	{
		___FeatureEnumValues_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FeatureEnumValues_6), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>


// System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>

struct List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427_StaticFields, ____emptyArray_5)); }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig>

struct List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE_StaticFields, ____emptyArray_5)); }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig>


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>

struct List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105_StaticFields, ____emptyArray_5)); }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>


// UnityEngine.EventSystems.AbstractEventData


// UnityEngine.EventSystems.AbstractEventData

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Oculus.Interaction.PoseDetection.FeatureDescription


// Oculus.Interaction.PoseDetection.FeatureDescription


// Oculus.Interaction.PoseDetection.FeatureStateDescription


// Oculus.Interaction.PoseDetection.FeatureStateDescription


// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions

struct MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_StaticFields
{
public:
	// UnityEngine.YieldInstruction Oculus.Interaction.MonoBehaviourEndOfFrameExtensions::_endOfFrame
	YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ____endOfFrame_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,UnityEngine.Coroutine> Oculus.Interaction.MonoBehaviourEndOfFrameExtensions::_routines
	Dictionary_2_t899021F096CEE12E19D5D79695545EF36FCD0FB2 * ____routines_1;

public:
	inline static int32_t get_offset_of__endOfFrame_0() { return static_cast<int32_t>(offsetof(MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_StaticFields, ____endOfFrame_0)); }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * get__endOfFrame_0() const { return ____endOfFrame_0; }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF ** get_address_of__endOfFrame_0() { return &____endOfFrame_0; }
	inline void set__endOfFrame_0(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * value)
	{
		____endOfFrame_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endOfFrame_0), (void*)value);
	}

	inline static int32_t get_offset_of__routines_1() { return static_cast<int32_t>(offsetof(MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_StaticFields, ____routines_1)); }
	inline Dictionary_2_t899021F096CEE12E19D5D79695545EF36FCD0FB2 * get__routines_1() const { return ____routines_1; }
	inline Dictionary_2_t899021F096CEE12E19D5D79695545EF36FCD0FB2 ** get_address_of__routines_1() { return &____routines_1; }
	inline void set__routines_1(Dictionary_2_t899021F096CEE12E19D5D79695545EF36FCD0FB2 * value)
	{
		____routines_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____routines_1), (void*)value);
	}
};


// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions


// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses

struct ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E_StaticFields
{
public:
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::<Empty>k__BackingField
	ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * ___U3CEmptyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CEmptyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E_StaticFields, ___U3CEmptyU3Ek__BackingField_1)); }
	inline ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * get_U3CEmptyU3Ek__BackingField_1() const { return ___U3CEmptyU3Ek__BackingField_1; }
	inline ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E ** get_address_of_U3CEmptyU3Ek__BackingField_1() { return &___U3CEmptyU3Ek__BackingField_1; }
	inline void set_U3CEmptyU3Ek__BackingField_1(ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * value)
	{
		___U3CEmptyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmptyU3Ek__BackingField_1), (void*)value);
	}
};


// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses


// Oculus.Interaction.Input.ReadOnlyHandJointPoses

struct ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822_StaticFields
{
public:
	// Oculus.Interaction.Input.ReadOnlyHandJointPoses Oculus.Interaction.Input.ReadOnlyHandJointPoses::<Empty>k__BackingField
	ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * ___U3CEmptyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CEmptyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822_StaticFields, ___U3CEmptyU3Ek__BackingField_1)); }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * get_U3CEmptyU3Ek__BackingField_1() const { return ___U3CEmptyU3Ek__BackingField_1; }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 ** get_address_of_U3CEmptyU3Ek__BackingField_1() { return &___U3CEmptyU3Ek__BackingField_1; }
	inline void set_U3CEmptyU3Ek__BackingField_1(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * value)
	{
		___U3CEmptyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmptyU3Ek__BackingField_1), (void*)value);
	}
};


// Oculus.Interaction.Input.ReadOnlyHandJointPoses


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


// Oculus.Interaction.PoseDetection.TransformFeatureProperties

struct TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_StaticFields
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription> Oculus.Interaction.PoseDetection.TransformFeatureProperties::<FeatureDescriptions>k__BackingField
	RuntimeObject* ___U3CFeatureDescriptionsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFeatureDescriptionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_StaticFields, ___U3CFeatureDescriptionsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CFeatureDescriptionsU3Ek__BackingField_0() const { return ___U3CFeatureDescriptionsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CFeatureDescriptionsU3Ek__BackingField_0() { return &___U3CFeatureDescriptionsU3Ek__BackingField_0; }
	inline void set_U3CFeatureDescriptionsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CFeatureDescriptionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFeatureDescriptionsU3Ek__BackingField_0), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureProperties


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList


// Oculus.Interaction.ListLayout/<>c

struct U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_StaticFields
{
public:
	// Oculus.Interaction.ListLayout/<>c Oculus.Interaction.ListLayout/<>c::<>9
	U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * ___U3CU3E9_0;
	// System.Action`1<System.Int32> Oculus.Interaction.ListLayout/<>c::<>9__11_0
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CU3E9__11_0_1;
	// System.Action`2<System.Int32,System.Boolean> Oculus.Interaction.ListLayout/<>c::<>9__11_1
	Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 * ___U3CU3E9__11_1_2;
	// System.Action`1<System.Int32> Oculus.Interaction.ListLayout/<>c::<>9__11_2
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CU3E9__11_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_StaticFields, ___U3CU3E9__11_1_2)); }
	inline Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 * get_U3CU3E9__11_1_2() const { return ___U3CU3E9__11_1_2; }
	inline Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 ** get_address_of_U3CU3E9__11_1_2() { return &___U3CU3E9__11_1_2; }
	inline void set_U3CU3E9__11_1_2(Action_2_t07E89BCBF39ABE1A1E4378C31C5115A5AEEFFD00 * value)
	{
		___U3CU3E9__11_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_StaticFields, ___U3CU3E9__11_2_3)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CU3E9__11_2_3() const { return ___U3CU3E9__11_2_3; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CU3E9__11_2_3() { return &___U3CU3E9__11_2_3; }
	inline void set_U3CU3E9__11_2_3(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CU3E9__11_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_2_3), (void*)value);
	}
};


// Oculus.Interaction.ListLayout/<>c


// Oculus.Interaction.ListLayout/ListElement


// Oculus.Interaction.ListLayout/ListElement


// Oculus.Interaction.ListLayoutEase/ListElementEase


// Oculus.Interaction.ListLayoutEase/ListElementEase


// Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c

struct U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_StaticFields
{
public:
	// Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c::<>9
	U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * ___U3CU3E9_0;
	// System.Converter`2<UnityEngine.Object,Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster> Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c::<>9__14_0
	Converter_2_t78D1B93B085653DB223C4E5214457480310B2E08 * ___U3CU3E9__14_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Converter_2_t78D1B93B085653DB223C4E5214457480310B2E08 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Converter_2_t78D1B93B085653DB223C4E5214457480310B2E08 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Converter_2_t78D1B93B085653DB223C4E5214457480310B2E08 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}
};


// Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c


// Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c

struct U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_StaticFields
{
public:
	// Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c::<>9
	U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * ___U3CU3E9_0;
	// System.Action`1<System.Single> Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c::<>9__40_0
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3CU3E9__40_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_StaticFields, ___U3CU3E9__40_0_1)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3CU3E9__40_0_1() const { return ___U3CU3E9__40_0_1; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3CU3E9__40_0_1() { return &___U3CU3E9__40_0_1; }
	inline void set_U3CU3E9__40_0_1(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3CU3E9__40_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_1), (void*)value);
	}
};


// Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c


// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4


// Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4


// Oculus.Interaction.Input.OneEuroFilter/<>c

struct U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields
{
public:
	// Oculus.Interaction.Input.OneEuroFilter/<>c Oculus.Interaction.Input.OneEuroFilter/<>c::<>9
	U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * ___U3CU3E9_0;
	// System.Func`2<System.Single[],UnityEngine.Vector2> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__16_0
	Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E * ___U3CU3E9__16_0_1;
	// System.Func`3<UnityEngine.Vector2,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__16_1
	Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F * ___U3CU3E9__16_1_2;
	// System.Func`2<System.Single[],UnityEngine.Vector3> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__17_0
	Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D * ___U3CU3E9__17_0_3;
	// System.Func`3<UnityEngine.Vector3,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__17_1
	Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF * ___U3CU3E9__17_1_4;
	// System.Func`2<System.Single[],UnityEngine.Vector4> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__18_0
	Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 * ___U3CU3E9__18_0_5;
	// System.Func`3<UnityEngine.Vector4,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__18_1
	Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 * ___U3CU3E9__18_1_6;
	// System.Func`2<System.Single[],UnityEngine.Quaternion> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__19_0
	Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 * ___U3CU3E9__19_0_7;
	// System.Func`3<UnityEngine.Quaternion,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__19_1
	Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C * ___U3CU3E9__19_1_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__16_1_2)); }
	inline Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F * get_U3CU3E9__16_1_2() const { return ___U3CU3E9__16_1_2; }
	inline Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F ** get_address_of_U3CU3E9__16_1_2() { return &___U3CU3E9__16_1_2; }
	inline void set_U3CU3E9__16_1_2(Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F * value)
	{
		___U3CU3E9__16_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__17_0_3)); }
	inline Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D * get_U3CU3E9__17_0_3() const { return ___U3CU3E9__17_0_3; }
	inline Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D ** get_address_of_U3CU3E9__17_0_3() { return &___U3CU3E9__17_0_3; }
	inline void set_U3CU3E9__17_0_3(Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D * value)
	{
		___U3CU3E9__17_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__17_1_4)); }
	inline Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF * get_U3CU3E9__17_1_4() const { return ___U3CU3E9__17_1_4; }
	inline Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF ** get_address_of_U3CU3E9__17_1_4() { return &___U3CU3E9__17_1_4; }
	inline void set_U3CU3E9__17_1_4(Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF * value)
	{
		___U3CU3E9__17_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__18_0_5)); }
	inline Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 * get_U3CU3E9__18_0_5() const { return ___U3CU3E9__18_0_5; }
	inline Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 ** get_address_of_U3CU3E9__18_0_5() { return &___U3CU3E9__18_0_5; }
	inline void set_U3CU3E9__18_0_5(Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 * value)
	{
		___U3CU3E9__18_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__18_1_6)); }
	inline Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 * get_U3CU3E9__18_1_6() const { return ___U3CU3E9__18_1_6; }
	inline Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 ** get_address_of_U3CU3E9__18_1_6() { return &___U3CU3E9__18_1_6; }
	inline void set_U3CU3E9__18_1_6(Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 * value)
	{
		___U3CU3E9__18_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__19_0_7)); }
	inline Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 * get_U3CU3E9__19_0_7() const { return ___U3CU3E9__19_0_7; }
	inline Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 ** get_address_of_U3CU3E9__19_0_7() { return &___U3CU3E9__19_0_7; }
	inline void set_U3CU3E9__19_0_7(Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 * value)
	{
		___U3CU3E9__19_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__19_1_8)); }
	inline Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C * get_U3CU3E9__19_1_8() const { return ___U3CU3E9__19_1_8; }
	inline Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C ** get_address_of_U3CU3E9__19_1_8() { return &___U3CU3E9__19_1_8; }
	inline void set_U3CU3E9__19_1_8(Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C * value)
	{
		___U3CU3E9__19_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_1_8), (void*)value);
	}
};


// Oculus.Interaction.Input.OneEuroFilter/<>c


// Oculus.Interaction.Input.OneEuroFilter/LowPassFilter


// Oculus.Interaction.Input.OneEuroFilter/LowPassFilter


// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c

struct U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields
{
public:
	// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::<>9
	U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.Rigidbody> Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::<>9__19_0
	Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c


// Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints


// Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints


// Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints


// Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints


// Oculus.Interaction.PhysicsGrabbable/<>c

struct U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields
{
public:
	// Oculus.Interaction.PhysicsGrabbable/<>c Oculus.Interaction.PhysicsGrabbable/<>c::<>9
	U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * ___U3CU3E9_0;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> Oculus.Interaction.PhysicsGrabbable/<>c::<>9__27_0
	Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * ___U3CU3E9__27_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields, ___U3CU3E9__27_0_1)); }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * get_U3CU3E9__27_0_1() const { return ___U3CU3E9__27_0_1; }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 ** get_address_of_U3CU3E9__27_0_1() { return &___U3CU3E9__27_0_1; }
	inline void set_U3CU3E9__27_0_1(Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * value)
	{
		___U3CU3E9__27_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__27_0_1), (void*)value);
	}
};


// Oculus.Interaction.PhysicsGrabbable/<>c


// Oculus.Interaction.Locomotion.PlayerLocomotor/<>c

struct U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_StaticFields
{
public:
	// Oculus.Interaction.Locomotion.PlayerLocomotor/<>c Oculus.Interaction.Locomotion.PlayerLocomotor/<>c::<>9
	U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * ___U3CU3E9_0;
	// System.Action`2<Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose> Oculus.Interaction.Locomotion.PlayerLocomotor/<>c::<>9__18_0
	Action_2_t937D2F8DD9E6D2947F8C8F33B84D8A196148C439 * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Action_2_t937D2F8DD9E6D2947F8C8F33B84D8A196148C439 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Action_2_t937D2F8DD9E6D2947F8C8F33B84D8A196148C439 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Action_2_t937D2F8DD9E6D2947F8C8F33B84D8A196148C439 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// Oculus.Interaction.Locomotion.PlayerLocomotor/<>c


// Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0


// Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0


// Oculus.Interaction.PointableElement/<>c

struct U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields
{
public:
	// Oculus.Interaction.PointableElement/<>c Oculus.Interaction.PointableElement/<>c::<>9
	U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.PointableElement/<>c::<>9__43_0
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___U3CU3E9__43_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__43_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields, ___U3CU3E9__43_0_1)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_U3CU3E9__43_0_1() const { return ___U3CU3E9__43_0_1; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_U3CU3E9__43_0_1() { return &___U3CU3E9__43_0_1; }
	inline void set_U3CU3E9__43_0_1(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___U3CU3E9__43_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__43_0_1), (void*)value);
	}
};


// Oculus.Interaction.PointableElement/<>c


// Oculus.Interaction.PokeInteractable/DragThresholdsConfig


// Oculus.Interaction.PokeInteractable/DragThresholdsConfig


// Oculus.Interaction.PokeInteractable/MinThresholdsConfig


// Oculus.Interaction.PokeInteractable/MinThresholdsConfig


// Oculus.Interaction.PokeInteractable/PositionPinningConfig


// Oculus.Interaction.PokeInteractable/PositionPinningConfig


// Oculus.Interaction.PokeInteractable/RecoilAssistConfig


// Oculus.Interaction.PokeInteractable/RecoilAssistConfig


// Oculus.Interaction.PokeInteractor/<>c

struct U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_StaticFields
{
public:
	// Oculus.Interaction.PokeInteractor/<>c Oculus.Interaction.PokeInteractor/<>c::<>9
	U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * ___U3CU3E9_0;
	// System.Action`1<System.Boolean> Oculus.Interaction.PokeInteractor/<>c::<>9__76_0
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___U3CU3E9__76_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__76_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_StaticFields, ___U3CU3E9__76_0_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_U3CU3E9__76_0_1() const { return ___U3CU3E9__76_0_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_U3CU3E9__76_0_1() { return &___U3CU3E9__76_0_1; }
	inline void set_U3CU3E9__76_0_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___U3CU3E9__76_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__76_0_1), (void*)value);
	}
};


// Oculus.Interaction.PokeInteractor/<>c


// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c

struct U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_StaticFields
{
public:
	// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9
	U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9__24_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__24_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}
};


// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c


// Oculus.Interaction.ProgressCurve/<>c

struct U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_StaticFields
{
public:
	// Oculus.Interaction.ProgressCurve/<>c Oculus.Interaction.ProgressCurve/<>c::<>9
	U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.ProgressCurve/<>c::<>9__13_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__13_0_1;
	// System.Func`1<System.Single> Oculus.Interaction.ProgressCurve/<>c::<>9__14_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__14_0_2;
	// System.Func`1<System.Single> Oculus.Interaction.ProgressCurve/<>c::<>9__15_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__15_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_StaticFields, ___U3CU3E9__14_0_2)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__14_0_2() const { return ___U3CU3E9__14_0_2; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__14_0_2() { return &___U3CU3E9__14_0_2; }
	inline void set_U3CU3E9__14_0_2(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__14_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_StaticFields, ___U3CU3E9__15_0_3)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__15_0_3() const { return ___U3CU3E9__15_0_3; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__15_0_3() { return &___U3CU3E9__15_0_3; }
	inline void set_U3CU3E9__15_0_3(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__15_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_3), (void*)value);
	}
};


// Oculus.Interaction.ProgressCurve/<>c


// Oculus.Interaction.PoseDetection.Sequence/<>c

struct U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.Sequence/<>c Oculus.Interaction.PoseDetection.Sequence/<>c::<>9
	U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.Sequence/<>c::<>9__19_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.Sequence/<>c


// Oculus.Interaction.PoseDetection.Sequence/ActivationStep


// Oculus.Interaction.PoseDetection.Sequence/ActivationStep


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList


// Oculus.Interaction.SnapInteractor/<>c

struct U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_StaticFields
{
public:
	// Oculus.Interaction.SnapInteractor/<>c Oculus.Interaction.SnapInteractor/<>c::<>9
	U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Oculus.Interaction.SnapInteractor/<>c::<>9__20_1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__20_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_StaticFields, ___U3CU3E9__20_1_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__20_1_1() const { return ___U3CU3E9__20_1_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__20_1_1() { return &___U3CU3E9__20_1_1; }
	inline void set_U3CU3E9__20_1_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__20_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_1_1), (void*)value);
	}
};


// Oculus.Interaction.SnapInteractor/<>c


// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c

struct U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields
{
public:
	// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9
	U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9__90_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__90_0_1;
	// System.Action`1<System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>> Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9__115_0
	Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C * ___U3CU3E9__115_0_2;
	// System.Action`1<Oculus.Interaction.Throw.ReleaseVelocityInformation> Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9__115_1
	Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC * ___U3CU3E9__115_1_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__90_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9__90_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__90_0_1() const { return ___U3CU3E9__90_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__90_0_1() { return &___U3CU3E9__90_0_1; }
	inline void set_U3CU3E9__90_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__90_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__90_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__115_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9__115_0_2)); }
	inline Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C * get_U3CU3E9__115_0_2() const { return ___U3CU3E9__115_0_2; }
	inline Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C ** get_address_of_U3CU3E9__115_0_2() { return &___U3CU3E9__115_0_2; }
	inline void set_U3CU3E9__115_0_2(Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C * value)
	{
		___U3CU3E9__115_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__115_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__115_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9__115_1_3)); }
	inline Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC * get_U3CU3E9__115_1_3() const { return ___U3CU3E9__115_1_3; }
	inline Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC ** get_address_of_U3CU3E9__115_1_3() { return &___U3CU3E9__115_1_3; }
	inline void set_U3CU3E9__115_1_3(Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC * value)
	{
		___U3CU3E9__115_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__115_1_3), (void*)value);
	}
};


// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c


// Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams


// Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams


// Oculus.Interaction.Input.SyntheticHand/<>c

struct U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields
{
public:
	// Oculus.Interaction.Input.SyntheticHand/<>c Oculus.Interaction.Input.SyntheticHand/<>c::<>9
	U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Input.SyntheticHand/<>c::<>9__55_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// Oculus.Interaction.Input.SyntheticHand/<>c


// Oculus.Interaction.Locomotion.TeleportInteractor/<>c

struct U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_StaticFields
{
public:
	// Oculus.Interaction.Locomotion.TeleportInteractor/<>c Oculus.Interaction.Locomotion.TeleportInteractor/<>c::<>9
	U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> Oculus.Interaction.Locomotion.TeleportInteractor/<>c::<>9__36_0
	Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 * ___U3CU3E9__36_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_StaticFields, ___U3CU3E9__36_0_1)); }
	inline Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 * get_U3CU3E9__36_0_1() const { return ___U3CU3E9__36_0_1; }
	inline Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 ** get_address_of_U3CU3E9__36_0_1() { return &___U3CU3E9__36_0_1; }
	inline void set_U3CU3E9__36_0_1(Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 * value)
	{
		___U3CU3E9__36_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_1), (void*)value);
	}
};


// Oculus.Interaction.Locomotion.TeleportInteractor/<>c


// Oculus.Interaction.TouchHandGrabInteractor/<>c

struct U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields
{
public:
	// Oculus.Interaction.TouchHandGrabInteractor/<>c Oculus.Interaction.TouchHandGrabInteractor/<>c::<>9
	U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.TouchHandGrabInteractor/<>c::<>9__39_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__39_0_1;
	// System.Action Oculus.Interaction.TouchHandGrabInteractor/<>c::<>9__69_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__69_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields, ___U3CU3E9__39_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__39_0_1() const { return ___U3CU3E9__39_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__39_0_1() { return &___U3CU3E9__39_0_1; }
	inline void set_U3CU3E9__39_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__39_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__69_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields, ___U3CU3E9__69_0_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__69_0_2() const { return ___U3CU3E9__69_0_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__69_0_2() { return &___U3CU3E9__69_0_2; }
	inline void set_U3CU3E9__69_0_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__69_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__69_0_2), (void*)value);
	}
};


// Oculus.Interaction.TouchHandGrabInteractor/<>c


// Oculus.Interaction.TouchHandGrabInteractor/FingerStatus


// Oculus.Interaction.TouchHandGrabInteractor/FingerStatus


// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c

struct U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields
{
public:
	// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::<>9
	U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion> Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::<>9__6_0
	Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c

struct U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<>9
	U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c

struct U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::<>9
	U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * ___U3CU3E9_0;
	// System.Func`2<Oculus.Interaction.PoseDetection.TransformFeature,System.Int32> Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::<>9__2_1
	Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * ___U3CU3E9__2_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields, ___U3CU3E9__2_1_1)); }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * get_U3CU3E9__2_1_1() const { return ___U3CU3E9__2_1_1; }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 ** get_address_of_U3CU3E9__2_1_1() { return &___U3CU3E9__2_1_1; }
	inline void set_U3CU3E9__2_1_1(Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * value)
	{
		___U3CU3E9__2_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo


// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c

struct U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::<>9
	U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::<>9__20_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c


// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c

struct U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_StaticFields
{
public:
	// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c::<>9
	U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c::<>9__47_0
	Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 * ___U3CU3E9__47_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_StaticFields, ___U3CU3E9__47_0_1)); }
	inline Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 * get_U3CU3E9__47_0_1() const { return ___U3CU3E9__47_0_1; }
	inline Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 ** get_address_of_U3CU3E9__47_0_1() { return &___U3CU3E9__47_0_1; }
	inline void set_U3CU3E9__47_0_1(Action_1_t8C57E762C7C45CF67364A8A104F84F771F6B2C22 * value)
	{
		___U3CU3E9__47_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_1), (void*)value);
	}
};


// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c


// Oculus.Interaction.Tween/<>c

struct U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields
{
public:
	// Oculus.Interaction.Tween/<>c Oculus.Interaction.Tween/<>c::<>9
	U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * ___U3CU3E9_0;
	// System.Predicate`1<Oculus.Interaction.Tween/TweenCurve> Oculus.Interaction.Tween/<>c::<>9__11_0
	Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 * ___U3CU3E9__11_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}
};


// Oculus.Interaction.Tween/<>c


// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints


// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints


// Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints


// Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints


// Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints


// Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints


// Oculus.Interaction.UpdateDriverGroup/<>c

struct U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_StaticFields
{
public:
	// Oculus.Interaction.UpdateDriverGroup/<>c Oculus.Interaction.UpdateDriverGroup/<>c::<>9
	U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * ___U3CU3E9_0;
	// System.Converter`2<UnityEngine.Object,Oculus.Interaction.IUpdateDriver> Oculus.Interaction.UpdateDriverGroup/<>c::<>9__10_0
	Converter_2_t35D61379A4660072721586BAA7EFD8F400D2CC34 * ___U3CU3E9__10_0_1;
	// System.Converter`2<Oculus.Interaction.IUpdateDriver,UnityEngine.Object> Oculus.Interaction.UpdateDriverGroup/<>c::<>9__15_0
	Converter_2_t463C17C861A4A9E709E900E4DC5CA54DD7591422 * ___U3CU3E9__15_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Converter_2_t35D61379A4660072721586BAA7EFD8F400D2CC34 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Converter_2_t35D61379A4660072721586BAA7EFD8F400D2CC34 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Converter_2_t35D61379A4660072721586BAA7EFD8F400D2CC34 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_StaticFields, ___U3CU3E9__15_0_2)); }
	inline Converter_2_t463C17C861A4A9E709E900E4DC5CA54DD7591422 * get_U3CU3E9__15_0_2() const { return ___U3CU3E9__15_0_2; }
	inline Converter_2_t463C17C861A4A9E709E900E4DC5CA54DD7591422 ** get_address_of_U3CU3E9__15_0_2() { return &___U3CU3E9__15_0_2; }
	inline void set_U3CU3E9__15_0_2(Converter_2_t463C17C861A4A9E709E900E4DC5CA54DD7591422 * value)
	{
		___U3CU3E9__15_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_2), (void*)value);
	}
};


// Oculus.Interaction.UpdateDriverGroup/<>c


// Oculus.Interaction.VirtualPointable/<>c

struct U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields
{
public:
	// Oculus.Interaction.VirtualPointable/<>c Oculus.Interaction.VirtualPointable/<>c::<>9
	U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.VirtualPointable/<>c::<>9__10_0
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// Oculus.Interaction.VirtualPointable/<>c


// Oculus.Interaction.VirtualSelector/<>c

struct U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields
{
public:
	// Oculus.Interaction.VirtualSelector/<>c Oculus.Interaction.VirtualSelector/<>c::<>9
	U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.VirtualSelector/<>c::<>9__12_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_0_1;
	// System.Action Oculus.Interaction.VirtualSelector/<>c::<>9__12_1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields, ___U3CU3E9__12_1_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_1_2() const { return ___U3CU3E9__12_1_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_1_2() { return &___U3CU3E9__12_1_2; }
	inline void set_U3CU3E9__12_1_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_1_2), (void*)value);
	}
};


// Oculus.Interaction.VirtualSelector/<>c


// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c

struct U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_StaticFields
{
public:
	// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c::<>9
	U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c::<>9__4_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c


// System.Nullable`1<System.Single>


// System.Nullable`1<System.Single>


// UnityEngine.EventSystems.BaseEventData


// UnityEngine.EventSystems.BaseEventData


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


// UnityEngine.Color32


// UnityEngine.Color32


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


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// System.Single


// System.Single


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


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


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0


// UnityEngine.AnimationCurve


// UnityEngine.AnimationCurve


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


// Oculus.Interaction.PoseDetection.FeatureStateActiveMode


// Oculus.Interaction.PoseDetection.FeatureStateActiveMode


// Oculus.Interaction.PoseDetection.FingerFeature


// Oculus.Interaction.PoseDetection.FingerFeature


// Oculus.Interaction.Input.HandFinger


// Oculus.Interaction.Input.HandFinger


// Oculus.Interaction.Input.Handedness


// Oculus.Interaction.Input.Handedness


// System.Int32Enum


// System.Int32Enum


// Oculus.Interaction.InteractableState


// Oculus.Interaction.InteractableState


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


// Oculus.Interaction.PointerEventType


// Oculus.Interaction.PointerEventType


// UnityEngine.Pose

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Pose


// UnityEngine.EventSystems.RaycastResult


// UnityEngine.EventSystems.RaycastResult


// Oculus.Interaction.Throw.ReleaseVelocityInformation


// Oculus.Interaction.Throw.ReleaseVelocityInformation


// Oculus.Interaction.Surfaces.SurfaceHit


// Oculus.Interaction.Surfaces.SurfaceHit


// Oculus.Interaction.PoseDetection.TransformFeature


// Oculus.Interaction.PoseDetection.TransformFeature


// Oculus.Interaction.PoseDetection.UpVectorType


// Oculus.Interaction.PoseDetection.UpVectorType


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis


// Oculus.Interaction.Locomotion.LocomotionEvent/RotationType


// Oculus.Interaction.Locomotion.LocomotionEvent/RotationType


// Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType


// Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType


// Oculus.Interaction.Locomotion.LocomotionGate/LocomotionMode


// Oculus.Interaction.Locomotion.LocomotionGate/LocomotionMode


// Oculus.Interaction.OneGrabRotateTransformer/Axis


// Oculus.Interaction.OneGrabRotateTransformer/Axis


// Oculus.Interaction.OptionalAttribute/Flag


// Oculus.Interaction.OptionalAttribute/Flag


// Oculus.Interaction.Surfaces.PlaneSurface/NormalFacing


// Oculus.Interaction.Surfaces.PlaneSurface/NormalFacing


// Oculus.Interaction.PointableCanvasModule/Pointer


// Oculus.Interaction.PointableCanvasModule/Pointer


// UnityEngine.EventSystems.PointerEventData/InputButton


// UnityEngine.EventSystems.PointerEventData/InputButton


// Oculus.Interaction.PokeInteractor/SurfaceHitCache


// Oculus.Interaction.PokeInteractor/SurfaceHitCache


// Oculus.Interaction.RayInteractor/RayCandidateProperties


// Oculus.Interaction.RayInteractor/RayCandidateProperties


// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode


// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode


// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags


// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags


// Oculus.Interaction.Input.SyntheticHand/WristLockMode


// Oculus.Interaction.Input.SyntheticHand/WristLockMode


// Oculus.Interaction.TouchShadowHand/GrabTouchInfo


// Oculus.Interaction.TouchShadowHand/GrabTouchInfo


// Oculus.Interaction.TubeRenderer/VertexLayout


// Oculus.Interaction.TubeRenderer/VertexLayout


// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode


// Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode


// Oculus.Interaction.TwoGrabRotateTransformer/Axis


// Oculus.Interaction.TwoGrabRotateTransformer/Axis


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>


// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>


// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>


// System.ValueTuple`2<System.Int32Enum,System.Object>


// System.ValueTuple`2<System.Int32Enum,System.Object>


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// Oculus.Interaction.Locomotion.LocomotionEvent


// Oculus.Interaction.Locomotion.LocomotionEvent


// System.MulticastDelegate


// System.MulticastDelegate


// Oculus.Interaction.PointerEvent


// Oculus.Interaction.PointerEvent


// UnityEngine.EventSystems.PointerEventData


// UnityEngine.EventSystems.PointerEventData


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// System.SystemException


// System.SystemException


// Oculus.Interaction.Locomotion.TeleportHit

struct TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653_StaticFields
{
public:
	// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportHit::DEFAULT
	TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653  ___DEFAULT_3;

public:
	inline static int32_t get_offset_of_DEFAULT_3() { return static_cast<int32_t>(offsetof(TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653_StaticFields, ___DEFAULT_3)); }
	inline TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653  get_DEFAULT_3() const { return ___DEFAULT_3; }
	inline TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653 * get_address_of_DEFAULT_3() { return &___DEFAULT_3; }
	inline void set_DEFAULT_3(TeleportHit_t87D187CA6AB6C8D26F28904C56AC7D6A168BF653  value)
	{
		___DEFAULT_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DEFAULT_3))->___relativeTo_0), (void*)NULL);
	}
};


// Oculus.Interaction.Locomotion.TeleportHit


// Oculus.Interaction.PoseDetection.TransformConfig


// Oculus.Interaction.PoseDetection.TransformConfig


// Oculus.Interaction.PoseDetection.TransformJointData


// Oculus.Interaction.PoseDetection.TransformJointData


// Oculus.Interaction.PointableDebugGizmos/PointData


// Oculus.Interaction.PointableDebugGizmos/PointData


// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2


// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2


// Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2


// Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2


// Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage


// Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage


// Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData


// Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder


// Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties


// Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties


// Oculus.Interaction.Tween/TweenCurve


// Oculus.Interaction.Tween/TweenCurve


// Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo


// Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo


// System.Action


// System.Action


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// System.NotSupportedException


// System.NotSupportedException


// UnityEngine.Rigidbody


// UnityEngine.Rigidbody


// Oculus.Interaction.PoseDetection.ShapeRecognizer


// Oculus.Interaction.PoseDetection.ShapeRecognizer


// Oculus.Interaction.PoseDetection.TransformFeatureConfig


// Oculus.Interaction.PoseDetection.TransformFeatureConfig


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig


// Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0


// Oculus.Interaction.Locomotion.TeleportInteractor/<>c__DisplayClass30_0


// UnityEngine.Canvas

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.Canvas


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// Oculus.Interaction.Interactable`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>

struct Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6_StaticFields
{
public:
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_t1DA54923E9270E6B9C75F9620DBF8FF0150663D5 * ____registry_23;

public:
	inline static int32_t get_offset_of__registry_23() { return static_cast<int32_t>(offsetof(Interactable_2_t54905E49BDC1E49EDEDFB4D3D4283C82DF4D1EF6_StaticFields, ____registry_23)); }
	inline InteractableRegistry_2_t1DA54923E9270E6B9C75F9620DBF8FF0150663D5 * get__registry_23() const { return ____registry_23; }
	inline InteractableRegistry_2_t1DA54923E9270E6B9C75F9620DBF8FF0150663D5 ** get_address_of__registry_23() { return &____registry_23; }
	inline void set__registry_23(InteractableRegistry_2_t1DA54923E9270E6B9C75F9620DBF8FF0150663D5 * value)
	{
		____registry_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registry_23), (void*)value);
	}
};


// Oculus.Interaction.Interactable`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>


// Oculus.Interaction.Interactable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>

struct Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C_StaticFields
{
public:
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC * ____registry_23;

public:
	inline static int32_t get_offset_of__registry_23() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C_StaticFields, ____registry_23)); }
	inline InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC * get__registry_23() const { return ____registry_23; }
	inline InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC ** get_address_of__registry_23() { return &____registry_23; }
	inline void set__registry_23(InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC * value)
	{
		____registry_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registry_23), (void*)value);
	}
};


// Oculus.Interaction.Interactable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.PokeInteractor,Oculus.Interaction.PokeInteractable>


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>


// UnityEngine.EventSystems.BaseInputModule


// UnityEngine.EventSystems.BaseInputModule


// UnityEngine.EventSystems.PointerInputModule


// UnityEngine.EventSystems.PointerInputModule


// Oculus.Interaction.PokeInteractable


// Oculus.Interaction.PokeInteractable


// Oculus.Interaction.RayInteractable


// Oculus.Interaction.RayInteractable


// Oculus.Interaction.PointableCanvasModule

struct PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields
{
public:
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenSelected
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenSelected_16;
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenUnselected
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenUnselected_17;
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenSelectableHovered
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenSelectableHovered_18;
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenSelectableUnhovered
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenSelectableUnhovered_19;
	// Oculus.Interaction.PointableCanvasModule Oculus.Interaction.PointableCanvasModule::_instance
	PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * ____instance_22;

public:
	inline static int32_t get_offset_of_WhenSelected_16() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenSelected_16)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenSelected_16() const { return ___WhenSelected_16; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenSelected_16() { return &___WhenSelected_16; }
	inline void set_WhenSelected_16(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenSelected_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelected_16), (void*)value);
	}

	inline static int32_t get_offset_of_WhenUnselected_17() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenUnselected_17)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenUnselected_17() const { return ___WhenUnselected_17; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenUnselected_17() { return &___WhenUnselected_17; }
	inline void set_WhenUnselected_17(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenUnselected_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenUnselected_17), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectableHovered_18() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenSelectableHovered_18)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenSelectableHovered_18() const { return ___WhenSelectableHovered_18; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenSelectableHovered_18() { return &___WhenSelectableHovered_18; }
	inline void set_WhenSelectableHovered_18(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenSelectableHovered_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectableHovered_18), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectableUnhovered_19() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenSelectableUnhovered_19)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenSelectableUnhovered_19() const { return ___WhenSelectableUnhovered_19; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenSelectableUnhovered_19() { return &___WhenSelectableUnhovered_19; }
	inline void set_WhenSelectableUnhovered_19(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenSelectableUnhovered_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectableUnhovered_19), (void*)value);
	}

	inline static int32_t get_offset_of__instance_22() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ____instance_22)); }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * get__instance_22() const { return ____instance_22; }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 ** get_address_of__instance_22() { return &____instance_22; }
	inline void set__instance_22(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * value)
	{
		____instance_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_22), (void*)value);
	}
};


// Oculus.Interaction.PointableCanvasModule

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  m_Items[1];

public:
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		m_Items[index] = value;
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
// Oculus.Interaction.PoseDetection.FeatureStateDescription[]
struct FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * m_Items[1];

public:
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m57799E8513D2B3B32A1CDEC0DCA950BF720E8CD7_gshared (Dictionary_2_t19ECEBB30BE7A296A9706DAACCC539EAAEB8FD42 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB877204FDE51C0DB3552DD298E47E42BE291BC0B_gshared (Dictionary_2_t19ECEBB30BE7A296A9706DAACCC539EAAEB8FD42 * __this, RuntimeObject * ___key0, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  Dictionary_2_get_Item_mAB17D2D302443127E797DEB0013C427CD87A5325_gshared (Dictionary_2_t19ECEBB30BE7A296A9706DAACCC539EAAEB8FD42 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m213929F1C1D9AB174D6811B8C45B7584A2A21A68_gshared (Dictionary_2_t19ECEBB30BE7A296A9706DAACCC539EAAEB8FD42 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m18D94489A784ADBBACEBFDFE08DFE71E75A610F2_gshared (Dictionary_2_t19ECEBB30BE7A296A9706DAACCC539EAAEB8FD42 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32Enum,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m205CF857D576549B0AC2A6A5AA1BF8FE4655A39F_gshared (ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E * __this, int32_t ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureConfigBase_1__ctor_m26F049C52CEDD56FEB3D9B14E2A90AD561FDD96E_gshared (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::set_Feature(TFeature)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Feature_m943048B2E2F6D0DB127EAD1EB1F7697A46CDC55C_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::set_Mode(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Mode_m0D345B1E10789082D237A02CEE39AD904342EFEC_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::set_State(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_State_m7551FC1B14B50EC51A001458FBB55E89F7D90779_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E (JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetVector0, float ___velocity1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.ListLayout/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m752B4760D00CF6D83F2CF83924659BB7128B1749 (U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m61B0E66D2A07F800EE16263EB8792CC556D4B8A7 (U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m06CF9DBF4038EAF88FACA438768DE965D73168B4 (U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Input.OneEuroFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD023C2A0DB76FE6829E83ED8C6173E0D8591333A (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_get_Item_m1CB0BB2735EFDCADA39F17F61A754F5483A1ADFE (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D22D9DDD9CAF5B0669E15C828D44D3B45B1CED5 (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7B6821D78CF59B5D0627F98D023F68A222200DE (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Locomotion.PlayerLocomotor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1AFCF830E0114CFC7CFDC204E2EC61826F079BF8 (U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableCanvasModule::HandlePointerEvent(UnityEngine.Canvas,Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointableCanvasModule_HandlePointerEvent_m290F01A09E74DA8F9C371F8A49A164025333F41A (PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * __this, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___evt1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::set_MarkedForDeletion(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19_inline (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_Release_m71C9069879826373F5D0D327D92C3D69672F94C2 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableElement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6200649E5EFD00FED8E9ED242BBC18B28547F2E (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PokeInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A48E8D7AFC313005C6D84FC8EE73CBB1A767E69 (U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316 (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * __this, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m57799E8513D2B3B32A1CDEC0DCA950BF720E8CD7_gshared)(__this, ___key0, method);
}
// Oculus.Interaction.Surfaces.ISurfacePatch Oculus.Interaction.PokeInteractable::get_SurfacePatch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PokeInteractable_get_SurfacePatch_m0A94B55D25C2B21E84D52FA8FD56ACDC6311C36D_inline (PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo::.ctor(System.Boolean,Oculus.Interaction.Surfaces.SurfaceHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitInfo__ctor_m7F5576506CA59BEC33E7CB0CDE25203318CFF679 (HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC * __this, bool ___isValid0, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  ___hit1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::Add(!0,!1)
inline void Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * __this, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * ___key0, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 *, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC , const RuntimeMethod*))Dictionary_2_Add_mB877204FDE51C0DB3552DD298E47E42BE291BC0B_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::get_Item(!0)
inline HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2 (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * __this, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * ___key0, const RuntimeMethod* method)
{
	return ((  HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  (*) (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 *, const RuntimeMethod*))Dictionary_2_get_Item_mAB17D2D302443127E797DEB0013C427CD87A5325_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::.ctor()
inline void Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *, const RuntimeMethod*))Dictionary_2__ctor_m213929F1C1D9AB174D6811B8C45B7584A2A21A68_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo>::Clear()
inline void Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47 (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *, const RuntimeMethod*))Dictionary_2_Clear_m18D94489A784ADBBACEBFDFE08DFE71E75A610F2_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64B71E30868662FF91C7A59C6732A1AC1B803319 (U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.ProgressCurve/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA088ECF80654FD7DDA8551B90CBA762337FEF447 (U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m52C9390086344FA8787001ED5911550D850CE515 (const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.Sequence/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEB675C5E999AA01B217D197BB47AD0B8B9884E21 (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::set_ActiveState(Oculus.Interaction.IActiveState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Oculus.Interaction.IActiveState Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_ActiveState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1 (const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> Oculus.Interaction.PoseDetection.ShapeRecognizer::GetFingerFeatureConfigs(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShapeRecognizer_GetFingerFeatureConfigs_m0198CB2C1CFBE885454BAEAF399679E822EAC5CB (ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * __this, int32_t ___finger0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mE22BFAD5D601ADA32C0790CB75C325CF887A58AD (ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 * __this, int32_t ___item10, RuntimeObject* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 *, int32_t, RuntimeObject*, const RuntimeMethod*))ValueTuple_2__ctor_m205CF857D576549B0AC2A6A5AA1BF8FE4655A39F_gshared)(__this, ___item10, ___item21, method);
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21__ctor_mC846CAC3612EBD2A80476F4FAD4A2F0A55591645 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumerableU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_GetEnumerator_m0ECCFC9B802D15973CEDC8C8290E4E5C062390E5 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>::.ctor()
inline void FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0 (FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C * __this, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C *, const RuntimeMethod*))FeatureConfigBase_1__ctor_m26F049C52CEDD56FEB3D9B14E2A90AD561FDD96E_gshared)(__this, method);
}
// System.Void Oculus.Interaction.SnapInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4EAAA9902B6B61B9C4D27E98BB4C544708AFD1B5 (U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m67E4F6239BD4227A703037A4E29F6FE24415FAFF (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::.ctor(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431 (SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___transformPose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity2, float ___time3, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95B519241F2E8BFDEB3DA5BC7D276491AFC16E51 (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7609D0EDC2A4E66C1312991D3467F31B2948F69A (U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0361CD875C420F4D4571BC4FCB4ABD396AE222A (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8337C0AA8B04C451F4A98DA835383E3F63D3425F (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5928F50E0A6CC5B3CF47576D697B23CED513355 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::.ctor(Oculus.Interaction.PoseDetection.FeatureStateActiveMode,Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, int32_t ___featureStateActiveMode0, int32_t ___transformFeature1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription> Oculus.Interaction.PoseDetection.TransformFeatureProperties::get_FeatureDescriptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformFeatureProperties_get_FeatureDescriptions_m932B12A215F71FF5197825B46D19E2A20DCF88B2_inline (const RuntimeMethod* method);
// Oculus.Interaction.PoseDetection.FeatureStateDescription[] Oculus.Interaction.PoseDetection.FeatureDescription::get_FeatureStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* FeatureDescription_get_FeatureStates_m6BD23527382020879F0DB4946031715F945A52D4_inline (FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformFeatureConfig__ctor_m8EAAF6AB47CBDC9E58C37C27A1A70F672E025AFC (TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>::set_Feature(TFeature)
inline void FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_inline (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 *, int32_t, const RuntimeMethod*))FeatureConfigBase_1_set_Feature_m943048B2E2F6D0DB127EAD1EB1F7697A46CDC55C_gshared_inline)(__this, ___value0, method);
}
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>::set_Mode(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
inline void FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_inline (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 *, int32_t, const RuntimeMethod*))FeatureConfigBase_1_set_Mode_m0D345B1E10789082D237A02CEE39AD904342EFEC_gshared_inline)(__this, ___value0, method);
}
// System.String Oculus.Interaction.PoseDetection.FeatureStateDescription::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline (FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>::set_State(System.String)
inline void FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_inline (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 *, String_t*, const RuntimeMethod*))FeatureConfigBase_1_set_State_m7551FC1B14B50EC51A001458FBB55E89F7D90779_gshared_inline)(__this, ___value0, method);
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B3BC0E30FC03BE33E52A237D7158F1A112F38EE (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * __this, const RuntimeMethod* method);
// System.Single Oculus.Interaction.PoseDetection.TransformFeatureValueProvider::GetValue(Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.TransformJointData,Oculus.Interaction.PoseDetection.TransformConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformFeatureValueProvider_GetValue_mE6757A965B5E2DCFF72970C558B8821C11433F43 (int32_t ___transformFeature0, TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * ___transformJointData1, TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___transformConfig2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF779741BBAA03040699778F66709AD71C1E76541 (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::.ctor(UnityEngine.Pose,UnityEngine.Pose,Oculus.Interaction.Input.Handedness,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF (TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___centerEyePos0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___wristPose1, int32_t ___handedness2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemUp3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemForward4, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95A998AB7AF2C2F5E71340D266CF059BDE271AA3 (U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Tween/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6DAE0E3BA27B7167F62CC6FB17D20BD9C6DA34B (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.UpdateDriverGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0F53539E1B129CBF20A93CC9A05B1D86E536829 (U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.VirtualPointable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6DBB942543ED1DBDA7AB24D2ACEDCAD0482F8EB (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.VirtualSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m617C02BA1EA6F7412A4C5FF400153A6ECAC7F067 (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB72D55DEFFC31CC3C26465449EF2F16502D475C1 (U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig> Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * JointVelocityFeatureConfigList_get_Values_mB6D0034059802E607ADD981267A78B0E6363A513 (JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB * __this, const RuntimeMethod* method)
{
	{
		// public List<JointVelocityFeatureConfig> Values => _values;
		List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * L_0 = __this->get__values_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureConfigList__ctor_mB794CE5FB6D412A2BA20B9AFB3E2A32388BC78E2 (JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E (JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetVector0, float ___velocity1, const RuntimeMethod* method)
{
	{
		// TargetVector = targetVector;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___targetVector0;
		__this->set_TargetVector_0(L_0);
		// Amount = velocity;
		float L_1 = ___velocity1;
		__this->set_Amount_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetVector0, float ___velocity1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 * _thisAdjusted = reinterpret_cast<JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 *>(__this + _offset);
	JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E(_thisAdjusted, ___targetVector0, ___velocity1, method);
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
// System.Void Oculus.Interaction.ListLayout/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA995C840CC2934893961BAE4625104937519211F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * L_0 = (U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 *)il2cpp_codegen_object_new(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m752B4760D00CF6D83F2CF83924659BB7128B1749(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.ListLayout/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m752B4760D00CF6D83F2CF83924659BB7128B1749 (U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.ListLayout/<>c::<.ctor>b__11_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__11_0_mEF2EB2CB19B285EDC09299D4648354857DD6AC95 (U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// WhenElementAdded = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.ListLayout/<>c::<.ctor>b__11_1(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__11_1_m7676D65A7BA15608ADE6532E33545EAE9CBC6464 (U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * __this, int32_t ___U3Cp0U3E0, bool ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// WhenElementUpdated = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.ListLayout/<>c::<.ctor>b__11_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__11_2_m8C1AEDAA237C42F0240F8165E28C621A9D4D3775 (U3CU3Ec_tCC1D1276FC927F25E76C3D83D244AA52963FC621 * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// WhenElementRemoved = delegate { };
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
// System.Void Oculus.Interaction.ListLayout/ListElement::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListElement__ctor_m51E0EFBC0278EADD79BA148640ECEC60FE34379C (ListElement_t114C14FF067EA290036811AD6F3827392A6028FA * __this, int32_t ___id0, float ___size1, const RuntimeMethod* method)
{
	{
		// public ListElement(int id, float size)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.halfSize = size / 2;
		float L_1 = ___size1;
		__this->set_halfSize_2(((float)((float)L_1/(float)(2.0f))));
		// this.pos = 0;
		__this->set_pos_1((0.0f));
		// this.prev = null;
		__this->set_prev_3((ListElement_t114C14FF067EA290036811AD6F3827392A6028FA *)NULL);
		// this.next = null;
		__this->set_next_4((ListElement_t114C14FF067EA290036811AD6F3827392A6028FA *)NULL);
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
// System.Void Oculus.Interaction.ListLayoutEase/ListElementEase::.ctor(UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListElementEase__ctor_m32129922289B0B865ACE85A1642A375325F1EEE1 (ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___easeTime1, float ___position2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public ListElementEase(AnimationCurve curve, float easeTime, float position)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _curve = curve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve0;
		__this->set__curve_0(L_0);
		// _curveTime = easeTime;
		float L_1 = ___easeTime1;
		__this->set__curveTime_1(L_1);
		// _start = _target = this.position = position;
		float L_2 = ___position2;
		float L_3 = L_2;
		V_0 = L_3;
		__this->set_position_5(L_3);
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->set__target_4(L_5);
		float L_6 = V_0;
		__this->set__start_3(L_6);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.ListLayoutEase/ListElementEase::SetTarget(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListElementEase_SetTarget_mE5B2C70CABD9E4CABABB19A316862ABBFFFB766D (ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2 * __this, float ___target0, float ___time1, bool ___skipEase2, const RuntimeMethod* method)
{
	{
		// _target = target;
		float L_0 = ___target0;
		__this->set__target_4(L_0);
		// if (!skipEase)
		bool L_1 = ___skipEase2;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _start = this.position;
		float L_2 = __this->get_position_5();
		__this->set__start_3(L_2);
		// _startTime = time;
		float L_3 = ___time1;
		__this->set__startTime_2(L_3);
		// }
		return;
	}

IL_001e:
	{
		// _start = target;
		float L_4 = ___target0;
		__this->set__start_3(L_4);
		// this.position = target;
		float L_5 = ___target0;
		__this->set_position_5(L_5);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.ListLayoutEase/ListElementEase::UpdateTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListElementEase_UpdateTime_m3A551E077F8D5E647ACAE18B9AE87EAAB15BBD06 (ListElementEase_t76CCD829725D96FD12D47D9CD3CD0D7F7C90A4F2 * __this, float ___time0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float t = time - this._startTime;
		float L_0 = ___time0;
		float L_1 = __this->get__startTime_2();
		// float normalizedT = Mathf.Clamp01(t / _curveTime);
		float L_2 = __this->get__curveTime_1();
		float L_3;
		L_3 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		// float curveValue = _curve.Evaluate(normalizedT);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get__curve_0();
		float L_5 = V_0;
		NullCheck(L_4);
		float L_6;
		L_6 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// position = (_target - _start) * curveValue + _start;
		float L_7 = __this->get__target_4();
		float L_8 = __this->get__start_3();
		float L_9 = V_1;
		float L_10 = __this->get__start_3();
		__this->set_position_5(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)), (float)L_10)));
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
// System.Void Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB5C29979E8ACDFBCA41792589F8AB7D5F3C36813 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * L_0 = (U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D *)il2cpp_codegen_object_new(U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m61B0E66D2A07F800EE16263EB8792CC556D4B8A7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m61B0E66D2A07F800EE16263EB8792CC556D4B8A7 (U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c::<Awake>b__14_0(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__14_0_m0BFC84CB9241570E1F88CF08633AA563706DFB14 (U3CU3Ec_tFEE63907693136E37FAB9BCA393B5A5B3ADE4C0D * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocomotionEventBroadcaster_t9029D456C57C873BFF03293F4FCD4925F8871B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Broadcasters = _broadcasters.ConvertAll(b => b as ILocomotionEventBroadcaster);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___b0;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ILocomotionEventBroadcaster_t9029D456C57C873BFF03293F4FCD4925F8871B5F_il2cpp_TypeInfo_var));
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
// System.Void Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAC09EE9F4360DBE22B006A51BF5800091E66AA11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * L_0 = (U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 *)il2cpp_codegen_object_new(U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m06CF9DBF4038EAF88FACA438768DE965D73168B4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m06CF9DBF4038EAF88FACA438768DE965D73168B4 (U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c::<.ctor>b__40_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__40_0_mB4F9A6EF75DB208456F64D5A9BE6BFE7095E11CF (U3CU3Ec_t2AED4A930A1A1F77F83C0446104F7B69EDD5BD54 * __this, float ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private Action<float> _whenTurnDirectionChanged = delegate { };
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
// System.Void Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__4__ctor_m9EE040A760F0C29ED80E4B04625367E5918C5016 (U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__4_System_IDisposable_Dispose_m2805B6FEDBF189C62E11E5B6D81D516A09F35FF8 (U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndOfFrameCoroutineU3Ed__4_MoveNext_m7320BA07B6CDED5EBC4B91D46A91F305993C48C7 (U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0017:
	{
		// yield return _endOfFrame;
		IL2CPP_RUNTIME_CLASS_INIT(MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_il2cpp_TypeInfo_var);
		YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * L_3 = ((MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_StaticFields*)il2cpp_codegen_static_fields_for(MonoBehaviourEndOfFrameExtensions_tEF97EA59157B01E3D92D12C16451B7D39C8B64C9_il2cpp_TypeInfo_var))->get__endOfFrame_0();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// callback.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = __this->get_callback_2();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
		// while (true)
		goto IL_0017;
	}
}
// System.Object Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEndOfFrameCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m56E2117FA6F6CE3B3991147FCD3A17318C9F63B4 (U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m32FDEFE9F31D12A630C6BC41BF192A5E4424DACE (U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndOfFrameCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m32FDEFE9F31D12A630C6BC41BF192A5E4424DACE_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEndOfFrameCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_mDCC0AFFBF843BBFB92DC8AC40928B82004F01C62 (U3CEndOfFrameCoroutineU3Ed__4_t7F88DD7263401D817E35AAF1D6A2672681522FFF * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.Input.OneEuroFilter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1BD8DF4FA4791CA8A436AB5B1414DAA5B023A235 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * L_0 = (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 *)il2cpp_codegen_object_new(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD023C2A0DB76FE6829E83ED8C6173E0D8591333A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OneEuroFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD023C2A0DB76FE6829E83ED8C6173E0D8591333A (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector2>b__16_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec_U3CCreateVector2U3Eb__16_0_mB1AB461687FCB124DE935CB03629E76409BDA9AF (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	{
		// (values) => new Vector2(values[0], values[1]),
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector2>b__16_1(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateVector2U3Eb__16_1_m4336C2F591263B5E72DFE350C86D5894FB1C774E (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___value0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector3>b__17_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CCreateVector3U3Eb__17_0_mC0C54BEFC21266A2B4A110592F4CA830F9EE51B5 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	{
		// (values) => new Vector3(values[0], values[1], values[2]),
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___values0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector3>b__17_1(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateVector3U3Eb__17_1_m10FAE008925630E55E9432410DF5D34DA1CDD217 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___value0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector4 Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector4>b__18_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  U3CU3Ec_U3CCreateVector4U3Eb__18_0_m0E1D0D50F02F4D2DC740B6DC93DC07AC27866F89 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	{
		// (values) => new Vector4(values[0], values[1], values[2], values[3]),
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___values0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___values0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector4>b__18_1(UnityEngine.Vector4,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateVector4U3Eb__18_1_m20065168A5AFC1FC29A5C6730A1C615FB8525806 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___value0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateQuaternion>b__19_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  U3CU3Ec_U3CCreateQuaternionU3Eb__19_0_mB2FC8283AFBAB360AD6952C6AB49B151CF59A3A2 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// (values) => new Quaternion(values[0], values[1], values[2], values[3]).normalized,
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___values0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___values0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateQuaternion>b__19_1(UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateQuaternionU3Eb__19_1_mF9DE2A6ADFA5FBAB79DB1D288AAE6E802EF34C38 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Quaternion_get_Item_m1CB0BB2735EFDCADA39F17F61A754F5483A1ADFE((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___value0), L_0, /*hidden argument*/NULL);
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
// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::get_PrevValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LowPassFilter_get_PrevValue_m737128D174A955B04EE3C1D1CDEBEFE06FF2DF9C (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, const RuntimeMethod* method)
{
	{
		// public float PrevValue => _hatxprev;
		float L_0 = __this->get__hatxprev_2();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPassFilter__ctor_m9CD0E8F6FC02F8E3ADC82DF75E2BF51D9F5FDDA1 (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, const RuntimeMethod* method)
{
	{
		// public LowPassFilter()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _isFirstUpdate = true;
		__this->set__isFirstUpdate_0((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPassFilter_Reset_m25B9DEE5D6C7DF215FFD10218C4C99A37EED09F4 (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// _isFirstUpdate = true;
		__this->set__isFirstUpdate_0((bool)1);
		// _hatx = _hatxprev = default;
		float L_0 = (0.0f);
		V_0 = L_0;
		__this->set__hatxprev_2(L_0);
		float L_1 = V_0;
		__this->set__hatx_1(L_1);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::Filter(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LowPassFilter_Filter_mB2E118CAD3E48735ECA67EDB7931D98F565DEC21 (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, float ___x0, float ___alpha1, const RuntimeMethod* method)
{
	{
		// if (_isFirstUpdate)
		bool L_0 = __this->get__isFirstUpdate_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// _isFirstUpdate = false;
		__this->set__isFirstUpdate_0((bool)0);
		// _hatxprev = x;
		float L_1 = ___x0;
		__this->set__hatxprev_2(L_1);
	}

IL_0016:
	{
		// _hatx = alpha * x + (1 - alpha) * _hatxprev;
		float L_2 = ___alpha1;
		float L_3 = ___x0;
		float L_4 = ___alpha1;
		float L_5 = __this->get__hatxprev_2();
		__this->set__hatx_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_5)))));
		// _hatxprev = _hatx;
		float L_6 = __this->get__hatx_1();
		__this->set__hatxprev_2(L_6);
		// return _hatx;
		float L_7 = __this->get__hatx_1();
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
// System.Void Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m66C50D13C589EA815AF3829C9A8CE7F8485DB7B2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * L_0 = (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB *)il2cpp_codegen_object_new(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8D22D9DDD9CAF5B0669E15C828D44D3B45B1CED5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D22D9DDD9CAF5B0669E15C828D44D3B45B1CED5 (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::<GetGrabRigidbody>b__19_0(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetGrabRigidbodyU3Eb__19_0_mE4EF9C57BAE2C176F03ED999B0A37302AEC7EF5E (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb0, const RuntimeMethod* method)
{
	{
		// Rigidbody rigidbody = _cachedGrabbingRigidbodies.Find(rb => !rb.gameObject.activeSelf);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = ___rb0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneGrabRotateConstraints__ctor_m81F42103979930559C363F506E05D4264E8721C0 (OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneGrabTranslateConstraints__ctor_m5470B7BB703F0918FCB72A924D7585CFDCD002DB (OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBF3ADCC4AAFBBDB4AF1626E933B0F9A85FA0D05C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * L_0 = (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B *)il2cpp_codegen_object_new(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF7B6821D78CF59B5D0627F98D023F68A222200DE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7B6821D78CF59B5D0627F98D023F68A222200DE (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::<.ctor>b__27_0(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__27_0_m6B7B9CE0CA3B398E6EFFE2C7943B76A51BBC9090 (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cp0U3E0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event Action<Vector3, Vector3> WhenVelocitiesApplied = delegate { };
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
// System.Void Oculus.Interaction.Locomotion.PlayerLocomotor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDFF49820750DB61379348E78A3619E68E4BB593E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * L_0 = (U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E *)il2cpp_codegen_object_new(U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1AFCF830E0114CFC7CFDC204E2EC61826F079BF8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.PlayerLocomotor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1AFCF830E0114CFC7CFDC204E2EC61826F079BF8 (U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.PlayerLocomotor/<>c::<.ctor>b__18_0(Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__18_0_m38F40AAC9CBB33195A0B11E5E9A12213790C3E70 (U3CU3Ec_t85444A2E541773F7667D2D453556108BDEFC034E * __this, LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4  ___U3Cp0U3E0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// private Action<LocomotionEvent, Pose> _whenLocomotionEventHandled = delegate { };
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
// System.Void Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m7ACF8EB70BD4E3D718CB4082BBB7E0803CC8AA17 (U3CU3Ec__DisplayClass24_0_t5B7C30904B4BA3D6A031B421D8CF578D88F86F17 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0::<AddPointerCanvas>b__0(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CAddPointerCanvasU3Eb__0_mD41F0E2F9856AC745154FE8B454C1B6CCD7E55C9 (U3CU3Ec__DisplayClass24_0_t5B7C30904B4BA3D6A031B421D8CF578D88F86F17 * __this, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action<PointerEvent> pointerCanvasAction = (args) => HandlePointerEvent(pointerCanvas.Canvas, args);
		PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_pointerCanvas_1();
		NullCheck(L_1);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2;
		L_2 = InterfaceFuncInvoker0< Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * >::Invoke(0 /* UnityEngine.Canvas Oculus.Interaction.IPointableCanvas::get_Canvas() */, IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918_il2cpp_TypeInfo_var, L_1);
		PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  L_3 = ___args0;
		NullCheck(L_0);
		PointableCanvasModule_HandlePointerEvent_m290F01A09E74DA8F9C371F8A49A164025333F41A(L_0, L_2, L_3, /*hidden argument*/NULL);
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
// UnityEngine.EventSystems.PointerEventData Oculus.Interaction.PointableCanvasModule/Pointer::get_PointerEventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * Pointer_get_PointerEventData_mC12452AE3F6E88BC279DBE76800ECDB8CFFE9783 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public PointerEventData PointerEventData { get; set; }
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = __this->get_U3CPointerEventDataU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::set_PointerEventData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_set_PointerEventData_m8DA1C2472ED2521B8FBB61A4FD8C0D159005C295 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerEventData PointerEventData { get; set; }
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___value0;
		__this->set_U3CPointerEventDataU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::get_MarkedForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_MarkedForDeletion_m51C8824FF9A6795B2F6DB7FE32B250198E575119 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public bool MarkedForDeletion { get; private set; }
		bool L_0 = __this->get_U3CMarkedForDeletionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::set_MarkedForDeletion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool MarkedForDeletion { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CMarkedForDeletionU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Canvas Oculus.Interaction.PointableCanvasModule/Pointer::get_Canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Pointer_get_Canvas_m92BBE813381439FB78F249CB151BA583AD3DDC39 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public Canvas Canvas => _canvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get__canvas_2();
		return L_0;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.PointableCanvasModule/Pointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Pointer_get_Position_m1186CA6C373907E9869980447E0A242FFD327F53 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position => _position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__position_3();
		return L_0;
	}
}
// UnityEngine.GameObject Oculus.Interaction.PointableCanvasModule/Pointer::get_HoveredSelectable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Pointer_get_HoveredSelectable_mBB3977167C254181ADF110BFFB8053FEE69F40FF (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HoveredSelectable => _hoveredSelectable;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__hoveredSelectable_4();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::.ctor(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_m35ED678D3F284E685E44984CFA084090F458E1EA (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public Pointer(Canvas canvas)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _canvas = canvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = ___canvas0;
		__this->set__canvas_2(L_0);
		// _pressed = _released = false;
		int32_t L_1 = 0;
		V_0 = (bool)L_1;
		__this->set__released_7((bool)L_1);
		bool L_2 = V_0;
		__this->set__pressed_6(L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::Press()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_Press_mA38B9AF0EDE6085EC7192313DBA1CCE41E10108F (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// if (_pressing) return;
		bool L_0 = __this->get__pressing_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_pressing) return;
		return;
	}

IL_0009:
	{
		// _pressing = true;
		__this->set__pressing_5((bool)1);
		// _pressed = true;
		__this->set__pressed_6((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_Release_m71C9069879826373F5D0D327D92C3D69672F94C2 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// if (!_pressing) return;
		bool L_0 = __this->get__pressing_5();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_pressing) return;
		return;
	}

IL_0009:
	{
		// _pressing = false;
		__this->set__pressing_5((bool)0);
		// _released = true;
		__this->set__released_7((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::ReadAndResetPressedReleased(System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_ReadAndResetPressedReleased_m6FA1C8A462B49B2CF997F239413D73DECD9482F2 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool* ___pressed0, bool* ___released1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// pressed = _pressed;
		bool* L_0 = ___pressed0;
		bool L_1 = __this->get__pressed_6();
		*((int8_t*)L_0) = (int8_t)L_1;
		// released = _released;
		bool* L_2 = ___released1;
		bool L_3 = __this->get__released_7();
		*((int8_t*)L_2) = (int8_t)L_3;
		// _pressed = _released = false;
		int32_t L_4 = 0;
		V_0 = (bool)L_4;
		__this->set__released_7((bool)L_4);
		bool L_5 = V_0;
		__this->set__pressed_6(L_5);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::MarkForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_MarkForDeletion_m154A47597A96FA4C7A8CD9EAA448F732D8786DEA (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// MarkedForDeletion = true;
		Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19_inline(__this, (bool)1, /*hidden argument*/NULL);
		// Release();
		Pointer_Release_m71C9069879826373F5D0D327D92C3D69672F94C2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_SetPosition_m9F43E3A75AC2F6CDA31D7386FE795C800B0A80AC (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		// _position = position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		__this->set__position_3(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::SetHoveredSelectable(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_SetHoveredSelectable_m566BC8587358FB659AC06C81EE05BA5F6EC09343 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hoveredSelectable0, const RuntimeMethod* method)
{
	{
		// _hoveredSelectable = hoveredSelectable;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___hoveredSelectable0;
		__this->set__hoveredSelectable_4(L_0);
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
// UnityEngine.Pose Oculus.Interaction.PointableDebugGizmos/PointData::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PointData_get_Pose_mFD78396C7C7F00268AD1500966E68D7E52E4C19F (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, const RuntimeMethod* method)
{
	{
		// public Pose Pose { get; set; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CPoseU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableDebugGizmos/PointData::set_Pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointData_set_Pose_m95687F4D420104F6E975C03D35ACD516C6FE0E1D (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// public Pose Pose { get; set; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_U3CPoseU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.PointableDebugGizmos/PointData::get_Selecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointData_get_Selecting_mC3B0580BFCEB25B133377397018FB8CA093F377D (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, const RuntimeMethod* method)
{
	{
		// public bool Selecting { get; set; }
		bool L_0 = __this->get_U3CSelectingU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableDebugGizmos/PointData::set_Selecting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointData_set_Selecting_m59290AAC6C8B2BD0CF3EA4E64590720EC1E28697 (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Selecting { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSelectingU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PointableDebugGizmos/PointData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointData__ctor_m6B2D67F8B62EAAE2C2A7114A8A5E844352DC3EC4 (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PointableElement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA59FF8B48E81E3329A9384654091FF7E98E8B5A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * L_0 = (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 *)il2cpp_codegen_object_new(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD6200649E5EFD00FED8E9ED242BBC18B28547F2E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PointableElement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6200649E5EFD00FED8E9ED242BBC18B28547F2E (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PointableElement/<>c::<.ctor>b__43_0(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__43_0_m8738B6A79F527662E1303FE99C9A929789D38735 (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * __this, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<PointerEvent> WhenPointerEventRaised = delegate { };
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
// System.Void Oculus.Interaction.PokeInteractable/DragThresholdsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragThresholdsConfig__ctor_mEDE6295E5C1BACB5315EC4275470A9C58858DC83 (DragThresholdsConfig_tFAF3E80F118026A00CC34920ED921075CBF1847A * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PokeInteractable/MinThresholdsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinThresholdsConfig__ctor_m63CCA977C15413CF30FF366906FCDCBBE2E4CBFF (MinThresholdsConfig_t09E087D0356621AE4B2977FB668C3A3175C83ACC * __this, const RuntimeMethod* method)
{
	{
		// public float MinNormal = 0.01f;
		__this->set_MinNormal_1((0.00999999978f));
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
// System.Void Oculus.Interaction.PokeInteractable/PositionPinningConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPinningConfig__ctor_m88CA9366279577B335F66F1EC275E4C4075BE37A (PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PokeInteractable/RecoilAssistConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecoilAssistConfig__ctor_m025961FD6C71BCF6A7B79B6A4FFC1C6F876C2A97 (RecoilAssistConfig_t099C43C0BD7ABB13DFF61F5BE8E1456128DC7DEE * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PokeInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m89697164E5478A07B6B3F6F875AE80D8F8F85C56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * L_0 = (U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F *)il2cpp_codegen_object_new(U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4A48E8D7AFC313005C6D84FC8EE73CBB1A767E69(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PokeInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A48E8D7AFC313005C6D84FC8EE73CBB1A767E69 (U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PokeInteractor/<>c::<.ctor>b__76_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__76_0_m2D72B4BD42E2FEA63B68E4A3B53439D25A142A6D (U3CU3Ec_t32BFAF81AB3E4F727E548D9108F208D792920C4F * __this, bool ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public Action<bool> WhenPassedSurfaceChanged = delegate {};
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
// System.Boolean Oculus.Interaction.PokeInteractor/SurfaceHitCache::GetPatchHit(Oculus.Interaction.PokeInteractable,Oculus.Interaction.Surfaces.SurfaceHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceHitCache_GetPatchHit_m47233B31CABF64A1CF9AD5C7089780C90A7A5B72 (SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F * __this, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * ___interactable0, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 * ___hit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISurface_tA887537497D6C88323C26BB9A920F4A9ACBD6E32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!_surfacePatchHitCache.ContainsKey(interactable))
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_0 = __this->get__surfacePatchHitCache_0();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_1 = ___interactable0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		// bool isValid = interactable.SurfacePatch
		//     .ClosestSurfacePoint(_origin, out SurfaceHit patchHit);
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_3 = ___interactable0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = PokeInteractable_get_SurfacePatch_m0A94B55D25C2B21E84D52FA8FD56ACDC6311C36D_inline(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of__origin_2();
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker3< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 *, float >::Invoke(2 /* System.Boolean Oculus.Interaction.Surfaces.ISurface::ClosestSurfacePoint(UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute),Oculus.Interaction.Surfaces.SurfaceHit&,System.Single) */, ISurface_tA887537497D6C88323C26BB9A920F4A9ACBD6E32_il2cpp_TypeInfo_var, L_4, L_5, (SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 *)(&V_1), (0.0f));
		V_0 = L_6;
		// HitInfo info = new HitInfo(isValid, patchHit);
		bool L_7 = V_0;
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  L_8 = V_1;
		HitInfo__ctor_m7F5576506CA59BEC33E7CB0CDE25203318CFF679((HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC *)(&V_2), L_7, L_8, /*hidden argument*/NULL);
		// _surfacePatchHitCache.Add(interactable, info);
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_9 = __this->get__surfacePatchHitCache_0();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_10 = ___interactable0;
		HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  L_11 = V_2;
		NullCheck(L_9);
		Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF_RuntimeMethod_var);
	}

IL_003d:
	{
		// hit = _surfacePatchHitCache[interactable].Hit;
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 * L_12 = ___hit1;
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_13 = __this->get__surfacePatchHitCache_0();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_14 = ___interactable0;
		NullCheck(L_13);
		HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  L_15;
		L_15 = Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var);
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  L_16 = L_15.get_Hit_1();
		*(SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 *)L_12 = L_16;
		// return _surfacePatchHitCache[interactable].IsValid;
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_17 = __this->get__surfacePatchHitCache_0();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_18 = ___interactable0;
		NullCheck(L_17);
		HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  L_19;
		L_19 = Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var);
		bool L_20 = L_19.get_IsValid_0();
		return L_20;
	}
}
// System.Boolean Oculus.Interaction.PokeInteractor/SurfaceHitCache::GetBackingHit(Oculus.Interaction.PokeInteractable,Oculus.Interaction.Surfaces.SurfaceHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceHitCache_GetBackingHit_mEB8B7F54627908C9248B0F02825B838E06F281E8 (SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F * __this, PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * ___interactable0, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 * ___hit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISurfacePatch_t07DD38A9DC9FCDE0EB99F65CF071DD8E50A0EF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISurface_tA887537497D6C88323C26BB9A920F4A9ACBD6E32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!_backingSurfaceHitCache.ContainsKey(interactable))
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_0 = __this->get__backingSurfaceHitCache_1();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_1 = ___interactable0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE0098F3F0252AED8211A3B1B620DC6C09DAA0316_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		// bool isValid = interactable.SurfacePatch.BackingSurface
		//     .ClosestSurfacePoint(_origin, out SurfaceHit backingHit);
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_3 = ___interactable0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = PokeInteractable_get_SurfacePatch_m0A94B55D25C2B21E84D52FA8FD56ACDC6311C36D_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Surfaces.ISurface Oculus.Interaction.Surfaces.ISurfacePatch::get_BackingSurface() */, ISurfacePatch_t07DD38A9DC9FCDE0EB99F65CF071DD8E50A0EF2E_il2cpp_TypeInfo_var, L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of__origin_2();
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker3< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 *, float >::Invoke(2 /* System.Boolean Oculus.Interaction.Surfaces.ISurface::ClosestSurfacePoint(UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute),Oculus.Interaction.Surfaces.SurfaceHit&,System.Single) */, ISurface_tA887537497D6C88323C26BB9A920F4A9ACBD6E32_il2cpp_TypeInfo_var, L_5, L_6, (SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 *)(&V_1), (0.0f));
		V_0 = L_7;
		// HitInfo info = new HitInfo(isValid, backingHit);
		bool L_8 = V_0;
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  L_9 = V_1;
		HitInfo__ctor_m7F5576506CA59BEC33E7CB0CDE25203318CFF679((HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC *)(&V_2), L_8, L_9, /*hidden argument*/NULL);
		// _backingSurfaceHitCache.Add(interactable, info);
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_10 = __this->get__backingSurfaceHitCache_1();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_11 = ___interactable0;
		HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  L_12 = V_2;
		NullCheck(L_10);
		Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_Add_mCD32C319CED3A6CF30BF6869BCAC4C8F770757FF_RuntimeMethod_var);
	}

IL_0042:
	{
		// hit = _backingSurfaceHitCache[interactable].Hit;
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 * L_13 = ___hit1;
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_14 = __this->get__backingSurfaceHitCache_1();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_15 = ___interactable0;
		NullCheck(L_14);
		HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  L_16;
		L_16 = Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var);
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  L_17 = L_16.get_Hit_1();
		*(SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913 *)L_13 = L_17;
		// return _backingSurfaceHitCache[interactable].IsValid;
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_18 = __this->get__backingSurfaceHitCache_1();
		PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * L_19 = ___interactable0;
		NullCheck(L_18);
		HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC  L_20;
		L_20 = Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mC70BDEDA86D33B52B1B77A17375AF6F0CB0663A2_RuntimeMethod_var);
		bool L_21 = L_20.get_IsValid_0();
		return L_21;
	}
}
// System.Void Oculus.Interaction.PokeInteractor/SurfaceHitCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceHitCache__ctor_mFD4A6D09AD7E669CF4754BEE04D72EA5A4DDB2EB (SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SurfaceHitCache()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _surfacePatchHitCache = new Dictionary<PokeInteractable, HitInfo>();
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_0 = (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *)il2cpp_codegen_object_new(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA(L_0, /*hidden argument*/Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA_RuntimeMethod_var);
		__this->set__surfacePatchHitCache_0(L_0);
		// _backingSurfaceHitCache = new Dictionary<PokeInteractable, HitInfo>();
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_1 = (Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 *)il2cpp_codegen_object_new(Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA(L_1, /*hidden argument*/Dictionary_2__ctor_m5CB6191FBD42C5B55739E50DA3FF2494AA7976AA_RuntimeMethod_var);
		__this->set__backingSurfaceHitCache_1(L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PokeInteractor/SurfaceHitCache::Reset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceHitCache_Reset_m494A158D6137828B712E91F532164FBCD547C3C0 (SurfaceHitCache_tB55C76711579A186ABE456446F5B0CCBB57F048F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _origin = origin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___origin0;
		__this->set__origin_2(L_0);
		// _surfacePatchHitCache.Clear();
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_1 = __this->get__surfacePatchHitCache_0();
		NullCheck(L_1);
		Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47(L_1, /*hidden argument*/Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47_RuntimeMethod_var);
		// _backingSurfaceHitCache.Clear();
		Dictionary_2_t6A2C2FE127D659C48A32C238DAD8C342514876E2 * L_2 = __this->get__backingSurfaceHitCache_1();
		NullCheck(L_2);
		Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47(L_2, /*hidden argument*/Dictionary_2_Clear_m1458E097E3CE708972A9359670B54AA5000AFE47_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCB9FC41F26E9EDA957733507CAC518E58E50212C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * L_0 = (U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED *)il2cpp_codegen_object_new(U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m64B71E30868662FF91C7A59C6732A1AC1B803319(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64B71E30868662FF91C7A59C6732A1AC1B803319 (U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<.ctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_m2D611A784C8161794B6686E9F9686A73F826654E (U3CU3Ec_t2A7C0B599BDB72BCBBC037DC566A9F47CCEB2CED * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Void Oculus.Interaction.ProgressCurve/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m39E822ED9FC1099263A61DD2ED150625C47ACFEB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * L_0 = (U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 *)il2cpp_codegen_object_new(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA088ECF80654FD7DDA8551B90CBA762337FEF447(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.ProgressCurve/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA088ECF80654FD7DDA8551B90CBA762337FEF447 (U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.ProgressCurve/<>c::<.ctor>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3C_ctorU3Eb__13_0_mC487CC7A9CE822F8F1015B07EB3BD48248D09660 (U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * __this, const RuntimeMethod* method)
{
	{
		// private Func<float> _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Oculus.Interaction.ProgressCurve/<>c::<.ctor>b__14_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3C_ctorU3Eb__14_0_mA4CA70936352A328CFC734171789FCB334E9AC7C (U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * __this, const RuntimeMethod* method)
{
	{
		// private Func<float> _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Oculus.Interaction.ProgressCurve/<>c::<.ctor>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3C_ctorU3Eb__15_0_mB96B436D55A7384B8181D79707EBB389CA5AD88E (U3CU3Ec_t9CFBF2C188BEADAFEDE5B504024813B730FBA9A2 * __this, const RuntimeMethod* method)
{
	{
		// private Func<float> _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
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
// Oculus.Interaction.RayInteractable Oculus.Interaction.RayInteractor/RayCandidateProperties::get_ClosestInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * RayCandidateProperties_get_ClosestInteractable_mDECF6325B751118E199C5D069CFC445A1CCB50D2 (RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E * __this, const RuntimeMethod* method)
{
	{
		// public RayInteractable ClosestInteractable { get; }
		RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * L_0 = __this->get_U3CClosestInteractableU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.RayInteractor/RayCandidateProperties::get_CandidatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayCandidateProperties_get_CandidatePosition_m33BCCCD58BF9D0C51A86FCA00747FF80F14AA114 (RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 CandidatePosition { get; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CCandidatePositionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.RayInteractor/RayCandidateProperties::.ctor(Oculus.Interaction.RayInteractable,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCandidateProperties__ctor_mD199F813D8B07AF2BB3AF4CF46CCFFB5BE068A75 (RayCandidateProperties_tC89D0E19C04AD41210174C331E4D0D97543D366E * __this, RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * ___closestInteractable0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___candidatePosition1, const RuntimeMethod* method)
{
	{
		// public RayCandidateProperties(RayInteractable closestInteractable, Vector3 candidatePosition)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ClosestInteractable = closestInteractable;
		RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * L_0 = ___closestInteractable0;
		__this->set_U3CClosestInteractableU3Ek__BackingField_0(L_0);
		// CandidatePosition = candidatePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___candidatePosition1;
		__this->set_U3CCandidatePositionU3Ek__BackingField_1(L_1);
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
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m998D439A6E39A6A286ED55C5446CBBE2742C8454 (U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m48AC504F523BBC226F53D6609B63CCBB3F6F0FE5 (U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m4B49012146128844DBD516F6C57BF0840DA54FB4 (U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * V_1 = NULL;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (var pose in _poses)
		ReadOnlyBodyJointPoses_t97BB2307A7E74C41D3A3EE998AA4E0A9FFDB327E * L_4 = V_1;
		NullCheck(L_4);
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_5 = L_4->get__poses_0();
		__this->set_U3CU3E7__wrap1_3(L_5);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_006a;
	}

IL_0033:
	{
		// foreach (var pose in _poses)
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_6 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_7 = __this->get_U3CU3E7__wrap2_4();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = V_2;
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0055:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_11 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006a:
	{
		// foreach (var pose in _poses)
		int32_t L_12 = __this->get_U3CU3E7__wrap2_4();
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_13 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_mD5BB1FAFA15867EF204E4DB89A56A71D95E15F52 (U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16 * __this, const RuntimeMethod* method)
{
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mFBA074B176B2BF568D385D9EF65250FE559A9B56 (U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mFBA074B176B2BF568D385D9EF65250FE559A9B56_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_mF4E7A4BA8C2A1F40659CF1339D9C0FC86EF2D66B (U3CGetEnumeratorU3Ed__2_t22BE5F5E1C9EB48845F17D9278493DABEAE52B16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CU3E2__current_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = L_0;
		RuntimeObject * L_2 = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &L_1);
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
// System.Void Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m435C93BF149917D503507A80B3AE5FEF67408F11 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_mA7CAF7005CBB0497633F4C32DDFFF1B63AC81883 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m7FD5A6E8F1FA8725D3C841F0F97C44218B801CF2 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * V_1 = NULL;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (var pose in _poses)
		ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * L_4 = V_1;
		NullCheck(L_4);
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_5 = L_4->get__poses_0();
		__this->set_U3CU3E7__wrap1_3(L_5);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_006a;
	}

IL_0033:
	{
		// foreach (var pose in _poses)
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_6 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_7 = __this->get_U3CU3E7__wrap2_4();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = V_2;
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0055:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_11 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006a:
	{
		// foreach (var pose in _poses)
		int32_t L_12 = __this->get_U3CU3E7__wrap2_4();
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_13 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_m616E08C95FCB09097E081EE1843F3EC38325F6E3 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m11117DBA3B3403BF14D9C5F0A7636FB8D06C922D (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m11117DBA3B3403BF14D9C5F0A7636FB8D06C922D_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_mE7963FA2F43D40CCFF9DB66BA4960AF3623C0CF6 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CU3E2__current_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = L_0;
		RuntimeObject * L_2 = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.PoseDetection.Sequence/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m58B43BFACF6002145DB8C7BE4BD563A845DA13A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * L_0 = (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D *)il2cpp_codegen_object_new(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEB675C5E999AA01B217D197BB47AD0B8B9884E21(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEB675C5E999AA01B217D197BB47AD0B8B9884E21 (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.Sequence/<>c::<Start>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CStartU3Eb__19_0_mD12EC6255D46D72E86E1699F2CDB99031F80DD94 (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
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
// Oculus.Interaction.IActiveState Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_ActiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CActiveStateU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::set_ActiveState(Oculus.Interaction.IActiveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CActiveStateU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_MinActiveTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ActivationStep_get_MinActiveTime_mFE1A1D9595BDE74552D9E08A0610BB9AF1081BC3 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public float MinActiveTime => _minActiveTime;
		float L_0 = __this->get__minActiveTime_2();
		return L_0;
	}
}
// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_MaxStepTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ActivationStep_get_MaxStepTime_mC5BBBA7EFB31A529EB9163881E199A28D02F0221 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxStepTime => _maxStepTime;
		float L_0 = __this->get__maxStepTime_3();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep__ctor_m9D868AB163B0A7B674B97B367E40ACC1A1D54BCA (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public ActivationStep()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::.ctor(Oculus.Interaction.IActiveState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep__ctor_m8E6FC9539722C8977C7948B5BD88ED30265DEAEC (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___activeState0, float ___minActiveTime1, float ___maxStepTime2, const RuntimeMethod* method)
{
	{
		// public ActivationStep(IActiveState activeState, float minActiveTime, float maxStepTime)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ActiveState = activeState;
		RuntimeObject* L_0 = ___activeState0;
		ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline(__this, L_0, /*hidden argument*/NULL);
		// _minActiveTime = minActiveTime;
		float L_1 = ___minActiveTime1;
		__this->set__minActiveTime_2(L_1);
		// _maxStepTime = maxStepTime;
		float L_2 = ___maxStepTime2;
		__this->set__maxStepTime_3(L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep_Start_mAD28F5BE4F907DC50A5B06DEBCC1776FFA8FF9BA (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ActiveState == null)
		RuntimeObject* L_0;
		L_0 = ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// ActiveState = _activeState as IActiveState;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = __this->get__activeState_0();
		ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0019:
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
// System.Void Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m77BFEAE36777AC11D66BBFD06DD3D30743DF878B (U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0::<TryFindIndexForInteractor>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CTryFindIndexForInteractorU3Eb__0_mA6A0998700510CB1463DDDDF3F4469F77FE4A4C5 (U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// index = Array.FindIndex(_slotInteractors, i => i == id);
		int32_t L_0 = ___i0;
		int32_t L_1 = __this->get_id_0();
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21__ctor_mC846CAC3612EBD2A80476F4FAD4A2F0A55591645 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21_System_IDisposable_Dispose_m0B4588295B0A07E2B6323CDC00BF5EF343119C40 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetFingerFeatureConfigsU3Ed__21_MoveNext_m5411DD8F64374314BDBDB6CDBDFFC785D7040B9F (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tCDA0DC7D0725EF547CDB8BD64CC747B646C98740_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mE22BFAD5D601ADA32C0790CB75C325CF887A58AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; ++fingerIdx)
		__this->set_U3CfingerIdxU3E5__2_4(0);
		goto IL_006d;
	}

IL_0027:
	{
		// HandFinger finger = (HandFinger)fingerIdx;
		int32_t L_4 = __this->get_U3CfingerIdxU3E5__2_4();
		V_2 = L_4;
		// var configs = GetFingerFeatureConfigs(finger);
		ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = ShapeRecognizer_GetFingerFeatureConfigs_m0198CB2C1CFBE885454BAEAF399679E822EAC5CB(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// if (configs.Count == 0)
		RuntimeObject* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>::get_Count() */, IReadOnlyCollection_1_tCDA0DC7D0725EF547CDB8BD64CC747B646C98740_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// yield return new ValueTuple<HandFinger, IReadOnlyList<FingerFeatureConfig>>(finger,
		//     configs);
		int32_t L_10 = V_2;
		RuntimeObject* L_11 = V_3;
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ValueTuple_2__ctor_mE22BFAD5D601ADA32C0790CB75C325CF887A58AD((&L_12), L_10, L_11, /*hidden argument*/ValueTuple_2__ctor_mE22BFAD5D601ADA32C0790CB75C325CF887A58AD_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0054:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005b:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; ++fingerIdx)
		int32_t L_13 = __this->get_U3CfingerIdxU3E5__2_4();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_4;
		__this->set_U3CfingerIdxU3E5__2_4(L_14);
	}

IL_006d:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; ++fingerIdx)
		int32_t L_15 = __this->get_U3CfingerIdxU3E5__2_4();
		if ((((int32_t)L_15) < ((int32_t)5)))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumeratorU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_get_Current_mA96C83E088E5B180B78129E2BE1D240A6ED02DCC (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_Reset_m905A925870ABD7B37A389A72C603496F596C69E8 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_Reset_m905A925870ABD7B37A389A72C603496F596C69E8_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_get_Current_m5D0A1FFEF26629E0D750957394A3A6133F94B4B7 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumerableU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_GetEnumerator_m0ECCFC9B802D15973CEDC8C8290E4E5C062390E5 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * L_3 = (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 *)il2cpp_codegen_object_new(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3_il2cpp_TypeInfo_var);
		U3CGetFingerFeatureConfigsU3Ed__21__ctor_mC846CAC3612EBD2A80476F4FAD4A2F0A55591645(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * L_4 = V_0;
		ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerable_GetEnumerator_m629424F9F83D0D2E9DC701D4047D385500D39AF3 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumerableU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_GetEnumerator_m0ECCFC9B802D15973CEDC8C8290E4E5C062390E5(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFeatureConfig__ctor_mA397016E43C443FECFE7ACED8DC44B1E12D2AE11 (FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0(__this, /*hidden argument*/FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0_RuntimeMethod_var);
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
// System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FingerFeatureConfigList_get_Value_mE3C3A6E3E2B111F13D70A13AD45195DCC799ADBB (FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<FingerFeatureConfig> Value => _value;
		List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * L_0 = __this->get__value_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFeatureConfigList__ctor_mA8635F285B771FA0B251AE73B74CBAFA1BC006C6 (FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * __this, const RuntimeMethod* method)
{
	{
		// public FingerFeatureConfigList() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public FingerFeatureConfigList() { }
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::.ctor(System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFeatureConfigList__ctor_m00EE44818CB565290826E8D648207D9FE6B61F46 (FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * __this, List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * ___value0, const RuntimeMethod* method)
{
	{
		// public FingerFeatureConfigList(List<FingerFeatureConfig> value)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _value = value;
		List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * L_0 = ___value0;
		__this->set__value_0(L_0);
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
// Conversion methods for marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_pinvoke(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_pinvoke_back(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke& marshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_pinvoke_cleanup(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_com(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com& marshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_com_back(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com& marshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_com_cleanup(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.SnapInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9330EEB919DA488C6ED418A70530122750EDF538 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * L_0 = (U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 *)il2cpp_codegen_object_new(U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4EAAA9902B6B61B9C4D27E98BB4C544708AFD1B5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.SnapInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4EAAA9902B6B61B9C4D27E98BB4C544708AFD1B5 (U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.SnapInteractor/<>c::<OnEnable>b__20_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__20_1_m23F0F70AF2EDF3B0755C31815FECA3C491956203 (U3CU3Ec_t2515D77EF98C0AE95E074E5B3075C41D0E8A6773 * __this, const RuntimeMethod* method)
{
	{
		// SetComputeShouldSelectOverride(()=>true, true);
		return (bool)1;
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
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFF899EF427AA6E3F18F8B10421C2E3B4EAFAD762 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * L_0 = (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C *)il2cpp_codegen_object_new(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m67E4F6239BD4227A703037A4E29F6FE24415FAFF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m67E4F6239BD4227A703037A4E29F6FE24415FAFF (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<Awake>b__90_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__90_0_m4B8D9B3927DFB022750227119877D8EC80931BCE (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<.ctor>b__115_0(System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__115_0_mF8AA41137053387F19123F897F8F9EE2B11D4495 (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<List<ReleaseVelocityInformation>> WhenThrowVelocitiesChanged = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<.ctor>b__115_1(Oculus.Interaction.Throw.ReleaseVelocityInformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__115_1_mA4479C8E90B0E9D496CFDB1A093A9BB5DD70BBCC (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<ReleaseVelocityInformation> WhenNewSampleAvailable = delegate { };
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
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferingParams_Validate_m198445B4C7A5D15FED609A8D7C747585A3292DE6 (BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferingParams__ctor_mF3BBF9455E54AE077C57E326F273A9A72DA52893 (BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C * __this, const RuntimeMethod* method)
{
	{
		// public float BufferLengthSeconds = 0.4f;
		__this->set_BufferLengthSeconds_0((0.400000006f));
		// public float SampleFrequency = 90.0f;
		__this->set_SampleFrequency_1((90.0f));
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
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::.ctor(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431 (SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___transformPose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity2, float ___time3, const RuntimeMethod* method)
{
	{
		// TransformPose = transformPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___transformPose0;
		__this->set_TransformPose_0(L_0);
		// LinearVelocity = linearVelocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___linearVelocity1;
		__this->set_LinearVelocity_1(L_1);
		// AngularVelocity = angularVelocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___angularVelocity2;
		__this->set_AngularVelocity_2(L_2);
		// Time = time;
		float L_3 = ___time3;
		__this->set_Time_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431_AdjustorThunk (RuntimeObject * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___transformPose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity2, float ___time3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 * _thisAdjusted = reinterpret_cast<SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 *>(__this + _offset);
	SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431(_thisAdjusted, ___transformPose0, ___linearVelocity1, ___angularVelocity2, ___time3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7997F6910098C78C130CD6CA7370FE5B2818FB9F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * L_0 = (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 *)il2cpp_codegen_object_new(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m95B519241F2E8BFDEB3DA5BC7D276491AFC16E51(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95B519241F2E8BFDEB3DA5BC7D276491AFC16E51 (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::<.ctor>b__55_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__55_0_mC2A1876571097D175BF34D4BF59DF6A20E76876F (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * __this, const RuntimeMethod* method)
{
	{
		// public System.Action UpdateRequired = delegate { };
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
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0635DC787D11ABA570F31BB9337DC8285DC531D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * L_0 = (U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA *)il2cpp_codegen_object_new(U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7609D0EDC2A4E66C1312991D3467F31B2948F69A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7609D0EDC2A4E66C1312991D3467F31B2948F69A (U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor/<>c::<.ctor>b__36_0(Oculus.Interaction.Locomotion.LocomotionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__36_0_m6B6BA803ECC1D5353860554869D85939BE2831F0 (U3CU3Ec_t6AD6EDD5C9602A5ACF0F79A9A2CA871D2C90FFBA * __this, LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private Action<LocomotionEvent> _whenLocomotionPerformed = delegate { };
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
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8C455491437C6C72A0D0F30870FEBD33765F8EE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * L_0 = (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 *)il2cpp_codegen_object_new(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE0361CD875C420F4D4571BC4FCB4ABD396AE222A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0361CD875C420F4D4571BC4FCB4ABD396AE222A (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.TouchHandGrabInteractor/<>c::<Awake>b__39_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__39_0_mE4C4A5EFD89C6A9ADFCD63A0C575E6AE17F3A225 (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::<.ctor>b__69_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__69_0_mA43264AF199320BBD53C051E190D723D88759AE2 (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenFingerLocked = delegate () { };
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
// System.Void Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerStatus__ctor_m3AD7667BB93DDFA2B534AAA3AAD1003E3251D24C (FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m45F327F44F8C93ECE72ECF1596AC9E9E183F37CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * L_0 = (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B *)il2cpp_codegen_object_new(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8337C0AA8B04C451F4A98DA835383E3F63D3425F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8337C0AA8B04C451F4A98DA835383E3F63D3425F (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::<UpdateLocks>b__6_0(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  U3CU3Ec_U3CUpdateLocksU3Eb__6_0_m2E759D38AC6C17A918D99AE5397396F77C898199 (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, const RuntimeMethod* method)
{
	{
		// _interactor.GetFingerJoints(finger).Select(pose => pose.rotation).ToArray();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___pose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = L_0.get_rotation_1();
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
// System.Void Oculus.Interaction.TouchShadowHand/GrabTouchInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchInfo__ctor_m52D2F310D24633A15239DC8CCB92E8B033F3D116 (GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool[] grabbingFingers = new bool[5];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_grabbingFingers_2(L_0);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8415BDF25EC42B038CE0FC344507066DF7CDEF15 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * L_0 = (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 *)il2cpp_codegen_object_new(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC5928F50E0A6CC5B3CF47576D697B23CED513355(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5928F50E0A6CC5B3CF47576D697B23CED513355 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_0(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_0_mD3B9E96A3439A80BB3A01EE2CBDC751303732760 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.WristUp));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_1(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_1_mFF4D2FDC174F9BEF01D093CB8651918BDBEF27DD (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.WristDown));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_2(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_2_mBE5D37FC830B6BAEC635954A9EA02797F76E453C (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmDown));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_3(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_3_m50403FFE1EC4254DFAAFEC3BAE72EDAE24FCF167 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmUp));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 3, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_4(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_4_m43BE810894E9149990F554994799D501577A56A3 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmTowardsFace));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 4, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_5(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_5_mE31C43A1CD8055E78B9CCF5FCE6EB48E9AB61A9C (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmAwayFromFace));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 5, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_6(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_6_mE13CFDE454E5138065255E1EF54926A6726B52A3 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.FingersUp));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 6, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_7(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_7_m819D59FDAE2E6126F73A21730E2241E8F9A8AA06 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.FingersDown));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 7, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_8(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_8_m03EFFAAD4A28988F13375E5748C07F7A57509E4C (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PinchClear));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 8, /*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::.ctor(Oculus.Interaction.PoseDetection.FeatureStateActiveMode,Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, int32_t ___featureStateActiveMode0, int32_t ___transformFeature1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrueFalseStateBuilder(FeatureStateActiveMode featureStateActiveMode,
		//     TransformFeature transformFeature)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _mode = featureStateActiveMode;
		int32_t L_0 = ___featureStateActiveMode0;
		__this->set__mode_0(L_0);
		// _transformFeature = transformFeature;
		int32_t L_1 = ___transformFeature1;
		__this->set__transformFeature_1(L_1);
		// _states = TransformFeatureProperties.FeatureDescriptions[_transformFeature].FeatureStates;
		IL2CPP_RUNTIME_CLASS_INIT(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = TransformFeatureProperties_get_FeatureDescriptions_m932B12A215F71FF5197825B46D19E2A20DCF88B2_inline(/*hidden argument*/NULL);
		int32_t L_3 = __this->get__transformFeature_1();
		NullCheck(L_2);
		FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D * L_4;
		L_4 = InterfaceFuncInvoker1< FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D *, int32_t >::Invoke(1 /* !1 System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription>::get_Item(!0) */, IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38_il2cpp_TypeInfo_var, L_2, L_3);
		NullCheck(L_4);
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_5;
		L_5 = FeatureDescription_get_FeatureStates_m6BD23527382020879F0DB4946031715F945A52D4_inline(L_4, /*hidden argument*/NULL);
		__this->set__states_2(L_5);
		// }
		return;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfig Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::get_Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * TrueFalseStateBuilder_get_Open_mDD0670844C125E618585BC132A1EAB909B772C03 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new TransformFeatureConfig { Feature = _transformFeature, Mode = _mode, State = _states[0].Id };
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_0 = (TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 *)il2cpp_codegen_object_new(TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		TransformFeatureConfig__ctor_m8EAAF6AB47CBDC9E58C37C27A1A70F672E025AFC(L_0, /*hidden argument*/NULL);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_1 = L_0;
		int32_t L_2 = __this->get__transformFeature_1();
		NullCheck(L_1);
		FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_inline(L_1, L_2, /*hidden argument*/FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_3 = L_1;
		int32_t L_4 = __this->get__mode_0();
		NullCheck(L_3);
		FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_inline(L_3, L_4, /*hidden argument*/FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_5 = L_3;
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_6 = __this->get__states_2();
		NullCheck(L_6);
		int32_t L_7 = 0;
		FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_inline(L_5, L_9, /*hidden argument*/FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
		return L_5;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfig Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::get_Closed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * TrueFalseStateBuilder_get_Closed_mC522576B1BF4CCAA16CABE37FAB86CC077A10BB0 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new TransformFeatureConfig { Feature = _transformFeature, Mode = _mode, State = _states[1].Id };
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_0 = (TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 *)il2cpp_codegen_object_new(TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		TransformFeatureConfig__ctor_m8EAAF6AB47CBDC9E58C37C27A1A70F672E025AFC(L_0, /*hidden argument*/NULL);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_1 = L_0;
		int32_t L_2 = __this->get__transformFeature_1();
		NullCheck(L_1);
		FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_inline(L_1, L_2, /*hidden argument*/FeatureConfigBase_1_set_Feature_m3BB54EB64CCC71DEC89ED6534B3D37B57FCD2FE8_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_3 = L_1;
		int32_t L_4 = __this->get__mode_0();
		NullCheck(L_3);
		FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_inline(L_3, L_4, /*hidden argument*/FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_5 = L_3;
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_6 = __this->get__states_2();
		NullCheck(L_6);
		int32_t L_7 = 1;
		FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_inline(L_5, L_9, /*hidden argument*/FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFC3A8A3A03D895A0995D19304C9C67C6FB0A36B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * L_0 = (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 *)il2cpp_codegen_object_new(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3B3BC0E30FC03BE33E52A237D7158F1A112F38EE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B3BC0E30FC03BE33E52A237D7158F1A112F38EE (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::<RegisterConfig>b__2_1(Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRegisterConfigU3Eb__2_1_m72332A2813F0B1E23E2781EDBA6CCEB62A318D7A (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * __this, int32_t ___feature0, const RuntimeMethod* method)
{
	{
		// feature => (int)feature,
		int32_t L_0 = ___feature0;
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m344383093388D680C1969DE731825FBE462084D2 (U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<System.Single> Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::<RegisterConfig>b__0(Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  U3CU3Ec__DisplayClass2_0_U3CRegisterConfigU3Eb__0_m555664EF5617E693A6490752DB16386D07035631 (U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F * __this, int32_t ___feature0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((feature) => TransformFeatureValueProvider.GetValue(feature, jointData, transformConfig),
		int32_t L_0 = ___feature0;
		TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * L_1 = __this->get_jointData_0();
		TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * L_2 = __this->get_transformConfig_1();
		float L_3;
		L_3 = TransformFeatureValueProvider_GetValue_mE6757A965B5E2DCFF72970C558B8821C11433F43(L_0, L_1, L_2, /*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo::.ctor(Oculus.Interaction.PoseDetection.TransformConfig,Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStateInfo__ctor_m185D7B5A3F2A19B137BD454E0DC78443277F10C9 (TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9 * __this, TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___transformConfig0, FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * ___stateProvider1, const RuntimeMethod* method)
{
	{
		// public TransformStateInfo(TransformConfig transformConfig,
		//     FeatureStateProvider<TransformFeature, string> stateProvider)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Config = transformConfig;
		TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * L_0 = ___transformConfig0;
		__this->set_Config_0(L_0);
		// StateProvider = stateProvider;
		FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * L_1 = ___stateProvider1;
		__this->set_StateProvider_1(L_1);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAFF46D66C674A732C1E7D8975BA26E3D2D0B0538 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * L_0 = (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 *)il2cpp_codegen_object_new(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF779741BBAA03040699778F66709AD71C1E76541(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF779741BBAA03040699778F66709AD71C1E76541 (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::<Awake>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__20_0_mF6E1FDCE633E2C1BA259C60C685AE54EADE07C82 (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::.ctor(UnityEngine.Pose,UnityEngine.Pose,Oculus.Interaction.Input.Handedness,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF (TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___centerEyePos0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___wristPose1, int32_t ___handedness2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemUp3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemForward4, const RuntimeMethod* method)
{
	{
		// CenterEyePose = centerEyePos;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___centerEyePos0;
		__this->set_CenterEyePose_0(L_0);
		// WristPose = wristPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___wristPose1;
		__this->set_WristPose_1(L_1);
		// Handedness = handedness;
		int32_t L_2 = ___handedness2;
		__this->set_Handedness_2(L_2);
		// TrackingSystemUp = trackingSystemUp;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___trackingSystemUp3;
		__this->set_TrackingSystemUp_3(L_3);
		// TrackingSystemForward = trackingSystemForward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___trackingSystemForward4;
		__this->set_TrackingSystemForward_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF_AdjustorThunk (RuntimeObject * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___centerEyePos0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___wristPose1, int32_t ___handedness2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemUp3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemForward4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 * _thisAdjusted = reinterpret_cast<TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 *>(__this + _offset);
	TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF(_thisAdjusted, ___centerEyePos0, ___wristPose1, ___handedness2, ___trackingSystemUp3, ___trackingSystemForward4, method);
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
// System.Void Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7553F1AB42CC440313CA94F1C1272B0709F55346 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * L_0 = (U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 *)il2cpp_codegen_object_new(U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m95A998AB7AF2C2F5E71340D266CF059BDE271AA3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95A998AB7AF2C2F5E71340D266CF059BDE271AA3 (U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c::<.ctor>b__47_0(Oculus.Interaction.Locomotion.LocomotionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__47_0_m97193F498ABEBC2CC7CED377A5A99B91AACCBF64 (U3CU3Ec_t79DB4F1C0F96D55A945DEAA738AE87DCE9F2AAC4 * __this, LocomotionEvent_t268C52060525C1C131985C4A99B63C00FBBA13D4  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private Action<LocomotionEvent> _whenLocomotionEventRaised = delegate { };
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
// System.Void Oculus.Interaction.Tween/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m46B4BD39978A0DAD9D85344E86BAD81A45C4B1E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * L_0 = (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 *)il2cpp_codegen_object_new(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD6DAE0E3BA27B7167F62CC6FB17D20BD9C6DA34B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Tween/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6DAE0E3BA27B7167F62CC6FB17D20BD9C6DA34B (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.Tween/<>c::<get_Stopped>b__11_0(Oculus.Interaction.Tween/TweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_StoppedU3Eb__11_0_mC45C32B94D0EA3235D18CDCF25306274D312F10C (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * __this, TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135 * ___t0, const RuntimeMethod* method)
{
	{
		// public bool Stopped => _tweenCurves.TrueForAll(t => t.PrevProgress >= 1f);
		TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = L_0->get_PrevProgress_1();
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Oculus.Interaction.Tween/TweenCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCurve__ctor_m7F515CA146507FEEAF1A57B7591905A14CD566C6 (TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabFreeConstraints__ctor_mD299A5BA141F41F30C9CA5DF81EBB59AB9B5A7C1 (TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabPlaneConstraints__ctor_mB3FBD52D60FA28FE93463FAECA35851960026385 (TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabRotateConstraints__ctor_mC6B04077413FF54F227E2AAFB2B4467765C64671 (TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.UpdateDriverGroup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8476374418C43E4E7A7398F26577DF4945232260 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * L_0 = (U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F *)il2cpp_codegen_object_new(U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF0F53539E1B129CBF20A93CC9A05B1D86E536829(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.UpdateDriverGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0F53539E1B129CBF20A93CC9A05B1D86E536829 (U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.IUpdateDriver Oculus.Interaction.UpdateDriverGroup/<>c::<Awake>b__10_0(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__10_0_mE9E5FE06DB38461B6CED23729D062146B0F73079 (U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___mono0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateDriver_t7837C44A5DEDE547C09FFC70F56FA9541AE91E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Drivers = _updateDrivers.ConvertAll(mono => mono as IUpdateDriver);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___mono0;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IUpdateDriver_t7837C44A5DEDE547C09FFC70F56FA9541AE91E39_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Object Oculus.Interaction.UpdateDriverGroup/<>c::<InjectUpdateDrivers>b__15_0(Oculus.Interaction.IUpdateDriver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * U3CU3Ec_U3CInjectUpdateDriversU3Eb__15_0_m2480F28741DD06CD281913D11AA0A2886CD3DCBB (U3CU3Ec_t6A046ACDDCDB86F5BFD8F3E57B8EDDFA2D49125F * __this, RuntimeObject* ___driver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updateDrivers = updateDrivers.ConvertAll(driver => driver as UnityEngine.Object);
		RuntimeObject* L_0 = ___driver0;
		return ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)IsInstClass((RuntimeObject*)L_0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var));
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
// System.Void Oculus.Interaction.VirtualPointable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B30BC4D244D8482D4839ACF70139EBED8D5A2E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * L_0 = (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F *)il2cpp_codegen_object_new(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB6DBB942543ED1DBDA7AB24D2ACEDCAD0482F8EB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualPointable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6DBB942543ED1DBDA7AB24D2ACEDCAD0482F8EB (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualPointable/<>c::<.ctor>b__10_0(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__10_0_m9F5AFF87E82571900246E03BD2BF8C1BEA43D1D9 (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * __this, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<PointerEvent> WhenPointerEventRaised = delegate { };
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
// System.Void Oculus.Interaction.VirtualSelector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m53D89110ED7DA31E98E3156D1A7ADBC171F0897D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * L_0 = (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B *)il2cpp_codegen_object_new(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m617C02BA1EA6F7412A4C5FF400153A6ECAC7F067(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m617C02BA1EA6F7412A4C5FF400153A6ECAC7F067 (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualSelector/<>c::<.ctor>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_0_mD985108D5987E76496F2F7A9FE475D7164934771 (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenSelected = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.VirtualSelector/<>c::<.ctor>b__12_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_1_m4C590D608C5D10ACD39F0D8EDC3702CC6E18803B (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenUnselected = delegate { };
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
// System.Void Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6FD056216A9E24C2C547AEB702FC37ACF53E384C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * L_0 = (U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 *)il2cpp_codegen_object_new(U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB72D55DEFFC31CC3C26465449EF2F16502D475C1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB72D55DEFFC31CC3C26465449EF2F16502D475C1 (U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c::<.ctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_0_mD80B4ED1DB056F2ACEA0052BBC3A129B68826D9C (U3CU3Ec_t9035CC1D2A7AFF30282A9FE53BD4820C25672D21 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenRectTransformDimensionsChanged = delegate { };
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
// Conversion methods for marshalling of: Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
IL2CPP_EXTERN_C void HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshal_pinvoke(const HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC& unmarshaled, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_pinvoke& marshaled)
{
	marshaled.___IsValid_0 = static_cast<int32_t>(unmarshaled.get_IsValid_0());
	marshaled.___Hit_1 = unmarshaled.get_Hit_1();
}
IL2CPP_EXTERN_C void HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshal_pinvoke_back(const HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_pinvoke& marshaled, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC& unmarshaled)
{
	bool unmarshaled_IsValid_temp_0 = false;
	unmarshaled_IsValid_temp_0 = static_cast<bool>(marshaled.___IsValid_0);
	unmarshaled.set_IsValid_0(unmarshaled_IsValid_temp_0);
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  unmarshaled_Hit_temp_1;
	memset((&unmarshaled_Hit_temp_1), 0, sizeof(unmarshaled_Hit_temp_1));
	unmarshaled_Hit_temp_1 = marshaled.___Hit_1;
	unmarshaled.set_Hit_1(unmarshaled_Hit_temp_1);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
IL2CPP_EXTERN_C void HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshal_pinvoke_cleanup(HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
IL2CPP_EXTERN_C void HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshal_com(const HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC& unmarshaled, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_com& marshaled)
{
	marshaled.___IsValid_0 = static_cast<int32_t>(unmarshaled.get_IsValid_0());
	marshaled.___Hit_1 = unmarshaled.get_Hit_1();
}
IL2CPP_EXTERN_C void HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshal_com_back(const HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_com& marshaled, HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC& unmarshaled)
{
	bool unmarshaled_IsValid_temp_0 = false;
	unmarshaled_IsValid_temp_0 = static_cast<bool>(marshaled.___IsValid_0);
	unmarshaled.set_IsValid_0(unmarshaled_IsValid_temp_0);
	SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  unmarshaled_Hit_temp_1;
	memset((&unmarshaled_Hit_temp_1), 0, sizeof(unmarshaled_Hit_temp_1));
	unmarshaled_Hit_temp_1 = marshaled.___Hit_1;
	unmarshaled.set_Hit_1(unmarshaled_Hit_temp_1);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
IL2CPP_EXTERN_C void HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshal_com_cleanup(HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC_marshaled_com& marshaled)
{
}
// System.Void Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo::.ctor(System.Boolean,Oculus.Interaction.Surfaces.SurfaceHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitInfo__ctor_m7F5576506CA59BEC33E7CB0CDE25203318CFF679 (HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC * __this, bool ___isValid0, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  ___hit1, const RuntimeMethod* method)
{
	{
		// IsValid = isValid;
		bool L_0 = ___isValid0;
		__this->set_IsValid_0(L_0);
		// Hit = hit;
		SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  L_1 = ___hit1;
		__this->set_Hit_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void HitInfo__ctor_m7F5576506CA59BEC33E7CB0CDE25203318CFF679_AdjustorThunk (RuntimeObject * __this, bool ___isValid0, SurfaceHit_t59026FA1C0021F333B9C27B29D07E160A752B913  ___hit1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC * _thisAdjusted = reinterpret_cast<HitInfo_t4DF844248CB5CB2F9D71BBE4ADE5FC82C9FA87CC *>(__this + _offset);
	HitInfo__ctor_m7F5576506CA59BEC33E7CB0CDE25203318CFF679(_thisAdjusted, ___isValid0, ___hit1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19_inline (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool MarkedForDeletion { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CMarkedForDeletionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PokeInteractable_get_SurfacePatch_m0A94B55D25C2B21E84D52FA8FD56ACDC6311C36D_inline (PokeInteractable_t3248E6992C0A4BE40E74B3809F5BAC38CE9117D7 * __this, const RuntimeMethod* method)
{
	{
		// public ISurfacePatch SurfacePatch { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSurfacePatchU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CActiveStateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CActiveStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformFeatureProperties_get_FeatureDescriptions_m932B12A215F71FF5197825B46D19E2A20DCF88B2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		IL2CPP_RUNTIME_CLASS_INIT(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_StaticFields*)il2cpp_codegen_static_fields_for(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var))->get_U3CFeatureDescriptionsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* FeatureDescription_get_FeatureStates_m6BD23527382020879F0DB4946031715F945A52D4_inline (FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D * __this, const RuntimeMethod* method)
{
	{
		// public FeatureStateDescription[] FeatureStates { get; }
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_0 = __this->get_U3CFeatureStatesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline (FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Feature_m943048B2E2F6D0DB127EAD1EB1F7697A46CDC55C_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _feature = value; }
		int32_t L_0 = ___value0;
		__this->set__feature_1(L_0);
		// set { _feature = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Mode_m0D345B1E10789082D237A02CEE39AD904342EFEC_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _mode = value; }
		int32_t L_0 = ___value0;
		__this->set__mode_0(L_0);
		// set { _mode = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_State_m7551FC1B14B50EC51A001458FBB55E89F7D90779_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { _state = value; }
		String_t* L_0 = ___value0;
		__this->set__state_2(L_0);
		// set { _state = value; }
		return;
	}
}
