#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tD1C6F61B4B077CFC06D715B6A2638FE16C259AB6;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<Autohand.Grabbable>
struct List_1_tC29BD8ECF627D785FF076EAF65046971D0E04E7D;
// System.Collections.Generic.List`1<Autohand.GrabbableChild>
struct List_1_tFA7C84281AFEB22CC0A74D91E79A421A59EBF737;
// System.Collections.Generic.List`1<Autohand.Hand>
struct List_1_tFD3A84FC510D9B44152529D87E6ADE4F7403040D;
// System.Collections.Generic.List`1<Autohand.HandTriggerAreaEvents>
struct List_1_tD6E96560B159D1E3D9A6841DAA9704F3C6D3DD17;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<Autohand.Hand>
struct UnityEvent_1_t90F79DD2A82C626F94416B73A390FDEEE94B97AE;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Autohand.Finger[]
struct FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// Autohand.CollisionTracker
struct CollisionTracker_tDECF82947EFB67C39CBEABED7C60ED81DAA2702D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Autohand.Demo.DialHandScaler
struct DialHandScaler_t6C2E2387577B061CABA5023C754D4FD068F118BC;
// Autohand.Finger
struct Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8;
// UnityEngine.FixedJoint
struct FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Autohand.Grabbable
struct Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F;
// Autohand.GrabbableChild
struct GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051;
// Autohand.Demo.GrabbableEventDebugger
struct GrabbableEventDebugger_t121E4461C55C5472A290615D1646C970F6626C57;
// Autohand.GrabbablePose
struct GrabbablePose_t829A3F55DCDEF2F325998EF8D30FF94CD6AA50D3;
// Autohand.GrabbablePoseCombiner
struct GrabbablePoseCombiner_t7387BA2825975BB04C3B8C8D837F66649FFE6DA9;
// Autohand.Hand
struct Hand_t3D95941FB981751FC47A570B0884955C1F0F517A;
// Autohand.HandBase
struct HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8;
// Autohand.HandEvent
struct HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B;
// Autohand.Demo.HandEventDebugger
struct HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7;
// Autohand.HandGameObjectEvent
struct HandGameObjectEvent_t2B029EFC6A3CF28AD732382D3AB0F4A12C5AF15C;
// Autohand.HandGrabEvent
struct HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36;
// Autohand.HandPoseArea
struct HandPoseArea_t43F60F59EA9BF0135605CA5786992E35B13ED698;
// Autohand.HandTouchEvent
struct HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F;
// Autohand.Demo.HandTouchEventDebugger
struct HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF;
// Autohand.HandVelocityTracker
struct HandVelocityTracker_tE905A683697B8CE209224DF3FA67397BF94266B6;
// UnityEngine.HingeJoint
struct HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// Autohand.Demo.JoystickObjectMover
struct JoystickObjectMover_t3FAB131F561F091D373BE43D9DDFCA3F4B605215;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Autohand.Demo.LeverTextChanger
struct LeverTextChanger_t6611B86DC6C0E2916C396FC5F33CF2E31F03B93F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Autohand.Demo.MoverLever
struct MoverLever_tE3C80B7C20183003B928BF1DA2F6C05A4BEB9BAD;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Autohand.PhysicsGadgetConfigurableLimitReader
struct PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0;
// Autohand.PhysicsGadgetHingeAngleReader
struct PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2;
// Autohand.PhysicsGadgetJoystick
struct PhysicsGadgetJoystick_t12DA36E255A71A28A03721841CD15D16A22D2BDD;
// Autohand.Demo.PhysicsSliderPositionMover
struct PhysicsSliderPositionMover_t97317218411E089FCB44648F45BFD883D9A7B6A0;
// Autohand.PlacePoint
struct PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7;
// Autohand.PlacePointEvent
struct PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Autohand.Demo.SliderTextChanger
struct SliderTextChanger_t16B887C751DE8AC3851F436124BA1A6B7C1E65AB;
// Autohand.Demo.Smash
struct Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70;
// Autohand.Demo.SmashEvent
struct SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8;
// Autohand.Demo.Smasher
struct Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Autohand.Demo.TextChanger
struct TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E;
// Autohand.Demo.TextGrabEvent
struct TextGrabEvent_tC5451BB915608C2337CA7CC016605B4883E0C790;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// Autohand.Demo.TextPlacePointEvent
struct TextPlacePointEvent_tF994EB39780FF0408A694B8DF937045A679B270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Autohand.UnityHandEvent
struct UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90;
// Autohand.UnityHandGrabEvent
struct UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645;
// Autohand.UnityPlacePointEvent
struct UnityPlacePointEvent_t8B0B40199EA18AA69F04E24075D8DC9020690190;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// Autohand.Demo.WheelRotator
struct WheelRotator_t046E672912CA8A51EDE5C331BD9E2B624FB285C9;
// Autohand.Demo.WristLookEvent
struct WristLookEvent_t1B29DC36B72BBEF7EF2F434078D9D5313C69F502;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Autohand.Demo.GrabbableEventDebugger/<>c
struct U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Autohand.Demo.TextChanger/<ChangeText>d__5
struct U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hand_t3D95941FB981751FC47A570B0884955C1F0F517A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0;
IL2CPP_EXTERN_C String_t* _stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2;
IL2CPP_EXTERN_C String_t* _stringLiteral3158A1375FD5BCEC3D387CC3B7CC90D786806278;
IL2CPP_EXTERN_C String_t* _stringLiteral460CD9C89FB138209FBACD607F760ACD1D994171;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1FEAB44410E759492C2C36E5593BB9293A27C5;
IL2CPP_EXTERN_C String_t* _stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C;
IL2CPP_EXTERN_C String_t* _stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872;
IL2CPP_EXTERN_C String_t* _stringLiteral574B153BFC1CB2F24D39532A6C4B16E13A0A9F97;
IL2CPP_EXTERN_C String_t* _stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2;
IL2CPP_EXTERN_C String_t* _stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755;
IL2CPP_EXTERN_C String_t* _stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AutoHandExtensions_CanGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mE3D6B8CFEB15ED3C405AAE7193D1D8BABD76C53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoHandExtensions_CanGetComponent_TisSmash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70_m9BE6EB401C8B1DDA6D250AC66DB941996880EF68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051_m656F1A79D64989507ED495E1BDE28B0CC2831FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_0_m523ABE50F8383259C06107B0AFE8F637C4C25003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_1_m8B049F39862C700919663491A8EDCE6FE5A026C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_2_mC01DA189865C58BF22E761A68D33F791816A3255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_3_m4E338CDDC401803272DBCD872F4B1334E3DA7FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_4_mC6047D138E3C3F7DFF3DF4CFD4044DB1A39486F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_5_m675F4150814BA5DCB84F0582121371C3C2522DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_6_m06DA3BAFF8F97A6BABB21FBDE60C8F8E8F09034A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnDisableU3Eb__3_7_mDEC6DF86D29E3B02342D00D9D3BCA9CF353C86B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_0_mD567EFFA7D1CB4E0293F45722E1180E7C17BECAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_1_m6F1AADDFBE36AA3D88AC096518CFFD96BC75D6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_2_m9CDD0C73BF24A49FCA9A8940FD87CA9D6E4EE76A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_3_m4268D91FB539E0509D5BEED75071177D7B2DFF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_4_mEE4159D8E4941B6CBE23FC0AFB6F09E21B74B716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_5_m26D5775C31C31943C058B05A2F1D553F583E4BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_6_m3B91DE2F88A15BAF8407BEA3F3F05A7B0828FC02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandEventDebugger_U3COnEnableU3Eb__2_7_m223F52E99A0283C7C57916DE2C90355B4FB43603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTouchEventDebugger_StartTouch_mF51A16239F85FBC158734F7FBCB4B1D54EC49B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTouchEventDebugger_StopTouch_m5C56BD4E9E47E313D2566393A720215FFEEEA63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Smash_U3CStartU3Eb__11_0_m9E5C3103B1FBAC856089DBB0BD852FFD36D1C3B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Smasher_U3CStartU3Eb__8_0_m12CE7FF9B28F720EC2CFEC52EC3A1C2724074E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextGrabEvent_OnGrab_m31597D931572DD68480BF75B780A7937BD26D997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextPlacePointEvent_OnGrab_mDDC0F0A1F7FE00235841CA350F42927CACA575F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextPlacePointEvent_OnHighlight_mA1DD10BC3A9625F85EE4F5F6FC05649EB870BB01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeTextU3Ed__5_System_Collections_IEnumerator_Reset_m77936B025D57C04ABCE56755EE099713FA737C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_0_m24E0D86EF08A3FD4BB8BCDBC1265ABD99E845475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_1_m731A156EF6C2CE0DF9D31D18CF2389C3A9BA7383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_2_m17D41B7CFFF5BC09AF2C3430F045BCDE57DB61A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_3_m87AD6E53B8C44808634743AB461D199791874177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_4_m2E808C5F35BB34C30230CCF1D27494D6A4137263_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_5_mEDB157B72045E62E9488B0B044060EE86942F3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_6_mAD25D6BE75215F8E93F0139A06052EC1DDE14B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__1_7_m80DB2FE0BCC18742C377B34C62F5026BDC28D590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_0_mAF263AC1F6F11D2C98FBBFE90DB9B80A08EB8AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_1_mAC80EB3DB24BF9B1A8E8072320D152CDAA5C444E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_2_mF85E10850C4F2CF9B19B847C27A65658C4DD442C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_3_m73B6A315B13CAD4ECAC2505D0C03CD937B01E80E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_4_m505910409518670116A3FBDB9EB78F62800C5EFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_5_mCCFA311DBE986BDB1BBEF471036F17B6D7633776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_6_mE5E9925B4385CFDB35CA1B36D7B84DF147B9B291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__0_7_m488E28A2477BAE406BE8B07C0D8EF13402E46689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Autohand.Demo.GrabbableEventDebugger/<>c
struct U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF  : public RuntimeObject
{
};

struct U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields
{
	// Autohand.Demo.GrabbableEventDebugger/<>c Autohand.Demo.GrabbableEventDebugger/<>c::<>9
	U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* ___U3CU3E9_0;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_0
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_0_1;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_1
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_1_2;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_2
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_2_3;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_3
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_3_4;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_4
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_4_5;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_5
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_5_6;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_6
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_6_7;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__0_7
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__0_7_8;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_0
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_0_9;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_1
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_1_10;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_2
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_2_11;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_3
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_3_12;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_4
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_4_13;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_5
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_5_14;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_6
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_6_15;
	// Autohand.HandGrabEvent Autohand.Demo.GrabbableEventDebugger/<>c::<>9__1_7
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___U3CU3E9__1_7_16;
};

// Autohand.Demo.TextChanger/<ChangeText>d__5
struct U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024  : public RuntimeObject
{
	// System.Int32 Autohand.Demo.TextChanger/<ChangeText>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Autohand.Demo.TextChanger/<ChangeText>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Autohand.Demo.TextChanger Autohand.Demo.TextChanger/<ChangeText>d__5::<>4__this
	TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<Autohand.Hand>
struct UnityEvent_1_t90F79DD2A82C626F94416B73A390FDEEE94B97AE  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// Autohand.SaveRigidbodyData
struct SaveRigidbodyData_t384C709865D851D7243D526E10E1A6B0E1F90960 
{
	// UnityEngine.GameObject Autohand.SaveRigidbodyData::origin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___origin_0;
	// System.Single Autohand.SaveRigidbodyData::mass
	float ___mass_1;
	// System.Single Autohand.SaveRigidbodyData::angularDrag
	float ___angularDrag_2;
	// System.Single Autohand.SaveRigidbodyData::drag
	float ___drag_3;
	// System.Boolean Autohand.SaveRigidbodyData::useGravity
	bool ___useGravity_4;
	// System.Boolean Autohand.SaveRigidbodyData::isKinematic
	bool ___isKinematic_5;
	// UnityEngine.RigidbodyInterpolation Autohand.SaveRigidbodyData::interpolation
	int32_t ___interpolation_6;
	// UnityEngine.CollisionDetectionMode Autohand.SaveRigidbodyData::collisionDetectionMode
	int32_t ___collisionDetectionMode_7;
	// UnityEngine.RigidbodyConstraints Autohand.SaveRigidbodyData::constraints
	int32_t ___constraints_8;
};
// Native definition for P/Invoke marshalling of Autohand.SaveRigidbodyData
struct SaveRigidbodyData_t384C709865D851D7243D526E10E1A6B0E1F90960_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___origin_0;
	float ___mass_1;
	float ___angularDrag_2;
	float ___drag_3;
	int32_t ___useGravity_4;
	int32_t ___isKinematic_5;
	int32_t ___interpolation_6;
	int32_t ___collisionDetectionMode_7;
	int32_t ___constraints_8;
};
// Native definition for COM marshalling of Autohand.SaveRigidbodyData
struct SaveRigidbodyData_t384C709865D851D7243D526E10E1A6B0E1F90960_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___origin_0;
	float ___mass_1;
	float ___angularDrag_2;
	float ___drag_3;
	int32_t ___useGravity_4;
	int32_t ___isKinematic_5;
	int32_t ___interpolation_6;
	int32_t ___collisionDetectionMode_7;
	int32_t ___constraints_8;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/VelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// Autohand.HandPoseData
struct HandPoseData_t1DAF07EB23E624A7E5CE8AB1D9658DD643893CF4 
{
	// UnityEngine.Vector3 Autohand.HandPoseData::handOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handOffset_0;
	// UnityEngine.Vector3 Autohand.HandPoseData::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_1;
	// UnityEngine.Quaternion Autohand.HandPoseData::localQuaternionOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localQuaternionOffset_2;
	// UnityEngine.Vector3[] Autohand.HandPoseData::posePositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___posePositions_3;
	// UnityEngine.Quaternion[] Autohand.HandPoseData::poseRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___poseRotations_4;
};
// Native definition for P/Invoke marshalling of Autohand.HandPoseData
struct HandPoseData_t1DAF07EB23E624A7E5CE8AB1D9658DD643893CF4_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handOffset_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_1;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localQuaternionOffset_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___posePositions_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___poseRotations_4;
};
// Native definition for COM marshalling of Autohand.HandPoseData
struct HandPoseData_t1DAF07EB23E624A7E5CE8AB1D9658DD643893CF4_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handOffset_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_1;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localQuaternionOffset_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___posePositions_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___poseRotations_4;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Autohand.UnityHandEvent
struct UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90  : public UnityEvent_1_t90F79DD2A82C626F94416B73A390FDEEE94B97AE
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Autohand.HandEvent
struct HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B  : public MulticastDelegate_t
{
};

// Autohand.HandGrabEvent
struct HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Autohand.PlacePointEvent
struct PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD  : public MulticastDelegate_t
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Autohand.Demo.SmashEvent
struct SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Autohand.Finger
struct Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Autohand.Finger::tip
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tip_4;
	// System.Single Autohand.Finger::tipRadius
	float ___tipRadius_5;
	// System.Single Autohand.Finger::bendOffset
	float ___bendOffset_6;
	// System.Single Autohand.Finger::fingerSmoothSpeed
	float ___fingerSmoothSpeed_7;
	// System.Single Autohand.Finger::secondaryOffset
	float ___secondaryOffset_8;
	// System.Single Autohand.Finger::currBendOffset
	float ___currBendOffset_9;
	// System.Single Autohand.Finger::bend
	float ___bend_10;
	// UnityEngine.Quaternion[] Autohand.Finger::minGripRotPose
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___minGripRotPose_11;
	// UnityEngine.Vector3[] Autohand.Finger::minGripPosPose
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___minGripPosPose_12;
	// UnityEngine.Quaternion[] Autohand.Finger::maxGripRotPose
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___maxGripRotPose_13;
	// UnityEngine.Vector3[] Autohand.Finger::maxGripPosPose
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___maxGripPosPose_14;
	// UnityEngine.Transform[] Autohand.Finger::fingerJoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___fingerJoints_15;
	// System.Single Autohand.Finger::lastHitBend
	float ___lastHitBend_16;
	// UnityEngine.Collider[] Autohand.Finger::results
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___results_17;
};

// Autohand.GrabbableBase
struct GrabbableBase_tBB1C89A2FFC63517613714466E5CADE73093F1B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.GrabbableBase::ignoreMe
	bool ___ignoreMe_4;
	// UnityEngine.Rigidbody Autohand.GrabbableBase::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_5;
	// UnityEngine.Material Autohand.GrabbableBase::hightlightMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hightlightMaterial_6;
	// System.Boolean Autohand.GrabbableBase::isGrabbable
	bool ___isGrabbable_7;
	// Autohand.PlacePoint Autohand.GrabbableBase::_placePoint
	PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* ____placePoint_8;
	// System.Boolean Autohand.GrabbableBase::ignoreParent
	bool ___ignoreParent_9;
	// System.Collections.Generic.List`1<Autohand.Hand> Autohand.GrabbableBase::heldBy
	List_1_tFD3A84FC510D9B44152529D87E6ADE4F7403040D* ___heldBy_10;
	// System.Boolean Autohand.GrabbableBase::hightlighting
	bool ___hightlighting_11;
	// UnityEngine.GameObject Autohand.GrabbableBase::highlightObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___highlightObj_12;
	// Autohand.PlacePoint Autohand.GrabbableBase::lastPlacePoint
	PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* ___lastPlacePoint_13;
	// UnityEngine.Transform Autohand.GrabbableBase::originalParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___originalParent_14;
	// UnityEngine.Vector3 Autohand.GrabbableBase::lastCenterOfMassPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastCenterOfMassPos_15;
	// UnityEngine.Quaternion Autohand.GrabbableBase::lastCenterOfMassRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lastCenterOfMassRot_16;
	// UnityEngine.CollisionDetectionMode Autohand.GrabbableBase::detectionMode
	int32_t ___detectionMode_17;
	// UnityEngine.RigidbodyInterpolation Autohand.GrabbableBase::startInterpolation
	int32_t ___startInterpolation_18;
	// System.Boolean Autohand.GrabbableBase::beingGrabbed
	bool ___beingGrabbed_19;
	// System.Boolean Autohand.GrabbableBase::heldBodyJointed
	bool ___heldBodyJointed_20;
	// System.Boolean Autohand.GrabbableBase::wasIsGrabbable
	bool ___wasIsGrabbable_21;
	// System.Boolean Autohand.GrabbableBase::beingDestroyed
	bool ___beingDestroyed_22;
	// System.Int32 Autohand.GrabbableBase::originalLayer
	int32_t ___originalLayer_23;
	// UnityEngine.Coroutine Autohand.GrabbableBase::resetLayerRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___resetLayerRoutine_24;
	// System.Collections.Generic.List`1<Autohand.GrabbableChild> Autohand.GrabbableBase::grabChildren
	List_1_tFA7C84281AFEB22CC0A74D91E79A421A59EBF737* ___grabChildren_25;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Autohand.GrabbableBase::jointedParents
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___jointedParents_26;
	// Autohand.GrabbablePoseCombiner Autohand.GrabbableBase::poseCombiner
	GrabbablePoseCombiner_t7387BA2825975BB04C3B8C8D837F66649FFE6DA9* ___poseCombiner_27;
	// System.Collections.Generic.List`1<Autohand.Grabbable> Autohand.GrabbableBase::jointedGrabbables
	List_1_tC29BD8ECF627D785FF076EAF65046971D0E04E7D* ___jointedGrabbables_28;
	// System.Single Autohand.GrabbableBase::lastUpdateTime
	float ___lastUpdateTime_29;
	// System.Boolean Autohand.GrabbableBase::rigidbodyDeactivated
	bool ___rigidbodyDeactivated_30;
	// Autohand.SaveRigidbodyData Autohand.GrabbableBase::rigidbodyData
	SaveRigidbodyData_t384C709865D851D7243D526E10E1A6B0E1F90960 ___rigidbodyData_31;
	// Autohand.CollisionTracker Autohand.GrabbableBase::_collisionTracker
	CollisionTracker_tDECF82947EFB67C39CBEABED7C60ED81DAA2702D* ____collisionTracker_32;
	// Autohand.Hand Autohand.GrabbableBase::ignoringHand
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___ignoringHand_33;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Autohand.GrabbableBase::grabColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___grabColliders_34;
};

// Autohand.GrabbableChild
struct GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Autohand.Grabbable Autohand.GrabbableChild::grabParent
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabParent_4;
};

// Autohand.Demo.GrabbableEventDebugger
struct GrabbableEventDebugger_t121E4461C55C5472A290615D1646C970F6626C57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Autohand.HandBase
struct HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.HandBase::ignoreMe
	bool ___ignoreMe_4;
	// Autohand.Finger[] Autohand.HandBase::fingers
	FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A* ___fingers_5;
	// UnityEngine.Transform Autohand.HandBase::palmTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___palmTransform_6;
	// System.Boolean Autohand.HandBase::left
	bool ___left_7;
	// System.Single Autohand.HandBase::reachDistance
	float ___reachDistance_8;
	// System.Boolean Autohand.HandBase::enableMovement
	bool ___enableMovement_9;
	// UnityEngine.Transform Autohand.HandBase::follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___follow_10;
	// System.Single Autohand.HandBase::maxFollowDistance
	float ___maxFollowDistance_11;
	// System.Single Autohand.HandBase::throwPower
	float ___throwPower_12;
	// System.Boolean Autohand.HandBase::enableInterpolation
	bool ___enableInterpolation_13;
	// System.Boolean Autohand.HandBase::advancedFollowSettings
	bool ___advancedFollowSettings_14;
	// System.Boolean Autohand.HandBase::enableIK
	bool ___enableIK_15;
	// System.Single Autohand.HandBase::swayStrength
	float ___swayStrength_16;
	// System.Single Autohand.HandBase::gripOffset
	float ___gripOffset_17;
	// System.Single Autohand.HandBase::maxVelocity
	float ___maxVelocity_18;
	// System.Single Autohand.HandBase::followPositionStrength
	float ___followPositionStrength_19;
	// System.Single Autohand.HandBase::followRotationStrength
	float ___followRotationStrength_20;
	// System.Single Autohand.HandBase::throwVelocityExpireTime
	float ___throwVelocityExpireTime_21;
	// System.Single Autohand.HandBase::throwAngularVelocityExpireTime
	float ___throwAngularVelocityExpireTime_22;
	// System.Int32 Autohand.HandBase::fingerBendSteps
	int32_t ___fingerBendSteps_23;
	// System.Single Autohand.HandBase::sphereCastRadius
	float ___sphereCastRadius_24;
	// System.Boolean Autohand.HandBase::usingPoseAreas
	bool ___usingPoseAreas_25;
	// UnityEngine.QueryTriggerInteraction Autohand.HandBase::queryTriggerInteraction
	int32_t ___queryTriggerInteraction_26;
	// Autohand.Grabbable Autohand.HandBase::HoldingObj
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___HoldingObj_27;
	// Autohand.Grabbable Autohand.HandBase::_lookingAtObj
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ____lookingAtObj_28;
	// UnityEngine.Transform Autohand.HandBase::_moveTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____moveTo_29;
	// UnityEngine.Rigidbody Autohand.HandBase::<body>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CbodyU3Ek__BackingField_30;
	// UnityEngine.Vector3 Autohand.HandBase::_grabPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____grabPositionOffset_31;
	// UnityEngine.Quaternion Autohand.HandBase::_grabRotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____grabRotationOffset_32;
	// Autohand.CollisionTracker Autohand.HandBase::_collisionTracker
	CollisionTracker_tDECF82947EFB67C39CBEABED7C60ED81DAA2702D* ____collisionTracker_33;
	// Autohand.GrabbablePose Autohand.HandBase::_grabPose
	GrabbablePose_t829A3F55DCDEF2F325998EF8D30FF94CD6AA50D3* ____grabPose_34;
	// UnityEngine.Joint Autohand.HandBase::heldJoint
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* ___heldJoint_35;
	// System.Boolean Autohand.HandBase::grabbing
	bool ___grabbing_36;
	// System.Boolean Autohand.HandBase::squeezing
	bool ___squeezing_37;
	// System.Boolean Autohand.HandBase::grabbed
	bool ___grabbed_38;
	// System.Single Autohand.HandBase::triggerPoint
	float ___triggerPoint_39;
	// UnityEngine.Coroutine Autohand.HandBase::handAnimateRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___handAnimateRoutine_40;
	// Autohand.HandPoseArea Autohand.HandBase::handPoseArea
	HandPoseArea_t43F60F59EA9BF0135605CA5786992E35B13ED698* ___handPoseArea_41;
	// Autohand.HandPoseData Autohand.HandBase::preHandPoseAreaPose
	HandPoseData_t1DAF07EB23E624A7E5CE8AB1D9658DD643893CF4 ___preHandPoseAreaPose_42;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Autohand.HandBase::handColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___handColliders_43;
	// UnityEngine.Transform Autohand.HandBase::_grabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____grabPoint_44;
	// UnityEngine.Transform Autohand.HandBase::_grabPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____grabPosition_45;
	// System.Int32 Autohand.HandBase::handLayers
	int32_t ___handLayers_46;
	// UnityEngine.Collider Autohand.HandBase::palmCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___palmCollider_47;
	// UnityEngine.RaycastHit Autohand.HandBase::highlightHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___highlightHit_48;
	// Autohand.HandVelocityTracker Autohand.HandBase::velocityTracker
	HandVelocityTracker_tE905A683697B8CE209224DF3FA67397BF94266B6* ___velocityTracker_49;
	// UnityEngine.Transform Autohand.HandBase::palmChild
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___palmChild_50;
	// UnityEngine.Vector3 Autohand.HandBase::lastFrameFollowPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastFrameFollowPos_51;
	// UnityEngine.Quaternion Autohand.HandBase::lastFrameFollowRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lastFrameFollowRot_52;
	// UnityEngine.Vector3 Autohand.HandBase::followVel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___followVel_53;
	// UnityEngine.Vector3 Autohand.HandBase::followAngularVel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___followAngularVel_54;
	// System.Boolean Autohand.HandBase::allowUpdateMovement
	bool ___allowUpdateMovement_55;
	// UnityEngine.Vector3[] Autohand.HandBase::handRays
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___handRays_56;
	// UnityEngine.RaycastHit[] Autohand.HandBase::rayHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___rayHits_57;
	// UnityEngine.Vector3[] Autohand.HandBase::updatePositionTracked
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___updatePositionTracked_58;
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit> Autohand.HandBase::closestHits
	List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* ___closestHits_59;
	// System.Collections.Generic.List`1<Autohand.Grabbable> Autohand.HandBase::closestGrabs
	List_1_tC29BD8ECF627D785FF076EAF65046971D0E04E7D* ___closestGrabs_60;
	// System.Int32 Autohand.HandBase::tryMaxDistanceCount
	int32_t ___tryMaxDistanceCount_61;
	// UnityEngine.Vector3 Autohand.HandBase::lastFollowPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastFollowPosition_62;
	// UnityEngine.Vector3 Autohand.HandBase::lastFollowRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastFollowRotation_63;
	// System.Boolean Autohand.HandBase::prerendered
	bool ___prerendered_64;
	// UnityEngine.Vector3 Autohand.HandBase::preRenderPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___preRenderPos_65;
	// UnityEngine.Quaternion Autohand.HandBase::preRenderRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___preRenderRot_66;
	// System.Single Autohand.HandBase::currGrip
	float ___currGrip_67;
	// System.Single Autohand.HandBase::lastUpdateTime
	float ___lastUpdateTime_68;
	// System.Boolean Autohand.HandBase::ignoreMoveFrame
	bool ___ignoreMoveFrame_69;
	// System.Single Autohand.HandBase::fingerSwayVel
	float ___fingerSwayVel_70;
};

// Autohand.Demo.HandEventDebugger
struct HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.Demo.HandEventDebugger::showSqueezeEvents
	bool ___showSqueezeEvents_4;
	// System.Boolean Autohand.Demo.HandEventDebugger::showHighlightEvents
	bool ___showHighlightEvents_5;
};

// Autohand.HandTouchEvent
struct HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.HandTouchEvent::oneHanded
	bool ___oneHanded_4;
	// Autohand.HandType Autohand.HandTouchEvent::handType
	int32_t ___handType_5;
	// Autohand.UnityHandEvent Autohand.HandTouchEvent::HandStartTouch
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* ___HandStartTouch_6;
	// Autohand.UnityHandEvent Autohand.HandTouchEvent::HandStopTouch
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* ___HandStopTouch_7;
	// Autohand.HandEvent Autohand.HandTouchEvent::HandStartTouchEvent
	HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* ___HandStartTouchEvent_8;
	// Autohand.HandEvent Autohand.HandTouchEvent::HandStopTouchEvent
	HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* ___HandStopTouchEvent_9;
	// System.Collections.Generic.List`1<Autohand.Hand> Autohand.HandTouchEvent::hands
	List_1_tFD3A84FC510D9B44152529D87E6ADE4F7403040D* ___hands_10;
};

// Autohand.Demo.HandTouchEventDebugger
struct HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Autohand.HandTouchEvent Autohand.Demo.HandTouchEventDebugger::touchEvent
	HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* ___touchEvent_4;
};

// Autohand.Demo.LeverTextChanger
struct LeverTextChanger_t6611B86DC6C0E2916C396FC5F33CF2E31F03B93F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Autohand.Demo.LeverTextChanger::text
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text_4;
	// Autohand.PhysicsGadgetHingeAngleReader Autohand.Demo.LeverTextChanger::sliderReader
	PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2* ___sliderReader_5;
};

// Autohand.PhysicsGadgetConfigurableLimitReader
struct PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.PhysicsGadgetConfigurableLimitReader::invertValue
	bool ___invertValue_4;
	// System.Single Autohand.PhysicsGadgetConfigurableLimitReader::playRange
	float ___playRange_5;
	// UnityEngine.ConfigurableJoint Autohand.PhysicsGadgetConfigurableLimitReader::joint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___joint_6;
	// UnityEngine.Vector3 Autohand.PhysicsGadgetConfigurableLimitReader::axisPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axisPos_7;
	// System.Single Autohand.PhysicsGadgetConfigurableLimitReader::value
	float ___value_8;
	// UnityEngine.Vector3 Autohand.PhysicsGadgetConfigurableLimitReader::limitAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___limitAxis_9;
};

// Autohand.PhysicsGadgetHingeAngleReader
struct PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.PhysicsGadgetHingeAngleReader::invertValue
	bool ___invertValue_4;
	// System.Single Autohand.PhysicsGadgetHingeAngleReader::playRange
	float ___playRange_5;
	// UnityEngine.HingeJoint Autohand.PhysicsGadgetHingeAngleReader::joint
	HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* ___joint_6;
	// System.Single Autohand.PhysicsGadgetHingeAngleReader::value
	float ___value_7;
	// UnityEngine.Quaternion Autohand.PhysicsGadgetHingeAngleReader::startRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startRot_8;
	// UnityEngine.Quaternion Autohand.PhysicsGadgetHingeAngleReader::deltaParentRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deltaParentRotation_9;
};

// Autohand.PhysicsGadgetJoystick
struct PhysicsGadgetJoystick_t12DA36E255A71A28A03721841CD15D16A22D2BDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ConfigurableJoint Autohand.PhysicsGadgetJoystick::joint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___joint_4;
	// System.Boolean Autohand.PhysicsGadgetJoystick::invertX
	bool ___invertX_5;
	// System.Boolean Autohand.PhysicsGadgetJoystick::invertY
	bool ___invertY_6;
	// System.Single Autohand.PhysicsGadgetJoystick::playRange
	float ___playRange_7;
	// UnityEngine.Vector2 Autohand.PhysicsGadgetJoystick::xRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___xRange_8;
	// UnityEngine.Vector2 Autohand.PhysicsGadgetJoystick::zRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zRange_9;
	// UnityEngine.Vector2 Autohand.PhysicsGadgetJoystick::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_10;
	// UnityEngine.Vector3 Autohand.PhysicsGadgetJoystick::jointRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___jointRotation_11;
	// UnityEngine.Rigidbody Autohand.PhysicsGadgetJoystick::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_12;
};

// Autohand.PlacePoint
struct PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Autohand.PlacePoint::ignoreMe
	bool ___ignoreMe_4;
	// System.Boolean Autohand.PlacePoint::showPlaceSettings
	bool ___showPlaceSettings_5;
	// Autohand.Grabbable Autohand.PlacePoint::startPlaced
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___startPlaced_6;
	// UnityEngine.Transform Autohand.PlacePoint::placedOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___placedOffset_7;
	// System.Single Autohand.PlacePoint::placeRadius
	float ___placeRadius_8;
	// System.Boolean Autohand.PlacePoint::parentOnPlace
	bool ___parentOnPlace_9;
	// System.Boolean Autohand.PlacePoint::forcePlace
	bool ___forcePlace_10;
	// System.Boolean Autohand.PlacePoint::forceHandRelease
	bool ___forceHandRelease_11;
	// System.Boolean Autohand.PlacePoint::destroyObjectOnPlace
	bool ___destroyObjectOnPlace_12;
	// System.Boolean Autohand.PlacePoint::disableRigidbodyOnPlace
	bool ___disableRigidbodyOnPlace_13;
	// System.Boolean Autohand.PlacePoint::disableGrabOnPlace
	bool ___disableGrabOnPlace_14;
	// System.Boolean Autohand.PlacePoint::disablePlacePointOnPlace
	bool ___disablePlacePointOnPlace_15;
	// System.Boolean Autohand.PlacePoint::makePlacedKinematic
	bool ___makePlacedKinematic_16;
	// UnityEngine.Rigidbody Autohand.PlacePoint::placedJointLink
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___placedJointLink_17;
	// System.Single Autohand.PlacePoint::jointBreakForce
	float ___jointBreakForce_18;
	// System.Boolean Autohand.PlacePoint::showPlaceRequirements
	bool ___showPlaceRequirements_19;
	// Autohand.PlacePointNameType Autohand.PlacePoint::nameCompareType
	int32_t ___nameCompareType_20;
	// System.String[] Autohand.PlacePoint::placeNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___placeNames_21;
	// System.String[] Autohand.PlacePoint::blacklistNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___blacklistNames_22;
	// System.Collections.Generic.List`1<Autohand.Grabbable> Autohand.PlacePoint::onlyAllows
	List_1_tC29BD8ECF627D785FF076EAF65046971D0E04E7D* ___onlyAllows_23;
	// System.Collections.Generic.List`1<Autohand.Grabbable> Autohand.PlacePoint::dontAllows
	List_1_tC29BD8ECF627D785FF076EAF65046971D0E04E7D* ___dontAllows_24;
	// UnityEngine.LayerMask Autohand.PlacePoint::placeLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___placeLayers_25;
	// System.Boolean Autohand.PlacePoint::heldPlaceOnly
	bool ___heldPlaceOnly_26;
	// System.Boolean Autohand.PlacePoint::showEvents
	bool ___showEvents_27;
	// Autohand.UnityPlacePointEvent Autohand.PlacePoint::OnPlace
	UnityPlacePointEvent_t8B0B40199EA18AA69F04E24075D8DC9020690190* ___OnPlace_28;
	// Autohand.UnityPlacePointEvent Autohand.PlacePoint::OnRemove
	UnityPlacePointEvent_t8B0B40199EA18AA69F04E24075D8DC9020690190* ___OnRemove_29;
	// Autohand.UnityPlacePointEvent Autohand.PlacePoint::OnHighlight
	UnityPlacePointEvent_t8B0B40199EA18AA69F04E24075D8DC9020690190* ___OnHighlight_30;
	// Autohand.UnityPlacePointEvent Autohand.PlacePoint::OnStopHighlight
	UnityPlacePointEvent_t8B0B40199EA18AA69F04E24075D8DC9020690190* ___OnStopHighlight_31;
	// Autohand.PlacePointEvent Autohand.PlacePoint::OnPlaceEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnPlaceEvent_32;
	// Autohand.PlacePointEvent Autohand.PlacePoint::OnRemoveEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnRemoveEvent_33;
	// Autohand.PlacePointEvent Autohand.PlacePoint::OnHighlightEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnHighlightEvent_34;
	// Autohand.PlacePointEvent Autohand.PlacePoint::OnStopHighlightEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnStopHighlightEvent_35;
	// Autohand.Grabbable Autohand.PlacePoint::<highlightingObj>k__BackingField
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___U3ChighlightingObjU3Ek__BackingField_36;
	// Autohand.Grabbable Autohand.PlacePoint::<placedObject>k__BackingField
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___U3CplacedObjectU3Ek__BackingField_37;
	// Autohand.Grabbable Autohand.PlacePoint::<lastPlacedObject>k__BackingField
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___U3ClastPlacedObjectU3Ek__BackingField_38;
	// UnityEngine.Vector3 Autohand.PlacePoint::radiusOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___radiusOffset_39;
	// UnityEngine.FixedJoint Autohand.PlacePoint::joint
	FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* ___joint_40;
	// System.Single Autohand.PlacePoint::removalDistance
	float ___removalDistance_41;
	// System.Single Autohand.PlacePoint::lastPlacedTime
	float ___lastPlacedTime_42;
	// UnityEngine.Vector3 Autohand.PlacePoint::placePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___placePosition_43;
	// UnityEngine.Transform Autohand.PlacePoint::originParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___originParent_44;
	// System.Boolean Autohand.PlacePoint::placingFrame
	bool ___placingFrame_45;
	// UnityEngine.CollisionDetectionMode Autohand.PlacePoint::placedObjDetectionMode
	int32_t ___placedObjDetectionMode_46;
	// System.Single Autohand.PlacePoint::tickRate
	float ___tickRate_47;
	// UnityEngine.Collider[] Autohand.PlacePoint::collidersNonAlloc
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___collidersNonAlloc_48;
	// UnityEngine.Coroutine Autohand.PlacePoint::checkRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___checkRoutine_49;
	// System.Int32 Autohand.PlacePoint::lastOverlapCount
	int32_t ___lastOverlapCount_50;
	// Autohand.Grabbable Autohand.PlacePoint::tempGrabbable
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___tempGrabbable_51;
};

// Autohand.Demo.SliderTextChanger
struct SliderTextChanger_t16B887C751DE8AC3851F436124BA1A6B7C1E65AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Autohand.Demo.SliderTextChanger::text
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text_4;
	// Autohand.PhysicsGadgetConfigurableLimitReader Autohand.Demo.SliderTextChanger::sliderReader
	PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0* ___sliderReader_5;
};

// Autohand.Demo.Smash
struct Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Autohand.Demo.Smash::smashForce
	float ___smashForce_4;
	// System.Boolean Autohand.Demo.Smash::destroyOnSmash
	bool ___destroyOnSmash_5;
	// System.Boolean Autohand.Demo.Smash::releaseOnSmash
	bool ___releaseOnSmash_6;
	// UnityEngine.ParticleSystem Autohand.Demo.Smash::effect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___effect_7;
	// System.Boolean Autohand.Demo.Smash::createNewEffect
	bool ___createNewEffect_8;
	// System.Boolean Autohand.Demo.Smash::applyVelocityOnSmash
	bool ___applyVelocityOnSmash_9;
	// UnityEngine.AudioClip Autohand.Demo.Smash::smashSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___smashSound_10;
	// System.Single Autohand.Demo.Smash::smashVolume
	float ___smashVolume_11;
	// UnityEngine.Events.UnityEvent Autohand.Demo.Smash::OnSmash
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSmash_12;
	// Autohand.Demo.SmashEvent Autohand.Demo.Smash::OnSmashEvent
	SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* ___OnSmashEvent_13;
	// Autohand.Grabbable Autohand.Demo.Smash::grabbable
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable_14;
};

// Autohand.Demo.Smasher
struct Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Autohand.Demo.Smasher::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// UnityEngine.LayerMask Autohand.Demo.Smasher::smashableLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___smashableLayers_5;
	// System.Single Autohand.Demo.Smasher::forceMulti
	float ___forceMulti_6;
	// UnityEngine.Transform Autohand.Demo.Smasher::centerOfMassPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___centerOfMassPoint_7;
	// UnityEngine.Events.UnityEvent Autohand.Demo.Smasher::OnSmash
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSmash_8;
	// Autohand.Demo.SmashEvent Autohand.Demo.Smasher::OnSmashEvent
	SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* ___OnSmashEvent_9;
	// UnityEngine.Vector3[] Autohand.Demo.Smasher::velocityOverTime
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___velocityOverTime_10;
	// UnityEngine.Vector3 Autohand.Demo.Smasher::lastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPos_11;
};

// Autohand.Demo.TextChanger
struct TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Autohand.Demo.TextChanger::text
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text_4;
	// UnityEngine.Coroutine Autohand.Demo.TextChanger::changing
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___changing_5;
	// UnityEngine.Coroutine Autohand.Demo.TextChanger::hide
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___hide_6;
};

// Autohand.Demo.TextGrabEvent
struct TextGrabEvent_tC5451BB915608C2337CA7CC016605B4883E0C790  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Autohand.Demo.TextChanger Autohand.Demo.TextGrabEvent::changer
	TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* ___changer_4;
	// Autohand.Grabbable Autohand.Demo.TextGrabEvent::grab
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grab_5;
	// System.String Autohand.Demo.TextGrabEvent::message
	String_t* ___message_6;
};

// Autohand.Demo.TextPlacePointEvent
struct TextPlacePointEvent_tF994EB39780FF0408A694B8DF937045A679B270E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Autohand.Demo.TextChanger Autohand.Demo.TextPlacePointEvent::changer
	TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* ___changer_4;
	// Autohand.PlacePoint Autohand.Demo.TextPlacePointEvent::point
	PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* ___point_5;
	// System.Single Autohand.Demo.TextPlacePointEvent::fadeTime
	float ___fadeTime_6;
	// System.String Autohand.Demo.TextPlacePointEvent::placeMessage
	String_t* ___placeMessage_7;
	// System.String Autohand.Demo.TextPlacePointEvent::highlightMessage
	String_t* ___highlightMessage_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Autohand.Demo.WristLookEvent
struct WristLookEvent_t1B29DC36B72BBEF7EF2F434078D9D5313C69F502  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Autohand.Hand Autohand.Demo.WristLookEvent::hand
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand_4;
	// UnityEngine.Camera Autohand.Demo.WristLookEvent::head
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___head_5;
	// System.Single Autohand.Demo.WristLookEvent::maxDistance
	float ___maxDistance_6;
	// System.Single Autohand.Demo.WristLookEvent::anglePreciseness
	float ___anglePreciseness_7;
	// System.Boolean Autohand.Demo.WristLookEvent::disableWhileHolding
	bool ___disableWhileHolding_8;
	// Autohand.UnityHandEvent Autohand.Demo.WristLookEvent::OnShow
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* ___OnShow_9;
	// Autohand.UnityHandEvent Autohand.Demo.WristLookEvent::OnHide
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* ___OnHide_10;
	// System.Boolean Autohand.Demo.WristLookEvent::showing
	bool ___showing_11;
};

// Autohand.Demo.DialHandScaler
struct DialHandScaler_t6C2E2387577B061CABA5023C754D4FD068F118BC  : public PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2
{
	// Autohand.Hand Autohand.Demo.DialHandScaler::hand
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand_10;
	// UnityEngine.Vector3 Autohand.Demo.DialHandScaler::minScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___minScale_11;
	// UnityEngine.Vector3 Autohand.Demo.DialHandScaler::maxScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maxScale_12;
	// System.Single Autohand.Demo.DialHandScaler::startReach
	float ___startReach_13;
	// UnityEngine.Vector3 Autohand.Demo.DialHandScaler::startScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startScale_14;
	// System.Single[] Autohand.Demo.DialHandScaler::fingersStartScale
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___fingersStartScale_15;
	// UnityEngine.Vector3 Autohand.Demo.DialHandScaler::lastHandScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastHandScale_16;
};

// Autohand.Grabbable
struct Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F  : public GrabbableBase_tBB1C89A2FFC63517613714466E5CADE73093F1B5
{
	// Autohand.Grabbable Autohand.Grabbable::CopySettings
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___CopySettings_35;
	// Autohand.HandGrabType Autohand.Grabbable::grabType
	int32_t ___grabType_36;
	// Autohand.HandType Autohand.Grabbable::handType
	int32_t ___handType_37;
	// System.Boolean Autohand.Grabbable::singleHandOnly
	bool ___singleHandOnly_38;
	// System.Boolean Autohand.Grabbable::allowHeldSwapping
	bool ___allowHeldSwapping_39;
	// System.Boolean Autohand.Grabbable::instantGrab
	bool ___instantGrab_40;
	// System.Boolean Autohand.Grabbable::useGentleGrab
	bool ___useGentleGrab_41;
	// System.Boolean Autohand.Grabbable::maintainGrabOffset
	bool ___maintainGrabOffset_42;
	// System.Boolean Autohand.Grabbable::ignoreWeight
	bool ___ignoreWeight_43;
	// System.Boolean Autohand.Grabbable::parentOnGrab
	bool ___parentOnGrab_44;
	// System.Single Autohand.Grabbable::throwPower
	float ___throwPower_45;
	// System.Single Autohand.Grabbable::jointBreakForce
	float ___jointBreakForce_46;
	// System.Boolean Autohand.Grabbable::showAdvancedSettings
	bool ___showAdvancedSettings_47;
	// System.Boolean Autohand.Grabbable::makeChildrenGrabbable
	bool ___makeChildrenGrabbable_48;
	// System.Single Autohand.Grabbable::grabPriorityWeight
	float ___grabPriorityWeight_49;
	// System.Single Autohand.Grabbable::ignoreReleaseTime
	float ___ignoreReleaseTime_50;
	// UnityEngine.Vector3 Autohand.Grabbable::heldPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___heldPositionOffset_51;
	// UnityEngine.Vector3 Autohand.Grabbable::heldRotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___heldRotationOffset_52;
	// UnityEngine.ConfigurableJoint Autohand.Grabbable::customGrabJoint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___customGrabJoint_53;
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody> Autohand.Grabbable::jointedBodies
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* ___jointedBodies_54;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Autohand.Grabbable::heldIgnoreColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___heldIgnoreColliders_55;
	// System.Boolean Autohand.Grabbable::pullApartBreakOnly
	bool ___pullApartBreakOnly_56;
	// System.Boolean Autohand.Grabbable::showEvents
	bool ___showEvents_57;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::onGrab
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___onGrab_58;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::onRelease
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___onRelease_59;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::onSqueeze
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___onSqueeze_60;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::onUnsqueeze
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___onUnsqueeze_61;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::onHighlight
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___onHighlight_62;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::onUnhighlight
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___onUnhighlight_63;
	// Autohand.UnityHandGrabEvent Autohand.Grabbable::OnJointBreak
	UnityHandGrabEvent_tF11481EC0A7CF6446C5710062C21EFED47B55645* ___OnJointBreak_64;
	// System.Boolean Autohand.Grabbable::lockHandOnGrab
	bool ___lockHandOnGrab_65;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnBeforeGrabEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnBeforeGrabEvent_66;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnGrabEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnGrabEvent_67;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnReleaseEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnReleaseEvent_68;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnJointBreakEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnJointBreakEvent_69;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnSqueezeEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnSqueezeEvent_70;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnUnsqueezeEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnUnsqueezeEvent_71;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnHighlightEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnHighlightEvent_72;
	// Autohand.HandGrabEvent Autohand.Grabbable::OnUnhighlightEvent
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnUnhighlightEvent_73;
	// Autohand.PlacePointEvent Autohand.Grabbable::OnPlacePointHighlightEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnPlacePointHighlightEvent_74;
	// Autohand.PlacePointEvent Autohand.Grabbable::OnPlacePointUnhighlightEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnPlacePointUnhighlightEvent_75;
	// Autohand.PlacePointEvent Autohand.Grabbable::OnPlacePointAddEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnPlacePointAddEvent_76;
	// Autohand.PlacePointEvent Autohand.Grabbable::OnPlacePointRemoveEvent
	PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* ___OnPlacePointRemoveEvent_77;
	// System.Boolean Autohand.Grabbable::<wasForceReleased>k__BackingField
	bool ___U3CwasForceReleasedU3Ek__BackingField_78;
	// Autohand.Hand Autohand.Grabbable::<lastHeldBy>k__BackingField
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___U3ClastHeldByU3Ek__BackingField_79;
	// System.Boolean Autohand.Grabbable::ignoreInterpolation
	bool ___ignoreInterpolation_80;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>> Autohand.Grabbable::highlightObjs
	Dictionary_2_tD1C6F61B4B077CFC06D715B6A2638FE16C259AB6* ___highlightObjs_81;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// Autohand.Hand
struct Hand_t3D95941FB981751FC47A570B0884955C1F0F517A  : public HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8
{
	// System.Boolean Autohand.Hand::usingHighlight
	bool ___usingHighlight_71;
	// UnityEngine.LayerMask Autohand.Hand::highlightLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___highlightLayers_72;
	// UnityEngine.Material Autohand.Hand::defaultHighlight
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultHighlight_73;
	// System.Boolean Autohand.Hand::showAdvanced
	bool ___showAdvanced_74;
	// Autohand.GrabType Autohand.Hand::grabType
	int32_t ___grabType_75;
	// System.Single Autohand.Hand::minGrabTime
	float ___minGrabTime_76;
	// System.Single Autohand.Hand::maxGrabTime
	float ___maxGrabTime_77;
	// UnityEngine.AnimationCurve Autohand.Hand::grabCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___grabCurve_78;
	// System.Single Autohand.Hand::gentleGrabSpeed
	float ___gentleGrabSpeed_79;
	// System.Int32 Autohand.Hand::poseIndex
	int32_t ___poseIndex_80;
	// System.Boolean Autohand.Hand::ignoreMe1
	bool ___ignoreMe1_81;
	// Autohand.HandGrabEvent Autohand.Hand::OnTriggerGrab
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnTriggerGrab_87;
	// Autohand.HandGrabEvent Autohand.Hand::OnBeforeGrabbed
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnBeforeGrabbed_88;
	// Autohand.HandGrabEvent Autohand.Hand::OnGrabbed
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnGrabbed_89;
	// Autohand.HandGrabEvent Autohand.Hand::OnTriggerRelease
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnTriggerRelease_90;
	// Autohand.HandGrabEvent Autohand.Hand::OnBeforeReleased
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnBeforeReleased_91;
	// Autohand.HandGrabEvent Autohand.Hand::OnReleased
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnReleased_92;
	// Autohand.HandGrabEvent Autohand.Hand::OnSqueezed
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnSqueezed_93;
	// Autohand.HandGrabEvent Autohand.Hand::OnUnsqueezed
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnUnsqueezed_94;
	// Autohand.HandGrabEvent Autohand.Hand::OnHighlight
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnHighlight_95;
	// Autohand.HandGrabEvent Autohand.Hand::OnStopHighlight
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnStopHighlight_96;
	// Autohand.HandGrabEvent Autohand.Hand::OnForcedRelease
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnForcedRelease_97;
	// Autohand.HandGrabEvent Autohand.Hand::OnGrabJointBreak
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnGrabJointBreak_98;
	// Autohand.HandGrabEvent Autohand.Hand::OnHeldConnectionBreak
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___OnHeldConnectionBreak_99;
	// Autohand.HandGameObjectEvent Autohand.Hand::OnHandCollisionStart
	HandGameObjectEvent_t2B029EFC6A3CF28AD732382D3AB0F4A12C5AF15C* ___OnHandCollisionStart_100;
	// Autohand.HandGameObjectEvent Autohand.Hand::OnHandCollisionStop
	HandGameObjectEvent_t2B029EFC6A3CF28AD732382D3AB0F4A12C5AF15C* ___OnHandCollisionStop_101;
	// Autohand.HandGameObjectEvent Autohand.Hand::OnHandTriggerStart
	HandGameObjectEvent_t2B029EFC6A3CF28AD732382D3AB0F4A12C5AF15C* ___OnHandTriggerStart_102;
	// Autohand.HandGameObjectEvent Autohand.Hand::OnHandTriggerStop
	HandGameObjectEvent_t2B029EFC6A3CF28AD732382D3AB0F4A12C5AF15C* ___OnHandTriggerStop_103;
	// System.Collections.Generic.List`1<Autohand.HandTriggerAreaEvents> Autohand.Hand::triggerEventAreas
	List_1_tD6E96560B159D1E3D9A6841DAA9704F3C6D3DD17* ___triggerEventAreas_104;
	// UnityEngine.Coroutine Autohand.Hand::tryGrab
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___tryGrab_105;
	// UnityEngine.Coroutine Autohand.Hand::highlightRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___highlightRoutine_106;
	// System.Single Autohand.Hand::startGrabDist
	float ___startGrabDist_107;
	// Autohand.HandPoseData Autohand.Hand::openHandPose
	HandPoseData_t1DAF07EB23E624A7E5CE8AB1D9658DD643893CF4 ___openHandPose_108;
	// Autohand.Grabbable Autohand.Hand::lastHoldingObj
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___lastHoldingObj_109;
	// UnityEngine.Coroutine Autohand.Hand::_grabRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____grabRoutine_110;
	// Autohand.Hand Autohand.Hand::copyFromHand
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___copyFromHand_111;
	// UnityEngine.Vector3 Autohand.Hand::startHandGrabPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startHandGrabPosition_112;
};

struct Hand_t3D95941FB981751FC47A570B0884955C1F0F517A_StaticFields
{
	// System.String[] Autohand.Hand::grabbableLayers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___grabbableLayers_82;
	// System.String Autohand.Hand::grabbableLayerNameDefault
	String_t* ___grabbableLayerNameDefault_83;
	// System.String Autohand.Hand::grabbingLayerName
	String_t* ___grabbingLayerName_84;
	// System.String Autohand.Hand::rightHandLayerName
	String_t* ___rightHandLayerName_85;
	// System.String Autohand.Hand::leftHandLayerName
	String_t* ___leftHandLayerName_86;
};

// Autohand.Demo.JoystickObjectMover
struct JoystickObjectMover_t3FAB131F561F091D373BE43D9DDFCA3F4B605215  : public PhysicsGadgetJoystick_t12DA36E255A71A28A03721841CD15D16A22D2BDD
{
	// UnityEngine.Transform Autohand.Demo.JoystickObjectMover::move
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___move_13;
	// System.Single Autohand.Demo.JoystickObjectMover::speed
	float ___speed_14;
};

// Autohand.Demo.MoverLever
struct MoverLever_tE3C80B7C20183003B928BF1DA2F6C05A4BEB9BAD  : public PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2
{
	// UnityEngine.Transform Autohand.Demo.MoverLever::move
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___move_10;
	// UnityEngine.Vector3 Autohand.Demo.MoverLever::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_11;
	// System.Single Autohand.Demo.MoverLever::speed
	float ___speed_12;
};

// Autohand.Demo.PhysicsSliderPositionMover
struct PhysicsSliderPositionMover_t97317218411E089FCB44648F45BFD883D9A7B6A0  : public PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0
{
	// UnityEngine.Transform Autohand.Demo.PhysicsSliderPositionMover::move
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___move_10;
	// UnityEngine.Vector3 Autohand.Demo.PhysicsSliderPositionMover::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_11;
	// System.Boolean Autohand.Demo.PhysicsSliderPositionMover::useRange
	bool ___useRange_12;
	// UnityEngine.Vector3 Autohand.Demo.PhysicsSliderPositionMover::minRange
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___minRange_13;
	// UnityEngine.Vector3 Autohand.Demo.PhysicsSliderPositionMover::maxRange
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maxRange_14;
	// UnityEngine.Vector3 Autohand.Demo.PhysicsSliderPositionMover::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_15;
};

// Autohand.Demo.WheelRotator
struct WheelRotator_t046E672912CA8A51EDE5C331BD9E2B624FB285C9  : public PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2
{
	// UnityEngine.Transform Autohand.Demo.WheelRotator::move
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___move_10;
	// UnityEngine.Vector3 Autohand.Demo.WheelRotator::angle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angle_11;
	// System.Boolean Autohand.Demo.WheelRotator::useLocal
	bool ___useLocal_12;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_266;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_267;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_268;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_269;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_270;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_272;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_273;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_274;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_275;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_276;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_277;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_278;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_279;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_280;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_281;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_282;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_302;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Autohand.Finger[]
struct FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A  : public RuntimeArray
{
	ALIGN_FIELD (8) Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* m_Items[1];

	inline Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Boolean Autohand.AutoHandExtensions::CanGetComponent<System.Object>(UnityEngine.GameObject,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoHandExtensions_CanGetComponent_TisRuntimeObject_m53FE4C498A460D9475EE22F04384C9317822B643_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___componentClass0, RuntimeObject** ___component1, const RuntimeMethod* method) ;
// System.Boolean Autohand.AutoHandExtensions::CanGetComponent<System.Object>(UnityEngine.Component,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoHandExtensions_CanGetComponent_TisRuntimeObject_m71DB78113782C20F63F4C51BC0AF0ECC6690E10A_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___componentClass0, RuntimeObject** ___component1, const RuntimeMethod* method) ;

// System.Void Autohand.PhysicsGadgetHingeAngleReader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsGadgetHingeAngleReader_Start_m82AABAFD1C02A45E58927EECA6957ECAE8933497 (PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single Autohand.PhysicsGadgetHingeAngleReader::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61 (PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Autohand.PhysicsGadgetHingeAngleReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsGadgetHingeAngleReader__ctor_m181F9FB592B69380059D356A343319F25ABDAA51 (PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Autohand.PhysicsGadgetJoystick::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PhysicsGadgetJoystick_GetValue_m749992663F05143E5C15F9F513FF4243E120075D (PhysicsGadgetJoystick_t12DA36E255A71A28A03721841CD15D16A22D2BDD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.PhysicsGadgetJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsGadgetJoystick__ctor_m91B7AECCF356BCF5323D75207767F5DF28D7656C (PhysicsGadgetJoystick_t12DA36E255A71A28A03721841CD15D16A22D2BDD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.PhysicsGadgetConfigurableLimitReader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsGadgetConfigurableLimitReader_Start_m5150EEAA078EA6633588D2AD3EF04A64CFA99ACB (PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0* __this, const RuntimeMethod* method) ;
// System.Single Autohand.PhysicsGadgetConfigurableLimitReader::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PhysicsGadgetConfigurableLimitReader_GetValue_m359A0B5FA1DC556B5DD3B76EB2E8D73ED6043D6C (PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void Autohand.PhysicsGadgetConfigurableLimitReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsGadgetConfigurableLimitReader__ctor_mD8B3540743285F76362BCAD3A5C1FBA90111FE46 (PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Autohand.Demo.TextChanger/<ChangeText>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeTextU3Ed__5__ctor_m6154D8BBD29813F609B67B95CAF65AF52BC9607B (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Autohand.Grabbable>()
inline Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Autohand.HandGrabEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8 (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void Autohand.Demo.TextChanger::UpdateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChanger_UpdateText_m1234B6E143AFAE05F70BD743DAA350E569028CEE (TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* __this, String_t* ___newText0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Autohand.PlacePoint>()
inline PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Autohand.PlacePointEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacePointEvent__ctor_mD8C2071195458B7B34EFFB7B3DA27A1DF86AD103 (PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// Autohand.Grabbable Autohand.HandBase::get_holdingObj()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* HandBase_get_holdingObj_mB1804975FEB0F17B0962002618898A61223E5D7B_inline (HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Autohand.Hand>::Invoke(T0)
inline void UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62 (UnityEvent_1_t90F79DD2A82C626F94416B73A390FDEEE94B97AE* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t90F79DD2A82C626F94416B73A390FDEEE94B97AE*, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA1E45E3F5DC9AE87F037EBF00286AC7B908B643D (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Autohand.Hand>()
inline Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Autohand.Hand::add_OnBeforeGrabbed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnBeforeGrabbed_mC7C5621CF9C87780CF15A5EEF409ACEE22F7728B (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnGrabbed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnGrabbed_m1DCDF51519BF3EF5563811800F41AEBF35FC40B8 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnReleased(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnReleased_m09845DCECE2015F071304ACC3C8A42894719D133 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnGrabJointBreak(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnGrabJointBreak_mB65C913F81DB0075E2AD2B21E6972135002B9E31 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnSqueezed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnSqueezed_m03AF48AA4B6AF45F030AF7927D2B350317ED56EA (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnUnsqueezed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnUnsqueezed_m37337E6F7711E0C830F18EBF61D3DB20EAF98267 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnHighlight(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnHighlight_mC15165F641E7DB4B687DFC818CB2DDD10002EFD6 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::add_OnStopHighlight(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_add_OnStopHighlight_m125A678382C6DD53ECC67AA3C4CFD4FAE1A7CC3F (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnBeforeGrabbed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnBeforeGrabbed_m77609FF8B29D76CF8312B7EB110E85C384EBC125 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnGrabbed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnGrabbed_mD8F3359081C181A7F4514FCF71B7A9491B78A776 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnReleased(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnReleased_m22A512EAF0994D1D72451A8770563B070115FC29 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnGrabJointBreak(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnGrabJointBreak_m33DEAAABF7B5834D2B78507C4A6FD975CED54323 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnSqueezed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnSqueezed_mC999A4EB500378794F7F00C943512D4510C7D8D9 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnUnsqueezed(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnUnsqueezed_mFD57F7591BCDA153C5EAFE60DAB618879E714C8F (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnHighlight(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnHighlight_m4F2C3F9F25694AFA4077516B0DD97222767C8293 (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void Autohand.Hand::remove_OnStopHighlight(Autohand.HandGrabEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_remove_OnStopHighlight_mB2FAF592990D51F7AA613E89F3CD66F06557164A (Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* __this, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void Autohand.HandEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEvent__ctor_mF7EBE24EDC040A9573B79307FE58D7F57FB1742D (HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Autohand.GrabbableChild>()
inline GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051* Component_GetComponent_TisGrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051_m656F1A79D64989507ED495E1BDE28B0CC2831FDA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Autohand.Demo.SmashEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmashEvent__ctor_mF395864FF833A50024471348AA588797B6D9743B (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void Autohand.Demo.Smash::DoSmash(Autohand.Demo.Smasher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_DoSmash_mB2959E70DBF460519C991D327A9D76E09C7E5B3F (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smash0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean Autohand.AutoHandExtensions::CanGetComponent<UnityEngine.Rigidbody>(UnityEngine.GameObject,T&)
inline bool AutoHandExtensions_CanGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mE3D6B8CFEB15ED3C405AAE7193D1D8BABD76C53E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___componentClass0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** ___component1, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C**, const RuntimeMethod*))AutoHandExtensions_CanGetComponent_TisRuntimeObject_m53FE4C498A460D9475EE22F04384C9317822B643_gshared)(___componentClass0, ___component1, method);
}
// UnityEngine.ParticleSystem/VelocityOverLifetimeModule UnityEngine.ParticleSystem::get_velocityOverLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 ParticleSystem_get_velocityOverLifetime_m84189E42E4B97EF44B66BC1FBB9FA0F15F05B535 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086 (float ___constant0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_x_m667368604CF8D09F133E552E21CBD3DC344281A0 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_y_m4B08D16D7F274567CC18790702C8F3C53A443089 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityOverLifetimeModule_set_z_m8B5A03C2D6E06CD7C6177BD321E9121E96D1D889 (VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___volume2, const RuntimeMethod* method) ;
// System.Void Autohand.Demo.SmashEvent::Invoke(Autohand.Demo.Smasher,Autohand.Demo.Smash)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_inline (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean Autohand.AutoHandExtensions::CanGetComponent<Autohand.Demo.Smash>(UnityEngine.Component,T&)
inline bool AutoHandExtensions_CanGetComponent_TisSmash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70_m9BE6EB401C8B1DDA6D250AC66DB941996880EF68 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___componentClass0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70** ___component1, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70**, const RuntimeMethod*))AutoHandExtensions_CanGetComponent_TisRuntimeObject_m71DB78113782C20F63F4C51BC0AF0ECC6690E10A_gshared)(___componentClass0, ___component1, method);
}
// System.Single Autohand.Demo.Smasher::GetMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Smasher_GetMagnitude_mA757E58D76BE38A2AC782CDFB4E9EBA900AD21C7 (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, const RuntimeMethod* method) ;
// System.Void Autohand.Demo.Smash::DoSmash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_DoSmash_mC874BE6D055E8D1B9F0A15EE304CC7E013BF2C23 (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1 (double ___value0, int32_t ___digits1, int32_t ___mode2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Autohand.Demo.DialHandScaler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialHandScaler_Start_mC648FD7616A00F8412DD827FAE51252CF203CF1A (DialHandScaler_t6C2E2387577B061CABA5023C754D4FD068F118BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Start();
		PhysicsGadgetHingeAngleReader_Start_m82AABAFD1C02A45E58927EECA6957ECAE8933497(__this, NULL);
		// startScale = hand.transform.localScale;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = __this->___hand_10;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		__this->___startScale_14 = L_2;
		// startReach = hand.reachDistance;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_3 = __this->___hand_10;
		NullCheck(L_3);
		float L_4 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_3)->___reachDistance_8;
		__this->___startReach_13 = L_4;
		// fingersStartScale = new float[hand.fingers.Length];
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_5 = __this->___hand_10;
		NullCheck(L_5);
		FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A* L_6 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_5)->___fingers_5;
		NullCheck(L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		__this->___fingersStartScale_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fingersStartScale_15), (void*)L_7);
		// for(int i = 0; i < hand.fingers.Length; i++) {
		V_0 = 0;
		goto IL_0067;
	}

IL_0049:
	{
		// fingersStartScale[i] = hand.fingers[i].tipRadius;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___fingersStartScale_15;
		int32_t L_9 = V_0;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_10 = __this->___hand_10;
		NullCheck(L_10);
		FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A* L_11 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_10)->___fingers_5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		float L_15 = L_14->___tipRadius_5;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)L_15);
		// for(int i = 0; i < hand.fingers.Length; i++) {
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0067:
	{
		// for(int i = 0; i < hand.fingers.Length; i++) {
		int32_t L_17 = V_0;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_18 = __this->___hand_10;
		NullCheck(L_18);
		FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A* L_19 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_18)->___fingers_5;
		NullCheck(L_19);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// lastHandScale = hand.transform.localScale;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_20 = __this->___hand_10;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_21, NULL);
		__this->___lastHandScale_16 = L_22;
		// }
		return;
	}
}
// System.Void Autohand.Demo.DialHandScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialHandScaler_Update_m6A90BF3ADFEAAF3AED76CB4434EF4BC0DB7F00FF (DialHandScaler_t6C2E2387577B061CABA5023C754D4FD068F118BC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// var value = GetValue();
		float L_0;
		L_0 = PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61(__this, NULL);
		V_0 = L_0;
		// var scaleDiff = hand.transform.localScale.magnitude/startScale.magnitude;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_1 = __this->___hand_10;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		V_2 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___startScale_14);
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_5, NULL);
		V_1 = ((float)(L_4/L_6));
		// if(value >= 0)
		float L_7 = V_0;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// hand.transform.localScale = Vector3.Lerp(startScale, maxScale, value);
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_8 = __this->___hand_10;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___startScale_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___maxScale_12;
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, L_11, L_12, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_13, NULL);
		goto IL_0083;
	}

IL_0058:
	{
		// else if(value < 0)
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// hand.transform.localScale = Vector3.Lerp(startScale, minScale, -value);
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_15 = __this->___hand_10;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___startScale_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___minScale_11;
		float L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, ((-L_19)), NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_20, NULL);
	}

IL_0083:
	{
		// hand.reachDistance = startReach*scaleDiff;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_21 = __this->___hand_10;
		float L_22 = __this->___startReach_13;
		float L_23 = V_1;
		NullCheck(L_21);
		((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_21)->___reachDistance_8 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		// for(int i = 0; i < hand.fingers.Length; i++)
		V_3 = 0;
		goto IL_00ba;
	}

IL_009a:
	{
		// hand.fingers[i].tipRadius = fingersStartScale[i]*scaleDiff;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_24 = __this->___hand_10;
		NullCheck(L_24);
		FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A* L_25 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_24)->___fingers_5;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Finger_t153B227D3CAEBB638245F3E80C7523436DD2B3D8* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___fingersStartScale_15;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		float L_33 = V_1;
		NullCheck(L_28);
		L_28->___tipRadius_5 = ((float)il2cpp_codegen_multiply(L_32, L_33));
		// for(int i = 0; i < hand.fingers.Length; i++)
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		// for(int i = 0; i < hand.fingers.Length; i++)
		int32_t L_35 = V_3;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_36 = __this->___hand_10;
		NullCheck(L_36);
		FingerU5BU5D_tCE2B9FE325B793DA63B8BFD30EF989D5BF80586A* L_37 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_36)->___fingers_5;
		NullCheck(L_37);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_009a;
		}
	}
	{
		// if(hand.transform.localScale != lastHandScale)
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_38 = __this->___hand_10;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___lastHandScale_16;
		bool L_42;
		L_42 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_00f2;
		}
	}
	{
		// hand.ForceReleaseGrab();
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_43 = __this->___hand_10;
		NullCheck(L_43);
		VirtualActionInvoker0::Invoke(25 /* System.Void Autohand.Hand::ForceReleaseGrab() */, L_43);
	}

IL_00f2:
	{
		// lastHandScale = hand.transform.localScale;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_44 = __this->___hand_10;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_45, NULL);
		__this->___lastHandScale_16 = L_46;
		// }
		return;
	}
}
// System.Void Autohand.Demo.DialHandScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialHandScaler__ctor_mD92FA2AFB6BD28533E4D836CFE2D4E4F446F6A1E (DialHandScaler_t6C2E2387577B061CABA5023C754D4FD068F118BC* __this, const RuntimeMethod* method) 
{
	{
		PhysicsGadgetHingeAngleReader__ctor_m181F9FB592B69380059D356A343319F25ABDAA51(__this, NULL);
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
// System.Void Autohand.Demo.JoystickObjectMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickObjectMover_Update_mCEAF4E7E408D38812466BF21CB0F7778DE34FDE3 (JoystickObjectMover_t3FAB131F561F091D373BE43D9DDFCA3F4B605215* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var axis = GetValue();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = PhysicsGadgetJoystick_GetValue_m749992663F05143E5C15F9F513FF4243E120075D(__this, NULL);
		V_0 = L_0;
		// var moveAxis = new Vector3(axis.x*Time.deltaTime*speed, 0, axis.y*Time.deltaTime*speed);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_4 = __this->___speed_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8 = __this->___speed_14;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8)), NULL);
		// move.transform.localPosition += moveAxis;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___move_13;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_14, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.JoystickObjectMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickObjectMover__ctor_mBAE0D3D723FB140F61B5279704FB11FDE539F46C (JoystickObjectMover_t3FAB131F561F091D373BE43D9DDFCA3F4B605215* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 2;
		__this->___speed_14 = (2.0f);
		PhysicsGadgetJoystick__ctor_m91B7AECCF356BCF5323D75207767F5DF28D7656C(__this, NULL);
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
// System.Void Autohand.Demo.MoverLever::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoverLever_Update_mA09A8C045C0DAADA3130E176986647524163A42C (MoverLever_tE3C80B7C20183003B928BF1DA2F6C05A4BEB9BAD* __this, const RuntimeMethod* method) 
{
	{
		// if(Mathf.Abs(GetValue()) > 0.1f)
		float L_0;
		L_0 = PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61(__this, NULL);
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) > ((float)(0.100000001f)))))
		{
			goto IL_0056;
		}
	}
	{
		// move.position = Vector3.MoveTowards(move.position, move.position-axis, Time.deltaTime*speed*(GetValue()));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___move_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___move_10;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___move_10;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___axis_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10 = __this->___speed_12;
		float L_11;
		L_11 = PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_4, L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), L_11)), NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_12, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.MoverLever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoverLever__ctor_m898B8BA7DBBFD80D7F2E20206719B098A9575031 (MoverLever_tE3C80B7C20183003B928BF1DA2F6C05A4BEB9BAD* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1;
		__this->___speed_12 = (1.0f);
		PhysicsGadgetHingeAngleReader__ctor_m181F9FB592B69380059D356A343319F25ABDAA51(__this, NULL);
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
// System.Void Autohand.Demo.PhysicsSliderPositionMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsSliderPositionMover_Start_m0062B4165CC395145BEB891323DD5F69026B519C (PhysicsSliderPositionMover_t97317218411E089FCB44648F45BFD883D9A7B6A0* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		PhysicsGadgetConfigurableLimitReader_Start_m5150EEAA078EA6633588D2AD3EF04A64CFA99ACB(__this, NULL);
		// startPos = move.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___move_10;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___startPos_15 = L_1;
		// }
		return;
	}
}
// System.Void Autohand.Demo.PhysicsSliderPositionMover::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsSliderPositionMover_FixedUpdate_m67121C1855E4D0D7CB9ABDD203CDDCD3EDE7F5D6 (PhysicsSliderPositionMover_t97317218411E089FCB44648F45BFD883D9A7B6A0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if(useRange){
		bool L_0 = __this->___useRange_12;
		if (!L_0)
		{
			goto IL_0072;
		}
	}
	{
		// var value = GetValue();
		float L_1;
		L_1 = PhysicsGadgetConfigurableLimitReader_GetValue_m359A0B5FA1DC556B5DD3B76EB2E8D73ED6043D6C(__this, NULL);
		V_0 = L_1;
		// if(value >= 0)
		float L_2 = V_0;
		if ((!(((float)L_2) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// move.position = Vector3.Lerp(startPos, startPos+minRange, value);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___move_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___startPos_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___startPos_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___minRange_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_7, L_8, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_9, NULL);
		return;
	}

IL_0040:
	{
		// else if(value < 0)
		float L_10 = V_0;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// move.position = Vector3.Lerp(startPos, startPos+maxRange, -value);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___move_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___startPos_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___startPos_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___maxRange_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_12, L_15, ((-L_16)), NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
		return;
	}

IL_0072:
	{
		// move.position += axis*GetValue()*Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___move_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___axis_11;
		float L_22;
		L_22 = PhysicsGadgetConfigurableLimitReader_GetValue_m359A0B5FA1DC556B5DD3B76EB2E8D73ED6043D6C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		float L_24;
		L_24 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_25, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_26, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.PhysicsSliderPositionMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsSliderPositionMover__ctor_mD5702456A8C5552168CAD430A2F54C0D649A99D3 (PhysicsSliderPositionMover_t97317218411E089FCB44648F45BFD883D9A7B6A0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___axis_11 = L_0;
		// public Vector3 minRange = -Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_1, NULL);
		__this->___minRange_13 = L_2;
		// public Vector3 maxRange = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___maxRange_14 = L_3;
		PhysicsGadgetConfigurableLimitReader__ctor_mD8B3540743285F76362BCAD3A5C1FBA90111FE46(__this, NULL);
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
// System.Void Autohand.Demo.WheelRotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelRotator_Update_m3B0E9A9AF27E2D2708F1BD8E8010557C57017147 (WheelRotator_t046E672912CA8A51EDE5C331BD9E2B624FB285C9* __this, const RuntimeMethod* method) 
{
	{
		// if(useLocal)
		bool L_0 = __this->___useLocal_12;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// move.localRotation *= Quaternion.Euler(angle*Time.deltaTime*GetValue());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___move_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___angle_11;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		float L_7;
		L_7 = PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_9, NULL);
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_10, NULL);
		return;
	}

IL_003f:
	{
		// move.rotation *= Quaternion.Euler(angle*Time.deltaTime*GetValue());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___move_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___angle_11;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_13, L_19, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_20, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.WheelRotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelRotator__ctor_m0D42B014FAD67C80919CCC0BEFA6EB394A3709C6 (WheelRotator_t046E672912CA8A51EDE5C331BD9E2B624FB285C9* __this, const RuntimeMethod* method) 
{
	{
		PhysicsGadgetHingeAngleReader__ctor_m181F9FB592B69380059D356A343319F25ABDAA51(__this, NULL);
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
// System.Void Autohand.Demo.LeverTextChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverTextChanger_Update_m6BB815498F3B2F510AD022110D2731E257149C43 (LeverTextChanger_t6611B86DC6C0E2916C396FC5F33CF2E31F03B93F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// text.text = Math.Round(sliderReader.GetValue(), 2).ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___text_4;
		PhysicsGadgetHingeAngleReader_tE62E39A82CCDB0DEC7B760FD0540124140FF25D2* L_1 = __this->___sliderReader_5;
		NullCheck(L_1);
		float L_2;
		L_2 = PhysicsGadgetHingeAngleReader_GetValue_m915E66809FD8E0AD3F8C2ACBFE3EC95999E30E61(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(((double)L_2), 2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void Autohand.Demo.LeverTextChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverTextChanger__ctor_m0BD219891652E0738F5934A1B0DEE42CBDD26FB9 (LeverTextChanger_t6611B86DC6C0E2916C396FC5F33CF2E31F03B93F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.SliderTextChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderTextChanger_Update_mD77BED2BD83D66D6245DA0E635BA2C0862767E50 (SliderTextChanger_t16B887C751DE8AC3851F436124BA1A6B7C1E65AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// text.text = Math.Round(sliderReader.GetValue(), 2).ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___text_4;
		PhysicsGadgetConfigurableLimitReader_tCD76CF4BE238D63BD929631FBC19E4D23DC684D0* L_1 = __this->___sliderReader_5;
		NullCheck(L_1);
		float L_2;
		L_2 = PhysicsGadgetConfigurableLimitReader_GetValue_m359A0B5FA1DC556B5DD3B76EB2E8D73ED6043D6C(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(((double)L_2), 2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void Autohand.Demo.SliderTextChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderTextChanger__ctor_m5E04B05672AC883B45A9E189766F4C8FD37DD781 (SliderTextChanger_t16B887C751DE8AC3851F436124BA1A6B7C1E65AB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.TextChanger::UpdateText(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChanger_UpdateText_mEA90B5373BFF66A0613DD24096B4FFA96C5D955C (TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* __this, String_t* ___newText0, float ___upTime1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextChanger::UpdateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChanger_UpdateText_m1234B6E143AFAE05F70BD743DAA350E569028CEE (TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* __this, String_t* ___newText0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Autohand.Demo.TextChanger::ChangeText(System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextChanger_ChangeText_m6EC4B4631F95019BC187F90E5E81E3B2845DE07F (TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* __this, float ___seconds0, String_t* ___newText1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* L_0 = (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024*)il2cpp_codegen_object_new(U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeTextU3Ed__5__ctor_m6154D8BBD29813F609B67B95CAF65AF52BC9607B(L_0, 0, NULL);
		U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Autohand.Demo.TextChanger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChanger_OnDestroy_m43136458899ECE8514A5F3CE2483C9380235D94A (TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = "";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___text_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChanger__ctor_m0EA4E7A528920A0B94E9EDE66CA05CA2F52D192E (TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.TextChanger/<ChangeText>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeTextU3Ed__5__ctor_m6154D8BBD29813F609B67B95CAF65AF52BC9607B (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Autohand.Demo.TextChanger/<ChangeText>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeTextU3Ed__5_System_IDisposable_Dispose_m74388E4D15296140360F8255FA7E146B82715D0F (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Autohand.Demo.TextChanger/<ChangeText>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeTextU3Ed__5_MoveNext_m7E83992B47857B356BEB1EFC1649995B841F68F6 (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_4 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// text.text = "";
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_5 = V_1;
		NullCheck(L_5);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_6 = L_5->___text_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object Autohand.Demo.TextChanger/<ChangeText>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeTextU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3B9C5830971A4301A71087166ED97ADA1BAAE222 (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Autohand.Demo.TextChanger/<ChangeText>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeTextU3Ed__5_System_Collections_IEnumerator_Reset_m77936B025D57C04ABCE56755EE099713FA737C46 (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeTextU3Ed__5_System_Collections_IEnumerator_Reset_m77936B025D57C04ABCE56755EE099713FA737C46_RuntimeMethod_var)));
	}
}
// System.Object Autohand.Demo.TextChanger/<ChangeText>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeTextU3Ed__5_System_Collections_IEnumerator_get_Current_m663CA3FBDC8C858B9134D8428D1B097DC3AA9CE9 (U3CChangeTextU3Ed__5_t7348CFC94FC906C7DD01E189BD88D34E0931F024* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Autohand.Demo.TextGrabEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGrabEvent_Start_m4A54EFCFE8A12C4330C266B163DA29BA27AAC178 (TextGrabEvent_tC5451BB915608C2337CA7CC016605B4883E0C790* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextGrabEvent_OnGrab_m31597D931572DD68480BF75B780A7937BD26D997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(grab == null && GetComponent<Grabbable>() != null)
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = __this->___grab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_2;
		L_2 = Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8(__this, Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// grab = GetComponent<Grabbable>();
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_4;
		L_4 = Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8(__this, Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		__this->___grab_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grab_5), (void*)L_4);
	}

IL_0028:
	{
		// if(grab == null || changer == null)
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_5 = __this->___grab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_0044;
		}
	}
	{
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_7 = __this->___changer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_0044:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_004a:
	{
		// grab.OnGrabEvent += OnGrab;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_9 = __this->___grab_5;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_10 = L_9;
		NullCheck(L_10);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_11 = L_10->___OnGrabEvent_67;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_12 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_12, __this, (intptr_t)((void*)TextGrabEvent_OnGrab_m31597D931572DD68480BF75B780A7937BD26D997_RuntimeMethod_var), NULL);
		Delegate_t* L_13;
		L_13 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_11, L_12, NULL);
		NullCheck(L_10);
		L_10->___OnGrabEvent_67 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_13, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___OnGrabEvent_67), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_13, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextGrabEvent::OnGrab(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGrabEvent_OnGrab_m31597D931572DD68480BF75B780A7937BD26D997 (TextGrabEvent_tC5451BB915608C2337CA7CC016605B4883E0C790* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grab1, const RuntimeMethod* method) 
{
	TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* G_B2_0 = NULL;
	TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* G_B1_0 = NULL;
	{
		// changer?.UpdateText(message);
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_0 = __this->___changer_4;
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = __this->___message_6;
		NullCheck(G_B2_0);
		TextChanger_UpdateText_m1234B6E143AFAE05F70BD743DAA350E569028CEE(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextGrabEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGrabEvent__ctor_mEE846AFCF7C9AF92A728D6A5C2AFE59F34FEE4C9 (TextGrabEvent_tC5451BB915608C2337CA7CC016605B4883E0C790* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.TextPlacePointEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlacePointEvent_Start_mD42A261F620B3DC47157762CB53B5DC3EFFDF8F6 (TextPlacePointEvent_tF994EB39780FF0408A694B8DF937045A679B270E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextPlacePointEvent_OnGrab_mDDC0F0A1F7FE00235841CA350F42927CACA575F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextPlacePointEvent_OnHighlight_mA1DD10BC3A9625F85EE4F5F6FC05649EB870BB01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(point == null && GetComponent<PlacePoint>() != null)
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_0 = __this->___point_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_2;
		L_2 = Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E(__this, Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// point = GetComponent<PlacePoint>();
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_4;
		L_4 = Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E(__this, Component_GetComponent_TisPlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7_m7578B4FB7AA278999E2ED60B80C0A9469D903D7E_RuntimeMethod_var);
		__this->___point_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___point_5), (void*)L_4);
	}

IL_0028:
	{
		// point.OnPlaceEvent += OnGrab;
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_5 = __this->___point_5;
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_6 = L_5;
		NullCheck(L_6);
		PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* L_7 = L_6->___OnPlaceEvent_32;
		PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* L_8 = (PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD*)il2cpp_codegen_object_new(PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		PlacePointEvent__ctor_mD8C2071195458B7B34EFFB7B3DA27A1DF86AD103(L_8, __this, (intptr_t)((void*)TextPlacePointEvent_OnGrab_mDDC0F0A1F7FE00235841CA350F42927CACA575F4_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		NullCheck(L_6);
		L_6->___OnPlaceEvent_32 = ((PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD*)CastclassSealed((RuntimeObject*)L_9, PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnPlaceEvent_32), (void*)((PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD*)CastclassSealed((RuntimeObject*)L_9, PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var)));
		// point.OnHighlightEvent += OnHighlight;
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_10 = __this->___point_5;
		PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* L_11 = L_10;
		NullCheck(L_11);
		PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* L_12 = L_11->___OnHighlightEvent_34;
		PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD* L_13 = (PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD*)il2cpp_codegen_object_new(PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		PlacePointEvent__ctor_mD8C2071195458B7B34EFFB7B3DA27A1DF86AD103(L_13, __this, (intptr_t)((void*)TextPlacePointEvent_OnHighlight_mA1DD10BC3A9625F85EE4F5F6FC05649EB870BB01_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		NullCheck(L_11);
		L_11->___OnHighlightEvent_34 = ((PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD*)CastclassSealed((RuntimeObject*)L_14, PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___OnHighlightEvent_34), (void*)((PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD*)CastclassSealed((RuntimeObject*)L_14, PlacePointEvent_t6D6EE7CA3F302200901BAD0E5FAEFAAE4C4180CD_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextPlacePointEvent::OnGrab(Autohand.PlacePoint,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlacePointEvent_OnGrab_mDDC0F0A1F7FE00235841CA350F42927CACA575F4 (TextPlacePointEvent_tF994EB39780FF0408A694B8DF937045A679B270E* __this, PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grab1, const RuntimeMethod* method) 
{
	{
		// changer.UpdateText(placeMessage);
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_0 = __this->___changer_4;
		String_t* L_1 = __this->___placeMessage_7;
		NullCheck(L_0);
		TextChanger_UpdateText_m1234B6E143AFAE05F70BD743DAA350E569028CEE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextPlacePointEvent::OnHighlight(Autohand.PlacePoint,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlacePointEvent_OnHighlight_mA1DD10BC3A9625F85EE4F5F6FC05649EB870BB01 (TextPlacePointEvent_tF994EB39780FF0408A694B8DF937045A679B270E* __this, PlacePoint_t6758CB1E27211BC77CD65FE56C72102478270CF7* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grab1, const RuntimeMethod* method) 
{
	{
		// changer.UpdateText(highlightMessage);
		TextChanger_tABA1F13E54B59C2F341FEFC638F2F236C52F5B8E* L_0 = __this->___changer_4;
		String_t* L_1 = __this->___highlightMessage_8;
		NullCheck(L_0);
		TextChanger_UpdateText_m1234B6E143AFAE05F70BD743DAA350E569028CEE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.TextPlacePointEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlacePointEvent__ctor_m0646698A386142B03BA3AA3BDB2791BD88758A91 (TextPlacePointEvent_tF994EB39780FF0408A694B8DF937045A679B270E* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeTime = 5;
		__this->___fadeTime_6 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.WristLookEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristLookEvent_Update_m4F1C91A8C02DA9A0E487C9C8FD23079C0350275F (WristLookEvent_t1B29DC36B72BBEF7EF2F434078D9D5313C69F502* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B7_0 = 0;
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* G_B10_0 = NULL;
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* G_B9_0 = NULL;
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* G_B16_0 = NULL;
	UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* G_B15_0 = NULL;
	{
		// if (hand == null || head == null)
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = __this->___hand_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___head_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// var handPos = hand.transform.position;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_4 = __this->___hand_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
		// var headPos = head.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___head_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_1 = L_9;
		// float lookness = Vector3.Dot((headPos - handPos).normalized, -hand.palmTransform.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_11, NULL);
		V_4 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_14 = __this->___hand_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_14)->___palmTransform_6;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_16, NULL);
		float L_18;
		L_18 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_13, L_17, NULL);
		// float distance = Vector3.Distance(headPos, hand.palmTransform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_20 = __this->___hand_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ((HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8*)L_20)->___palmTransform_6;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23;
		L_23 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_19, L_22, NULL);
		V_2 = L_23;
		// bool found = lookness >= anglePreciseness && distance < maxDistance && hand.holdingObj == null;
		float L_24 = __this->___anglePreciseness_7;
		if ((!(((float)L_18) >= ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_25 = V_2;
		float L_26 = __this->___maxDistance_6;
		if ((!(((float)L_25) < ((float)L_26))))
		{
			goto IL_00a4;
		}
	}
	{
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_27 = __this->___hand_4;
		NullCheck(L_27);
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_28;
		L_28 = HandBase_get_holdingObj_mB1804975FEB0F17B0962002618898A61223E5D7B_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B7_0 = ((int32_t)(L_29));
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B7_0 = 0;
	}

IL_00a5:
	{
		V_3 = (bool)G_B7_0;
		// if (!showing && found){
		bool L_30 = __this->___showing_11;
		bool L_31 = V_3;
		if (!((int32_t)(((((int32_t)L_30) == ((int32_t)0))? 1 : 0)&(int32_t)L_31)))
		{
			goto IL_00d2;
		}
	}
	{
		// OnShow?.Invoke(hand);
		UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* L_32 = __this->___OnShow_9;
		UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* L_33 = L_32;
		G_B9_0 = L_33;
		if (L_33)
		{
			G_B10_0 = L_33;
			goto IL_00bf;
		}
	}
	{
		goto IL_00ca;
	}

IL_00bf:
	{
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_34 = __this->___hand_4;
		NullCheck(G_B10_0);
		UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62(G_B10_0, L_34, UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62_RuntimeMethod_var);
	}

IL_00ca:
	{
		// showing = true;
		__this->___showing_11 = (bool)1;
		return;
	}

IL_00d2:
	{
		// else if(showing && !found){
		bool L_35 = __this->___showing_11;
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		bool L_36 = V_3;
		if (L_36)
		{
			goto IL_00fb;
		}
	}
	{
		// OnHide?.Invoke(hand);
		UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* L_37 = __this->___OnHide_10;
		UnityHandEvent_t82D856BF8956EBD714C2A07C46027866DE400B90* L_38 = L_37;
		G_B15_0 = L_38;
		if (L_38)
		{
			G_B16_0 = L_38;
			goto IL_00e9;
		}
	}
	{
		goto IL_00f4;
	}

IL_00e9:
	{
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_39 = __this->___hand_4;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62(G_B16_0, L_39, UnityEvent_1_Invoke_mF2877572FD2A1C73DBAAEDF3E8152340831E9B62_RuntimeMethod_var);
	}

IL_00f4:
	{
		// showing = false;
		__this->___showing_11 = (bool)0;
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.WristLookEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristLookEvent__ctor_mEE1E8944503EF143290801EEA8B8188F97EE810C (WristLookEvent_t1B29DC36B72BBEF7EF2F434078D9D5313C69F502* __this, const RuntimeMethod* method) 
{
	{
		// public float maxDistance = 0.75f;
		__this->___maxDistance_6 = (0.75f);
		// public float anglePreciseness = 0.75f;
		__this->___anglePreciseness_7 = (0.75f);
		// public bool disableWhileHolding = true;
		__this->___disableWhileHolding_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.GrabbableEventDebugger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbableEventDebugger_OnEnable_m2DEE138C13B9A3EE015BE161D834AFC5D4B3F2CF (GrabbableEventDebugger_t121E4461C55C5472A290615D1646C970F6626C57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_0_mAF263AC1F6F11D2C98FBBFE90DB9B80A08EB8AE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_1_mAC80EB3DB24BF9B1A8E8072320D152CDAA5C444E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_2_mF85E10850C4F2CF9B19B847C27A65658C4DD442C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_3_m73B6A315B13CAD4ECAC2505D0C03CD937B01E80E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_4_m505910409518670116A3FBDB9EB78F62800C5EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_5_mCCFA311DBE986BDB1BBEF471036F17B6D7633776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_6_mE5E9925B4385CFDB35CA1B36D7B84DF147B9B291_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__0_7_m488E28A2477BAE406BE8B07C0D8EF13402E46689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B2_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B2_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B2_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B2_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B1_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B1_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B1_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B1_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B4_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B4_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B4_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B4_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B3_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B3_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B3_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B3_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B6_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B6_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B6_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B6_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B5_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B5_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B5_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B5_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B8_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B8_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B8_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B8_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B7_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B7_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B7_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B7_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B10_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B10_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B10_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B10_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B9_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B9_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B9_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B9_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B12_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B12_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B12_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B12_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B11_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B11_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B11_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B11_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B14_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B14_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B14_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B14_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B13_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B13_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B13_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B13_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B16_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B16_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B16_2 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B15_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B15_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B15_2 = NULL;
	{
		// var grab = GetComponent<Grabbable>();
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0;
		L_0 = Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8(__this, Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		// grab.OnBeforeGrabEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " BEFORE GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_1 = L_0;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_2 = L_1;
		NullCheck(L_2);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_3 = L_2->___OnBeforeGrabEvent_66;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_4 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_6 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_7 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_0_mAF263AC1F6F11D2C98FBBFE90DB9B80A08EB8AE4_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_8 = L_7;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_002c:
	{
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B2_1, G_B2_0, NULL);
		NullCheck(G_B2_2);
		G_B2_2->___OnBeforeGrabEvent_66 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_9, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___OnBeforeGrabEvent_66), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_9, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnGrabEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_10 = G_B2_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_11 = L_10;
		NullCheck(L_11);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_12 = L_11->___OnGrabEvent_67;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_13 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = L_12;
		G_B3_2 = L_11;
		G_B3_3 = L_10;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			G_B4_2 = L_11;
			G_B4_3 = L_10;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_15 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_16 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_1_mAC80EB3DB24BF9B1A8E8072320D152CDAA5C444E_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_17 = L_16;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0061:
	{
		Delegate_t* L_18;
		L_18 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		G_B4_2->___OnGrabEvent_67 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_18, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___OnGrabEvent_67), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_18, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnReleaseEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " RELEASE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_19 = G_B4_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_20 = L_19;
		NullCheck(L_20);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_21 = L_20->___OnReleaseEvent_68;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_22 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_23 = L_22;
		G_B5_0 = L_23;
		G_B5_1 = L_21;
		G_B5_2 = L_20;
		G_B5_3 = L_19;
		if (L_23)
		{
			G_B6_0 = L_23;
			G_B6_1 = L_21;
			G_B6_2 = L_20;
			G_B6_3 = L_19;
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_24 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_25 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_2_mF85E10850C4F2CF9B19B847C27A65658C4DD442C_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_26 = L_25;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3), (void*)L_26);
		G_B6_0 = L_26;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0096:
	{
		Delegate_t* L_27;
		L_27 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_2);
		G_B6_2->___OnReleaseEvent_68 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_27, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_2->___OnReleaseEvent_68), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_27, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnJointBreakEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " JOINT BREAK EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_28 = G_B6_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_29 = L_28;
		NullCheck(L_29);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_30 = L_29->___OnJointBreakEvent_69;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_31 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_4;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_32 = L_31;
		G_B7_0 = L_32;
		G_B7_1 = L_30;
		G_B7_2 = L_29;
		G_B7_3 = L_28;
		if (L_32)
		{
			G_B8_0 = L_32;
			G_B8_1 = L_30;
			G_B8_2 = L_29;
			G_B8_3 = L_28;
			goto IL_00cb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_33 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_34 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_34, L_33, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_3_m73B6A315B13CAD4ECAC2505D0C03CD937B01E80E_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_35 = L_34;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_4 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_4), (void*)L_35);
		G_B8_0 = L_35;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_00cb:
	{
		Delegate_t* L_36;
		L_36 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B8_1, G_B8_0, NULL);
		NullCheck(G_B8_2);
		G_B8_2->___OnJointBreakEvent_69 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_36, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___OnJointBreakEvent_69), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_36, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnSqueezeEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " SQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_37 = G_B8_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_38 = L_37;
		NullCheck(L_38);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_39 = L_38->___OnSqueezeEvent_70;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_40 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_5;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_41 = L_40;
		G_B9_0 = L_41;
		G_B9_1 = L_39;
		G_B9_2 = L_38;
		G_B9_3 = L_37;
		if (L_41)
		{
			G_B10_0 = L_41;
			G_B10_1 = L_39;
			G_B10_2 = L_38;
			G_B10_3 = L_37;
			goto IL_0100;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_42 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_43 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_43, L_42, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_4_m505910409518670116A3FBDB9EB78F62800C5EFA_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_44 = L_43;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_5 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_5), (void*)L_44);
		G_B10_0 = L_44;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}

IL_0100:
	{
		Delegate_t* L_45;
		L_45 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B10_1, G_B10_0, NULL);
		NullCheck(G_B10_2);
		G_B10_2->___OnSqueezeEvent_70 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_45, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_2->___OnSqueezeEvent_70), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_45, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnUnsqueezeEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " UNSQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_46 = G_B10_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_47 = L_46;
		NullCheck(L_47);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_48 = L_47->___OnUnsqueezeEvent_71;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_49 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_5_6;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_50 = L_49;
		G_B11_0 = L_50;
		G_B11_1 = L_48;
		G_B11_2 = L_47;
		G_B11_3 = L_46;
		if (L_50)
		{
			G_B12_0 = L_50;
			G_B12_1 = L_48;
			G_B12_2 = L_47;
			G_B12_3 = L_46;
			goto IL_0135;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_51 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_52 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_52, L_51, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_5_mCCFA311DBE986BDB1BBEF471036F17B6D7633776_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_53 = L_52;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_5_6 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_5_6), (void*)L_53);
		G_B12_0 = L_53;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_0135:
	{
		Delegate_t* L_54;
		L_54 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B12_1, G_B12_0, NULL);
		NullCheck(G_B12_2);
		G_B12_2->___OnUnsqueezeEvent_71 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_54, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_2->___OnUnsqueezeEvent_71), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_54, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnHighlightEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " HIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_55 = G_B12_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_56 = L_55;
		NullCheck(L_56);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_57 = L_56->___OnHighlightEvent_72;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_58 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_6_7;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_59 = L_58;
		G_B13_0 = L_59;
		G_B13_1 = L_57;
		G_B13_2 = L_56;
		G_B13_3 = L_55;
		if (L_59)
		{
			G_B14_0 = L_59;
			G_B14_1 = L_57;
			G_B14_2 = L_56;
			G_B14_3 = L_55;
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_60 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_61 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_61, L_60, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_6_mE5E9925B4385CFDB35CA1B36D7B84DF147B9B291_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_62 = L_61;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_6_7 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_6_7), (void*)L_62);
		G_B14_0 = L_62;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}

IL_016a:
	{
		Delegate_t* L_63;
		L_63 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B14_1, G_B14_0, NULL);
		NullCheck(G_B14_2);
		G_B14_2->___OnHighlightEvent_72 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_63, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_2->___OnHighlightEvent_72), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_63, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnUnhighlightEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " UNHIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_64 = G_B14_3;
		NullCheck(L_64);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_65 = L_64->___OnUnhighlightEvent_73;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_66 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_7_8;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_67 = L_66;
		G_B15_0 = L_67;
		G_B15_1 = L_65;
		G_B15_2 = L_64;
		if (L_67)
		{
			G_B16_0 = L_67;
			G_B16_1 = L_65;
			G_B16_2 = L_64;
			goto IL_019e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_68 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_69 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_69, L_68, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__0_7_m488E28A2477BAE406BE8B07C0D8EF13402E46689_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_70 = L_69;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_7_8 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__0_7_8), (void*)L_70);
		G_B16_0 = L_70;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_019e:
	{
		Delegate_t* L_71;
		L_71 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B16_1, G_B16_0, NULL);
		NullCheck(G_B16_2);
		G_B16_2->___OnUnhighlightEvent_73 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_71, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_2->___OnUnhighlightEvent_73), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_71, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbableEventDebugger_OnDisable_m65A3ED6C4BDB9E8DB295679E12F65899DB7B91E6 (GrabbableEventDebugger_t121E4461C55C5472A290615D1646C970F6626C57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_0_m24E0D86EF08A3FD4BB8BCDBC1265ABD99E845475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_1_m731A156EF6C2CE0DF9D31D18CF2389C3A9BA7383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_2_m17D41B7CFFF5BC09AF2C3430F045BCDE57DB61A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_3_m87AD6E53B8C44808634743AB461D199791874177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_4_m2E808C5F35BB34C30230CCF1D27494D6A4137263_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_5_mEDB157B72045E62E9488B0B044060EE86942F3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_6_mAD25D6BE75215F8E93F0139A06052EC1DDE14B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__1_7_m80DB2FE0BCC18742C377B34C62F5026BDC28D590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B2_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B2_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B2_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B2_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B1_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B1_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B1_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B1_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B4_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B4_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B4_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B4_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B3_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B3_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B3_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B3_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B6_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B6_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B6_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B6_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B5_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B5_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B5_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B5_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B8_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B8_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B8_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B8_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B7_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B7_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B7_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B7_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B10_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B10_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B10_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B10_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B9_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B9_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B9_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B9_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B12_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B12_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B12_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B12_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B11_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B11_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B11_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B11_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B14_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B14_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B14_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B14_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B13_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B13_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B13_2 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B13_3 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B16_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B16_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B16_2 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B15_0 = NULL;
	HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* G_B15_1 = NULL;
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* G_B15_2 = NULL;
	{
		// var grab = GetComponent<Grabbable>();
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0;
		L_0 = Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8(__this, Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		// grab.OnBeforeGrabEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " BEFORE GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_1 = L_0;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_2 = L_1;
		NullCheck(L_2);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_3 = L_2->___OnBeforeGrabEvent_66;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_4 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_9;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_6 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_7 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_0_m24E0D86EF08A3FD4BB8BCDBC1265ABD99E845475_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_8 = L_7;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_9), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_002c:
	{
		Delegate_t* L_9;
		L_9 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B2_1, G_B2_0, NULL);
		NullCheck(G_B2_2);
		G_B2_2->___OnBeforeGrabEvent_66 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_9, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___OnBeforeGrabEvent_66), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_9, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnGrabEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_10 = G_B2_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_11 = L_10;
		NullCheck(L_11);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_12 = L_11->___OnGrabEvent_67;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_13 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_10;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = L_12;
		G_B3_2 = L_11;
		G_B3_3 = L_10;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			G_B4_2 = L_11;
			G_B4_3 = L_10;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_15 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_16 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_1_m731A156EF6C2CE0DF9D31D18CF2389C3A9BA7383_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_17 = L_16;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_10 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_10), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0061:
	{
		Delegate_t* L_18;
		L_18 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		G_B4_2->___OnGrabEvent_67 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_18, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___OnGrabEvent_67), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_18, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnReleaseEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " RELEASE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_19 = G_B4_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_20 = L_19;
		NullCheck(L_20);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_21 = L_20->___OnReleaseEvent_68;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_22 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_11;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_23 = L_22;
		G_B5_0 = L_23;
		G_B5_1 = L_21;
		G_B5_2 = L_20;
		G_B5_3 = L_19;
		if (L_23)
		{
			G_B6_0 = L_23;
			G_B6_1 = L_21;
			G_B6_2 = L_20;
			G_B6_3 = L_19;
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_24 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_25 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_2_m17D41B7CFFF5BC09AF2C3430F045BCDE57DB61A0_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_26 = L_25;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_11 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_11), (void*)L_26);
		G_B6_0 = L_26;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0096:
	{
		Delegate_t* L_27;
		L_27 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_2);
		G_B6_2->___OnReleaseEvent_68 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_27, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_2->___OnReleaseEvent_68), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_27, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnJointBreakEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " JOINT BREAK EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_28 = G_B6_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_29 = L_28;
		NullCheck(L_29);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_30 = L_29->___OnJointBreakEvent_69;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_31 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_3_12;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_32 = L_31;
		G_B7_0 = L_32;
		G_B7_1 = L_30;
		G_B7_2 = L_29;
		G_B7_3 = L_28;
		if (L_32)
		{
			G_B8_0 = L_32;
			G_B8_1 = L_30;
			G_B8_2 = L_29;
			G_B8_3 = L_28;
			goto IL_00cb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_33 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_34 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_34, L_33, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_3_m87AD6E53B8C44808634743AB461D199791874177_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_35 = L_34;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_3_12 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_3_12), (void*)L_35);
		G_B8_0 = L_35;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_00cb:
	{
		Delegate_t* L_36;
		L_36 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B8_1, G_B8_0, NULL);
		NullCheck(G_B8_2);
		G_B8_2->___OnJointBreakEvent_69 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_36, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___OnJointBreakEvent_69), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_36, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnSqueezeEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " SQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_37 = G_B8_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_38 = L_37;
		NullCheck(L_38);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_39 = L_38->___OnSqueezeEvent_70;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_40 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_4_13;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_41 = L_40;
		G_B9_0 = L_41;
		G_B9_1 = L_39;
		G_B9_2 = L_38;
		G_B9_3 = L_37;
		if (L_41)
		{
			G_B10_0 = L_41;
			G_B10_1 = L_39;
			G_B10_2 = L_38;
			G_B10_3 = L_37;
			goto IL_0100;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_42 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_43 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_43, L_42, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_4_m2E808C5F35BB34C30230CCF1D27494D6A4137263_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_44 = L_43;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_4_13 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_4_13), (void*)L_44);
		G_B10_0 = L_44;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}

IL_0100:
	{
		Delegate_t* L_45;
		L_45 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B10_1, G_B10_0, NULL);
		NullCheck(G_B10_2);
		G_B10_2->___OnSqueezeEvent_70 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_45, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_2->___OnSqueezeEvent_70), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_45, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnUnsqueezeEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " UNSQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_46 = G_B10_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_47 = L_46;
		NullCheck(L_47);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_48 = L_47->___OnUnsqueezeEvent_71;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_49 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_5_14;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_50 = L_49;
		G_B11_0 = L_50;
		G_B11_1 = L_48;
		G_B11_2 = L_47;
		G_B11_3 = L_46;
		if (L_50)
		{
			G_B12_0 = L_50;
			G_B12_1 = L_48;
			G_B12_2 = L_47;
			G_B12_3 = L_46;
			goto IL_0135;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_51 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_52 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_52, L_51, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_5_mEDB157B72045E62E9488B0B044060EE86942F3D3_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_53 = L_52;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_5_14 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_5_14), (void*)L_53);
		G_B12_0 = L_53;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_0135:
	{
		Delegate_t* L_54;
		L_54 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B12_1, G_B12_0, NULL);
		NullCheck(G_B12_2);
		G_B12_2->___OnUnsqueezeEvent_71 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_54, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_2->___OnUnsqueezeEvent_71), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_54, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnHighlightEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " HIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_55 = G_B12_3;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_56 = L_55;
		NullCheck(L_56);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_57 = L_56->___OnHighlightEvent_72;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_58 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_6_15;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_59 = L_58;
		G_B13_0 = L_59;
		G_B13_1 = L_57;
		G_B13_2 = L_56;
		G_B13_3 = L_55;
		if (L_59)
		{
			G_B14_0 = L_59;
			G_B14_1 = L_57;
			G_B14_2 = L_56;
			G_B14_3 = L_55;
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_60 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_61 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_61, L_60, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_6_mAD25D6BE75215F8E93F0139A06052EC1DDE14B4F_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_62 = L_61;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_6_15 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_6_15), (void*)L_62);
		G_B14_0 = L_62;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}

IL_016a:
	{
		Delegate_t* L_63;
		L_63 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B14_1, G_B14_0, NULL);
		NullCheck(G_B14_2);
		G_B14_2->___OnHighlightEvent_72 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_63, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_2->___OnHighlightEvent_72), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_63, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// grab.OnUnhighlightEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " UNHIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_64 = G_B14_3;
		NullCheck(L_64);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_65 = L_64->___OnUnhighlightEvent_73;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_66 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_7_16;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_67 = L_66;
		G_B15_0 = L_67;
		G_B15_1 = L_65;
		G_B15_2 = L_64;
		if (L_67)
		{
			G_B16_0 = L_67;
			G_B16_1 = L_65;
			G_B16_2 = L_64;
			goto IL_019e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_68 = ((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_69 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_69, L_68, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__1_7_m80DB2FE0BCC18742C377B34C62F5026BDC28D590_RuntimeMethod_var), NULL);
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_70 = L_69;
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_7_16 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9__1_7_16), (void*)L_70);
		G_B16_0 = L_70;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_019e:
	{
		Delegate_t* L_71;
		L_71 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(G_B16_1, G_B16_0, NULL);
		NullCheck(G_B16_2);
		G_B16_2->___OnUnhighlightEvent_73 = ((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_71, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_2->___OnUnhighlightEvent_73), (void*)((HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)CastclassSealed((RuntimeObject*)L_71, HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbableEventDebugger__ctor_m40F90620BA1A13763F448B5FA51736962EE84F4A (GrabbableEventDebugger_t121E4461C55C5472A290615D1646C970F6626C57* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCA5FDAE380B1BA1468E91460B17EE82EBDD3E8B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* L_0 = (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF*)il2cpp_codegen_object_new(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA1E45E3F5DC9AE87F037EBF00286AC7B908B643D(L_0, NULL);
		((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA1E45E3F5DC9AE87F037EBF00286AC7B908B643D (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_0(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_0_mAF263AC1F6F11D2C98FBBFE90DB9B80A08EB8AE4 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnBeforeGrabEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " BEFORE GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnBeforeGrabEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " BEFORE GRAB EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_1(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_1_mAC80EB3DB24BF9B1A8E8072320D152CDAA5C444E (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnGrabEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnGrabEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " GRAB EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_2(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_2_mF85E10850C4F2CF9B19B847C27A65658C4DD442C (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnReleaseEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " RELEASE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnReleaseEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " RELEASE EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_3(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_3_m73B6A315B13CAD4ECAC2505D0C03CD937B01E80E (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnJointBreakEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " JOINT BREAK EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnJointBreakEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " JOINT BREAK EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_4(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_4_m505910409518670116A3FBDB9EB78F62800C5EFA (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnSqueezeEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " SQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnSqueezeEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " SQUEEZE EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_5(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_5_mCCFA311DBE986BDB1BBEF471036F17B6D7633776 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnUnsqueezeEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " UNSQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnUnsqueezeEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " UNSQUEEZE EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_6(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_6_mE5E9925B4385CFDB35CA1B36D7B84DF147B9B291 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnHighlightEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " HIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnHighlightEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " HIGHLIGHT EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnEnable>b__0_7(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__0_7_m488E28A2477BAE406BE8B07C0D8EF13402E46689 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnUnhighlightEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " UNHIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnUnhighlightEvent += (hand, grabbable) => { Debug.Log(grabbable.name + " UNHIGHLIGHT EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_0(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_0_m24E0D86EF08A3FD4BB8BCDBC1265ABD99E845475 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnBeforeGrabEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " BEFORE GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnBeforeGrabEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " BEFORE GRAB EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_1(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_1_m731A156EF6C2CE0DF9D31D18CF2389C3A9BA7383 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnGrabEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " GRAB EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnGrabEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " GRAB EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_2(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_2_m17D41B7CFFF5BC09AF2C3430F045BCDE57DB61A0 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnReleaseEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " RELEASE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnReleaseEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " RELEASE EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_3(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_3_m87AD6E53B8C44808634743AB461D199791874177 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnJointBreakEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " JOINT BREAK EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnJointBreakEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " JOINT BREAK EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_4(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_4_m2E808C5F35BB34C30230CCF1D27494D6A4137263 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnSqueezeEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " SQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnSqueezeEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " SQUEEZE EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_5(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_5_mEDB157B72045E62E9488B0B044060EE86942F3D3 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnUnsqueezeEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " UNSQUEEZE EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnUnsqueezeEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " UNSQUEEZE EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_6(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_6_mAD25D6BE75215F8E93F0139A06052EC1DDE14B4F (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnHighlightEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " HIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnHighlightEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " HIGHLIGHT EVENT"); };
		return;
	}
}
// System.Void Autohand.Demo.GrabbableEventDebugger/<>c::<OnDisable>b__1_7(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__1_7_m80DB2FE0BCC18742C377B34C62F5026BDC28D590 (U3CU3Ec_tED9270F9CD2D6EC9DD19EFABD67C53E418BFD0EF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grab.OnUnhighlightEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " UNHIGHLIGHT EVENT"); };
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = ___grabbable1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// grab.OnUnhighlightEvent -= (hand, grabbable) => { Debug.Log(grabbable.name + " UNHIGHLIGHT EVENT"); };
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
// System.Void Autohand.Demo.HandEventDebugger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_OnEnable_mB9C46C0FD9745604CDEBE7D50E28EAF3C03DD415 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_0_mD567EFFA7D1CB4E0293F45722E1180E7C17BECAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_1_m6F1AADDFBE36AA3D88AC096518CFFD96BC75D6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_2_m9CDD0C73BF24A49FCA9A8940FD87CA9D6E4EE76A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_3_m4268D91FB539E0509D5BEED75071177D7B2DFF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_4_mEE4159D8E4941B6CBE23FC0AFB6F09E21B74B716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_5_m26D5775C31C31943C058B05A2F1D553F583E4BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_6_m3B91DE2F88A15BAF8407BEA3F3F05A7B0828FC02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnEnableU3Eb__2_7_m223F52E99A0283C7C57916DE2C90355B4FB43603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* V_0 = NULL;
	{
		// var hand1 = GetComponent<Hand>();
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0;
		L_0 = Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775(__this, Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775_RuntimeMethod_var);
		V_0 = L_0;
		// hand1.OnBeforeGrabbed += (hand, grabbable) => { Debug.Log(hand.name + " BEFORE GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_1 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_2 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_2, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_0_mD567EFFA7D1CB4E0293F45722E1180E7C17BECAA_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Hand_add_OnBeforeGrabbed_mC7C5621CF9C87780CF15A5EEF409ACEE22F7728B(L_1, L_2, NULL);
		// hand1.OnGrabbed += (hand, grabbable) => { Debug.Log(hand.name + " GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_3 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_4 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_4, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_1_m6F1AADDFBE36AA3D88AC096518CFFD96BC75D6C3_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Hand_add_OnGrabbed_m1DCDF51519BF3EF5563811800F41AEBF35FC40B8(L_3, L_4, NULL);
		// hand1.OnReleased += (hand, grabbable) => { Debug.Log(hand.name + " RELEASE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_5 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_6 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_6, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_2_m9CDD0C73BF24A49FCA9A8940FD87CA9D6E4EE76A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Hand_add_OnReleased_m09845DCECE2015F071304ACC3C8A42894719D133(L_5, L_6, NULL);
		// hand1.OnGrabJointBreak += (hand, grabbable) => { Debug.Log(hand.name + " JOINT BREAK EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_7 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_8 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_8, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_3_m4268D91FB539E0509D5BEED75071177D7B2DFF5D_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Hand_add_OnGrabJointBreak_mB65C913F81DB0075E2AD2B21E6972135002B9E31(L_7, L_8, NULL);
		// if(showSqueezeEvents) hand1.OnSqueezed += (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		bool L_9 = __this->___showSqueezeEvents_4;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// if(showSqueezeEvents) hand1.OnSqueezed += (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_10 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_11 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_11, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_4_mEE4159D8E4941B6CBE23FC0AFB6F09E21B74B716_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Hand_add_OnSqueezed_m03AF48AA4B6AF45F030AF7927D2B350317ED56EA(L_10, L_11, NULL);
	}

IL_0069:
	{
		// if (showSqueezeEvents) hand1.OnUnsqueezed += (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		bool L_12 = __this->___showSqueezeEvents_4;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// if (showSqueezeEvents) hand1.OnUnsqueezed += (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_13 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_14 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_14, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_5_m26D5775C31C31943C058B05A2F1D553F583E4BBF_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Hand_add_OnUnsqueezed_m37337E6F7711E0C830F18EBF61D3DB20EAF98267(L_13, L_14, NULL);
	}

IL_0083:
	{
		// if (showHighlightEvents) hand1.OnHighlight += (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		bool L_15 = __this->___showHighlightEvents_5;
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// if (showHighlightEvents) hand1.OnHighlight += (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_16 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_17 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_17, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_6_m3B91DE2F88A15BAF8407BEA3F3F05A7B0828FC02_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		Hand_add_OnHighlight_mC15165F641E7DB4B687DFC818CB2DDD10002EFD6(L_16, L_17, NULL);
	}

IL_009d:
	{
		// if (showHighlightEvents) hand1.OnStopHighlight += (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		bool L_18 = __this->___showHighlightEvents_5;
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		// if (showHighlightEvents) hand1.OnStopHighlight += (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_19 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_20 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_20, __this, (intptr_t)((void*)HandEventDebugger_U3COnEnableU3Eb__2_7_m223F52E99A0283C7C57916DE2C90355B4FB43603_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Hand_add_OnStopHighlight_m125A678382C6DD53ECC67AA3C4CFD4FAE1A7CC3F(L_19, L_20, NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_OnDisable_mE37C0C0B27F595EA6E514772159C5E62F5C93E96 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_0_m523ABE50F8383259C06107B0AFE8F637C4C25003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_1_m8B049F39862C700919663491A8EDCE6FE5A026C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_2_mC01DA189865C58BF22E761A68D33F791816A3255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_3_m4E338CDDC401803272DBCD872F4B1334E3DA7FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_4_mC6047D138E3C3F7DFF3DF4CFD4044DB1A39486F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_5_m675F4150814BA5DCB84F0582121371C3C2522DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_6_m06DA3BAFF8F97A6BABB21FBDE60C8F8E8F09034A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEventDebugger_U3COnDisableU3Eb__3_7_mDEC6DF86D29E3B02342D00D9D3BCA9CF353C86B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* V_0 = NULL;
	{
		// var hand1 = GetComponent<Hand>();
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0;
		L_0 = Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775(__this, Component_GetComponent_TisHand_t3D95941FB981751FC47A570B0884955C1F0F517A_m21C1A2FAFAE325B2D6ED050FDE5D7325791FF775_RuntimeMethod_var);
		V_0 = L_0;
		// hand1.OnBeforeGrabbed -= (hand, grabbable) => { Debug.Log(hand.name + " BEFORE GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_1 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_2 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_2, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_0_m523ABE50F8383259C06107B0AFE8F637C4C25003_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Hand_remove_OnBeforeGrabbed_m77609FF8B29D76CF8312B7EB110E85C384EBC125(L_1, L_2, NULL);
		// hand1.OnGrabbed -= (hand, grabbable) => { Debug.Log(hand.name + " GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_3 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_4 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_4, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_1_m8B049F39862C700919663491A8EDCE6FE5A026C4_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Hand_remove_OnGrabbed_mD8F3359081C181A7F4514FCF71B7A9491B78A776(L_3, L_4, NULL);
		// hand1.OnReleased -= (hand, grabbable) => { Debug.Log(hand.name + " RELEASE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_5 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_6 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_6, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_2_mC01DA189865C58BF22E761A68D33F791816A3255_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Hand_remove_OnReleased_m22A512EAF0994D1D72451A8770563B070115FC29(L_5, L_6, NULL);
		// hand1.OnGrabJointBreak -= (hand, grabbable) => { Debug.Log(hand.name + " CONNECTION BREAK EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_7 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_8 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_8, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_3_m4E338CDDC401803272DBCD872F4B1334E3DA7FD1_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Hand_remove_OnGrabJointBreak_m33DEAAABF7B5834D2B78507C4A6FD975CED54323(L_7, L_8, NULL);
		// if (showSqueezeEvents) hand1.OnSqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		bool L_9 = __this->___showSqueezeEvents_4;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// if (showSqueezeEvents) hand1.OnSqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_10 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_11 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_11, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_4_mC6047D138E3C3F7DFF3DF4CFD4044DB1A39486F3_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Hand_remove_OnSqueezed_mC999A4EB500378794F7F00C943512D4510C7D8D9(L_10, L_11, NULL);
	}

IL_0069:
	{
		// if (showSqueezeEvents) hand1.OnUnsqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		bool L_12 = __this->___showSqueezeEvents_4;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// if (showSqueezeEvents) hand1.OnUnsqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_13 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_14 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_14, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_5_m675F4150814BA5DCB84F0582121371C3C2522DD6_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Hand_remove_OnUnsqueezed_mFD57F7591BCDA153C5EAFE60DAB618879E714C8F(L_13, L_14, NULL);
	}

IL_0083:
	{
		// if (showHighlightEvents) hand1.OnHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		bool L_15 = __this->___showHighlightEvents_5;
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// if (showHighlightEvents) hand1.OnHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_16 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_17 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_17, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_6_m06DA3BAFF8F97A6BABB21FBDE60C8F8E8F09034A_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		Hand_remove_OnHighlight_m4F2C3F9F25694AFA4077516B0DD97222767C8293(L_16, L_17, NULL);
	}

IL_009d:
	{
		// if (showHighlightEvents) hand1.OnStopHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		bool L_18 = __this->___showHighlightEvents_5;
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		// if (showHighlightEvents) hand1.OnStopHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_19 = V_0;
		HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36* L_20 = (HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36*)il2cpp_codegen_object_new(HandGrabEvent_tABF419B7DF9C343F3879C5DB1BF11BDF14FF4D36_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		HandGrabEvent__ctor_m2F70D9C0E5B9FB2A5E4A4985E35323078FBA95E8(L_20, __this, (intptr_t)((void*)HandEventDebugger_U3COnDisableU3Eb__3_7_mDEC6DF86D29E3B02342D00D9D3BCA9CF353C86B6_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Hand_remove_OnStopHighlight_mB2FAF592990D51F7AA613E89F3CD66F06557164A(L_19, L_20, NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger__ctor_m9BA129C349163AC4D301228036E220EB6426566F (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, const RuntimeMethod* method) 
{
	{
		// public bool showSqueezeEvents = true;
		__this->___showSqueezeEvents_4 = (bool)1;
		// public bool showHighlightEvents = true;
		__this->___showHighlightEvents_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_0(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_0_mD567EFFA7D1CB4E0293F45722E1180E7C17BECAA (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnBeforeGrabbed += (hand, grabbable) => { Debug.Log(hand.name + " BEFORE GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnBeforeGrabbed += (hand, grabbable) => { Debug.Log(hand.name + " BEFORE GRAB EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_1(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_1_m6F1AADDFBE36AA3D88AC096518CFFD96BC75D6C3 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnGrabbed += (hand, grabbable) => { Debug.Log(hand.name + " GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnGrabbed += (hand, grabbable) => { Debug.Log(hand.name + " GRAB EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_2(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_2_m9CDD0C73BF24A49FCA9A8940FD87CA9D6E4EE76A (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnReleased += (hand, grabbable) => { Debug.Log(hand.name + " RELEASE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnReleased += (hand, grabbable) => { Debug.Log(hand.name + " RELEASE EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_3(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_3_m4268D91FB539E0509D5BEED75071177D7B2DFF5D (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnGrabJointBreak += (hand, grabbable) => { Debug.Log(hand.name + " JOINT BREAK EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral8761073E5506F8C209A50C17DD687A9F937BBEA2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnGrabJointBreak += (hand, grabbable) => { Debug.Log(hand.name + " JOINT BREAK EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_4(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_4_mEE4159D8E4941B6CBE23FC0AFB6F09E21B74B716 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(showSqueezeEvents) hand1.OnSqueezed += (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if(showSqueezeEvents) hand1.OnSqueezed += (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_5(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_5_m26D5775C31C31943C058B05A2F1D553F583E4BBF (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showSqueezeEvents) hand1.OnUnsqueezed += (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showSqueezeEvents) hand1.OnUnsqueezed += (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_6(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_6_m3B91DE2F88A15BAF8407BEA3F3F05A7B0828FC02 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showHighlightEvents) hand1.OnHighlight += (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showHighlightEvents) hand1.OnHighlight += (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnEnable>b__2_7(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnEnableU3Eb__2_7_m223F52E99A0283C7C57916DE2C90355B4FB43603 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showHighlightEvents) hand1.OnStopHighlight += (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showHighlightEvents) hand1.OnStopHighlight += (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_0(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_0_m523ABE50F8383259C06107B0AFE8F637C4C25003 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnBeforeGrabbed -= (hand, grabbable) => { Debug.Log(hand.name + " BEFORE GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral550F01AC5DFBC836E112CEFAD796FB3DECE43872, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnBeforeGrabbed -= (hand, grabbable) => { Debug.Log(hand.name + " BEFORE GRAB EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_1(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_1_m8B049F39862C700919663491A8EDCE6FE5A026C4 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnGrabbed -= (hand, grabbable) => { Debug.Log(hand.name + " GRAB EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralAEEB42F570662DE608247B1BE856DB03AB53F755, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnGrabbed -= (hand, grabbable) => { Debug.Log(hand.name + " GRAB EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_2(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_2_mC01DA189865C58BF22E761A68D33F791816A3255 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnReleased -= (hand, grabbable) => { Debug.Log(hand.name + " RELEASE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA4C6C4E87CDAE51E8FDB06FFFF174AF6CA6FE4D4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnReleased -= (hand, grabbable) => { Debug.Log(hand.name + " RELEASE EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_3(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_3_m4E338CDDC401803272DBCD872F4B1334E3DA7FD1 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574B153BFC1CB2F24D39532A6C4B16E13A0A9F97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand1.OnGrabJointBreak -= (hand, grabbable) => { Debug.Log(hand.name + " CONNECTION BREAK EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral574B153BFC1CB2F24D39532A6C4B16E13A0A9F97, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// hand1.OnGrabJointBreak -= (hand, grabbable) => { Debug.Log(hand.name + " CONNECTION BREAK EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_4(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_4_mC6047D138E3C3F7DFF3DF4CFD4044DB1A39486F3 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showSqueezeEvents) hand1.OnSqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralCF91D004A2549E9CF71859A3B3604E0DB6C13B80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showSqueezeEvents) hand1.OnSqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " SQUEEZE EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_5(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_5_m675F4150814BA5DCB84F0582121371C3C2522DD6 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showSqueezeEvents) hand1.OnUnsqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral5083C8A3082ACEFE439194E57289BD2F67F9233C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showSqueezeEvents) hand1.OnUnsqueezed -= (hand, grabbable) => { Debug.Log(hand.name + " UNSQUEEZE EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_6(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_6_m06DA3BAFF8F97A6BABB21FBDE60C8F8E8F09034A (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showHighlightEvents) hand1.OnHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral2904DE8499208ADF828370F8791E656884D2E5D2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showHighlightEvents) hand1.OnHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " HIGHLIGHT EVENT", this); };
		return;
	}
}
// System.Void Autohand.Demo.HandEventDebugger::<OnDisable>b__3_7(Autohand.Hand,Autohand.Grabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandEventDebugger_U3COnDisableU3Eb__3_7_mDEC6DF86D29E3B02342D00D9D3BCA9CF353C86B6 (HandEventDebugger_t45616F116276199D765EE30817A57D73204C33C7* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showHighlightEvents) hand1.OnStopHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral21DC6998EA43084E6D5961633BA313CCC1B38AC0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, __this, NULL);
		// if (showHighlightEvents) hand1.OnStopHighlight -= (hand, grabbable) => { Debug.Log(hand.name + " UNHIGHLIGHT EVENT", this); };
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
// System.Void Autohand.Demo.HandTouchEventDebugger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTouchEventDebugger_OnEnable_m4D8C41211F5EA26D3EA1D6FC083120A902F169D9 (HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTouchEventDebugger_StartTouch_mF51A16239F85FBC158734F7FBCB4B1D54EC49B39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTouchEventDebugger_StopTouch_m5C56BD4E9E47E313D2566393A720215FFEEEA63B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchEvent.HandStartTouchEvent += StartTouch;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_0 = __this->___touchEvent_4;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_1 = L_0;
		NullCheck(L_1);
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_2 = L_1->___HandStartTouchEvent_8;
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_3 = (HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)il2cpp_codegen_object_new(HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandEvent__ctor_mF7EBE24EDC040A9573B79307FE58D7F57FB1742D(L_3, __this, (intptr_t)((void*)HandTouchEventDebugger_StartTouch_mF51A16239F85FBC158734F7FBCB4B1D54EC49B39_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___HandStartTouchEvent_8 = ((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_4, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___HandStartTouchEvent_8), (void*)((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_4, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var)));
		// touchEvent.HandStopTouchEvent += StopTouch;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_5 = __this->___touchEvent_4;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_6 = L_5;
		NullCheck(L_6);
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_7 = L_6->___HandStopTouchEvent_9;
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_8 = (HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)il2cpp_codegen_object_new(HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		HandEvent__ctor_mF7EBE24EDC040A9573B79307FE58D7F57FB1742D(L_8, __this, (intptr_t)((void*)HandTouchEventDebugger_StopTouch_m5C56BD4E9E47E313D2566393A720215FFEEEA63B_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		NullCheck(L_6);
		L_6->___HandStopTouchEvent_9 = ((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_9, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___HandStopTouchEvent_9), (void*)((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_9, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.HandTouchEventDebugger::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTouchEventDebugger_OnDisable_mB87B359A2CF072D8DB0A19882DBB773E82A37CCD (HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTouchEventDebugger_StartTouch_mF51A16239F85FBC158734F7FBCB4B1D54EC49B39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTouchEventDebugger_StopTouch_m5C56BD4E9E47E313D2566393A720215FFEEEA63B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchEvent.HandStartTouchEvent -= StartTouch;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_0 = __this->___touchEvent_4;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_1 = L_0;
		NullCheck(L_1);
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_2 = L_1->___HandStartTouchEvent_8;
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_3 = (HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)il2cpp_codegen_object_new(HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandEvent__ctor_mF7EBE24EDC040A9573B79307FE58D7F57FB1742D(L_3, __this, (intptr_t)((void*)HandTouchEventDebugger_StartTouch_mF51A16239F85FBC158734F7FBCB4B1D54EC49B39_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___HandStartTouchEvent_8 = ((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_4, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___HandStartTouchEvent_8), (void*)((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_4, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var)));
		// touchEvent.HandStopTouchEvent -= StopTouch;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_5 = __this->___touchEvent_4;
		HandTouchEvent_t075CFB4BA044053831AC0EA592146E52E3BE7F3F* L_6 = L_5;
		NullCheck(L_6);
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_7 = L_6->___HandStopTouchEvent_9;
		HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B* L_8 = (HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)il2cpp_codegen_object_new(HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		HandEvent__ctor_mF7EBE24EDC040A9573B79307FE58D7F57FB1742D(L_8, __this, (intptr_t)((void*)HandTouchEventDebugger_StopTouch_m5C56BD4E9E47E313D2566393A720215FFEEEA63B_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_7, L_8, NULL);
		NullCheck(L_6);
		L_6->___HandStopTouchEvent_9 = ((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_9, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___HandStopTouchEvent_9), (void*)((HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B*)CastclassSealed((RuntimeObject*)L_9, HandEvent_tF4FC484B69266D0EDDF4B6B3E71FEA22C11B860B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.HandTouchEventDebugger::StartTouch(Autohand.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTouchEventDebugger_StartTouch_mF51A16239F85FBC158734F7FBCB4B1D54EC49B39 (HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3158A1375FD5BCEC3D387CC3B7CC90D786806278);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Start Touch: " + hand.name);
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3158A1375FD5BCEC3D387CC3B7CC90D786806278, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.HandTouchEventDebugger::StopTouch(Autohand.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTouchEventDebugger_StopTouch_m5C56BD4E9E47E313D2566393A720215FFEEEA63B (HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF* __this, Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral460CD9C89FB138209FBACD607F760ACD1D994171);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stop Touch: " + hand.name);
		Hand_t3D95941FB981751FC47A570B0884955C1F0F517A* L_0 = ___hand0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral460CD9C89FB138209FBACD607F760ACD1D994171, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.HandTouchEventDebugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTouchEventDebugger__ctor_m73B7C920DBDB1BCB2B30BB89E972BE42398B2166 (HandTouchEventDebugger_t9A5842156BE2BC5B379FD30DEA565493AE32B3FF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autohand.Demo.Smash::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_Start_mFF66FF53C15828A79FC1888D54B35F3A076DC604 (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051_m656F1A79D64989507ED495E1BDE28B0CC2831FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smash_U3CStartU3Eb__11_0_m9E5C3103B1FBAC856089DBB0BD852FFD36D1C3B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* V_0 = NULL;
	GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051* V_1 = NULL;
	{
		// if(!(grabbable = GetComponent<Grabbable>())){
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0;
		L_0 = Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8(__this, Component_GetComponent_TisGrabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F_mCB582D051F1752510D25B4B2DC2D2AC05E8A90C8_RuntimeMethod_var);
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_1 = L_0;
		V_0 = L_1;
		__this->___grabbable_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabbable_14), (void*)L_1);
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// if(grabChild = GetComponent<GrabbableChild>())
		GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051* L_4;
		L_4 = Component_GetComponent_TisGrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051_m656F1A79D64989507ED495E1BDE28B0CC2831FDA(__this, Component_GetComponent_TisGrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051_m656F1A79D64989507ED495E1BDE28B0CC2831FDA_RuntimeMethod_var);
		GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051* L_5 = L_4;
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// grabbable = grabChild.grabParent;
		GrabbableChild_t13750EF156328D47DC38658D64D53F199E4F1051* L_7 = V_1;
		NullCheck(L_7);
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_8 = L_7->___grabParent_4;
		__this->___grabbable_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabbable_14), (void*)L_8);
	}

IL_0031:
	{
		// OnSmashEvent += (smasher, smashable) => { OnSmash?.Invoke(); };
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_9 = __this->___OnSmashEvent_13;
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_10 = (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*)il2cpp_codegen_object_new(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SmashEvent__ctor_mF395864FF833A50024471348AA588797B6D9743B(L_10, __this, (intptr_t)((void*)Smash_U3CStartU3Eb__11_0_m9E5C3103B1FBAC856089DBB0BD852FFD36D1C3B9_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		__this->___OnSmashEvent_13 = ((SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*)CastclassSealed((RuntimeObject*)L_11, SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnSmashEvent_13), (void*)((SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*)CastclassSealed((RuntimeObject*)L_11, SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.Smash::DelayedSmash(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_DelayedSmash_mCA07CA34A5E938908508E899744198193899027C (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, float ___delay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D1FEAB44410E759492C2C36E5593BB9293A27C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("DoSmash", delay);
		float L_0 = ___delay0;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral4D1FEAB44410E759492C2C36E5593BB9293A27C5, L_0, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.Smash::DoSmash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_DoSmash_mC874BE6D055E8D1B9F0A15EE304CC7E013BF2C23 (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, const RuntimeMethod* method) 
{
	{
		// DoSmash(null);
		Smash_DoSmash_mB2959E70DBF460519C991D327A9D76E09C7E5B3F(__this, (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Autohand.Demo.Smash::DoSmash(Autohand.Demo.Smasher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_DoSmash_mB2959E70DBF460519C991D327A9D76E09C7E5B3F (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smash0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoHandExtensions_CanGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mE3D6B8CFEB15ED3C405AAE7193D1D8BABD76C53E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* G_B12_0 = NULL;
	SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* G_B11_0 = NULL;
	{
		// if(effect){
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___effect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00d6;
		}
	}
	{
		// if(createNewEffect)
		bool L_2 = __this->___createNewEffect_8;
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// particles = Instantiate(effect, grabbable.transform.position, grabbable.transform.rotation);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___effect_7;
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_4 = __this->___grabbable_14;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_7 = __this->___grabbable_14;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10;
		L_10 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_3, L_6, L_9, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		V_0 = L_10;
		goto IL_004d;
	}

IL_0046:
	{
		// particles = effect;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->___effect_7;
		V_0 = L_11;
	}

IL_004d:
	{
		// particles.transform.parent = null;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_13, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// particles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = V_0;
		NullCheck(L_14);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_14, NULL);
		// if(applyVelocityOnSmash && ((rb = grabbable.body) || gameObject.CanGetComponent(out rb))){
		bool L_15 = __this->___applyVelocityOnSmash_9;
		if (!L_15)
		{
			goto IL_00d6;
		}
	}
	{
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_16 = __this->___grabbable_14;
		NullCheck(L_16);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = ((GrabbableBase_tBB1C89A2FFC63517613714466E5CADE73093F1B5*)L_16)->___body_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = L_17;
		V_1 = L_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		if (L_19)
		{
			goto IL_008a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_21;
		L_21 = AutoHandExtensions_CanGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mE3D6B8CFEB15ED3C405AAE7193D1D8BABD76C53E(L_20, (&V_1), AutoHandExtensions_CanGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mE3D6B8CFEB15ED3C405AAE7193D1D8BABD76C53E_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00d6;
		}
	}

IL_008a:
	{
		// ParticleSystem.VelocityOverLifetimeModule module = particles.velocityOverLifetime;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = V_0;
		NullCheck(L_22);
		VelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56 L_23;
		L_23 = ParticleSystem_get_velocityOverLifetime_m84189E42E4B97EF44B66BC1FBB9FA0F15F05B535(L_22, NULL);
		V_2 = L_23;
		// module.x = rb.velocity.x;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = V_1;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_24, NULL);
		float L_26 = L_25.___x_2;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_27;
		L_27 = MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086(L_26, NULL);
		VelocityOverLifetimeModule_set_x_m667368604CF8D09F133E552E21CBD3DC344281A0((&V_2), L_27, NULL);
		// module.y = rb.velocity.y;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = V_1;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_28, NULL);
		float L_30 = L_29.___y_3;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_31;
		L_31 = MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086(L_30, NULL);
		VelocityOverLifetimeModule_set_y_m4B08D16D7F274567CC18790702C8F3C53A443089((&V_2), L_31, NULL);
		// module.z = rb.velocity.z;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32 = V_1;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_32, NULL);
		float L_34 = L_33.___z_4;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086(L_34, NULL);
		VelocityOverLifetimeModule_set_z_m8B5A03C2D6E06CD7C6177BD321E9121E96D1D889((&V_2), L_35, NULL);
	}

IL_00d6:
	{
		// if(smashSound)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_36 = __this->___smashSound_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_36, NULL);
		if (!L_37)
		{
			goto IL_00ff;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(smashSound, transform.position, smashVolume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_38 = __this->___smashSound_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = __this->___smashVolume_11;
		AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD(L_38, L_40, L_41, NULL);
	}

IL_00ff:
	{
		// OnSmashEvent?.Invoke(smash, this);
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_42 = __this->___OnSmashEvent_13;
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_43 = L_42;
		G_B11_0 = L_43;
		if (L_43)
		{
			G_B12_0 = L_43;
			goto IL_010b;
		}
	}
	{
		goto IL_0112;
	}

IL_010b:
	{
		Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* L_44 = ___smash0;
		NullCheck(G_B12_0);
		SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_inline(G_B12_0, L_44, __this, NULL);
	}

IL_0112:
	{
		// if((destroyOnSmash || releaseOnSmash) && grabbable)
		bool L_45 = __this->___destroyOnSmash_5;
		if (L_45)
		{
			goto IL_0122;
		}
	}
	{
		bool L_46 = __this->___releaseOnSmash_6;
		if (!L_46)
		{
			goto IL_013a;
		}
	}

IL_0122:
	{
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_47 = __this->___grabbable_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_47, NULL);
		if (!L_48)
		{
			goto IL_013a;
		}
	}
	{
		// grabbable.ForceHandsRelease();
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_49 = __this->___grabbable_14;
		NullCheck(L_49);
		VirtualActionInvoker0::Invoke(21 /* System.Void Autohand.Grabbable::ForceHandsRelease() */, L_49);
	}

IL_013a:
	{
		// if(destroyOnSmash)
		bool L_50 = __this->___destroyOnSmash_5;
		if (!L_50)
		{
			goto IL_014d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_51, NULL);
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void Autohand.Demo.Smash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash__ctor_m995F30F8C36A74AA3E338D9F585477764D0847CB (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, const RuntimeMethod* method) 
{
	{
		// public float smashForce = 1;
		__this->___smashForce_4 = (1.0f);
		// public bool createNewEffect = true;
		__this->___createNewEffect_8 = (bool)1;
		// public bool applyVelocityOnSmash = true;
		__this->___applyVelocityOnSmash_9 = (bool)1;
		// public float smashVolume = 1f;
		__this->___smashVolume_11 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Autohand.Demo.Smash::<Start>b__11_0(Autohand.Demo.Smasher,Autohand.Demo.Smash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smash_U3CStartU3Eb__11_0_m9E5C3103B1FBAC856089DBB0BD852FFD36D1C3B9 (Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// OnSmashEvent += (smasher, smashable) => { OnSmash?.Invoke(); };
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnSmash_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// OnSmashEvent += (smasher, smashable) => { OnSmash?.Invoke(); };
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
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_Multicast(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* currentDelegate = reinterpret_cast<SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___smasher0, ___smashable1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenInst(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	NullCheck(___smasher0);
	typedef void (*FunctionPointerType) (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___smasher0, ___smashable1, method);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenStatic(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___smasher0, ___smashable1, method);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenStaticInvoker(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* >::Invoke(__this->___method_ptr_0, method, NULL, ___smasher0, ___smashable1);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_ClosedStaticInvoker(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___smasher0, ___smashable1);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenVirtual(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	NullCheck(___smasher0);
	VirtualActionInvoker1< Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* >::Invoke(il2cpp_codegen_method_get_slot(method), ___smasher0, ___smashable1);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenInterface(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	NullCheck(___smasher0);
	InterfaceActionInvoker1< Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___smasher0, ___smashable1);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenGenericVirtual(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	NullCheck(___smasher0);
	GenericVirtualActionInvoker1< Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* >::Invoke(method, ___smasher0, ___smashable1);
}
void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenGenericInterface(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method)
{
	NullCheck(___smasher0);
	GenericInterfaceActionInvoker1< Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* >::Invoke(method, ___smasher0, ___smashable1);
}
// System.Void Autohand.Demo.SmashEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmashEvent__ctor_mF395864FF833A50024471348AA588797B6D9743B (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_Multicast;
}
// System.Void Autohand.Demo.SmashEvent::Invoke(Autohand.Demo.Smasher,Autohand.Demo.Smash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660 (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___smasher0, ___smashable1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Autohand.Demo.SmashEvent::BeginInvoke(Autohand.Demo.Smasher,Autohand.Demo.Smash,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmashEvent_BeginInvoke_m09AF772E285E31DF3F97B6AFDD657E2D76E6146E (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___smasher0;
	__d_args[1] = ___smashable1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Autohand.Demo.SmashEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmashEvent_EndInvoke_m7F09B9E54FE5C5C825A27942BF0521998EDA2EC6 (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Autohand.Demo.Smasher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smasher_Start_m2207652DA48A043A8BEE0811DDF293BFDCBA0DBF (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_t3D95941FB981751FC47A570B0884955C1F0F517A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smasher_U3CStartU3Eb__8_0_m12CE7FF9B28F720EC2CFEC52EC3A1C2724074E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// if(smashableLayers == 0)
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___smashableLayers_5;
		int32_t L_2;
		L_2 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_1, NULL);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		// smashableLayers = LayerMask.GetMask(Hand.grabbableLayerNameDefault);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Hand_t3D95941FB981751FC47A570B0884955C1F0F517A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Hand_t3D95941FB981751FC47A570B0884955C1F0F517A_StaticFields*)il2cpp_codegen_static_fields_for(Hand_t3D95941FB981751FC47A570B0884955C1F0F517A_il2cpp_TypeInfo_var))->___grabbableLayerNameDefault_83;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		int32_t L_6;
		L_6 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_4, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7;
		L_7 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_6, NULL);
		__this->___smashableLayers_5 = L_7;
	}

IL_0037:
	{
		// OnSmashEvent += (smasher, smashable) => { OnSmash?.Invoke(); };
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_8 = __this->___OnSmashEvent_9;
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_9 = (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*)il2cpp_codegen_object_new(SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SmashEvent__ctor_mF395864FF833A50024471348AA588797B6D9743B(L_9, __this, (intptr_t)((void*)Smasher_U3CStartU3Eb__8_0_m12CE7FF9B28F720EC2CFEC52EC3A1C2724074E25_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		__this->___OnSmashEvent_9 = ((SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*)CastclassSealed((RuntimeObject*)L_10, SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnSmashEvent_9), (void*)((SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8*)CastclassSealed((RuntimeObject*)L_10, SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Autohand.Demo.Smasher::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smasher_FixedUpdate_mEF17420A6BAD9A35305478B013A29A3E62468816 (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	int32_t G_B5_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B5_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	int32_t G_B4_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B4_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	int32_t G_B6_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B6_3 = NULL;
	Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* G_B8_0 = NULL;
	Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* G_B7_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* G_B9_1 = NULL;
	{
		// for(int i = 1; i < velocityOverTime.Length; i++) {
		V_0 = 1;
		goto IL_0022;
	}

IL_0004:
	{
		// velocityOverTime[i] = velocityOverTime[i-1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___velocityOverTime_10;
		int32_t L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___velocityOverTime_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_5);
		// for(int i = 1; i < velocityOverTime.Length; i++) {
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		// for(int i = 1; i < velocityOverTime.Length; i++) {
		int32_t L_7 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___velocityOverTime_10;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// velocityOverTime[0] = lastPos - (centerOfMassPoint ? centerOfMassPoint.position : rb.position);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___velocityOverTime_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___lastPos_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___centerOfMassPoint_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		G_B4_0 = L_10;
		G_B4_1 = 0;
		G_B4_2 = L_9;
		if (L_12)
		{
			G_B5_0 = L_10;
			G_B5_1 = 0;
			G_B5_2 = L_9;
			goto IL_0054;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___rb_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_13, NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_005f;
	}

IL_0054:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___centerOfMassPoint_7;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_005f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_3);
		(G_B6_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// lastPos = centerOfMassPoint ? centerOfMassPoint.position : rb.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___centerOfMassPoint_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		G_B7_0 = __this;
		if (L_19)
		{
			G_B8_0 = __this;
			goto IL_0084;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_4;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_20, NULL);
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		goto IL_008f;
	}

IL_0084:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___centerOfMassPoint_7;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
	}

IL_008f:
	{
		NullCheck(G_B9_1);
		G_B9_1->___lastPos_11 = G_B9_0;
		// }
		return;
	}
}
// System.Void Autohand.Demo.Smasher::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smasher_OnCollisionEnter_m2A1618FBAD6BF6735460D96DC4B8296AD8D0D002 (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoHandExtensions_CanGetComponent_TisSmash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70_m9BE6EB401C8B1DDA6D250AC66DB941996880EF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* V_0 = NULL;
	SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* G_B4_0 = NULL;
	SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* G_B3_0 = NULL;
	{
		// if(collision.transform.CanGetComponent(out smash)){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_0, NULL);
		bool L_2;
		L_2 = AutoHandExtensions_CanGetComponent_TisSmash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70_m9BE6EB401C8B1DDA6D250AC66DB941996880EF68(L_1, (&V_0), AutoHandExtensions_CanGetComponent_TisSmash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70_m9BE6EB401C8B1DDA6D250AC66DB941996880EF68_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// if(GetMagnitude() >= smash.smashForce){
		float L_3;
		L_3 = Smasher_GetMagnitude_mA757E58D76BE38A2AC782CDFB4E9EBA900AD21C7(__this, NULL);
		Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->___smashForce_4;
		if ((!(((float)L_3) >= ((float)L_5))))
		{
			goto IL_0035;
		}
	}
	{
		// smash.DoSmash();
		Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* L_6 = V_0;
		NullCheck(L_6);
		Smash_DoSmash_mC874BE6D055E8D1B9F0A15EE304CC7E013BF2C23(L_6, NULL);
		// OnSmashEvent?.Invoke(this, smash);
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_7 = __this->___OnSmashEvent_9;
		SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* L_9 = V_0;
		NullCheck(G_B4_0);
		SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_inline(G_B4_0, __this, L_9, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Single Autohand.Demo.Smasher::GetMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Smasher_GetMagnitude_mA757E58D76BE38A2AC782CDFB4E9EBA900AD21C7 (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// for(int i = 0; i < velocityOverTime.Length; i++) {
		V_1 = 0;
		goto IL_0021;
	}

IL_000a:
	{
		// velocity += velocityOverTime[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___velocityOverTime_10;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_5, NULL);
		V_0 = L_6;
		// for(int i = 0; i < velocityOverTime.Length; i++) {
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// for(int i = 0; i < velocityOverTime.Length; i++) {
		int32_t L_8 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___velocityOverTime_10;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return (velocity.magnitude/velocityOverTime.Length)*forceMulti*10;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___velocityOverTime_10;
		NullCheck(L_11);
		float L_12 = __this->___forceMulti_6;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_10/((float)((int32_t)(((RuntimeArray*)L_11)->max_length))))), L_12)), (10.0f)));
	}
}
// System.Void Autohand.Demo.Smasher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smasher__ctor_m87D30C92EBC3F65CA81FFE296B8D8EAADB303922 (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float forceMulti = 1;
		__this->___forceMulti_6 = (1.0f);
		// Vector3[] velocityOverTime = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___velocityOverTime_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___velocityOverTime_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Autohand.Demo.Smasher::<Start>b__8_0(Autohand.Demo.Smasher,Autohand.Demo.Smash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smasher_U3CStartU3Eb__8_0_m12CE7FF9B28F720EC2CFEC52EC3A1C2724074E25 (Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// OnSmashEvent += (smasher, smashable) => { OnSmash?.Invoke(); };
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnSmash_8;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// OnSmashEvent += (smasher, smashable) => { OnSmash?.Invoke(); };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		int32_t L_1 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* HandBase_get_holdingObj_mB1804975FEB0F17B0962002618898A61223E5D7B_inline (HandBase_t1C68246519005C193D248EE06DBE4213F545C2E8* __this, const RuntimeMethod* method) 
{
	{
		// get { return HoldingObj; }
		Grabbable_t43474D4991CABCCCB18B81AD50F702703FFCF75F* L_0 = __this->___HoldingObj_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SmashEvent_Invoke_mC0F03DA3F8538E5693E7BCAC40A0EF522BB49660_inline (SmashEvent_tC381080D6A4CC41AD7F09CE2D24D30E42BFD57D8* __this, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99* ___smasher0, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70* ___smashable1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Smasher_t4A5127F58268210266EA3CBE98676CDDED7EEE99*, Smash_tECEFF91A9B7AF6CA47595CDA9243A8B8DA1FDD70*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___smasher0, ___smashable1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
