#include "pch-cpp.hpp"





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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t66B514BE877E216616DEDD40416127189FE16FA3;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC;
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
struct Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C;
struct Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7;
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F;
struct Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6;
struct KeyCollection_t73C0C79A1AE364904271EDF868E84A40E1036C14;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t365205E6BE687FCF41975C16741DD9C303C1C269;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2;
struct ObjectPool_1_t330A51752287ED087418126C388D21E9DBEF95C9;
struct ObjectPool_1_t832B418F0EE633B08A82DA8C95EA659D7217D0E1;
struct ObjectPool_1_t511FA97760840C42094CECA7AA3E0B58EB51A231;
struct ObjectPool_1_t539DE50F180F8B36A9A6DAFF61E3AE3612386F80;
struct ObjectPool_1_tF8034E1C380845CDC664082F044A15EFFA310FD5;
struct Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C;
struct TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF;
struct TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC;
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB;
struct ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E;
struct ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC;
struct Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5;
struct Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215;
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014;
struct EmptyDataU5BU5D_tB3A736D4DE7E747B7C1B6CA7B36EB41FA6207653;
struct EmptyDataU5BU5D_tFD0240910F0FF75CC94A141EDE346043BD9C179C;
struct EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD;
struct EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D;
struct EntryU5BU5D_t4BFD09382678A7D9BBA8198240AA8E87B652B0F5;
struct StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC;
struct StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822;
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
struct TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E;
struct TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3;
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EventBaseU5BU5D_t1EB0F8CCFFAF0F2BD202BB74153A8BFEFEC8DC45;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
struct TransformOriginU5BU5D_t0BDBC9C8F1888009152284DC2903B3C289F826DA;
struct TranslateU5BU5D_t9199DFD72A8EC5FA4C33D75E5F85242F9F97E358;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct PointerDispatchState_t145BB8BB02690F87487325596E690295E39A383A;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69;
struct TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD;
struct TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF;
struct TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF;
struct Type_t;
struct UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Data_t43E3238277579E631EA4E8016E61966D79F5B62E;
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC;
struct StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822;
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
struct TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E;
struct TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3;
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
struct TransformOriginU5BU5D_t0BDBC9C8F1888009152284DC2903B3C289F826DA;
struct TranslateU5BU5D_t9199DFD72A8EC5FA4C33D75E5F85242F9F97E358;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6* ____keys;
	ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4BFD09382678A7D9BBA8198240AA8E87B652B0F5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t73C0C79A1AE364904271EDF868E84A40E1036C14* ____keys;
	ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_t365205E6BE687FCF41975C16741DD9C303C1C269  : public RuntimeObject
{
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910  : public RuntimeObject
{
	EventBaseU5BU5D_t1EB0F8CCFFAF0F2BD202BB74153A8BFEFEC8DC45* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398  : public RuntimeObject
{
	ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* ___m_ClickDetector;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
	PointerDispatchState_t145BB8BB02690F87487325596E690295E39A383A* ___U3CpointerStateU3Ek__BackingField;
	uint32_t ___m_GateCount;
	uint32_t ___m_GateDepth;
	int32_t ___m_DispatchStackFrame;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_CurrentEvent;
	Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C* ___m_DispatchContexts;
	bool ___m_Immediate;
	bool ___U3CprocessingEventsU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24  : public RuntimeObject
{
};
struct AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	EmptyDataU5BU5D_tB3A736D4DE7E747B7C1B6CA7B36EB41FA6207653* ___timing;
	TransformOriginU5BU5D_t0BDBC9C8F1888009152284DC2903B3C289F826DA* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	EmptyDataU5BU5D_tFD0240910F0FF75CC94A141EDE346043BD9C179C* ___timing;
	TranslateU5BU5D_t9199DFD72A8EC5FA4C33D75E5F85242F9F97E358* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD* ___timing;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* ___timing;
	StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* ___timing;
	StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* ___timing;
	StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
typedef Il2CppFullySharedGenericStruct StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D;
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 
{
	int64_t ___startTimeMs;
	int32_t ___durationMs;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
	float ___easedProgress;
	float ___reversingShorteningFactor;
	bool ___isStarted;
	int32_t ___delayMs;
};
struct TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 
{
	int64_t ___startTimeMs;
	int32_t ___durationMs;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
	float ___easedProgress;
	float ___reversingShorteningFactor;
	bool ___isStarted;
	int32_t ___delayMs;
};
struct TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C 
{
	int64_t ___startTimeMs;
	int32_t ___durationMs;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
	float ___easedProgress;
	float ___reversingShorteningFactor;
	bool ___isStarted;
	int32_t ___delayMs;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshaled_pinvoke
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshaled_com
{
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___m_Dispatcher;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 
{
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___propertiesList;
};
struct StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshaled_pinvoke
{
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___propertiesList;
};
struct StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshaled_com
{
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___propertiesList;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
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
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	int64_t ___m_CurrentTimeMs;
	TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* ___m_CurrentFrameEventsState;
	TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* ___m_NextFrameEventsState;
	AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513 ___running;
	AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33 ___completed;
};
struct Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	int64_t ___m_CurrentTimeMs;
	TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* ___m_CurrentFrameEventsState;
	TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* ___m_NextFrameEventsState;
	AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880 ___running;
	AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8 ___completed;
};
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	int64_t ___m_CurrentTimeMs;
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_CurrentFrameEventsState;
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_NextFrameEventsState;
	AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 ___running;
	AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 ___completed;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ClipMethod_tDE393081E6CA2C9C1A8C3D731613580585767391 
{
	int32_t ___value__;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct OwnedState_t0957CA36E21DE8A443B616EBE83B25CCCA70B5A4 
{
	uint8_t ___value__;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RenderDataDirtyTypes_tEF0AE4EB7DF790A711AA45103050432B8FEDB907 
{
	int32_t ___value__;
};
struct RenderDataFlags_t5FE970B94CB31B4691C29B856A2A5848BDEACB66 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct TransitionState_tA8D086878A2990914A87DC06EBFB2C25F1C65348 
{
	int32_t ___value__;
};
struct RenderTargetMode_tAE75E29BB61A64BDE7646D5CBD353B64BCFA9F3A 
{
	int32_t ___value__;
};
struct VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D 
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder;
	uint8_t ____byte;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 
{
	int32_t ___m_Allocator;
	Data_t43E3238277579E631EA4E8016E61966D79F5B62E* ___m_Data;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t19FCA0E562C449FA0A2FA0053E97568D4B389A56  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t4F23137036FDF513830C85C5F8B2BF3A0E146A0F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventBase_1_t90E610023DACA9D4D888599D2E1B536299CE9098  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A  : public MulticastDelegate_t
{
};
struct KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___value;
};
struct KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	RuntimeObject* ___value;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Nodes;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Configs;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	bool ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	bool ___pendingRepaint;
	bool ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A 
{
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 
{
	Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F  : public MulticastDelegate_t
{
};
struct Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6  : public MulticastDelegate_t
{
};
struct StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___startValue;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___endValue;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___reversingAdjustedStartValue;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___currentValue;
};
struct StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___startValue;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___endValue;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___reversingAdjustedStartValue;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___currentValue;
};
struct TransitionEventBase_1_t0AAD21652882D2FCF19FCF0C4347DC161E413130  : public EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct TransitionEventBase_1_tE4425184474B0AA7732182D0294F0960A51DEAC4  : public EventBase_1_t19FCA0E562C449FA0A2FA0053E97568D4B389A56
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct TransitionEventBase_1_t297898456ECA9E8B0FE5C4821C0FD1C2CEFA86AC  : public EventBase_1_t4F23137036FDF513830C85C5F8B2BF3A0E146A0F
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct TransitionEventBase_1_t1FB26EAAAF9B2F0657560F33B4BB75695CAF7579  : public EventBase_1_t90E610023DACA9D4D888599D2E1B536299CE9098
{
	StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312 ___U3CstylePropertyNamesU3Ek__BackingField;
	double ___U3CelapsedTimeU3Ek__BackingField;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___m_Handle;
};
struct TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69  : public TransitionEventBase_1_t0AAD21652882D2FCF19FCF0C4347DC161E413130
{
};
struct TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD  : public TransitionEventBase_1_tE4425184474B0AA7732182D0294F0960A51DEAC4
{
};
struct TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF  : public TransitionEventBase_1_t297898456ECA9E8B0FE5C4821C0FD1C2CEFA86AC
{
};
struct TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF  : public TransitionEventBase_1_t1FB26EAAAF9B2F0657560F33B4BB75695CAF7579
{
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	bool ___shouldCutRenderChain;
	UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E* ___uiRenderer;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___m_PickingMode;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___m_EnabledSelf;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	List_1_t592DF2E59D6E244DA0041698383484A07C7E0480* ___m_Bindings;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementAdded;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementRemoved;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct List_1_t365205E6BE687FCF41975C16741DD9C303C1C269_StaticFields
{
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___s_emptyArray;
};
struct TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398_StaticFields
{
	ObjectPool_1_t330A51752287ED087418126C388D21E9DBEF95C9* ___k_EventQueuePool;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E_StaticFields
{
	EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___Default;
};
struct EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB_StaticFields
{
	EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___Default;
};
struct EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B_StaticFields
{
	EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B ___Default;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer;
};
struct EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_t832B418F0EE633B08A82DA8C95EA659D7217D0E1* ___s_Pool;
	int32_t ___EventCategory;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E  : public RuntimeArray
{
	ALIGN_FIELD (8) TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 m_Items[1];

	inline TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
	inline TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
};
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF  : public RuntimeArray
{
	ALIGN_FIELD (8) VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* m_Items[1];

	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TransformOriginU5BU5D_t0BDBC9C8F1888009152284DC2903B3C289F826DA  : public RuntimeArray
{
	ALIGN_FIELD (8) TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 m_Items[1];

	inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 value)
	{
		m_Items[index] = value;
	}
};
struct StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 m_Items[1];

	inline StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 value)
	{
		m_Items[index] = value;
	}
};
struct TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3  : public RuntimeArray
{
	ALIGN_FIELD (8) TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 m_Items[1];

	inline TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
	inline TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
};
struct TranslateU5BU5D_t9199DFD72A8EC5FA4C33D75E5F85242F9F97E358  : public RuntimeArray
{
	ALIGN_FIELD (8) Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E m_Items[1];

	inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E value)
	{
		m_Items[index] = value;
	}
};
struct StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 m_Items[1];

	inline StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 value)
	{
		m_Items[index] = value;
	}
};
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034  : public RuntimeArray
{
	ALIGN_FIELD (8) TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C m_Items[1];

	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___easingCurve), (void*)NULL);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__ctor_mB6598F32C78D20106304EA601681B2C08BE13CCD_gshared (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513 AnimationDataSet_2_Create_mFA8A189A42D45917F370E2603A4F4F69E1F778D4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33 AnimationDataSet_2_Create_m2AF56891B756808EFF1F3CFD9C57175B3377AA2E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m30753D34B7638E8B6D93663D7F9AD717CAF26CF9_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m2E8C73364A926C8DE4FB172D73F33273670143A3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_RegisterChange_mEB7F9889A594DB8AF5E3DAAB82FEFD9107AA0419_gshared (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_UnregisterChange_mD79E6E50C61D69AD6F2BD228D65D8B4A54AA1762_gshared (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m10F551D33CF4A76981157C847D447718B2C0F892_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A_gshared (Dictionary_2_t9B2ADF59B0E83212023684CAE164D0B1C22E800C* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionEventBase_1_GetPooled_m3A983E4BB00BC9DDF35E4323BCCCA1921874C602_gshared (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_mD695B9606DB2932AF7067526DB64D6093F96F530_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_m89AFE1C929348E7021642A66D58F26BDAAE3A163_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m8C71037A539C649D47BD20E4F113FADC6AAF1362_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_mA4426F51F222EA91E9C2EBA2B94CF668F3DB561A_gshared (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_mE7FEB3B77066844030F411E1DDF2F082C87E328D_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m5AB3A381977031C39D9E969745E1E349F56AF302_gshared (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationDataSet_2_IndexOf_m18D4FD9066B212D86BBE380AD8C8F14D37BF8C38_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationDataSet_2_IndexOf_m57AA472FDB15D300C252F6F63D180054A4E6D531_gshared (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Remove_m89008B22BB674A031A879DB9393278C0372B2DA1_gshared (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_GetActivePropertiesForElement_m27B38B77B61897FF7DB87A0CE6347A7B7D542E55_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_GetActivePropertiesForElement_mFC85A4033E8E70F298197A0D9FD02838489F1D12_gshared (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_gshared_inline (Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_arg1, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_mDC84684C900FCB33E49B62A763734BCBC82385F2_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDelay_m3677B5361E09B257A28F115B7DC9BD0B7F5DD409_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDuration_m959619FC722580A58801A8AF7F72BDE6CDBE09C4_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_m4148985016609D7AF416911D65DE1E795D58EA46_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Replace_m63433C33942993AEB6B36439ACFD833AD3E86574_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, int32_t ___0_index, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 ___1_timingData, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 ___2_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Add_mFC43682BD1D4942D7EEFFD206CA5820B5F9D22CC_gshared (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 ___2_timingData, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 ___3_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_m7FA4115E12B20712D0FCC49D6DAAAE4A571ABF19_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionEventsFrameState_StateChanged_mB3688A27A70206FC1D1BE18433FD1412A6EFA38A_gshared (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_mE0EB759497C086D7B4B4B93FE901138A977303FA_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mF5F3A54C15C0B8A53EEEBB797B46B83BF7F4EF92_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577 Dictionary_2_GetEnumerator_m79299439417464257634AE925527E9E9787DF078_gshared (Dictionary_2_tB13D0A847475988F23522A8642F7D24BA304F9B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4E105B1669208F41BB77FD39CA24F040A6E08E1D_gshared (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 Enumerator_get_Current_m4ACDDEB7F5FFC66AFA3A3C05D0B5FB7ABD471FFD_gshared_inline (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBF3E41BF1DA7FF17A26FDBD7EB48B6243C5A69B2_gshared (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m12AEC2E7B5C46F6455AB138C95C24887DA603CD6_gshared (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Add_m56F3AABBD2662721C07FCACFA55FB556DBB4D50A_gshared (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___2_timingData, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___3_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_m4D3F9781724E085D7CD581DF3611758A94893131_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_mF337430AF9B8FAE88B3894C7B4712FBA202271B7_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__ctor_m6C5224DC5FA47555D2A0AEE67A00681CA824848F_gshared (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880 AnimationDataSet_2_Create_m6FA05686EDAE327867A2B4C7279C2718C6D9BC53_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8 AnimationDataSet_2_Create_mBF26E2A3E3A04D44754ED5EBEC948679F2A7937B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mAE967F05DE13B2E3A1BACAA15AF68BB66A259EA2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_RegisterChange_mF7DD7F81F56C2CA2DC02077913A9D036BB4C5342_gshared (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_UnregisterChange_mBF5BC84A0A6F9AEE162F659635BB21505ECF1C97_gshared (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_m34C219EB74A61C4AF70326DAB608D456BD495212_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_mF8CC15486E5815C174DBA1210C56E794DB2C1355_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m1B65D53F11A293B8DE0631EE8DE758D11FB68EE5_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m432D5BEA7E0E76AFB5E40DEA3565E95B4F39FC8C_gshared (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_mC765117478E95557FAFBD826BE254076CEE02AA8_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_RemoveAll_m392ECFEF982E1556680DAEC908920E378A14308C_gshared (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationDataSet_2_IndexOf_mCC9C377CB2BBB66282F0A592776C7486DAE01F92_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationDataSet_2_IndexOf_m3E944070D0F84CCD1A98EF682152EAD467772071_gshared (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Remove_m370CAE7A13600678BF6C510E9F6A0616E7DFF78A_gshared (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_GetActivePropertiesForElement_m45E21C60D951FB2A30D2BCE5C28A3F1DFE234541_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_GetActivePropertiesForElement_m27ACB9994E607060C95E90395DE756B1BD0EE89D_gshared (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_gshared_inline (Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_arg1, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_mD5B965190DECCDCC8656F4B6B179381656F051DC_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDelay_m397A2E079DCD37650B2DB9197E59284E099A27F3_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDuration_mB4C8DBF1C05E5B3ED14CEE8DA8A29854F60059AD_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_mA20C9D2B4C5FEC01D15A8C27CFFAF6192C051DB2_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Replace_m59D93DAEE4A8716C60C45FF0F10B737DBE524FAA_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, int32_t ___0_index, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 ___1_timingData, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 ___2_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Add_m12A0277CC8254FEA9074BB833C612001E871AD7C_gshared (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 ___2_timingData, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 ___3_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_mE38C0F5203ABE650C43883A26146D5D53D957AAE_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionEventsFrameState_StateChanged_m7D5DB2E7460EB92B10358A20DB3192418E0B9367_gshared (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_m8FBA418337B41BC977B694442CCBE740823B55A8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mF3B4CBDF3CE119499FABEB53860715B71EDE35D8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m7D00CB267A08EEBB5F8F5AAB978BA76AE7B4B71C_gshared (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationDataSet_2_Add_m36BE698F7030A37373E2B5DE7069FD77CD48D725_gshared (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___2_timingData, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___3_styleData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_mA80A933C2ADB9EC1D24260B8DD60FC06DE4C62C8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_mB09AE0E0AFACAAEF90950370B2DA3BDD0E5C5404_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared_inline (const RuntimeMethod* method) ;

inline void TransitionEventsFrameState__ctor_mB6598F32C78D20106304EA601681B2C08BE13CCD (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*, const RuntimeMethod*))TransitionEventsFrameState__ctor_mB6598F32C78D20106304EA601681B2C08BE13CCD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72 (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* __this, const RuntimeMethod* method) ;
inline AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513 AnimationDataSet_2_Create_mFA8A189A42D45917F370E2603A4F4F69E1F778D4 (const RuntimeMethod* method)
{
	return ((  AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513 (*) (const RuntimeMethod*))AnimationDataSet_2_Create_mFA8A189A42D45917F370E2603A4F4F69E1F778D4_gshared)(method);
}
inline AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33 AnimationDataSet_2_Create_m2AF56891B756808EFF1F3CFD9C57175B3377AA2E (const RuntimeMethod* method)
{
	return ((  AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33 (*) (const RuntimeMethod*))AnimationDataSet_2_Create_m2AF56891B756808EFF1F3CFD9C57175B3377AA2E_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Panel_TimeSinceStartupMs_mEEA20B197A3A4342A6CBB8412CF9040C815FEB7B (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910**, const RuntimeMethod*))Dictionary_2_TryGetValue_m30753D34B7638E8B6D93663D7F9AD717CAF26CF9_gshared)(__this, ___0_key, ___1_value, method);
}
inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m2E8C73364A926C8DE4FB172D73F33273670143A3 (const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (const RuntimeMethod*))TransitionEventsFrameState_GetPooledQueue_m2E8C73364A926C8DE4FB172D73F33273670143A3_gshared)(method);
}
inline void Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337 (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Dictionary_2_Add_m77C09F1138342291C84F2D1884BC97F0928D029D_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void TransitionEventsFrameState_RegisterChange_mEB7F9889A594DB8AF5E3DAAB82FEFD9107AA0419 (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*, const RuntimeMethod*))TransitionEventsFrameState_RegisterChange_mEB7F9889A594DB8AF5E3DAAB82FEFD9107AA0419_gshared)(__this, method);
}
inline EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, const RuntimeMethod* method)
{
	return ((  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
inline void TransitionEventsFrameState_UnregisterChange_mD79E6E50C61D69AD6F2BD228D65D8B4A54AA1762 (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*, const RuntimeMethod*))TransitionEventsFrameState_UnregisterChange_mD79E6E50C61D69AD6F2BD228D65D8B4A54AA1762_gshared)(__this, method);
}
inline int32_t Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_eventCategory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9 (ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, int32_t ___1_property, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m10F551D33CF4A76981157C847D447718B2C0F892_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m02B4D3AA8D37064197DC0B6983574A325BAC93EF_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, int32_t, const RuntimeMethod*))Dictionary_2_Add_m42BB2493CF86A5116013E5C273D1789DF840BB8A_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, int32_t ___0_stylePropertyId, const RuntimeMethod* method) ;
inline TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_m3A983E4BB00BC9DDF35E4323BCCCA1921874C602_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
inline void Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C_gshared)(__this, ___0_evt, ___1_epp, method);
}
inline TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_m3A983E4BB00BC9DDF35E4323BCCCA1921874C602_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
inline TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_m3A983E4BB00BC9DDF35E4323BCCCA1921874C602_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
inline void Values_1_ClearEventQueue_mD695B9606DB2932AF7067526DB64D6093F96F530 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Values_1_ClearEventQueue_mD695B9606DB2932AF7067526DB64D6093F96F530_gshared)(__this, ___0_epp, method);
}
inline TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_stylePropertyName, double ___1_elapsedTime, const RuntimeMethod* method)
{
	return ((  TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* (*) (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, double, const RuntimeMethod*))TransitionEventBase_1_GetPooled_m3A983E4BB00BC9DDF35E4323BCCCA1921874C602_gshared)(___0_stylePropertyName, ___1_elapsedTime, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9 (EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097* __this, EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5 (EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097* __this, const RuntimeMethod* method) ;
inline void Values_1_SendTransitionCancelEvent_m89AFE1C929348E7021642A66D58F26BDAAE3A163 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))Values_1_SendTransitionCancelEvent_m89AFE1C929348E7021642A66D58F26BDAAE3A163_gshared)(__this, ___0_ve, ___1_runningIndex, ___2_panelElapsedMs, method);
}
inline void Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, int32_t, const RuntimeMethod*))Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292_gshared)(__this, ___0_runningIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void AnimationDataSet_2_RemoveAll_m8C71037A539C649D47BD20E4F113FADC6AAF1362 (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m8C71037A539C649D47BD20E4F113FADC6AAF1362_gshared)(__this, method);
}
inline void AnimationDataSet_2_RemoveAll_mA4426F51F222EA91E9C2EBA2B94CF668F3DB561A (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_mA4426F51F222EA91E9C2EBA2B94CF668F3DB561A_gshared)(__this, method);
}
inline void AnimationDataSet_2_RemoveAll_mE7FEB3B77066844030F411E1DDF2F082C87E328D (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_mE7FEB3B77066844030F411E1DDF2F082C87E328D_gshared)(__this, ___0_ve, method);
}
inline void AnimationDataSet_2_RemoveAll_m5AB3A381977031C39D9E969745E1E349F56AF302 (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m5AB3A381977031C39D9E969745E1E349F56AF302_gshared)(__this, ___0_ve, method);
}
inline bool AnimationDataSet_2_IndexOf_m18D4FD9066B212D86BBE380AD8C8F14D37BF8C38 (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))AnimationDataSet_2_IndexOf_m18D4FD9066B212D86BBE380AD8C8F14D37BF8C38_gshared)(__this, ___0_ve, ___1_prop, ___2_index, method);
}
inline void Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2_gshared)(__this, ___0_ve, ___1_runningIndex, ___2_panelElapsedMs, method);
}
inline void AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7 (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, int32_t, const RuntimeMethod*))AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7_gshared)(__this, ___0_cancelledIndex, method);
}
inline bool AnimationDataSet_2_IndexOf_m57AA472FDB15D300C252F6F63D180054A4E6D531 (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))AnimationDataSet_2_IndexOf_m57AA472FDB15D300C252F6F63D180054A4E6D531_gshared)(__this, ___0_ve, ___1_prop, ___2_index, method);
}
inline void AnimationDataSet_2_Remove_m89008B22BB674A031A879DB9393278C0372B2DA1 (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*, int32_t, const RuntimeMethod*))AnimationDataSet_2_Remove_m89008B22BB674A031A879DB9393278C0372B2DA1_gshared)(__this, ___0_cancelledIndex, method);
}
inline void AnimationDataSet_2_GetActivePropertiesForElement_m27B38B77B61897FF7DB87A0CE6347A7B7D542E55 (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))AnimationDataSet_2_GetActivePropertiesForElement_m27B38B77B61897FF7DB87A0CE6347A7B7D542E55_gshared)(__this, ___0_ve, ___1_outProperties, method);
}
inline void AnimationDataSet_2_GetActivePropertiesForElement_mFC85A4033E8E70F298197A0D9FD02838489F1D12 (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))AnimationDataSet_2_GetActivePropertiesForElement_mFC85A4033E8E70F298197A0D9FD02838489F1D12_gshared)(__this, ___0_ve, ___1_outProperties, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
inline bool Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_inline (Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_arg1, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502, const RuntimeMethod*))Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Values_1_ComputeReversingShorteningFactor_mDC84684C900FCB33E49B62A763734BCBC82385F2 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_oldIndex, const RuntimeMethod* method)
{
	return ((  float (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, int32_t, const RuntimeMethod*))Values_1_ComputeReversingShorteningFactor_mDC84684C900FCB33E49B62A763734BCBC82385F2_gshared)(__this, ___0_oldIndex, method);
}
inline int32_t Values_1_ComputeReversingDelay_m3677B5361E09B257A28F115B7DC9BD0B7F5DD409 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, int32_t, float, const RuntimeMethod*))Values_1_ComputeReversingDelay_m3677B5361E09B257A28F115B7DC9BD0B7F5DD409_gshared)(__this, ___0_delayMs, ___1_newReversingShorteningFactor, method);
}
inline int32_t Values_1_ComputeReversingDuration_m959619FC722580A58801A8AF7F72BDE6CDBE09C4 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, int32_t, float, const RuntimeMethod*))Values_1_ComputeReversingDuration_m959619FC722580A58801A8AF7F72BDE6CDBE09C4_gshared)(__this, ___0_newTransitionDurationMs, ___1_newReversingShorteningFactor, method);
}
inline void Values_1_QueueTransitionRunEvent_m4148985016609D7AF416911D65DE1E795D58EA46 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionRunEvent_m4148985016609D7AF416911D65DE1E795D58EA46_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline void AnimationDataSet_2_Replace_m63433C33942993AEB6B36439ACFD833AD3E86574 (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, int32_t ___0_index, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 ___1_timingData, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 ___2_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, int32_t, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167, const RuntimeMethod*))AnimationDataSet_2_Replace_m63433C33942993AEB6B36439ACFD833AD3E86574_gshared)(__this, ___0_index, ___1_timingData, ___2_styleData, method);
}
inline void AnimationDataSet_2_Add_mFC43682BD1D4942D7EEFFD206CA5820B5F9D22CC (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 ___2_timingData, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 ___3_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92, StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167, const RuntimeMethod*))AnimationDataSet_2_Add_mFC43682BD1D4942D7EEFFD206CA5820B5F9D22CC_gshared)(__this, ___0_owner, ___1_prop, ___2_timingData, ___3_styleData, method);
}
inline void Values_1_UpdateProgress_m7FA4115E12B20712D0FCC49D6DAAAE4A571ABF19 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, int64_t, const RuntimeMethod*))Values_1_UpdateProgress_m7FA4115E12B20712D0FCC49D6DAAAE4A571ABF19_gshared)(__this, ___0_currentTimeMs, method);
}
inline bool TransitionEventsFrameState_StateChanged_mB3688A27A70206FC1D1BE18433FD1412A6EFA38A (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*, const RuntimeMethod*))TransitionEventsFrameState_StateChanged_mB3688A27A70206FC1D1BE18433FD1412A6EFA38A_gshared)(__this, method);
}
inline void Values_1_ProcessEventQueue_mE0EB759497C086D7B4B4B93FE901138A977303FA (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, const RuntimeMethod*))Values_1_ProcessEventQueue_mE0EB759497C086D7B4B4B93FE901138A977303FA_gshared)(__this, method);
}
inline void Values_1_SwapFrameStates_mF5F3A54C15C0B8A53EEEBB797B46B83BF7F4EF92 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, const RuntimeMethod*))Values_1_SwapFrameStates_mF5F3A54C15C0B8A53EEEBB797B46B83BF7F4EF92_gshared)(__this, method);
}
inline Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m79299439417464257634AE925527E9E9787DF078_gshared)(__this, method);
}
inline void Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172 (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_Dispose_m4E105B1669208F41BB77FD39CA24F040A6E08E1D_gshared)(__this, method);
}
inline KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_get_Current_m4ACDDEB7F5FFC66AFA3A3C05D0B5FB7ABD471FFD_gshared_inline)(__this, method);
}
inline ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D* __this, const RuntimeMethod* method)
{
	return ((  ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 (*) (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D*, const RuntimeMethod*))KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_gshared_inline)(__this, method);
}
inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D* __this, const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140 (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_MoveNext_mBF3E41BF1DA7FF17A26FDBD7EB48B6243C5A69B2_gshared)(__this, method);
}
inline void TransitionEventsFrameState_Clear_m12AEC2E7B5C46F6455AB138C95C24887DA603CD6 (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*, const RuntimeMethod*))TransitionEventsFrameState_Clear_m12AEC2E7B5C46F6455AB138C95C24887DA603CD6_gshared)(__this, method);
}
inline void AnimationDataSet_2_Add_m56F3AABBD2662721C07FCACFA55FB556DBB4D50A (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___2_timingData, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___3_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502, const RuntimeMethod*))AnimationDataSet_2_Add_m56F3AABBD2662721C07FCACFA55FB556DBB4D50A_gshared)(__this, ___0_owner, ___1_prop, ___2_timingData, ___3_styleData, method);
}
inline void Values_1_QueueTransitionEndEvent_m4D3F9781724E085D7CD581DF3611758A94893131 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionEndEvent_m4D3F9781724E085D7CD581DF3611758A94893131_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline void Values_1_QueueTransitionStartEvent_mF337430AF9B8FAE88B3894C7B4712FBA202271B7 (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionStartEvent_mF337430AF9B8FAE88B3894C7B4712FBA202271B7_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, float, const RuntimeMethod*))Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline)(__this, ___0_arg, method);
}
inline void TransitionEventsFrameState__ctor_m6C5224DC5FA47555D2A0AEE67A00681CA824848F (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*, const RuntimeMethod*))TransitionEventsFrameState__ctor_m6C5224DC5FA47555D2A0AEE67A00681CA824848F_gshared)(__this, method);
}
inline AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880 AnimationDataSet_2_Create_m6FA05686EDAE327867A2B4C7279C2718C6D9BC53 (const RuntimeMethod* method)
{
	return ((  AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880 (*) (const RuntimeMethod*))AnimationDataSet_2_Create_m6FA05686EDAE327867A2B4C7279C2718C6D9BC53_gshared)(method);
}
inline AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8 AnimationDataSet_2_Create_mBF26E2A3E3A04D44754ED5EBEC948679F2A7937B (const RuntimeMethod* method)
{
	return ((  AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8 (*) (const RuntimeMethod*))AnimationDataSet_2_Create_mBF26E2A3E3A04D44754ED5EBEC948679F2A7937B_gshared)(method);
}
inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mAE967F05DE13B2E3A1BACAA15AF68BB66A259EA2 (const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (const RuntimeMethod*))TransitionEventsFrameState_GetPooledQueue_mAE967F05DE13B2E3A1BACAA15AF68BB66A259EA2_gshared)(method);
}
inline void TransitionEventsFrameState_RegisterChange_mF7DD7F81F56C2CA2DC02077913A9D036BB4C5342 (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*, const RuntimeMethod*))TransitionEventsFrameState_RegisterChange_mF7DD7F81F56C2CA2DC02077913A9D036BB4C5342_gshared)(__this, method);
}
inline void TransitionEventsFrameState_UnregisterChange_mBF5BC84A0A6F9AEE162F659635BB21505ECF1C97 (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*, const RuntimeMethod*))TransitionEventsFrameState_UnregisterChange_mBF5BC84A0A6F9AEE162F659635BB21505ECF1C97_gshared)(__this, method);
}
inline void Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32_gshared)(__this, ___0_evt, ___1_epp, method);
}
inline void Values_1_ClearEventQueue_m34C219EB74A61C4AF70326DAB608D456BD495212 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))Values_1_ClearEventQueue_m34C219EB74A61C4AF70326DAB608D456BD495212_gshared)(__this, ___0_epp, method);
}
inline void Values_1_SendTransitionCancelEvent_mF8CC15486E5815C174DBA1210C56E794DB2C1355 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))Values_1_SendTransitionCancelEvent_mF8CC15486E5815C174DBA1210C56E794DB2C1355_gshared)(__this, ___0_ve, ___1_runningIndex, ___2_panelElapsedMs, method);
}
inline void Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, int32_t, const RuntimeMethod*))Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF_gshared)(__this, ___0_runningIndex, method);
}
inline void AnimationDataSet_2_RemoveAll_m1B65D53F11A293B8DE0631EE8DE758D11FB68EE5 (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m1B65D53F11A293B8DE0631EE8DE758D11FB68EE5_gshared)(__this, method);
}
inline void AnimationDataSet_2_RemoveAll_m432D5BEA7E0E76AFB5E40DEA3565E95B4F39FC8C (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m432D5BEA7E0E76AFB5E40DEA3565E95B4F39FC8C_gshared)(__this, method);
}
inline void AnimationDataSet_2_RemoveAll_mC765117478E95557FAFBD826BE254076CEE02AA8 (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_mC765117478E95557FAFBD826BE254076CEE02AA8_gshared)(__this, ___0_ve, method);
}
inline void AnimationDataSet_2_RemoveAll_m392ECFEF982E1556680DAEC908920E378A14308C (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))AnimationDataSet_2_RemoveAll_m392ECFEF982E1556680DAEC908920E378A14308C_gshared)(__this, ___0_ve, method);
}
inline bool AnimationDataSet_2_IndexOf_mCC9C377CB2BBB66282F0A592776C7486DAE01F92 (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))AnimationDataSet_2_IndexOf_mCC9C377CB2BBB66282F0A592776C7486DAE01F92_gshared)(__this, ___0_ve, ___1_prop, ___2_index, method);
}
inline void Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6_gshared)(__this, ___0_ve, ___1_runningIndex, ___2_panelElapsedMs, method);
}
inline void AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912 (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, int32_t, const RuntimeMethod*))AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912_gshared)(__this, ___0_cancelledIndex, method);
}
inline bool AnimationDataSet_2_IndexOf_m3E944070D0F84CCD1A98EF682152EAD467772071 (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_prop, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))AnimationDataSet_2_IndexOf_m3E944070D0F84CCD1A98EF682152EAD467772071_gshared)(__this, ___0_ve, ___1_prop, ___2_index, method);
}
inline void AnimationDataSet_2_Remove_m370CAE7A13600678BF6C510E9F6A0616E7DFF78A (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, int32_t ___0_cancelledIndex, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*, int32_t, const RuntimeMethod*))AnimationDataSet_2_Remove_m370CAE7A13600678BF6C510E9F6A0616E7DFF78A_gshared)(__this, ___0_cancelledIndex, method);
}
inline void AnimationDataSet_2_GetActivePropertiesForElement_m45E21C60D951FB2A30D2BCE5C28A3F1DFE234541 (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))AnimationDataSet_2_GetActivePropertiesForElement_m45E21C60D951FB2A30D2BCE5C28A3F1DFE234541_gshared)(__this, ___0_ve, ___1_outProperties, method);
}
inline void AnimationDataSet_2_GetActivePropertiesForElement_m27ACB9994E607060C95E90395DE756B1BD0EE89D (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outProperties, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))AnimationDataSet_2_GetActivePropertiesForElement_m27ACB9994E607060C95E90395DE756B1BD0EE89D_gshared)(__this, ___0_ve, ___1_outProperties, method);
}
inline bool Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_inline (Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_arg1, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E, const RuntimeMethod*))Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Values_1_ComputeReversingShorteningFactor_mD5B965190DECCDCC8656F4B6B179381656F051DC (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_oldIndex, const RuntimeMethod* method)
{
	return ((  float (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, int32_t, const RuntimeMethod*))Values_1_ComputeReversingShorteningFactor_mD5B965190DECCDCC8656F4B6B179381656F051DC_gshared)(__this, ___0_oldIndex, method);
}
inline int32_t Values_1_ComputeReversingDelay_m397A2E079DCD37650B2DB9197E59284E099A27F3 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, int32_t, float, const RuntimeMethod*))Values_1_ComputeReversingDelay_m397A2E079DCD37650B2DB9197E59284E099A27F3_gshared)(__this, ___0_delayMs, ___1_newReversingShorteningFactor, method);
}
inline int32_t Values_1_ComputeReversingDuration_mB4C8DBF1C05E5B3ED14CEE8DA8A29854F60059AD (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, int32_t, float, const RuntimeMethod*))Values_1_ComputeReversingDuration_mB4C8DBF1C05E5B3ED14CEE8DA8A29854F60059AD_gshared)(__this, ___0_newTransitionDurationMs, ___1_newReversingShorteningFactor, method);
}
inline void Values_1_QueueTransitionRunEvent_mA20C9D2B4C5FEC01D15A8C27CFFAF6192C051DB2 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionRunEvent_mA20C9D2B4C5FEC01D15A8C27CFFAF6192C051DB2_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline void AnimationDataSet_2_Replace_m59D93DAEE4A8716C60C45FF0F10B737DBE524FAA (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, int32_t ___0_index, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 ___1_timingData, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 ___2_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, int32_t, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23, const RuntimeMethod*))AnimationDataSet_2_Replace_m59D93DAEE4A8716C60C45FF0F10B737DBE524FAA_gshared)(__this, ___0_index, ___1_timingData, ___2_styleData, method);
}
inline void AnimationDataSet_2_Add_m12A0277CC8254FEA9074BB833C612001E871AD7C (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 ___2_timingData, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 ___3_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3, StyleData_t516B303180A937637806C9C217FE06E3AACDEE23, const RuntimeMethod*))AnimationDataSet_2_Add_m12A0277CC8254FEA9074BB833C612001E871AD7C_gshared)(__this, ___0_owner, ___1_prop, ___2_timingData, ___3_styleData, method);
}
inline void Values_1_UpdateProgress_mE38C0F5203ABE650C43883A26146D5D53D957AAE (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, int64_t, const RuntimeMethod*))Values_1_UpdateProgress_mE38C0F5203ABE650C43883A26146D5D53D957AAE_gshared)(__this, ___0_currentTimeMs, method);
}
inline bool TransitionEventsFrameState_StateChanged_m7D5DB2E7460EB92B10358A20DB3192418E0B9367 (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*, const RuntimeMethod*))TransitionEventsFrameState_StateChanged_m7D5DB2E7460EB92B10358A20DB3192418E0B9367_gshared)(__this, method);
}
inline void Values_1_ProcessEventQueue_m8FBA418337B41BC977B694442CCBE740823B55A8 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, const RuntimeMethod*))Values_1_ProcessEventQueue_m8FBA418337B41BC977B694442CCBE740823B55A8_gshared)(__this, method);
}
inline void Values_1_SwapFrameStates_mF3B4CBDF3CE119499FABEB53860715B71EDE35D8 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, const RuntimeMethod*))Values_1_SwapFrameStates_mF3B4CBDF3CE119499FABEB53860715B71EDE35D8_gshared)(__this, method);
}
inline void TransitionEventsFrameState_Clear_m7D00CB267A08EEBB5F8F5AAB978BA76AE7B4B71C (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*, const RuntimeMethod*))TransitionEventsFrameState_Clear_m7D00CB267A08EEBB5F8F5AAB978BA76AE7B4B71C_gshared)(__this, method);
}
inline void AnimationDataSet_2_Add_m36BE698F7030A37373E2B5DE7069FD77CD48D725 (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___2_timingData, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___3_styleData, const RuntimeMethod* method)
{
	((  void (*) (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E, const RuntimeMethod*))AnimationDataSet_2_Add_m36BE698F7030A37373E2B5DE7069FD77CD48D725_gshared)(__this, ___0_owner, ___1_prop, ___2_timingData, ___3_styleData, method);
}
inline void Values_1_QueueTransitionEndEvent_mA80A933C2ADB9EC1D24260B8DD60FC06DE4C62C8 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionEndEvent_mA80A933C2ADB9EC1D24260B8DD60FC06DE4C62C8_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
inline void Values_1_QueueTransitionStartEvent_mB09AE0E0AFACAAEF90950370B2DA3BDD0E5C5404 (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method)
{
	((  void (*) (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Values_1_QueueTransitionStartEvent_mB09AE0E0AFACAAEF90950370B2DA3BDD0E5C5404_gshared)(__this, ___0_ve, ___1_runningIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, uint16_t, const RuntimeMethod*))Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_gshared)(__this, ___0_value, method);
}
inline void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, int32_t, const RuntimeMethod*))Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_gshared)(__this, ___0_dataPointer, ___1_offset, method);
}
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_gshared)(__this, ___0_other, method);
}
inline bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, RuntimeObject*, const RuntimeMethod*))Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared_inline)(__this, ___0_obj, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF (int8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
inline int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, const RuntimeMethod*))Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
inline String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, String_t*, RuntimeObject*, const RuntimeMethod*))Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_gshared)(__this, ___0_format, ___1_formatProvider, method);
}
inline String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, const RuntimeMethod*))Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared_inline)(___0_left, ___1_right, method);
}
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
inline int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83_gshared)(method);
}
inline uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method)
{
	return ((  uint16_t (*) (const RuntimeMethod*))Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared_inline)(method);
}
inline uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method)
{
	return ((  uint16_t (*) (const RuntimeMethod*))Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_get_isEmpty_m7A5281B9F7F52D1F4344B41FE537DB6081F53F9B_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) 
{
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_2 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		int32_t L_3 = L_2->___count;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_3))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_ConvertUnits_m9B9E97AC6B9D6DF19E5826509D8A75D5CC571099_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___2_a, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___3_b, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1__ctor_mFFEF26A8BD0E03F73FCD1306CBAD763A96908EC3_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_CurrentTimeMs = ((int64_t)0);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_0 = (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		TransitionEventsFrameState__ctor_mB6598F32C78D20106304EA601681B2C08BE13CCD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_CurrentFrameEventsState = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_0);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_1 = (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		TransitionEventsFrameState__ctor_mB6598F32C78D20106304EA601681B2C08BE13CCD(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_NextFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_1);
		Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, NULL);
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513 L_2;
		L_2 = AnimationDataSet_2_Create_mFA8A189A42D45917F370E2603A4F4F69E1F778D4(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___running = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___indices), (void*)NULL);
		#endif
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33 L_3;
		L_3 = AnimationDataSet_2_Create_m2AF56891B756808EFF1F3CFD9C57175B3377AA2E(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___completed = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___indices), (void*)NULL);
		#endif
		il2cpp_codegen_runtime_class_init_inline(Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = Panel_TimeSinceStartupMs_mEEA20B197A3A4342A6CBB8412CF9040C815FEB7B(NULL);
		__this->___m_CurrentTimeMs = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mF5F3A54C15C0B8A53EEEBB797B46B83BF7F4EF92_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) 
{
	TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* V_0 = NULL;
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_0 = __this->___m_CurrentFrameEventsState;
		V_0 = L_0;
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_1 = __this->___m_NextFrameEventsState;
		__this->___m_CurrentFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_1);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_2 = V_0;
		__this->___m_NextFrameEventsState = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_0 = ___0_evt;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_1 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1.___element;
		NullCheck(L_0);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline(L_0, L_2, NULL);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_3 = __this->___m_NextFrameEventsState;
		NullCheck(L_3);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_4 = L_3->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___1_epp;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_8;
		L_8 = TransitionEventsFrameState_GetPooledQueue_m2E8C73364A926C8DE4FB172D73F33273670143A3(il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_8;
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_10 = L_9->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = ___1_epp;
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337(L_10, L_11, L_12, Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
	}

IL_0043:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14 = ___0_evt;
		NullCheck(L_13);
		Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE(L_13, L_14, Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___panel;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_18 = __this->___m_NextFrameEventsState;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = L_19.___element;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_20, NULL);
		NullCheck(L_18);
		L_18->___panel = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___panel), (void*)L_21);
	}

IL_0073:
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_22 = __this->___m_NextFrameEventsState;
		NullCheck(L_22);
		TransitionEventsFrameState_RegisterChange_mEB7F9889A594DB8AF5E3DAAB82FEFD9107AA0419(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_mD695B9606DB2932AF7067526DB64D6093F96F530_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_0 = __this->___m_NextFrameEventsState;
		NullCheck(L_0);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_1 = L_0->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_2 = ___0_epp;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0035;
	}

IL_001b:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5 = V_0;
		NullCheck(L_5);
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_6;
		L_6 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_5, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(15, L_6);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_7 = __this->___m_NextFrameEventsState;
		NullCheck(L_7);
		TransitionEventsFrameState_UnregisterChange_mD79E6E50C61D69AD6F2BD228D65D8B4A54AA1762(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0035:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_8, Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_001b;
		}
	}
	{
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_m4148985016609D7AF416911D65DE1E795D58EA46_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_3 = NULL;
	int32_t V_4 = 0;
	TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00ca;
	}

IL_0017:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_3 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|1)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)1, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_22 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_25 = V_3;
		int32_t L_26 = L_25->___delayMs;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_00a7;
	}

IL_008f:
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_27 = V_3;
		int32_t L_28 = L_27->___delayMs;
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_28)), 0, NULL);
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_30 = V_3;
		int32_t L_31 = L_30->___durationMs;
		int32_t L_32;
		L_32 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_29, L_31, NULL);
		G_B8_0 = L_32;
	}

IL_00a7:
	{
		V_4 = G_B8_0;
		int32_t L_33 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34;
		memset((&L_34), 0, sizeof(L_34));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_34), L_33, NULL);
		int32_t L_35 = V_4;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_36;
		L_36 = TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A(L_34, ((double)((float)(((float)L_35)/(1000.0f)))), TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		V_5 = L_36;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_37 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_38 = V_1;
		Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_mF337430AF9B8FAE88B3894C7B4712FBA202271B7_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_3 = NULL;
	int32_t V_4 = 0;
	TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00ca;
	}

IL_0017:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_3 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|2)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)2, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_22 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_25 = V_3;
		int32_t L_26 = L_25->___delayMs;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_00a7;
	}

IL_008f:
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_27 = V_3;
		int32_t L_28 = L_27->___delayMs;
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_28)), 0, NULL);
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_30 = V_3;
		int32_t L_31 = L_30->___durationMs;
		int32_t L_32;
		L_32 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_29, L_31, NULL);
		G_B8_0 = L_32;
	}

IL_00a7:
	{
		V_4 = G_B8_0;
		int32_t L_33 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34;
		memset((&L_34), 0, sizeof(L_34));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_34), L_33, NULL);
		int32_t L_35 = V_4;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_36;
		L_36 = TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61(L_34, ((double)((float)(((float)L_35)/(1000.0f)))), TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		V_5 = L_36;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_37 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_38 = V_1;
		Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_m4D3F9781724E085D7CD581DF3611758A94893131_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_3 = NULL;
	TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00a8;
	}

IL_0017:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_3 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|4)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)4, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_22 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		int32_t L_25 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_26;
		memset((&L_26), 0, sizeof(L_26));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_26), L_25, NULL);
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_27 = V_3;
		int32_t L_28 = L_27->___durationMs;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_29;
		L_29 = TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA(L_26, ((double)((float)(((float)L_28)/(1000.0f)))), TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		V_4 = L_29;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_30 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_31 = V_1;
		Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_4 = NULL;
	int64_t V_5 = 0;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B6_0 = 0;
	int64_t G_B16_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_012c;
	}

IL_0017:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_3 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_3), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_8 = L_13;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_15 = V_3;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_16 = V_3;
		G_B6_0 = ((((int32_t)((int32_t)((int32_t)L_16&8))) == ((int32_t)8))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B6_0 = 1;
	}

IL_0054:
	{
		V_9 = (bool)G_B6_0;
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_18 = __this->___m_NextFrameEventsState;
		NullCheck(L_18);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_19 = L_18->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_20 = V_1;
		NullCheck(L_19);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_19, L_20, (int32_t)8, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		Values_1_ClearEventQueue_mD695B9606DB2932AF7067526DB64D6093F96F530(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_2 = (bool)1;
		goto IL_009a;
	}

IL_007b:
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_22 = __this->___m_NextFrameEventsState;
		NullCheck(L_22);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_23 = L_22->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = V_1;
		NullCheck(L_23);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_23, L_24, (int32_t)0, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_25 = V_1;
		Values_1_ClearEventQueue_mD695B9606DB2932AF7067526DB64D6093F96F530(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_2 = (bool)0;
	}

IL_009a:
	{
		goto IL_00b4;
	}

IL_009d:
	{
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_26 = __this->___m_NextFrameEventsState;
		NullCheck(L_26);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_27 = L_26->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = V_1;
		NullCheck(L_27);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_27, L_28, (int32_t)8, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		V_2 = (bool)1;
	}

IL_00b4:
	{
		bool L_29 = V_2;
		V_10 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_012c;
	}

IL_00c0:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_31 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_32 = L_31->___timing;
		int32_t L_33 = ___1_runningIndex;
		NullCheck(L_32);
		V_4 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_34 = V_4;
		bool L_35 = L_34->___isStarted;
		if (L_35)
		{
			goto IL_00e0;
		}
	}
	{
		G_B16_0 = ((int64_t)0);
		goto IL_00e9;
	}

IL_00e0:
	{
		int64_t L_36 = ___2_panelElapsedMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_37 = V_4;
		int64_t L_38 = L_37->___startTimeMs;
		G_B16_0 = ((int64_t)il2cpp_codegen_subtract(L_36, L_38));
	}

IL_00e9:
	{
		V_5 = G_B16_0;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_39 = V_4;
		int32_t L_40 = L_39->___delayMs;
		V_11 = (bool)((((int32_t)L_40) < ((int32_t)0))? 1 : 0);
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_010b;
		}
	}
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_42 = V_4;
		int32_t L_43 = L_42->___delayMs;
		int64_t L_44 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add(((int64_t)((-L_43))), L_44));
	}

IL_010b:
	{
		int32_t L_45 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_46;
		memset((&L_46), 0, sizeof(L_46));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_46), L_45, NULL);
		int64_t L_47 = V_5;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_48;
		L_48 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_46, ((double)((float)(((float)L_47)/(1000.0f)))), TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_6 = L_48;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_49 = V_6;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_50 = V_1;
		Values_1_QueueEvent_m2AD5564C68E511D43AA40022AE6964BFE678756C(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_012c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_m89AFE1C929348E7021642A66D58F26BDAAE3A163_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_5 = NULL;
	int64_t G_B5_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		int32_t L_1 = ((EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticFields*)il2cpp_codegen_static_fields_for(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var))->___EventCategory;
		NullCheck(L_0);
		bool L_2;
		L_2 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, L_1, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00a2;
	}

IL_0018:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_4 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_5 = L_4->___timing;
		int32_t L_6 = ___1_runningIndex;
		NullCheck(L_5);
		V_0 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_7 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_8 = L_7->___properties;
		int32_t L_9 = ___1_runningIndex;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (int32_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = (int32_t)L_11;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_12 = V_0;
		bool L_13 = L_12->___isStarted;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		G_B5_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0044:
	{
		int64_t L_14 = ___2_panelElapsedMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_15 = V_0;
		int64_t L_16 = L_15->___startTimeMs;
		G_B5_0 = ((int64_t)il2cpp_codegen_subtract(L_14, L_16));
	}

IL_004c:
	{
		V_2 = G_B5_0;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_17 = V_0;
		int32_t L_18 = L_17->___delayMs;
		V_4 = (bool)((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_20 = V_0;
		int32_t L_21 = L_20->___delayMs;
		int64_t L_22 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)((-L_21))), L_22));
	}

IL_0069:
	{
		int32_t L_23 = V_1;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_24;
		memset((&L_24), 0, sizeof(L_24));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_24), L_23, NULL);
		int64_t L_25 = V_2;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_26;
		L_26 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_24, ((double)((float)(((float)L_25)/(1000.0f)))), TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_5 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_27 = V_5;
					if (!L_27)
					{
						goto IL_00a1;
					}
				}
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_28 = V_5;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00a1:
				{
					return;
				}
			}
		});
		try
		{
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_29 = V_5;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = ___0_ve;
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29, L_30, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = ___0_ve;
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_32 = V_5;
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_31);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_31, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_32);
			goto IL_00a2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_mD98B36472038120D858036EFA53A48AF99D5FC9A_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_9 = NULL;
	bool V_10 = false;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_4 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_5 = L_4->___elements;
		NullCheck(L_5);
		int32_t L_6 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_7, NULL);
		NullCheck(L_8);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_9;
		L_9 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_8);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_3), L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				V_4 = 0;
				goto IL_0088_1;
			}

IL_003d_1:
			{
				AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_10 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_11 = L_10->___elements;
				int32_t L_12 = V_4;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				V_5 = L_14;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_5;
				int32_t L_16 = V_4;
				int64_t L_17 = __this->___m_CurrentTimeMs;
				Values_1_SendTransitionCancelEvent_m89AFE1C929348E7021642A66D58F26BDAAE3A163(__this, L_15, L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				int32_t L_18 = V_4;
				Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = V_5;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_19, NULL);
				RuntimeObject* L_21 = L_20;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_21);
				V_6 = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_21);
				InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_21, ((int32_t)il2cpp_codegen_subtract(L_23, 1)));
				int32_t L_24 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
			}

IL_0088_1:
			{
				int32_t L_25 = V_4;
				int32_t L_26 = V_0;
				V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
				bool L_27 = V_7;
				if (L_27)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00a5;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_28 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		AnimationDataSet_2_RemoveAll_m8C71037A539C649D47BD20E4F113FADC6AAF1362(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_00b2:
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_29 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		int32_t L_30 = L_29->___count;
		V_1 = L_30;
		V_8 = 0;
		goto IL_00f4;
	}

IL_00c3:
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_31 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_32 = L_31->___elements;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = V_9;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_36, NULL);
		RuntimeObject* L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_38);
		V_6 = L_39;
		int32_t L_40 = V_6;
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_38, ((int32_t)il2cpp_codegen_subtract(L_40, 1)));
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f4:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_1;
		V_10 = (bool)((((int32_t)L_42) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_00c3;
		}
	}
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_45 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		AnimationDataSet_2_RemoveAll_mA4426F51F222EA91E9C2EBA2B94CF668F3DB561A(L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_mAED2AB1571059265C0A9A4F776EAD1F45F5269C5_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_4 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_5 = L_4->___elements;
		NullCheck(L_5);
		int32_t L_6 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_7, NULL);
		NullCheck(L_8);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_9;
		L_9 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_8);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_3), L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				V_4 = 0;
				goto IL_009c_1;
			}

IL_003d_1:
			{
				AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_10 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_11 = L_10->___elements;
				int32_t L_12 = V_4;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_ve;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_15))? 1 : 0);
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0095_1;
				}
			}
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___0_ve;
				int32_t L_18 = V_4;
				int64_t L_19 = __this->___m_CurrentTimeMs;
				Values_1_SendTransitionCancelEvent_m89AFE1C929348E7021642A66D58F26BDAAE3A163(__this, L_17, L_18, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				int32_t L_20 = V_4;
				Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_21 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_22 = L_21->___elements;
				int32_t L_23 = V_4;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_25, NULL);
				RuntimeObject* L_27 = L_26;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_27);
				V_6 = L_28;
				int32_t L_29 = V_6;
				NullCheck(L_27);
				InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)));
			}

IL_0095_1:
			{
				int32_t L_30 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_009c_1:
			{
				int32_t L_31 = V_4;
				int32_t L_32 = V_0;
				V_7 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
				bool L_33 = V_7;
				if (L_33)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
	}

IL_00ba:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_34 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = ___0_ve;
		AnimationDataSet_2_RemoveAll_mE7FEB3B77066844030F411E1DDF2F082C87E328D(L_34, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_36 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		int32_t L_37 = L_36->___count;
		V_1 = L_37;
		V_8 = 0;
		goto IL_011e;
	}

IL_00d8:
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_38 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_39 = L_38->___elements;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43 = ___0_ve;
		V_9 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_42) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0117;
		}
	}
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_45 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_46 = L_45->___elements;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_49, NULL);
		RuntimeObject* L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_51);
		V_6 = L_52;
		int32_t L_53 = V_6;
		NullCheck(L_51);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_51, ((int32_t)il2cpp_codegen_subtract(L_53, 1)));
	}

IL_0117:
	{
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_011e:
	{
		int32_t L_55 = V_8;
		int32_t L_56 = V_1;
		V_10 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_10;
		if (L_57)
		{
			goto IL_00d8;
		}
	}
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_58 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = ___0_ve;
		AnimationDataSet_2_RemoveAll_m5AB3A381977031C39D9E969745E1E349F56AF302(L_58, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAnimation_m3EAA45F2C2215CC347210B9344B8FC101CC47E55_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = AnimationDataSet_2_IndexOf_m18D4FD9066B212D86BBE380AD8C8F14D37BF8C38(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_ve;
		int32_t L_6 = V_0;
		int64_t L_7 = __this->___m_CurrentTimeMs;
		Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2(__this, L_5, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_8 = V_0;
		Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_9 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_10 = V_0;
		AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___0_ve;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_11, NULL);
		RuntimeObject* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_13);
		V_3 = L_14;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 1)));
	}

IL_0050:
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_16 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___0_ve;
		int32_t L_18 = ___1_id;
		bool L_19;
		L_19 = AnimationDataSet_2_IndexOf_m57AA472FDB15D300C252F6F63D180054A4E6D531(L_16, L_17, L_18, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_008a;
		}
	}
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_21 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		int32_t L_22 = V_1;
		AnimationDataSet_2_Remove_m89008B22BB674A031A879DB9393278C0372B2DA1(L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = ___0_ve;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_23, NULL);
		RuntimeObject* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25);
		V_3 = L_26;
		int32_t L_27 = V_3;
		NullCheck(L_25);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateAnimation_m981451BDC2EE7FE87565AFE3F6D0C5F840EC3AA7_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = AnimationDataSet_2_IndexOf_m18D4FD9066B212D86BBE380AD8C8F14D37BF8C38(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_5 = V_0;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_5);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_GetAllAnimations_m3D6E61E5D8E33C173D464CD68F3829AF2CD1973F_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outPropertyIds, const RuntimeMethod* method) 
{
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_2 = ___1_outPropertyIds;
		AnimationDataSet_2_GetActivePropertiesForElement_m27B38B77B61897FF7DB87A0CE6347A7B7D542E55(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_3 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_5 = ___1_outPropertyIds;
		AnimationDataSet_2_GetActivePropertiesForElement_mFC85A4033E8E70F298197A0D9FD02838489F1D12(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_mDC84684C900FCB33E49B62A763734BCBC82385F2_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) 
{
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_0 = NULL;
	float V_1 = 0.0f;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_1 = L_0->___timing;
		int32_t L_2 = ___0_oldIndex;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_3 = V_0;
		float L_4 = L_3->___easedProgress;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_5 = V_0;
		float L_6 = L_5->___reversingShorteningFactor;
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), L_6)))));
		float L_8;
		L_8 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_7, NULL);
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDuration_m959619FC722580A58801A8AF7F72BDE6CDBE09C4_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_newTransitionDurationMs;
		float L_1 = ___1_newReversingShorteningFactor;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_0), L_1)), NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDelay_m3677B5361E09B257A28F115B7DC9BD0B7F5DD409_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_delayMs;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_delayMs;
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_0008:
	{
		int32_t L_2 = ___0_delayMs;
		float L_3 = ___1_newReversingShorteningFactor;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_2), L_3)), NULL);
		G_B3_0 = L_4;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_StartTransition_m2EB0388DA0B740C72E645176EA1C200CAB3A10B6_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___2_startValue, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___3_endValue, int32_t ___4_durationMs, int32_t ___5_delayMs, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, int64_t ___7_currentTimeMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 V_6;
	memset((&V_6), 0, sizeof(V_6));
	StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	bool V_22 = false;
	bool V_23 = false;
	{
		int64_t L_0 = ___7_currentTimeMs;
		int32_t L_1 = ___5_delayMs;
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_1)));
		il2cpp_codegen_initobj((&V_6), sizeof(TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92));
		int64_t L_2 = V_0;
		(&V_6)->___startTimeMs = L_2;
		int32_t L_3 = ___4_durationMs;
		(&V_6)->___durationMs = L_3;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_4 = ___6_easingCurve;
		(&V_6)->___easingCurve = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___easingCurve), (void*)L_4);
		(&V_6)->___reversingShorteningFactor = (1.0f);
		int32_t L_5 = ___5_delayMs;
		(&V_6)->___delayMs = L_5;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 L_6 = V_6;
		V_1 = L_6;
		il2cpp_codegen_initobj((&V_7), sizeof(StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167));
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_7 = ___2_startValue;
		(&V_7)->___startValue = L_7;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_8 = ___3_endValue;
		(&V_7)->___endValue = L_8;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_9 = ___2_startValue;
		(&V_7)->___currentValue = L_9;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_10 = ___2_startValue;
		(&V_7)->___reversingAdjustedStartValue = L_10;
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 L_11 = V_7;
		V_2 = L_11;
		int32_t L_12 = ___4_durationMs;
		int32_t L_13;
		L_13 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, L_12, NULL);
		int32_t L_14 = ___5_delayMs;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_owner;
		int32_t L_16 = ___1_prop;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_17 = (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)(&(&V_2)->___startValue);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_18 = (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)(&(&V_2)->___endValue);
		bool L_19;
		L_19 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(14, __this, L_15, L_16, L_17, L_18);
		V_8 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00a1;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00a1:
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_21 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22 = ___0_owner;
		int32_t L_23 = ___1_prop;
		bool L_24;
		L_24 = AnimationDataSet_2_IndexOf_m57AA472FDB15D300C252F6F63D180054A4E6D531(L_21, L_22, L_23, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_10 = L_24;
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_0122;
		}
	}
	{
		Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* L_26;
		L_26 = VirtualFuncInvoker0< Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* >::Invoke(13, __this);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_27 = ___3_endValue;
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_28 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		TransformOriginU5BU5D_t0BDBC9C8F1888009152284DC2903B3C289F826DA* L_29 = L_28->___style;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		bool L_33;
		L_33 = Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_inline(L_26, L_27, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_11 = L_33;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_00e5;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00e5:
	{
		int32_t L_35 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_35) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_12;
		if (!L_36)
		{
			goto IL_00fb;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00fb:
	{
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_37 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		int32_t L_38 = V_4;
		AnimationDataSet_2_Remove_m89008B22BB674A031A879DB9393278C0372B2DA1(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = ___0_owner;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_39, NULL);
		RuntimeObject* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_41);
		V_13 = L_42;
		int32_t L_43 = V_13;
		NullCheck(L_41);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_41, ((int32_t)il2cpp_codegen_subtract(L_43, 1)));
	}

IL_0122:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_44 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = ___0_owner;
		int32_t L_46 = ___1_prop;
		bool L_47;
		L_47 = AnimationDataSet_2_IndexOf_m18D4FD9066B212D86BBE380AD8C8F14D37BF8C38(L_44, L_45, L_46, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_0369;
		}
	}
	{
		Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* L_49;
		L_49 = VirtualFuncInvoker0< Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* >::Invoke(13, __this);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_50 = ___3_endValue;
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_51 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_52 = L_51->___style;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___endValue;
		NullCheck(L_49);
		bool L_55;
		L_55 = Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_inline(L_49, L_50, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_15 = L_55;
		bool L_56 = V_15;
		if (!L_56)
		{
			goto IL_016e;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_016e:
	{
		Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* L_57;
		L_57 = VirtualFuncInvoker0< Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* >::Invoke(13, __this);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_58 = ___3_endValue;
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_59 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_60 = L_59->___style;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___currentValue;
		NullCheck(L_57);
		bool L_63;
		L_63 = Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_inline(L_57, L_58, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_16 = L_63;
		bool L_64 = V_16;
		if (!L_64)
		{
			goto IL_01d3;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65 = ___0_owner;
		int32_t L_66 = V_5;
		int64_t L_67 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2(__this, L_65, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_68 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_69 = V_5;
		AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7(L_68, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_70 = ___0_owner;
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_70, NULL);
		RuntimeObject* L_72 = L_71;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_72);
		V_13 = L_73;
		int32_t L_74 = V_13;
		NullCheck(L_72);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_72, ((int32_t)il2cpp_codegen_subtract(L_74, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_01d3:
	{
		int32_t L_75 = V_3;
		V_17 = (bool)((((int32_t)((((int32_t)L_75) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_17;
		if (!L_76)
		{
			goto IL_021b;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_77 = ___0_owner;
		int32_t L_78 = V_5;
		int64_t L_79 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2(__this, L_77, L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_80 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_81 = V_5;
		AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7(L_80, L_81, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_82 = ___0_owner;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_82, NULL);
		RuntimeObject* L_84 = L_83;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_84);
		V_13 = L_85;
		int32_t L_86 = V_13;
		NullCheck(L_84);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_84, ((int32_t)il2cpp_codegen_subtract(L_86, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_021b:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_87 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_88 = L_87->___style;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___currentValue;
		(&V_2)->___startValue = L_90;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_91 = ___0_owner;
		int32_t L_92 = ___1_prop;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_93 = (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)(&(&V_2)->___startValue);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_94 = (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)(&(&V_2)->___endValue);
		bool L_95;
		L_95 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(14, __this, L_91, L_92, L_93, L_94);
		V_18 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_18;
		if (!L_96)
		{
			goto IL_0293;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_97 = ___0_owner;
		int32_t L_98 = V_5;
		int64_t L_99 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2(__this, L_97, L_98, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_100 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_101 = V_5;
		AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7(L_100, L_101, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_102 = ___0_owner;
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_102, NULL);
		RuntimeObject* L_104 = L_103;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_104);
		V_13 = L_105;
		int32_t L_106 = V_13;
		NullCheck(L_104);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_104, ((int32_t)il2cpp_codegen_subtract(L_106, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_0293:
	{
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 L_107 = V_2;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_108 = L_107.___startValue;
		(&V_2)->___currentValue = L_108;
		Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* L_109;
		L_109 = VirtualFuncInvoker0< Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* >::Invoke(13, __this);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_110 = ___3_endValue;
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_111 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_112 = L_111->___style;
		int32_t L_113 = V_5;
		NullCheck(L_112);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_114 = ((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113)))->___reversingAdjustedStartValue;
		NullCheck(L_109);
		bool L_115;
		L_115 = Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_inline(L_109, L_110, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_19 = L_115;
		bool L_116 = V_19;
		if (!L_116)
		{
			goto IL_0326;
		}
	}
	{
		int32_t L_117 = V_5;
		float L_118;
		L_118 = Values_1_ComputeReversingShorteningFactor_mDC84684C900FCB33E49B62A763734BCBC82385F2(__this, L_117, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		float L_119 = L_118;
		V_21 = L_119;
		(&V_1)->___reversingShorteningFactor = L_119;
		float L_120 = V_21;
		V_20 = L_120;
		int64_t L_121 = ___7_currentTimeMs;
		int32_t L_122 = ___5_delayMs;
		float L_123 = V_20;
		int32_t L_124;
		L_124 = Values_1_ComputeReversingDelay_m3677B5361E09B257A28F115B7DC9BD0B7F5DD409(__this, L_122, L_123, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		(&V_1)->___startTimeMs = ((int64_t)il2cpp_codegen_add(L_121, ((int64_t)L_124)));
		int32_t L_125 = ___4_durationMs;
		float L_126 = V_20;
		int32_t L_127;
		L_127 = Values_1_ComputeReversingDuration_m959619FC722580A58801A8AF7F72BDE6CDBE09C4(__this, L_125, L_126, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		(&V_1)->___durationMs = L_127;
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_128 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_129 = L_128->___style;
		int32_t L_130 = V_5;
		NullCheck(L_129);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_131 = ((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_130)))->___endValue;
		(&V_2)->___reversingAdjustedStartValue = L_131;
	}

IL_0326:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_132 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_133 = L_132->___timing;
		int32_t L_134 = V_5;
		NullCheck(L_133);
		((L_133)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_134)))->___isStarted = (bool)0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_135 = ___0_owner;
		int32_t L_136 = V_5;
		int64_t L_137 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m766C1C81AA218AE641992A9A66EAFA26622B0BE2(__this, L_135, L_136, L_137, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_138 = ___0_owner;
		int32_t L_139 = V_5;
		Values_1_QueueTransitionRunEvent_m4148985016609D7AF416911D65DE1E795D58EA46(__this, L_138, L_139, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_140 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_141 = V_5;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 L_142 = V_1;
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 L_143 = V_2;
		AnimationDataSet_2_Replace_m63433C33942993AEB6B36439ACFD833AD3E86574(L_140, L_141, L_142, L_143, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_9 = (bool)1;
		goto IL_03d6;
	}

IL_0369:
	{
		int32_t L_144 = V_3;
		V_22 = (bool)((((int32_t)((((int32_t)L_144) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_145 = V_22;
		if (!L_145)
		{
			goto IL_037b;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_037b:
	{
		Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* L_146;
		L_146 = VirtualFuncInvoker0< Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* >::Invoke(13, __this);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_147 = ___2_startValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_148 = ___3_endValue;
		NullCheck(L_146);
		bool L_149;
		L_149 = Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_inline(L_146, L_147, L_148, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_23 = L_149;
		bool L_150 = V_23;
		if (!L_150)
		{
			goto IL_0394;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_0394:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_151 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_152 = ___0_owner;
		int32_t L_153 = ___1_prop;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 L_154 = V_1;
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167 L_155 = V_2;
		AnimationDataSet_2_Add_mFC43682BD1D4942D7EEFFD206CA5820B5F9D22CC(L_151, L_152, L_153, L_154, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_156 = ___0_owner;
		NullCheck(L_156);
		RuntimeObject* L_157;
		L_157 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_156, NULL);
		RuntimeObject* L_158 = L_157;
		NullCheck(L_158);
		int32_t L_159;
		L_159 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_158);
		V_13 = L_159;
		int32_t L_160 = V_13;
		NullCheck(L_158);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_158, ((int32_t)il2cpp_codegen_add(L_160, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_161 = ___0_owner;
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_162 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_163 = L_162->___count;
		Values_1_QueueTransitionRunEvent_m4148985016609D7AF416911D65DE1E795D58EA46(__this, L_161, ((int32_t)il2cpp_codegen_subtract(L_163, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_9 = (bool)1;
		goto IL_03d6;
	}

IL_03d6:
	{
		bool L_164 = V_9;
		return L_164;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_m56B0744D75909A4ADF587E5440E3B39B51C20292_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) 
{
	StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* V_0 = NULL;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_1 = L_0->___style;
		int32_t L_2 = ___0_runningIndex;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* L_3 = V_0;
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* L_4 = V_0;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_5 = L_4->___endValue;
		L_3->___currentValue = L_5;
		int32_t L_6 = ___0_runningIndex;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_Update_m905AB960B7F90A43449603540E89500891C6F6B5_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int64_t L_0 = ___0_currentTimeMs;
		__this->___m_CurrentTimeMs = L_0;
		int64_t L_1 = ___0_currentTimeMs;
		Values_1_UpdateProgress_m7FA4115E12B20712D0FCC49D6DAAAE4A571ABF19(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(10, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(11, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_2 = __this->___m_NextFrameEventsState;
		NullCheck(L_2);
		bool L_3;
		L_3 = TransitionEventsFrameState_StateChanged_mB3688A27A70206FC1D1BE18433FD1412A6EFA38A(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Values_1_ProcessEventQueue_mE0EB759497C086D7B4B4B93FE901138A977303FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_mE0EB759497C086D7B4B4B93FE901138A977303FA_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* V_0 = NULL;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_3;
	memset((&V_3), 0, sizeof(V_3));
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_5 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_6 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* G_B3_0 = NULL;
	{
		Values_1_SwapFrameStates_mF5F3A54C15C0B8A53EEEBB797B46B83BF7F4EF92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_0 = __this->___m_CurrentFrameEventsState;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___panel;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_3;
		L_3 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_4 = V_0;
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_1), L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bf:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_5 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_5);
				Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_6 = L_5->___elementPropertyQueuedEvents;
				NullCheck(L_6);
				Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_7;
				L_7 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_6, Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a1_1:
					{
						Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_2), Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_0096_2;
					}

IL_003d_2:
					{
						KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_8;
						L_8 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_2), Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var);
						V_3 = L_8;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
						L_9 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
						V_4 = L_9;
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_10;
						L_10 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_3), KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var);
						V_5 = L_10;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11;
						L_11 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = L_11.___element;
						V_6 = L_12;
						goto IL_0085_2;
					}

IL_0068_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_5;
						NullCheck(L_13);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14;
						L_14 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_13, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
						V_7 = L_14;
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_6;
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_16 = V_7;
						NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_15);
						VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_15, L_16);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_17 = V_7;
						NullCheck(L_17);
						VirtualActionInvoker0::Invoke(15, L_17);
					}

IL_0085_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_18 = V_5;
						NullCheck(L_18);
						int32_t L_19;
						L_19 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_18, Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
						V_8 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
						bool L_20 = V_8;
						if (L_20)
						{
							goto IL_0068_2;
						}
					}
					{
					}

IL_0096_2:
					{
						bool L_21;
						L_21 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_2), Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_003d_2;
						}
					}
					{
						goto IL_00b0_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b0_1:
			{
				TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* L_22 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_22);
				TransitionEventsFrameState_Clear_m12AEC2E7B5C46F6455AB138C95C24887DA603CD6(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				goto IL_00ce;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_m7FA4115E12B20712D0FCC49D6DAAAE4A571ABF19_gshared (Values_1_t4B3725FE6B9D8A60439FC42ABC27E2FAE91ACBA5* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* V_6 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_0 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0195;
		}
	}
	{
		V_2 = 0;
		goto IL_0187;
	}

IL_0020:
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_4 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		TimingDataU5BU5D_t1C0E9B6D937D57C27438BFA33BC2DB905EE4973E* L_5 = L_4->___timing;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		V_3 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int64_t L_7 = ___0_currentTimeMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_8 = V_3;
		int64_t L_9 = L_8->___startTimeMs;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_11 = V_3;
		L_11->___easedProgress = (0.0f);
		goto IL_0182;
	}

IL_0054:
	{
		int64_t L_12 = ___0_currentTimeMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_13 = V_3;
		int64_t L_14 = L_13->___startTimeMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_15 = V_3;
		int32_t L_16 = L_15->___durationMs;
		V_5 = (bool)((((int32_t)((((int64_t)L_12) < ((int64_t)((int64_t)il2cpp_codegen_add(L_14, ((int64_t)L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_012d;
		}
	}
	{
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_18 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StyleDataU5BU5D_tDCCCED3D71A0A84CDB77E5222463121D4EB611CC* L_19 = L_18->___style;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		V_6 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_21 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_22 = L_21->___elements;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		V_7 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)));
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* L_24 = V_6;
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* L_25 = V_6;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_26 = L_25->___endValue;
		L_24->___currentValue = L_26;
		int32_t L_27 = V_2;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_27);
		AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33* L_28 = (AnimationDataSet_2_t4532152E7A78B3E14F61FA9CA7C80BC1C3269D33*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_29 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_29);
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_31 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_32 = L_31->___properties;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (int32_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
		EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E L_36 = ((EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 53)))->___Default;
		StyleData_tDA8B8711D8BD18C0D6EB99A929976DDC956DD167* L_37 = V_6;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_38 = L_37->___endValue;
		AnimationDataSet_2_Add_m56F3AABBD2662721C07FCACFA55FB556DBB4D50A(L_28, L_30, (int32_t)L_35, L_36, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_39 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_39);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_40, NULL);
		RuntimeObject* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42);
		V_8 = L_43;
		int32_t L_44 = V_8;
		NullCheck(L_42);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42, ((int32_t)il2cpp_codegen_subtract(L_44, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_45 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_48);
		V_8 = L_49;
		int32_t L_50 = V_8;
		NullCheck(L_48);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_48, ((int32_t)il2cpp_codegen_add(L_50, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_51 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_51);
		int32_t L_53 = V_2;
		Values_1_QueueTransitionEndEvent_m4D3F9781724E085D7CD581DF3611758A94893131(__this, L_52, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_54 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		int32_t L_55 = V_2;
		AnimationDataSet_2_Remove_m9E41325A15B6036BBF27657A85E4BF1D715722A7(L_54, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		goto IL_0182;
	}

IL_012d:
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_58 = V_3;
		bool L_59 = L_58->___isStarted;
		V_10 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_015b;
		}
	}
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_61 = V_3;
		L_61->___isStarted = (bool)1;
		AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513* L_62 = (AnimationDataSet_2_t51062A50DDCEFF7458A164F033D211C9E0701513*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_63 = L_62->___elements;
		int32_t L_64 = V_2;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_2;
		Values_1_QueueTransitionStartEvent_mF337430AF9B8FAE88B3894C7B4712FBA202271B7(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}

IL_015b:
	{
		int64_t L_68 = ___0_currentTimeMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_69 = V_3;
		int64_t L_70 = L_69->___startTimeMs;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_71 = V_3;
		int32_t L_72 = L_71->___durationMs;
		V_9 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_68, L_70)))/((float)L_72)));
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_73 = V_3;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92* L_74 = V_3;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_75 = L_74->___easingCurve;
		float L_76 = V_9;
		NullCheck(L_75);
		float L_77;
		L_77 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_75, L_76, NULL);
		L_73->___easedProgress = L_77;
	}

IL_0182:
	{
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0187:
	{
		int32_t L_79 = V_2;
		int32_t L_80 = V_0;
		V_11 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_11;
		if (L_81)
		{
			goto IL_0020;
		}
	}
	{
	}

IL_0195:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_get_isEmpty_m9520D899506B3C839CF14F7B3B696E60F0D29DC8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) 
{
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_2 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		int32_t L_3 = L_2->___count;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_3))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_ConvertUnits_mA28556EF56259870A34035C2F8F9660E88A22B82_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___2_a, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___3_b, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1__ctor_m6C0823FA2DEF3358FC7605F415298C25AB5A0792_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_CurrentTimeMs = ((int64_t)0);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_0 = (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		TransitionEventsFrameState__ctor_m6C5224DC5FA47555D2A0AEE67A00681CA824848F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_CurrentFrameEventsState = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_0);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_1 = (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		TransitionEventsFrameState__ctor_m6C5224DC5FA47555D2A0AEE67A00681CA824848F(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_NextFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_1);
		Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, NULL);
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880 L_2;
		L_2 = AnimationDataSet_2_Create_m6FA05686EDAE327867A2B4C7279C2718C6D9BC53(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___running = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___indices), (void*)NULL);
		#endif
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8 L_3;
		L_3 = AnimationDataSet_2_Create_mBF26E2A3E3A04D44754ED5EBEC948679F2A7937B(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___completed = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___indices), (void*)NULL);
		#endif
		il2cpp_codegen_runtime_class_init_inline(Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = Panel_TimeSinceStartupMs_mEEA20B197A3A4342A6CBB8412CF9040C815FEB7B(NULL);
		__this->___m_CurrentTimeMs = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mF3B4CBDF3CE119499FABEB53860715B71EDE35D8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) 
{
	TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* V_0 = NULL;
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_0 = __this->___m_CurrentFrameEventsState;
		V_0 = L_0;
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_1 = __this->___m_NextFrameEventsState;
		__this->___m_CurrentFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_1);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_2 = V_0;
		__this->___m_NextFrameEventsState = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_0 = ___0_evt;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_1 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1.___element;
		NullCheck(L_0);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline(L_0, L_2, NULL);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_3 = __this->___m_NextFrameEventsState;
		NullCheck(L_3);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_4 = L_3->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___1_epp;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_8;
		L_8 = TransitionEventsFrameState_GetPooledQueue_mAE967F05DE13B2E3A1BACAA15AF68BB66A259EA2(il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_8;
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_10 = L_9->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = ___1_epp;
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337(L_10, L_11, L_12, Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
	}

IL_0043:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14 = ___0_evt;
		NullCheck(L_13);
		Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE(L_13, L_14, Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___panel;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_18 = __this->___m_NextFrameEventsState;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = L_19.___element;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_20, NULL);
		NullCheck(L_18);
		L_18->___panel = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___panel), (void*)L_21);
	}

IL_0073:
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_22 = __this->___m_NextFrameEventsState;
		NullCheck(L_22);
		TransitionEventsFrameState_RegisterChange_mF7DD7F81F56C2CA2DC02077913A9D036BB4C5342(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_m34C219EB74A61C4AF70326DAB608D456BD495212_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_0 = __this->___m_NextFrameEventsState;
		NullCheck(L_0);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_1 = L_0->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_2 = ___0_epp;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0035;
	}

IL_001b:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5 = V_0;
		NullCheck(L_5);
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_6;
		L_6 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_5, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(15, L_6);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_7 = __this->___m_NextFrameEventsState;
		NullCheck(L_7);
		TransitionEventsFrameState_UnregisterChange_mBF5BC84A0A6F9AEE162F659635BB21505ECF1C97(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0035:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_8, Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_001b;
		}
	}
	{
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_mA20C9D2B4C5FEC01D15A8C27CFFAF6192C051DB2_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_3 = NULL;
	int32_t V_4 = 0;
	TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00ca;
	}

IL_0017:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_3 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|1)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)1, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_22 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_25 = V_3;
		int32_t L_26 = L_25->___delayMs;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_00a7;
	}

IL_008f:
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_27 = V_3;
		int32_t L_28 = L_27->___delayMs;
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_28)), 0, NULL);
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_30 = V_3;
		int32_t L_31 = L_30->___durationMs;
		int32_t L_32;
		L_32 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_29, L_31, NULL);
		G_B8_0 = L_32;
	}

IL_00a7:
	{
		V_4 = G_B8_0;
		int32_t L_33 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34;
		memset((&L_34), 0, sizeof(L_34));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_34), L_33, NULL);
		int32_t L_35 = V_4;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_36;
		L_36 = TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A(L_34, ((double)((float)(((float)L_35)/(1000.0f)))), TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		V_5 = L_36;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_37 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_38 = V_1;
		Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_mB09AE0E0AFACAAEF90950370B2DA3BDD0E5C5404_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_3 = NULL;
	int32_t V_4 = 0;
	TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00ca;
	}

IL_0017:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_3 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|2)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)2, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_22 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_25 = V_3;
		int32_t L_26 = L_25->___delayMs;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_00a7;
	}

IL_008f:
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_27 = V_3;
		int32_t L_28 = L_27->___delayMs;
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_28)), 0, NULL);
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_30 = V_3;
		int32_t L_31 = L_30->___durationMs;
		int32_t L_32;
		L_32 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_29, L_31, NULL);
		G_B8_0 = L_32;
	}

IL_00a7:
	{
		V_4 = G_B8_0;
		int32_t L_33 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34;
		memset((&L_34), 0, sizeof(L_34));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_34), L_33, NULL);
		int32_t L_35 = V_4;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_36;
		L_36 = TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61(L_34, ((double)((float)(((float)L_35)/(1000.0f)))), TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		V_5 = L_36;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_37 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_38 = V_1;
		Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_mA80A933C2ADB9EC1D24260B8DD60FC06DE4C62C8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_3 = NULL;
	TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00a8;
	}

IL_0017:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_3 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|4)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)4, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_22 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		int32_t L_25 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_26;
		memset((&L_26), 0, sizeof(L_26));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_26), L_25, NULL);
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_27 = V_3;
		int32_t L_28 = L_27->___durationMs;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_29;
		L_29 = TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA(L_26, ((double)((float)(((float)L_28)/(1000.0f)))), TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		V_4 = L_29;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_30 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_31 = V_1;
		Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_4 = NULL;
	int64_t V_5 = 0;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B6_0 = 0;
	int64_t G_B16_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_012c;
	}

IL_0017:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_3 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_3), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_8 = L_13;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_15 = V_3;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_16 = V_3;
		G_B6_0 = ((((int32_t)((int32_t)((int32_t)L_16&8))) == ((int32_t)8))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B6_0 = 1;
	}

IL_0054:
	{
		V_9 = (bool)G_B6_0;
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_18 = __this->___m_NextFrameEventsState;
		NullCheck(L_18);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_19 = L_18->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_20 = V_1;
		NullCheck(L_19);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_19, L_20, (int32_t)8, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		Values_1_ClearEventQueue_m34C219EB74A61C4AF70326DAB608D456BD495212(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_2 = (bool)1;
		goto IL_009a;
	}

IL_007b:
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_22 = __this->___m_NextFrameEventsState;
		NullCheck(L_22);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_23 = L_22->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = V_1;
		NullCheck(L_23);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_23, L_24, (int32_t)0, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_25 = V_1;
		Values_1_ClearEventQueue_m34C219EB74A61C4AF70326DAB608D456BD495212(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_2 = (bool)0;
	}

IL_009a:
	{
		goto IL_00b4;
	}

IL_009d:
	{
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_26 = __this->___m_NextFrameEventsState;
		NullCheck(L_26);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_27 = L_26->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = V_1;
		NullCheck(L_27);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_27, L_28, (int32_t)8, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		V_2 = (bool)1;
	}

IL_00b4:
	{
		bool L_29 = V_2;
		V_10 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_012c;
	}

IL_00c0:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_31 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_32 = L_31->___timing;
		int32_t L_33 = ___1_runningIndex;
		NullCheck(L_32);
		V_4 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_34 = V_4;
		bool L_35 = L_34->___isStarted;
		if (L_35)
		{
			goto IL_00e0;
		}
	}
	{
		G_B16_0 = ((int64_t)0);
		goto IL_00e9;
	}

IL_00e0:
	{
		int64_t L_36 = ___2_panelElapsedMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_37 = V_4;
		int64_t L_38 = L_37->___startTimeMs;
		G_B16_0 = ((int64_t)il2cpp_codegen_subtract(L_36, L_38));
	}

IL_00e9:
	{
		V_5 = G_B16_0;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_39 = V_4;
		int32_t L_40 = L_39->___delayMs;
		V_11 = (bool)((((int32_t)L_40) < ((int32_t)0))? 1 : 0);
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_010b;
		}
	}
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_42 = V_4;
		int32_t L_43 = L_42->___delayMs;
		int64_t L_44 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add(((int64_t)((-L_43))), L_44));
	}

IL_010b:
	{
		int32_t L_45 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_46;
		memset((&L_46), 0, sizeof(L_46));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_46), L_45, NULL);
		int64_t L_47 = V_5;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_48;
		L_48 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_46, ((double)((float)(((float)L_47)/(1000.0f)))), TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_6 = L_48;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_49 = V_6;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_50 = V_1;
		Values_1_QueueEvent_mDB9110D6D3403B8AB7FB3CD5042F0A169F043C32(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_012c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_mF8CC15486E5815C174DBA1210C56E794DB2C1355_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_5 = NULL;
	int64_t G_B5_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		int32_t L_1 = ((EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticFields*)il2cpp_codegen_static_fields_for(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var))->___EventCategory;
		NullCheck(L_0);
		bool L_2;
		L_2 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, L_1, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00a2;
	}

IL_0018:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_4 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_5 = L_4->___timing;
		int32_t L_6 = ___1_runningIndex;
		NullCheck(L_5);
		V_0 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_7 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_8 = L_7->___properties;
		int32_t L_9 = ___1_runningIndex;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (int32_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = (int32_t)L_11;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_12 = V_0;
		bool L_13 = L_12->___isStarted;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		G_B5_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0044:
	{
		int64_t L_14 = ___2_panelElapsedMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_15 = V_0;
		int64_t L_16 = L_15->___startTimeMs;
		G_B5_0 = ((int64_t)il2cpp_codegen_subtract(L_14, L_16));
	}

IL_004c:
	{
		V_2 = G_B5_0;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_17 = V_0;
		int32_t L_18 = L_17->___delayMs;
		V_4 = (bool)((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_20 = V_0;
		int32_t L_21 = L_20->___delayMs;
		int64_t L_22 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)((-L_21))), L_22));
	}

IL_0069:
	{
		int32_t L_23 = V_1;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_24;
		memset((&L_24), 0, sizeof(L_24));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_24), L_23, NULL);
		int64_t L_25 = V_2;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_26;
		L_26 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_24, ((double)((float)(((float)L_25)/(1000.0f)))), TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_5 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_27 = V_5;
					if (!L_27)
					{
						goto IL_00a1;
					}
				}
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_28 = V_5;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00a1:
				{
					return;
				}
			}
		});
		try
		{
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_29 = V_5;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = ___0_ve;
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29, L_30, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = ___0_ve;
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_32 = V_5;
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_31);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_31, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_32);
			goto IL_00a2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_m3ECD2F4E19D04F33DC89427DCA9358A26AAB0DC9_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_9 = NULL;
	bool V_10 = false;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_4 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_5 = L_4->___elements;
		NullCheck(L_5);
		int32_t L_6 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_7, NULL);
		NullCheck(L_8);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_9;
		L_9 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_8);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_3), L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				V_4 = 0;
				goto IL_0088_1;
			}

IL_003d_1:
			{
				AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_10 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_11 = L_10->___elements;
				int32_t L_12 = V_4;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				V_5 = L_14;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_5;
				int32_t L_16 = V_4;
				int64_t L_17 = __this->___m_CurrentTimeMs;
				Values_1_SendTransitionCancelEvent_mF8CC15486E5815C174DBA1210C56E794DB2C1355(__this, L_15, L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				int32_t L_18 = V_4;
				Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = V_5;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_19, NULL);
				RuntimeObject* L_21 = L_20;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_21);
				V_6 = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_21);
				InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_21, ((int32_t)il2cpp_codegen_subtract(L_23, 1)));
				int32_t L_24 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
			}

IL_0088_1:
			{
				int32_t L_25 = V_4;
				int32_t L_26 = V_0;
				V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
				bool L_27 = V_7;
				if (L_27)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00a5;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_28 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		AnimationDataSet_2_RemoveAll_m1B65D53F11A293B8DE0631EE8DE758D11FB68EE5(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_00b2:
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_29 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		int32_t L_30 = L_29->___count;
		V_1 = L_30;
		V_8 = 0;
		goto IL_00f4;
	}

IL_00c3:
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_31 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_32 = L_31->___elements;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = V_9;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_36, NULL);
		RuntimeObject* L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_38);
		V_6 = L_39;
		int32_t L_40 = V_6;
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_38, ((int32_t)il2cpp_codegen_subtract(L_40, 1)));
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f4:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_1;
		V_10 = (bool)((((int32_t)L_42) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_00c3;
		}
	}
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_45 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		AnimationDataSet_2_RemoveAll_m432D5BEA7E0E76AFB5E40DEA3565E95B4F39FC8C(L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_mA76FCA3CF992CEB4F67FBBEEAED0BC91A38F9178_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_4 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_5 = L_4->___elements;
		NullCheck(L_5);
		int32_t L_6 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_7, NULL);
		NullCheck(L_8);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_9;
		L_9 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_8);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_3), L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				V_4 = 0;
				goto IL_009c_1;
			}

IL_003d_1:
			{
				AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_10 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_11 = L_10->___elements;
				int32_t L_12 = V_4;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_ve;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_15))? 1 : 0);
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0095_1;
				}
			}
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___0_ve;
				int32_t L_18 = V_4;
				int64_t L_19 = __this->___m_CurrentTimeMs;
				Values_1_SendTransitionCancelEvent_mF8CC15486E5815C174DBA1210C56E794DB2C1355(__this, L_17, L_18, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				int32_t L_20 = V_4;
				Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_21 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_22 = L_21->___elements;
				int32_t L_23 = V_4;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_25, NULL);
				RuntimeObject* L_27 = L_26;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_27);
				V_6 = L_28;
				int32_t L_29 = V_6;
				NullCheck(L_27);
				InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)));
			}

IL_0095_1:
			{
				int32_t L_30 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_009c_1:
			{
				int32_t L_31 = V_4;
				int32_t L_32 = V_0;
				V_7 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
				bool L_33 = V_7;
				if (L_33)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
	}

IL_00ba:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_34 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = ___0_ve;
		AnimationDataSet_2_RemoveAll_mC765117478E95557FAFBD826BE254076CEE02AA8(L_34, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_36 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		int32_t L_37 = L_36->___count;
		V_1 = L_37;
		V_8 = 0;
		goto IL_011e;
	}

IL_00d8:
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_38 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_39 = L_38->___elements;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43 = ___0_ve;
		V_9 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_42) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0117;
		}
	}
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_45 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_46 = L_45->___elements;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_49, NULL);
		RuntimeObject* L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_51);
		V_6 = L_52;
		int32_t L_53 = V_6;
		NullCheck(L_51);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_51, ((int32_t)il2cpp_codegen_subtract(L_53, 1)));
	}

IL_0117:
	{
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_011e:
	{
		int32_t L_55 = V_8;
		int32_t L_56 = V_1;
		V_10 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_10;
		if (L_57)
		{
			goto IL_00d8;
		}
	}
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_58 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = ___0_ve;
		AnimationDataSet_2_RemoveAll_m392ECFEF982E1556680DAEC908920E378A14308C(L_58, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAnimation_mE54077F5CF16E5C4BB903AC688B6D291051192A1_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = AnimationDataSet_2_IndexOf_mCC9C377CB2BBB66282F0A592776C7486DAE01F92(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_ve;
		int32_t L_6 = V_0;
		int64_t L_7 = __this->___m_CurrentTimeMs;
		Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6(__this, L_5, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_8 = V_0;
		Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_9 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_10 = V_0;
		AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___0_ve;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_11, NULL);
		RuntimeObject* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_13);
		V_3 = L_14;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 1)));
	}

IL_0050:
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_16 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___0_ve;
		int32_t L_18 = ___1_id;
		bool L_19;
		L_19 = AnimationDataSet_2_IndexOf_m3E944070D0F84CCD1A98EF682152EAD467772071(L_16, L_17, L_18, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_008a;
		}
	}
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_21 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		int32_t L_22 = V_1;
		AnimationDataSet_2_Remove_m370CAE7A13600678BF6C510E9F6A0616E7DFF78A(L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = ___0_ve;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_23, NULL);
		RuntimeObject* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25);
		V_3 = L_26;
		int32_t L_27 = V_3;
		NullCheck(L_25);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateAnimation_m00EA1C0C5B3AA2FF32EE2B10062A4845E28F01AA_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = AnimationDataSet_2_IndexOf_mCC9C377CB2BBB66282F0A592776C7486DAE01F92(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_5 = V_0;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_5);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_GetAllAnimations_m2A70E32978E83804E19779E2358890C3C09593FC_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outPropertyIds, const RuntimeMethod* method) 
{
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_2 = ___1_outPropertyIds;
		AnimationDataSet_2_GetActivePropertiesForElement_m45E21C60D951FB2A30D2BCE5C28A3F1DFE234541(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_3 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_5 = ___1_outPropertyIds;
		AnimationDataSet_2_GetActivePropertiesForElement_m27ACB9994E607060C95E90395DE756B1BD0EE89D(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_mD5B965190DECCDCC8656F4B6B179381656F051DC_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) 
{
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_0 = NULL;
	float V_1 = 0.0f;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_1 = L_0->___timing;
		int32_t L_2 = ___0_oldIndex;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_3 = V_0;
		float L_4 = L_3->___easedProgress;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_5 = V_0;
		float L_6 = L_5->___reversingShorteningFactor;
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), L_6)))));
		float L_8;
		L_8 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_7, NULL);
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDuration_mB4C8DBF1C05E5B3ED14CEE8DA8A29854F60059AD_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_newTransitionDurationMs;
		float L_1 = ___1_newReversingShorteningFactor;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_0), L_1)), NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDelay_m397A2E079DCD37650B2DB9197E59284E099A27F3_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_delayMs;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_delayMs;
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_0008:
	{
		int32_t L_2 = ___0_delayMs;
		float L_3 = ___1_newReversingShorteningFactor;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_2), L_3)), NULL);
		G_B3_0 = L_4;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_StartTransition_mDC5EE7C18C19B61DC931B6C051A6CB1AF18E1282_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___2_startValue, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___3_endValue, int32_t ___4_durationMs, int32_t ___5_delayMs, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, int64_t ___7_currentTimeMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	bool V_22 = false;
	bool V_23 = false;
	{
		int64_t L_0 = ___7_currentTimeMs;
		int32_t L_1 = ___5_delayMs;
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_1)));
		il2cpp_codegen_initobj((&V_6), sizeof(TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3));
		int64_t L_2 = V_0;
		(&V_6)->___startTimeMs = L_2;
		int32_t L_3 = ___4_durationMs;
		(&V_6)->___durationMs = L_3;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_4 = ___6_easingCurve;
		(&V_6)->___easingCurve = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___easingCurve), (void*)L_4);
		(&V_6)->___reversingShorteningFactor = (1.0f);
		int32_t L_5 = ___5_delayMs;
		(&V_6)->___delayMs = L_5;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 L_6 = V_6;
		V_1 = L_6;
		il2cpp_codegen_initobj((&V_7), sizeof(StyleData_t516B303180A937637806C9C217FE06E3AACDEE23));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_7 = ___2_startValue;
		(&V_7)->___startValue = L_7;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_8 = ___3_endValue;
		(&V_7)->___endValue = L_8;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_9 = ___2_startValue;
		(&V_7)->___currentValue = L_9;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_10 = ___2_startValue;
		(&V_7)->___reversingAdjustedStartValue = L_10;
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 L_11 = V_7;
		V_2 = L_11;
		int32_t L_12 = ___4_durationMs;
		int32_t L_13;
		L_13 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, L_12, NULL);
		int32_t L_14 = ___5_delayMs;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_owner;
		int32_t L_16 = ___1_prop;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_17 = (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)(&(&V_2)->___startValue);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_18 = (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)(&(&V_2)->___endValue);
		bool L_19;
		L_19 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(14, __this, L_15, L_16, L_17, L_18);
		V_8 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00a1;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00a1:
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_21 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22 = ___0_owner;
		int32_t L_23 = ___1_prop;
		bool L_24;
		L_24 = AnimationDataSet_2_IndexOf_m3E944070D0F84CCD1A98EF682152EAD467772071(L_21, L_22, L_23, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_10 = L_24;
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_0122;
		}
	}
	{
		Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* L_26;
		L_26 = VirtualFuncInvoker0< Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* >::Invoke(13, __this);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_27 = ___3_endValue;
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_28 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		TranslateU5BU5D_t9199DFD72A8EC5FA4C33D75E5F85242F9F97E358* L_29 = L_28->___style;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		bool L_33;
		L_33 = Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_inline(L_26, L_27, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_11 = L_33;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_00e5;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00e5:
	{
		int32_t L_35 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_35) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_12;
		if (!L_36)
		{
			goto IL_00fb;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00fb:
	{
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_37 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		int32_t L_38 = V_4;
		AnimationDataSet_2_Remove_m370CAE7A13600678BF6C510E9F6A0616E7DFF78A(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = ___0_owner;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_39, NULL);
		RuntimeObject* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_41);
		V_13 = L_42;
		int32_t L_43 = V_13;
		NullCheck(L_41);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_41, ((int32_t)il2cpp_codegen_subtract(L_43, 1)));
	}

IL_0122:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_44 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = ___0_owner;
		int32_t L_46 = ___1_prop;
		bool L_47;
		L_47 = AnimationDataSet_2_IndexOf_mCC9C377CB2BBB66282F0A592776C7486DAE01F92(L_44, L_45, L_46, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_0369;
		}
	}
	{
		Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* L_49;
		L_49 = VirtualFuncInvoker0< Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* >::Invoke(13, __this);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_50 = ___3_endValue;
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_51 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_52 = L_51->___style;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___endValue;
		NullCheck(L_49);
		bool L_55;
		L_55 = Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_inline(L_49, L_50, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_15 = L_55;
		bool L_56 = V_15;
		if (!L_56)
		{
			goto IL_016e;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_016e:
	{
		Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* L_57;
		L_57 = VirtualFuncInvoker0< Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* >::Invoke(13, __this);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_58 = ___3_endValue;
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_59 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_60 = L_59->___style;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___currentValue;
		NullCheck(L_57);
		bool L_63;
		L_63 = Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_inline(L_57, L_58, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_16 = L_63;
		bool L_64 = V_16;
		if (!L_64)
		{
			goto IL_01d3;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65 = ___0_owner;
		int32_t L_66 = V_5;
		int64_t L_67 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6(__this, L_65, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_68 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_69 = V_5;
		AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912(L_68, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_70 = ___0_owner;
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_70, NULL);
		RuntimeObject* L_72 = L_71;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_72);
		V_13 = L_73;
		int32_t L_74 = V_13;
		NullCheck(L_72);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_72, ((int32_t)il2cpp_codegen_subtract(L_74, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_01d3:
	{
		int32_t L_75 = V_3;
		V_17 = (bool)((((int32_t)((((int32_t)L_75) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_17;
		if (!L_76)
		{
			goto IL_021b;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_77 = ___0_owner;
		int32_t L_78 = V_5;
		int64_t L_79 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6(__this, L_77, L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_80 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_81 = V_5;
		AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912(L_80, L_81, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_82 = ___0_owner;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_82, NULL);
		RuntimeObject* L_84 = L_83;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_84);
		V_13 = L_85;
		int32_t L_86 = V_13;
		NullCheck(L_84);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_84, ((int32_t)il2cpp_codegen_subtract(L_86, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_021b:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_87 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_88 = L_87->___style;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___currentValue;
		(&V_2)->___startValue = L_90;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_91 = ___0_owner;
		int32_t L_92 = ___1_prop;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_93 = (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)(&(&V_2)->___startValue);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_94 = (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)(&(&V_2)->___endValue);
		bool L_95;
		L_95 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(14, __this, L_91, L_92, L_93, L_94);
		V_18 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_18;
		if (!L_96)
		{
			goto IL_0293;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_97 = ___0_owner;
		int32_t L_98 = V_5;
		int64_t L_99 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6(__this, L_97, L_98, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_100 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_101 = V_5;
		AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912(L_100, L_101, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_102 = ___0_owner;
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_102, NULL);
		RuntimeObject* L_104 = L_103;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_104);
		V_13 = L_105;
		int32_t L_106 = V_13;
		NullCheck(L_104);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_104, ((int32_t)il2cpp_codegen_subtract(L_106, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_0293:
	{
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 L_107 = V_2;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_108 = L_107.___startValue;
		(&V_2)->___currentValue = L_108;
		Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* L_109;
		L_109 = VirtualFuncInvoker0< Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* >::Invoke(13, __this);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_110 = ___3_endValue;
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_111 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_112 = L_111->___style;
		int32_t L_113 = V_5;
		NullCheck(L_112);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_114 = ((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113)))->___reversingAdjustedStartValue;
		NullCheck(L_109);
		bool L_115;
		L_115 = Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_inline(L_109, L_110, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_19 = L_115;
		bool L_116 = V_19;
		if (!L_116)
		{
			goto IL_0326;
		}
	}
	{
		int32_t L_117 = V_5;
		float L_118;
		L_118 = Values_1_ComputeReversingShorteningFactor_mD5B965190DECCDCC8656F4B6B179381656F051DC(__this, L_117, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		float L_119 = L_118;
		V_21 = L_119;
		(&V_1)->___reversingShorteningFactor = L_119;
		float L_120 = V_21;
		V_20 = L_120;
		int64_t L_121 = ___7_currentTimeMs;
		int32_t L_122 = ___5_delayMs;
		float L_123 = V_20;
		int32_t L_124;
		L_124 = Values_1_ComputeReversingDelay_m397A2E079DCD37650B2DB9197E59284E099A27F3(__this, L_122, L_123, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		(&V_1)->___startTimeMs = ((int64_t)il2cpp_codegen_add(L_121, ((int64_t)L_124)));
		int32_t L_125 = ___4_durationMs;
		float L_126 = V_20;
		int32_t L_127;
		L_127 = Values_1_ComputeReversingDuration_mB4C8DBF1C05E5B3ED14CEE8DA8A29854F60059AD(__this, L_125, L_126, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		(&V_1)->___durationMs = L_127;
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_128 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_129 = L_128->___style;
		int32_t L_130 = V_5;
		NullCheck(L_129);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_131 = ((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_130)))->___endValue;
		(&V_2)->___reversingAdjustedStartValue = L_131;
	}

IL_0326:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_132 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_133 = L_132->___timing;
		int32_t L_134 = V_5;
		NullCheck(L_133);
		((L_133)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_134)))->___isStarted = (bool)0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_135 = ___0_owner;
		int32_t L_136 = V_5;
		int64_t L_137 = ___7_currentTimeMs;
		Values_1_QueueTransitionCancelEvent_m08D62BC827816B2584BDCC729BD4DA9467B81AD6(__this, L_135, L_136, L_137, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_138 = ___0_owner;
		int32_t L_139 = V_5;
		Values_1_QueueTransitionRunEvent_mA20C9D2B4C5FEC01D15A8C27CFFAF6192C051DB2(__this, L_138, L_139, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_140 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_141 = V_5;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 L_142 = V_1;
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 L_143 = V_2;
		AnimationDataSet_2_Replace_m59D93DAEE4A8716C60C45FF0F10B737DBE524FAA(L_140, L_141, L_142, L_143, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_9 = (bool)1;
		goto IL_03d6;
	}

IL_0369:
	{
		int32_t L_144 = V_3;
		V_22 = (bool)((((int32_t)((((int32_t)L_144) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_145 = V_22;
		if (!L_145)
		{
			goto IL_037b;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_037b:
	{
		Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* L_146;
		L_146 = VirtualFuncInvoker0< Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* >::Invoke(13, __this);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_147 = ___2_startValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_148 = ___3_endValue;
		NullCheck(L_146);
		bool L_149;
		L_149 = Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_inline(L_146, L_147, L_148, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_23 = L_149;
		bool L_150 = V_23;
		if (!L_150)
		{
			goto IL_0394;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_0394:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_151 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_152 = ___0_owner;
		int32_t L_153 = ___1_prop;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 L_154 = V_1;
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23 L_155 = V_2;
		AnimationDataSet_2_Add_m12A0277CC8254FEA9074BB833C612001E871AD7C(L_151, L_152, L_153, L_154, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_156 = ___0_owner;
		NullCheck(L_156);
		RuntimeObject* L_157;
		L_157 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_156, NULL);
		RuntimeObject* L_158 = L_157;
		NullCheck(L_158);
		int32_t L_159;
		L_159 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_158);
		V_13 = L_159;
		int32_t L_160 = V_13;
		NullCheck(L_158);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_158, ((int32_t)il2cpp_codegen_add(L_160, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_161 = ___0_owner;
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_162 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_163 = L_162->___count;
		Values_1_QueueTransitionRunEvent_mA20C9D2B4C5FEC01D15A8C27CFFAF6192C051DB2(__this, L_161, ((int32_t)il2cpp_codegen_subtract(L_163, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_9 = (bool)1;
		goto IL_03d6;
	}

IL_03d6:
	{
		bool L_164 = V_9;
		return L_164;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_m49624ABBBF7FACBF3C5EE1D16806A2FE00071FAF_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) 
{
	StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* V_0 = NULL;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_1 = L_0->___style;
		int32_t L_2 = ___0_runningIndex;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* L_3 = V_0;
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* L_4 = V_0;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_5 = L_4->___endValue;
		L_3->___currentValue = L_5;
		int32_t L_6 = ___0_runningIndex;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_Update_mAEDB1DB167CA7652B7603E5D1080D40E9C760781_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int64_t L_0 = ___0_currentTimeMs;
		__this->___m_CurrentTimeMs = L_0;
		int64_t L_1 = ___0_currentTimeMs;
		Values_1_UpdateProgress_mE38C0F5203ABE650C43883A26146D5D53D957AAE(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(10, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(11, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_2 = __this->___m_NextFrameEventsState;
		NullCheck(L_2);
		bool L_3;
		L_3 = TransitionEventsFrameState_StateChanged_m7D5DB2E7460EB92B10358A20DB3192418E0B9367(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Values_1_ProcessEventQueue_m8FBA418337B41BC977B694442CCBE740823B55A8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_m8FBA418337B41BC977B694442CCBE740823B55A8_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* V_0 = NULL;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_3;
	memset((&V_3), 0, sizeof(V_3));
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_5 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_6 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* G_B3_0 = NULL;
	{
		Values_1_SwapFrameStates_mF3B4CBDF3CE119499FABEB53860715B71EDE35D8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_0 = __this->___m_CurrentFrameEventsState;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___panel;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_3;
		L_3 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_4 = V_0;
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_1), L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bf:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_5 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_5);
				Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_6 = L_5->___elementPropertyQueuedEvents;
				NullCheck(L_6);
				Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_7;
				L_7 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_6, Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a1_1:
					{
						Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_2), Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_0096_2;
					}

IL_003d_2:
					{
						KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_8;
						L_8 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_2), Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var);
						V_3 = L_8;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
						L_9 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
						V_4 = L_9;
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_10;
						L_10 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_3), KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var);
						V_5 = L_10;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11;
						L_11 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = L_11.___element;
						V_6 = L_12;
						goto IL_0085_2;
					}

IL_0068_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_5;
						NullCheck(L_13);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14;
						L_14 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_13, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
						V_7 = L_14;
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_6;
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_16 = V_7;
						NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_15);
						VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_15, L_16);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_17 = V_7;
						NullCheck(L_17);
						VirtualActionInvoker0::Invoke(15, L_17);
					}

IL_0085_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_18 = V_5;
						NullCheck(L_18);
						int32_t L_19;
						L_19 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_18, Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
						V_8 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
						bool L_20 = V_8;
						if (L_20)
						{
							goto IL_0068_2;
						}
					}
					{
					}

IL_0096_2:
					{
						bool L_21;
						L_21 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_2), Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_003d_2;
						}
					}
					{
						goto IL_00b0_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b0_1:
			{
				TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* L_22 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_22);
				TransitionEventsFrameState_Clear_m7D00CB267A08EEBB5F8F5AAB978BA76AE7B4B71C(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				goto IL_00ce;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_mE38C0F5203ABE650C43883A26146D5D53D957AAE_gshared (Values_1_tF515CA326AF84CBBA1A40F1C76BC6D39AA409215* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* V_6 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_0 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0195;
		}
	}
	{
		V_2 = 0;
		goto IL_0187;
	}

IL_0020:
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_4 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		TimingDataU5BU5D_t634CA6261A1EDA23867D38722881D8D9610065E3* L_5 = L_4->___timing;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		V_3 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int64_t L_7 = ___0_currentTimeMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_8 = V_3;
		int64_t L_9 = L_8->___startTimeMs;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_11 = V_3;
		L_11->___easedProgress = (0.0f);
		goto IL_0182;
	}

IL_0054:
	{
		int64_t L_12 = ___0_currentTimeMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_13 = V_3;
		int64_t L_14 = L_13->___startTimeMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_15 = V_3;
		int32_t L_16 = L_15->___durationMs;
		V_5 = (bool)((((int32_t)((((int64_t)L_12) < ((int64_t)((int64_t)il2cpp_codegen_add(L_14, ((int64_t)L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_012d;
		}
	}
	{
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_18 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StyleDataU5BU5D_tAD21796096D8CBCE199118430F1C659AA1DFB822* L_19 = L_18->___style;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		V_6 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_21 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_22 = L_21->___elements;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		V_7 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)));
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* L_24 = V_6;
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* L_25 = V_6;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_26 = L_25->___endValue;
		L_24->___currentValue = L_26;
		int32_t L_27 = V_2;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_27);
		AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8* L_28 = (AnimationDataSet_2_t9D395E96FBE02DA4D17B2E175F9B5C297C1BBAA8*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_29 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_29);
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_31 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_32 = L_31->___properties;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (int32_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
		EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB L_36 = ((EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 53)))->___Default;
		StyleData_t516B303180A937637806C9C217FE06E3AACDEE23* L_37 = V_6;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_38 = L_37->___endValue;
		AnimationDataSet_2_Add_m36BE698F7030A37373E2B5DE7069FD77CD48D725(L_28, L_30, (int32_t)L_35, L_36, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_39 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_39);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_40, NULL);
		RuntimeObject* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42);
		V_8 = L_43;
		int32_t L_44 = V_8;
		NullCheck(L_42);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42, ((int32_t)il2cpp_codegen_subtract(L_44, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_45 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_48);
		V_8 = L_49;
		int32_t L_50 = V_8;
		NullCheck(L_48);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_48, ((int32_t)il2cpp_codegen_add(L_50, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_51 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_51);
		int32_t L_53 = V_2;
		Values_1_QueueTransitionEndEvent_mA80A933C2ADB9EC1D24260B8DD60FC06DE4C62C8(__this, L_52, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_54 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		int32_t L_55 = V_2;
		AnimationDataSet_2_Remove_mF04E0E503EA69586523C53BA40D31CD7A1EF6912(L_54, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		goto IL_0182;
	}

IL_012d:
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_58 = V_3;
		bool L_59 = L_58->___isStarted;
		V_10 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_015b;
		}
	}
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_61 = V_3;
		L_61->___isStarted = (bool)1;
		AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880* L_62 = (AnimationDataSet_2_t22FC41AC7166F393727321C212FD541AA7DC4880*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_63 = L_62->___elements;
		int32_t L_64 = V_2;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_2;
		Values_1_QueueTransitionStartEvent_mB09AE0E0AFACAAEF90950370B2DA3BDD0E5C5404(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}

IL_015b:
	{
		int64_t L_68 = ___0_currentTimeMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_69 = V_3;
		int64_t L_70 = L_69->___startTimeMs;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_71 = V_3;
		int32_t L_72 = L_71->___durationMs;
		V_9 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_68, L_70)))/((float)L_72)));
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_73 = V_3;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3* L_74 = V_3;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_75 = L_74->___easingCurve;
		float L_76 = V_9;
		NullCheck(L_75);
		float L_77;
		L_77 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_75, L_76, NULL);
		L_73->___easedProgress = L_77;
	}

IL_0182:
	{
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0187:
	{
		int32_t L_79 = V_2;
		int32_t L_80 = V_0;
		V_11 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_11;
		if (L_81)
		{
			goto IL_0020;
		}
	}
	{
	}

IL_0195:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_get_isEmpty_m8B97AF1AAAA9217F2283C84B56BCE192AB925DA3_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_2 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_3 = L_2->___count;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_3))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_ConvertUnits_m71D818EE3FA8EF2424E70920DC596A7C2AB5E32E_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Il2CppFullySharedGenericAny* ___2_a, Il2CppFullySharedGenericAny* ___3_b, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1__ctor_mD777D1BABD541B17F98B1C9D94F87D9335E6AE8C_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_CurrentTimeMs = ((int64_t)0);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_CurrentFrameEventsState = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_0);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_1 = (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_NextFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_1);
		Values__ctor_m154F5E2A0541CF4C0B1CD89FE135945542E64B72((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, NULL);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 L_2;
		L_2 = ((  AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___running = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___running))->___indices), (void*)NULL);
		#endif
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 L_3;
		L_3 = ((  AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___completed = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___elements), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___properties), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___timing), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___style), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___completed))->___indices), (void*)NULL);
		#endif
		il2cpp_codegen_runtime_class_init_inline(Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = Panel_TimeSinceStartupMs_mEEA20B197A3A4342A6CBB8412CF9040C815FEB7B(NULL);
		__this->___m_CurrentTimeMs = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SwapFrameStates_mD651E6B0F40BA3D9674C6ED1EE03D0DD4F1C531D_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* V_0 = NULL;
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = __this->___m_CurrentFrameEventsState;
		V_0 = L_0;
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_1 = __this->___m_NextFrameEventsState;
		__this->___m_CurrentFrameEventsState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentFrameEventsState), (void*)L_1);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_2 = V_0;
		__this->___m_NextFrameEventsState = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextFrameEventsState), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueEvent_m9FA040AF7B261E15B8DA75E45FACC0EBBD39D304_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___1_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_0 = ___0_evt;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_1 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = L_1.___element;
		NullCheck(L_0);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline(L_0, L_2, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_3 = __this->___m_NextFrameEventsState;
		NullCheck(L_3);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_4 = L_3->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___1_epp;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_8;
		L_8 = ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_8;
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_9 = __this->___m_NextFrameEventsState;
		NullCheck(L_9);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_10 = L_9->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11 = ___1_epp;
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337(L_10, L_11, L_12, Dictionary_2_Add_m4D0C3095996E7B1D88B163C7DA308689CCA71337_RuntimeMethod_var);
	}

IL_0043:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14 = ___0_evt;
		NullCheck(L_13);
		Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE(L_13, L_14, Queue_1_Enqueue_mC0C477097247ABAE611BD10D005CBADBED88FCAE_RuntimeMethod_var);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___panel;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_18 = __this->___m_NextFrameEventsState;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_19 = ___1_epp;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = L_19.___element;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_20, NULL);
		NullCheck(L_18);
		L_18->___panel = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___panel), (void*)L_21);
	}

IL_0073:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_22 = __this->___m_NextFrameEventsState;
		NullCheck(L_22);
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ClearEventQueue_m6F16D1CB7742D04CACD5FF4E433D8F809504F799_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_epp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = __this->___m_NextFrameEventsState;
		NullCheck(L_0);
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_1 = L_0->___elementPropertyQueuedEvents;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_2 = ___0_epp;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mE96E09123A2A4922CFD74DE71611B083A2A0CA8C_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0035;
	}

IL_001b:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5 = V_0;
		NullCheck(L_5);
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_6;
		L_6 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_5, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(15, L_6);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_7 = __this->___m_NextFrameEventsState;
		NullCheck(L_7);
		((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0035:
	{
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_8, Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_001b;
		}
	}
	{
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionRunEvent_m1BC1E03F658E2B13210AAA244B2202596CD863EF_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	int32_t V_4 = 0;
	TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00ca;
	}

IL_0017:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|1)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)1, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_22 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_25 = V_3;
		int32_t L_26 = L_25->___delayMs;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_00a7;
	}

IL_008f:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_27 = V_3;
		int32_t L_28 = L_27->___delayMs;
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_28)), 0, NULL);
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_30 = V_3;
		int32_t L_31 = L_30->___durationMs;
		int32_t L_32;
		L_32 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_29, L_31, NULL);
		G_B8_0 = L_32;
	}

IL_00a7:
	{
		V_4 = G_B8_0;
		int32_t L_33 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34;
		memset((&L_34), 0, sizeof(L_34));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_34), L_33, NULL);
		int32_t L_35 = V_4;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_36;
		L_36 = TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A(L_34, ((double)((float)(((float)L_35)/(1000.0f)))), TransitionEventBase_1_GetPooled_m5A4FB9CF00193D3079D46E507D66AB77C1F4A66A_RuntimeMethod_var);
		V_5 = L_36;
		TransitionRunEvent_t66B0D9314D2E48D69E5848848B085655F02BF1AF* L_37 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_38 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionStartEvent_m13DED1EE00A2E44A5562462833ED642EEA94D128_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	int32_t V_4 = 0;
	TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00ca;
	}

IL_0017:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|2)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)2, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_22 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_25 = V_3;
		int32_t L_26 = L_25->___delayMs;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_00a7;
	}

IL_008f:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_27 = V_3;
		int32_t L_28 = L_27->___delayMs;
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((-L_28)), 0, NULL);
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_30 = V_3;
		int32_t L_31 = L_30->___durationMs;
		int32_t L_32;
		L_32 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_29, L_31, NULL);
		G_B8_0 = L_32;
	}

IL_00a7:
	{
		V_4 = G_B8_0;
		int32_t L_33 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34;
		memset((&L_34), 0, sizeof(L_34));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_34), L_33, NULL);
		int32_t L_35 = V_4;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_36;
		L_36 = TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61(L_34, ((double)((float)(((float)L_35)/(1000.0f)))), TransitionEventBase_1_GetPooled_mFD665DFD6C012691EA5BE90A0AF28D3BE715ED61_RuntimeMethod_var);
		V_5 = L_36;
		TransitionStartEvent_t1DCCFED2B1D4744B1884EEF23EF75A03B8D2E5DF* L_37 = V_5;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_38 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionEndEvent_m9244667615F61D9D2FE4EB56C5705B8CCDBAF801_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00a8;
	}

IL_0017:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_15 = __this->___m_NextFrameEventsState;
		NullCheck(L_15);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_16 = L_15->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_16, L_17, (int32_t)((int32_t)((int32_t)L_18|4)), Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		goto IL_0071;
	}

IL_005e:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_19 = __this->___m_NextFrameEventsState;
		NullCheck(L_19);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_20 = L_19->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_20, L_21, (int32_t)4, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
	}

IL_0071:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_22 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_23 = L_22->___timing;
		int32_t L_24 = ___1_runningIndex;
		NullCheck(L_23);
		V_3 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)));
		int32_t L_25 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_26;
		memset((&L_26), 0, sizeof(L_26));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_26), L_25, NULL);
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_27 = V_3;
		int32_t L_28 = L_27->___durationMs;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_29;
		L_29 = TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA(L_26, ((double)((float)(((float)L_28)/(1000.0f)))), TransitionEventBase_1_GetPooled_m57317A5C89342419B0A31E8FBB622786C7C283CA_RuntimeMethod_var);
		V_4 = L_29;
		TransitionEndEvent_t0795C167FC14C0B97AFB54CCC2E34639ED85CCDD* L_30 = V_4;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_31 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_QueueTransitionCancelEvent_mBBDF2A1609BDF8A3E6501A309CB3784394D890D0_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_4 = NULL;
	int64_t V_5 = 0;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B6_0 = 0;
	int64_t G_B16_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, (int32_t)((int32_t)13), NULL);
		V_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_012c;
	}

IL_0017:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_3 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_4 = L_3->___properties;
		int32_t L_5 = ___1_runningIndex;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = (int32_t)L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = ___0_ve;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		ElementPropertyPair__ctor_m9BD513920487E23168800342B43F48B61D0A46D9((&V_1), L_8, L_9, NULL);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_10 = __this->___m_NextFrameEventsState;
		NullCheck(L_10);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_11 = L_10->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805(L_11, L_12, (&V_3), Dictionary_2_TryGetValue_m65D738842AF642FB72D4BB6B463C1F887182B805_RuntimeMethod_var);
		V_8 = L_13;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_15 = V_3;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_16 = V_3;
		G_B6_0 = ((((int32_t)((int32_t)((int32_t)L_16&8))) == ((int32_t)8))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B6_0 = 1;
	}

IL_0054:
	{
		V_9 = (bool)G_B6_0;
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_18 = __this->___m_NextFrameEventsState;
		NullCheck(L_18);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_19 = L_18->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_20 = V_1;
		NullCheck(L_19);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_19, L_20, (int32_t)8, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_21 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_2 = (bool)1;
		goto IL_009a;
	}

IL_007b:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_22 = __this->___m_NextFrameEventsState;
		NullCheck(L_22);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_23 = L_22->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_24 = V_1;
		NullCheck(L_23);
		Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93(L_23, L_24, (int32_t)0, Dictionary_2_set_Item_mC5EF29B75FEA18F591C5F729F9FD4D0557AA7F93_RuntimeMethod_var);
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_25 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_2 = (bool)0;
	}

IL_009a:
	{
		goto IL_00b4;
	}

IL_009d:
	{
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_26 = __this->___m_NextFrameEventsState;
		NullCheck(L_26);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_27 = L_26->___elementPropertyStateDelta;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_28 = V_1;
		NullCheck(L_27);
		Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4(L_27, L_28, (int32_t)8, Dictionary_2_Add_m4F698997DD64E85444AFF9F4E7E15CEC3FF1D2A4_RuntimeMethod_var);
		V_2 = (bool)1;
	}

IL_00b4:
	{
		bool L_29 = V_2;
		V_10 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_012c;
	}

IL_00c0:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_31 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_32 = L_31->___timing;
		int32_t L_33 = ___1_runningIndex;
		NullCheck(L_32);
		V_4 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_34 = V_4;
		bool L_35 = L_34->___isStarted;
		if (L_35)
		{
			goto IL_00e0;
		}
	}
	{
		G_B16_0 = ((int64_t)0);
		goto IL_00e9;
	}

IL_00e0:
	{
		int64_t L_36 = ___2_panelElapsedMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_37 = V_4;
		int64_t L_38 = L_37->___startTimeMs;
		G_B16_0 = ((int64_t)il2cpp_codegen_subtract(L_36, L_38));
	}

IL_00e9:
	{
		V_5 = G_B16_0;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_39 = V_4;
		int32_t L_40 = L_39->___delayMs;
		V_11 = (bool)((((int32_t)L_40) < ((int32_t)0))? 1 : 0);
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_010b;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_42 = V_4;
		int32_t L_43 = L_42->___delayMs;
		int64_t L_44 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add(((int64_t)((-L_43))), L_44));
	}

IL_010b:
	{
		int32_t L_45 = V_0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_46;
		memset((&L_46), 0, sizeof(L_46));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_46), L_45, NULL);
		int64_t L_47 = V_5;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_48;
		L_48 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_46, ((double)((float)(((float)L_47)/(1000.0f)))), TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_6 = L_48;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_49 = V_6;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_50 = V_1;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_012c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_SendTransitionCancelEvent_mDC0EC64A65E16BFAC93D9E49DB0E9138864E93C3_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_runningIndex, int64_t ___2_panelElapsedMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* V_5 = NULL;
	int64_t G_B5_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var);
		int32_t L_1 = ((EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_StaticFields*)il2cpp_codegen_static_fields_for(EventBase_1_tF0143A54530AEDF93FEB87C6CBA6FF7FB02BF1A1_il2cpp_TypeInfo_var))->___EventCategory;
		NullCheck(L_0);
		bool L_2;
		L_2 = VisualElement_HasParentEventInterests_mC0A3D8635FAA868A651FD1761275D734BF1B66B9(L_0, L_1, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00a2;
	}

IL_0018:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_4 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_5 = L_4->___timing;
		int32_t L_6 = ___1_runningIndex;
		NullCheck(L_5);
		V_0 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_7 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_8 = L_7->___properties;
		int32_t L_9 = ___1_runningIndex;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (int32_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = (int32_t)L_11;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_12 = V_0;
		bool L_13 = L_12->___isStarted;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		G_B5_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0044:
	{
		int64_t L_14 = ___2_panelElapsedMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_15 = V_0;
		int64_t L_16 = L_15->___startTimeMs;
		G_B5_0 = ((int64_t)il2cpp_codegen_subtract(L_14, L_16));
	}

IL_004c:
	{
		V_2 = G_B5_0;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_17 = V_0;
		int32_t L_18 = L_17->___delayMs;
		V_4 = (bool)((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_20 = V_0;
		int32_t L_21 = L_20->___delayMs;
		int64_t L_22 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)((-L_21))), L_22));
	}

IL_0069:
	{
		int32_t L_23 = V_1;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_24;
		memset((&L_24), 0, sizeof(L_24));
		StylePropertyName__ctor_m45E5635C8F21DC96F37B3BD362059FD255A9F6EF((&L_24), L_23, NULL);
		int64_t L_25 = V_2;
		TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_26;
		L_26 = TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5(L_24, ((double)((float)(((float)L_25)/(1000.0f)))), TransitionEventBase_1_GetPooled_m141ADA9CE40AFD36915186550F3844EF391EBBB5_RuntimeMethod_var);
		V_5 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_27 = V_5;
					if (!L_27)
					{
						goto IL_00a1;
					}
				}
				{
					TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_28 = V_5;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00a1:
				{
					return;
				}
			}
		});
		try
		{
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_29 = V_5;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = ___0_ve;
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29, L_30, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = ___0_ve;
			TransitionCancelEvent_t74AA81A33FC7DA4C0E6E22C5D16B7BC51C94CF69* L_32 = V_5;
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_31);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_31, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_32);
			goto IL_00a2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_m4F588337FED8433604BC5C843C8EA4E70925105C_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_9 = NULL;
	bool V_10 = false;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_4 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_5 = L_4->___elements;
		NullCheck(L_5);
		int32_t L_6 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_7, NULL);
		NullCheck(L_8);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_9;
		L_9 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_8);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_3), L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				V_4 = 0;
				goto IL_0088_1;
			}

IL_003d_1:
			{
				AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_10 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_11 = L_10->___elements;
				int32_t L_12 = V_4;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				V_5 = L_14;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_5;
				int32_t L_16 = V_4;
				int64_t L_17 = __this->___m_CurrentTimeMs;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_15, L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				int32_t L_18 = V_4;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = V_5;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_19, NULL);
				RuntimeObject* L_21 = L_20;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_21);
				V_6 = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_21);
				InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_21, ((int32_t)il2cpp_codegen_subtract(L_23, 1)));
				int32_t L_24 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
			}

IL_0088_1:
			{
				int32_t L_25 = V_4;
				int32_t L_26 = V_0;
				V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
				bool L_27 = V_7;
				if (L_27)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00a5;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_28 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_00b2:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_29 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_30 = L_29->___count;
		V_1 = L_30;
		V_8 = 0;
		goto IL_00f4;
	}

IL_00c3:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_31 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_32 = L_31->___elements;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = V_9;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_36, NULL);
		RuntimeObject* L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_38);
		V_6 = L_39;
		int32_t L_40 = V_6;
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_38, ((int32_t)il2cpp_codegen_subtract(L_40, 1)));
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f4:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_1;
		V_10 = (bool)((((int32_t)L_42) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_00c3;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_45 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAllAnimations_m87452CC68DE1CB014A2CA07A0004B34CF00913BA_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_4 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_5 = L_4->___elements;
		NullCheck(L_5);
		int32_t L_6 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_7, NULL);
		NullCheck(L_8);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_9;
		L_9 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_8);
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_3), L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				V_4 = 0;
				goto IL_009c_1;
			}

IL_003d_1:
			{
				AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_10 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_11 = L_10->___elements;
				int32_t L_12 = V_4;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_ve;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_15))? 1 : 0);
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0095_1;
				}
			}
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___0_ve;
				int32_t L_18 = V_4;
				int64_t L_19 = __this->___m_CurrentTimeMs;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_17, L_18, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				int32_t L_20 = V_4;
				((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_21 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
				VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_22 = L_21->___elements;
				int32_t L_23 = V_4;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_25, NULL);
				RuntimeObject* L_27 = L_26;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_27);
				V_6 = L_28;
				int32_t L_29 = V_6;
				NullCheck(L_27);
				InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)));
			}

IL_0095_1:
			{
				int32_t L_30 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_009c_1:
			{
				int32_t L_31 = V_4;
				int32_t L_32 = V_0;
				V_7 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
				bool L_33 = V_7;
				if (L_33)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
	}

IL_00ba:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_34 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = ___0_ve;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_34, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_36 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_37 = L_36->___count;
		V_1 = L_37;
		V_8 = 0;
		goto IL_011e;
	}

IL_00d8:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_38 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_39 = L_38->___elements;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43 = ___0_ve;
		V_9 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_42) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0117;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_45 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_46 = L_45->___elements;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_49, NULL);
		RuntimeObject* L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_51);
		V_6 = L_52;
		int32_t L_53 = V_6;
		NullCheck(L_51);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_51, ((int32_t)il2cpp_codegen_subtract(L_53, 1)));
	}

IL_0117:
	{
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_011e:
	{
		int32_t L_55 = V_8;
		int32_t L_56 = V_1;
		V_10 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_10;
		if (L_57)
		{
			goto IL_00d8;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_58 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = ___0_ve;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_58, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_CancelAnimation_mB6BA300D262E9CD6C6D2D4113177D16A57B0274E_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_ve;
		int32_t L_6 = V_0;
		int64_t L_7 = __this->___m_CurrentTimeMs;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_5, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_8 = V_0;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_9 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_10 = V_0;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___0_ve;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_11, NULL);
		RuntimeObject* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_13);
		V_3 = L_14;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 1)));
	}

IL_0050:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_16 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___0_ve;
		int32_t L_18 = ___1_id;
		bool L_19;
		L_19 = ((  bool (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_16, L_17, L_18, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_008a;
		}
	}
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_21 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_22 = V_1;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = ___0_ve;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_23, NULL);
		RuntimeObject* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25);
		V_3 = L_26;
		int32_t L_27 = V_3;
		NullCheck(L_25);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateAnimation_m3840EC35B9754270CF35510170282BA5B95A9352_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_5 = V_0;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_5);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_GetAllAnimations_m2952CB649160EF4C06A01160B9833F4462122CF6_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* ___1_outPropertyIds, const RuntimeMethod* method) 
{
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_2 = ___1_outPropertyIds;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_3 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_ve;
		List_1_t365205E6BE687FCF41975C16741DD9C303C1C269* L_5 = ___1_outPropertyIds;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t365205E6BE687FCF41975C16741DD9C303C1C269*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Values_1_ComputeReversingShorteningFactor_m3DDD463A0FCDE2463723B6ACCFD6E62F314B257E_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_oldIndex, const RuntimeMethod* method) 
{
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_0 = NULL;
	float V_1 = 0.0f;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_1 = L_0->___timing;
		int32_t L_2 = ___0_oldIndex;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_3 = V_0;
		float L_4 = L_3->___easedProgress;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_5 = V_0;
		float L_6 = L_5->___reversingShorteningFactor;
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), L_6)))));
		float L_8;
		L_8 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_7, NULL);
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDuration_m7F6B266625E744D944BE766879BA9F2CCBC28EE2_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_newTransitionDurationMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_newTransitionDurationMs;
		float L_1 = ___1_newReversingShorteningFactor;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_0), L_1)), NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Values_1_ComputeReversingDelay_mFD1A7C36F714B0A6C63DD3EE0480B2C19D71B216_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_delayMs, float ___1_newReversingShorteningFactor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_delayMs;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_delayMs;
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_0008:
	{
		int32_t L_2 = ___0_delayMs;
		float L_3 = ___1_newReversingShorteningFactor;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_2), L_3)), NULL);
		G_B3_0 = L_4;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Values_1_StartTransition_mFF791B72FC03FCA6CD41C9E988A06217E390184C_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, Il2CppFullySharedGenericAny ___2_startValue, Il2CppFullySharedGenericAny ___3_endValue, int32_t ___4_durationMs, int32_t ___5_delayMs, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, int64_t ___7_currentTimeMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31));
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_25 = L_7;
	const Il2CppFullySharedGenericAny L_48 = L_7;
	const Il2CppFullySharedGenericAny L_56 = L_7;
	const Il2CppFullySharedGenericAny L_88 = L_7;
	const Il2CppFullySharedGenericAny L_104 = L_7;
	const Il2CppFullySharedGenericAny L_127 = L_7;
	const Il2CppFullySharedGenericAny L_143 = L_7;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_52 = L_8;
	const Il2CppFullySharedGenericAny L_60 = L_8;
	const Il2CppFullySharedGenericAny L_106 = L_8;
	const Il2CppFullySharedGenericAny L_144 = L_8;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_11 = alloca(SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_103 = L_11;
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_139 = L_11;
	const StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D L_151 = L_11;
	int64_t V_0 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D V_2 = alloca(SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	memset(V_2, 0, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C V_6;
	memset((&V_6), 0, sizeof(V_6));
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D V_7 = alloca(SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	memset(V_7, 0, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	bool V_22 = false;
	bool V_23 = false;
	{
		int64_t L_0 = ___7_currentTimeMs;
		int32_t L_1 = ___5_delayMs;
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_1)));
		il2cpp_codegen_initobj((&V_6), sizeof(TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C));
		int64_t L_2 = V_0;
		(&V_6)->___startTimeMs = L_2;
		int32_t L_3 = ___4_durationMs;
		(&V_6)->___durationMs = L_3;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_4 = ___6_easingCurve;
		(&V_6)->___easingCurve = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___easingCurve), (void*)L_4);
		(&V_6)->___reversingShorteningFactor = (1.0f);
		int32_t L_5 = ___5_delayMs;
		(&V_6)->___delayMs = L_5;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C L_6 = V_6;
		V_1 = L_6;
		il2cpp_codegen_initobj((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0), L_7, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1), L_8, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),3), L_9, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),2), L_10, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_11, V_7, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		il2cpp_codegen_memcpy(V_2, L_11, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		int32_t L_12 = ___4_durationMs;
		int32_t L_13;
		L_13 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, L_12, NULL);
		int32_t L_14 = ___5_delayMs;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_owner;
		int32_t L_16 = ___1_prop;
		bool L_17;
		L_17 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(14, __this, L_15, L_16, (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)))), (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)))));
		V_8 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00a1:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_19 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = ___0_owner;
		int32_t L_21 = ___1_prop;
		bool L_22;
		L_22 = ((  bool (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_19, L_20, L_21, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_10 = L_22;
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_24;
		L_24 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_26 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = L_26->___style;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		il2cpp_codegen_memcpy(L_30, (L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_24);
		bool L_31;
		L_31 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_30: *(void**)L_30));
		V_11 = L_31;
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00e5;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00e5:
	{
		int32_t L_33 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_33) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00fb;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_00fb:
	{
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_35 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		int32_t L_36 = V_4;
		((  void (*) (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_37 = ___0_owner;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_37, NULL);
		RuntimeObject* L_39 = L_38;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_39);
		V_13 = L_40;
		int32_t L_41 = V_13;
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_39, ((int32_t)il2cpp_codegen_subtract(L_41, 1)));
	}

IL_0122:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_42 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43 = ___0_owner;
		int32_t L_44 = ___1_prop;
		bool L_45;
		L_45 = ((  bool (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_42, L_43, L_44, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_14 = L_45;
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_0369;
		}
	}
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_47;
		L_47 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_49 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_50 = L_49->___style;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_47);
		bool L_53;
		L_53 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_48: *(void**)L_48), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_52: *(void**)L_52));
		V_15 = L_53;
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_016e;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_016e:
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_55;
		L_55 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_57 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_58 = L_57->___style;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		il2cpp_codegen_memcpy(L_60, il2cpp_codegen_get_instance_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),3)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_55);
		bool L_61;
		L_61 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_60: *(void**)L_60));
		V_16 = L_61;
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_01d3;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = ___0_owner;
		int32_t L_64 = V_5;
		int64_t L_65 = ___7_currentTimeMs;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_63, L_64, L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_66 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_67 = V_5;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_68 = ___0_owner;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_68, NULL);
		RuntimeObject* L_70 = L_69;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_70);
		V_13 = L_71;
		int32_t L_72 = V_13;
		NullCheck(L_70);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_70, ((int32_t)il2cpp_codegen_subtract(L_72, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_01d3:
	{
		int32_t L_73 = V_3;
		V_17 = (bool)((((int32_t)((((int32_t)L_73) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_17;
		if (!L_74)
		{
			goto IL_021b;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_75 = ___0_owner;
		int32_t L_76 = V_5;
		int64_t L_77 = ___7_currentTimeMs;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_75, L_76, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_78 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_79 = V_5;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_80 = ___0_owner;
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_80, NULL);
		RuntimeObject* L_82 = L_81;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_82);
		V_13 = L_83;
		int32_t L_84 = V_13;
		NullCheck(L_82);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_82, ((int32_t)il2cpp_codegen_subtract(L_84, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_021b:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_85 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_86 = L_85->___style;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		il2cpp_codegen_memcpy(L_88, il2cpp_codegen_get_instance_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),3)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0), L_88, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_89 = ___0_owner;
		int32_t L_90 = ___1_prop;
		bool L_91;
		L_91 = VirtualFuncInvoker4< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(14, __this, L_89, L_90, (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)))), (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)))));
		V_18 = (bool)((((int32_t)L_91) == ((int32_t)0))? 1 : 0);
		bool L_92 = V_18;
		if (!L_92)
		{
			goto IL_0293;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_93 = ___0_owner;
		int32_t L_94 = V_5;
		int64_t L_95 = ___7_currentTimeMs;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_93, L_94, L_95, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_96 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_97 = V_5;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_96, L_97, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_98 = ___0_owner;
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_98, NULL);
		RuntimeObject* L_100 = L_99;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_100);
		V_13 = L_101;
		int32_t L_102 = V_13;
		NullCheck(L_100);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_100, ((int32_t)il2cpp_codegen_subtract(L_102, 1)));
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_0293:
	{
		il2cpp_codegen_memcpy(L_103, V_2, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		il2cpp_codegen_memcpy(L_104, il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),0)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),3), L_104, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_105;
		L_105 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_106, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_107 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_108 = L_107->___style;
		int32_t L_109 = V_5;
		NullCheck(L_108);
		il2cpp_codegen_memcpy(L_110, il2cpp_codegen_get_instance_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_109))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),2)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_105);
		bool L_111;
		L_111 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_105, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_106: *(void**)L_106), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_110: *(void**)L_110));
		V_19 = L_111;
		bool L_112 = V_19;
		if (!L_112)
		{
			goto IL_0326;
		}
	}
	{
		int32_t L_113 = V_5;
		float L_114;
		L_114 = ((  float (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		float L_115 = L_114;
		V_21 = L_115;
		(&V_1)->___reversingShorteningFactor = L_115;
		float L_116 = V_21;
		V_20 = L_116;
		int64_t L_117 = ___7_currentTimeMs;
		int32_t L_118 = ___5_delayMs;
		float L_119 = V_20;
		int32_t L_120;
		L_120 = ((  int32_t (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, float, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_118, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		(&V_1)->___startTimeMs = ((int64_t)il2cpp_codegen_add(L_117, ((int64_t)L_120)));
		int32_t L_121 = ___4_durationMs;
		float L_122 = V_20;
		int32_t L_123;
		L_123 = ((  int32_t (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int32_t, float, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_121, L_122, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		(&V_1)->___durationMs = L_123;
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_124 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_125 = L_124->___style;
		int32_t L_126 = V_5;
		NullCheck(L_125);
		il2cpp_codegen_memcpy(L_127, il2cpp_codegen_get_instance_field_data_pointer(((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_125)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_126))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),2), L_127, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	}

IL_0326:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_128 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_129 = L_128->___timing;
		int32_t L_130 = V_5;
		NullCheck(L_129);
		((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_130)))->___isStarted = (bool)0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_131 = ___0_owner;
		int32_t L_132 = V_5;
		int64_t L_133 = ___7_currentTimeMs;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_131, L_132, L_133, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_134 = ___0_owner;
		int32_t L_135 = V_5;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_134, L_135, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_136 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_137 = V_5;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C L_138 = V_1;
		il2cpp_codegen_memcpy(L_139, V_2, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		InvokerActionInvoker3< int32_t, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C, StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), L_136, L_137, L_138, L_139);
		V_9 = (bool)1;
		goto IL_03d6;
	}

IL_0369:
	{
		int32_t L_140 = V_3;
		V_22 = (bool)((((int32_t)((((int32_t)L_140) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_22;
		if (!L_141)
		{
			goto IL_037b;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_037b:
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_142;
		L_142 = VirtualFuncInvoker0< Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* >::Invoke(13, __this);
		il2cpp_codegen_memcpy(L_143, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___2_startValue : &___2_startValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_memcpy(L_144, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? ___3_endValue : &___3_endValue), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		NullCheck(L_142);
		bool L_145;
		L_145 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_143: *(void**)L_143), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_144: *(void**)L_144));
		V_23 = L_145;
		bool L_146 = V_23;
		if (!L_146)
		{
			goto IL_0394;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_03d6;
	}

IL_0394:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_147 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_148 = ___0_owner;
		int32_t L_149 = ___1_prop;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C L_150 = V_1;
		il2cpp_codegen_memcpy(L_151, V_2, SizeOf_StyleData_tE66ECF008C9C807201A5F05D8C99CC2F7E7EE510);
		InvokerActionInvoker4< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C, StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_147, L_148, L_149, L_150, L_151);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_152 = ___0_owner;
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_152, NULL);
		RuntimeObject* L_154 = L_153;
		NullCheck(L_154);
		int32_t L_155;
		L_155 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_154);
		V_13 = L_155;
		int32_t L_156 = V_13;
		NullCheck(L_154);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_154, ((int32_t)il2cpp_codegen_add(L_156, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_157 = ___0_owner;
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_158 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_159 = L_158->___count;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_157, ((int32_t)il2cpp_codegen_subtract(L_159, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_9 = (bool)1;
		goto IL_03d6;
	}

IL_03d6:
	{
		bool L_160 = V_9;
		return L_160;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ForceComputedStyleEndValue_m96E662F6BB72D988E4BF4F6E412A53D9527B6B95_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int32_t ___0_runningIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* V_0 = NULL;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_1 = L_0->___style;
		int32_t L_2 = ___0_runningIndex;
		NullCheck(L_1);
		V_0 = ((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_3 = V_0;
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),3), L_5, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		int32_t L_6 = ___0_runningIndex;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_Update_m4D1B1FFCFFFB1BBE520C846F0AE04A92F5ABE683_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int64_t L_0 = ___0_currentTimeMs;
		__this->___m_CurrentTimeMs = L_0;
		int64_t L_1 = ___0_currentTimeMs;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(10, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker0::Invoke(11, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_2 = __this->___m_NextFrameEventsState;
		NullCheck(L_2);
		bool L_3;
		L_3 = ((  bool (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_ProcessEventQueue_m21346B7FC69BBBFE0F969F4822065FADBA020232_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* V_0 = NULL;
	EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_3;
	memset((&V_3), 0, sizeof(V_3));
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* V_5 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_6 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* G_B3_0 = NULL;
	{
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_0 = __this->___m_CurrentFrameEventsState;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___panel;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_3;
		L_3 = InterfaceFuncInvoker0< EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* >::Invoke(1, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* L_4 = V_0;
		EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9((&V_1), L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bf:
			{
				EventDispatcherGate_Dispose_m55EF7949617C12B917FF0374D4F140F2054CE9C5((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_5 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_5);
				Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_6 = L_5->___elementPropertyQueuedEvents;
				NullCheck(L_6);
				Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_7;
				L_7 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_6, Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD_RuntimeMethod_var);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a1_1:
					{
						Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_2), Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_0096_2;
					}

IL_003d_2:
					{
						KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_8;
						L_8 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_2), Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_RuntimeMethod_var);
						V_3 = L_8;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_9;
						L_9 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
						V_4 = L_9;
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_10;
						L_10 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_3), KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_RuntimeMethod_var);
						V_5 = L_10;
						ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_11;
						L_11 = KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_inline((&V_3), KeyValuePair_2_get_Key_mF1C9F1AA2C806228C719C6B0DAB2B75DDE128DA8_RuntimeMethod_var);
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = L_11.___element;
						V_6 = L_12;
						goto IL_0085_2;
					}

IL_0068_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_13 = V_5;
						NullCheck(L_13);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_14;
						L_14 = Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D(L_13, Queue_1_Dequeue_m676E2D4B5B1B1EBF97F7F54FE6CA6CF5BB6F856D_RuntimeMethod_var);
						V_7 = L_14;
						VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_6;
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_16 = V_7;
						NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_15);
						VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_15, L_16);
						EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_17 = V_7;
						NullCheck(L_17);
						VirtualActionInvoker0::Invoke(15, L_17);
					}

IL_0085_2:
					{
						Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_18 = V_5;
						NullCheck(L_18);
						int32_t L_19;
						L_19 = Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_inline(L_18, Queue_1_get_Count_mD86D9A3F3D912C8F87E78D084C53181A9D218604_RuntimeMethod_var);
						V_8 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
						bool L_20 = V_8;
						if (L_20)
						{
							goto IL_0068_2;
						}
					}
					{
					}

IL_0096_2:
					{
						bool L_21;
						L_21 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_2), Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_003d_2;
						}
					}
					{
						goto IL_00b0_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b0_1:
			{
				TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* L_22 = __this->___m_CurrentFrameEventsState;
				NullCheck(L_22);
				((  void (*) (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				goto IL_00ce;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Values_1_UpdateProgress_mAAC623E10BE36029EFCD4BD5E47876990FA9EB91_gshared (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* __this, int64_t ___0_currentTimeMs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* V_6 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_0 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_1 = L_0->___count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0195;
		}
	}
	{
		V_2 = 0;
		goto IL_0187;
	}

IL_0020:
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_4 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* L_5 = L_4->___timing;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		V_3 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int64_t L_7 = ___0_currentTimeMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_8 = V_3;
		int64_t L_9 = L_8->___startTimeMs;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_11 = V_3;
		L_11->___easedProgress = (0.0f);
		goto IL_0182;
	}

IL_0054:
	{
		int64_t L_12 = ___0_currentTimeMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_13 = V_3;
		int64_t L_14 = L_13->___startTimeMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_15 = V_3;
		int32_t L_16 = L_15->___durationMs;
		V_5 = (bool)((((int32_t)((((int64_t)L_12) < ((int64_t)((int64_t)il2cpp_codegen_add(L_14, ((int64_t)L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_012d;
		}
	}
	{
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_18 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* L_19 = L_18->___style;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		V_6 = ((StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_21 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_22 = L_21->___elements;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		V_7 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)));
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_24 = V_6;
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_25 = V_6;
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		il2cpp_codegen_write_instance_field_data(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),3), L_26, SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		int32_t L_27 = V_2;
		NullCheck((Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(12, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)__this, L_27);
		AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915* L_28 = (AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915*)(&__this->___completed);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_29 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_29);
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_31 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* L_32 = L_31->___properties;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (int32_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
		EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B L_36 = ((EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 53)))->___Default;
		StyleData_tBCC87537BAC4EE191CB46ED48795D6594C5EC21D* L_37 = V_6;
		il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31),1)), SizeOf_T_t0AAA0B09A8DFE1AEE401068F82C459CAE509E68A);
		InvokerActionInvoker4< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, EmptyData_t526DD646BCFBCA8323FA31D30623117D128D1E4B, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_28, L_30, (int32_t)L_35, L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32)) ? L_38: *(void**)L_38));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_39 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_39);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_40, NULL);
		RuntimeObject* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(20, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42);
		V_8 = L_43;
		int32_t L_44 = V_8;
		NullCheck(L_42);
		InterfaceActionInvoker1< int32_t >::Invoke(21, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_42, ((int32_t)il2cpp_codegen_subtract(L_44, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_45 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = VisualElement_get_styleAnimation_m34C349374229002AAF42A7DAD49AA9615EA154F1(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(22, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_48);
		V_8 = L_49;
		int32_t L_50 = V_8;
		NullCheck(L_48);
		InterfaceActionInvoker1< int32_t >::Invoke(23, IStylePropertyAnimations_tB90A36DDFC6923EE285E54A51D9B78316CE06764_il2cpp_TypeInfo_var, L_48, ((int32_t)il2cpp_codegen_add(L_50, 1)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115** L_51 = V_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = *((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115**)L_51);
		int32_t L_53 = V_2;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, L_52, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_54 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		int32_t L_55 = V_2;
		((  void (*) (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_54, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		goto IL_0182;
	}

IL_012d:
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_58 = V_3;
		bool L_59 = L_58->___isStarted;
		V_10 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_015b;
		}
	}
	{
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_61 = V_3;
		L_61->___isStarted = (bool)1;
		AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450* L_62 = (AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450*)(&__this->___running);
		VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* L_63 = L_62->___elements;
		int32_t L_64 = V_2;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_2;
		((  void (*) (Values_1_tD44BBEC769B1388DCA51C01019802B242F987014*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}

IL_015b:
	{
		int64_t L_68 = ___0_currentTimeMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_69 = V_3;
		int64_t L_70 = L_69->___startTimeMs;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_71 = V_3;
		int32_t L_72 = L_71->___durationMs;
		V_9 = ((float)(((float)((int64_t)il2cpp_codegen_subtract(L_68, L_70)))/((float)L_72)));
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_73 = V_3;
		TimingData_t34EB470E0DBA11A81771B37FE248222F8768264C* L_74 = V_3;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_75 = L_74->___easingCurve;
		float L_76 = V_9;
		NullCheck(L_75);
		float L_77;
		L_77 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_75, L_76, NULL);
		L_73->___easedProgress = L_77;
	}

IL_0182:
	{
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0187:
	{
		int32_t L_79 = V_2;
		int32_t L_80 = V_0;
		V_11 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_11;
		if (L_81)
		{
			goto IL_0020;
		}
	}
	{
	}

IL_0195:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_get_Zero_mDB2680DF070B1C7F273400548848C621F96343A4_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83_gshared (const RuntimeMethod* method) 
{
	VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B19_0 = 0;
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* L_0 = (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		V_1 = (uint8_t*)((uintptr_t)L_2);
		uint8_t* L_3 = (uint8_t*)(&(&V_0)->____byte);
		uint8_t* L_4 = V_1;
		V_2 = (-1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			G_B2_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
			goto IL_0045;
		}
		G_B1_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
	}
	{
		V_2 = 1;
		G_B21_0 = G_B1_0;
		goto IL_0176;
	}

IL_0045:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			G_B4_0 = G_B2_0;
			goto IL_0067;
		}
		G_B3_0 = G_B2_0;
	}
	{
		V_2 = 1;
		G_B21_0 = G_B3_0;
		goto IL_0176;
	}

IL_0067:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			G_B6_0 = G_B4_0;
			goto IL_0089;
		}
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			G_B8_0 = G_B6_0;
			goto IL_00ab;
		}
		G_B7_0 = G_B6_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B7_0;
		goto IL_0176;
	}

IL_00ab:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (!L_29)
		{
			G_B10_0 = G_B8_0;
			goto IL_00cd;
		}
		G_B9_0 = G_B8_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B9_0;
		goto IL_0176;
	}

IL_00cd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		if (!L_34)
		{
			G_B12_0 = G_B10_0;
			goto IL_00ef;
		}
		G_B11_0 = G_B10_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B11_0;
		goto IL_0176;
	}

IL_00ef:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			G_B14_0 = G_B12_0;
			goto IL_010e;
		}
		G_B13_0 = G_B12_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B13_0;
		goto IL_0176;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			G_B16_0 = G_B14_0;
			goto IL_012d;
		}
		G_B15_0 = G_B14_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B15_0;
		goto IL_0176;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			G_B18_0 = G_B16_0;
			goto IL_014c;
		}
		G_B17_0 = G_B16_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B17_0;
		goto IL_0176;
	}

IL_014c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		if (!L_54)
		{
			G_B20_0 = G_B18_0;
			goto IL_016b;
		}
		G_B19_0 = G_B18_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B19_0;
		goto IL_0176;
	}

IL_016b:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_55 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
	}

IL_0176:
	{
		int32_t L_56 = V_2;
		return ((int32_t)(G_B21_0/L_56));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_6 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_7 = (uint8_t*)(&L_6->___byte_0);
		V_1 = L_7;
		uint8_t* L_8 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_8);
		V_2 = 0;
		goto IL_0052;
	}

IL_003f:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_2;
		uint16_t L_11 = ___0_value;
		uint16_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_12);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10))) = (int8_t)((*(uint8_t*)UnBox(L_13, il2cpp_defaults.byte_class)));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		int32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_005e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00b3;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_22 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_23 = (int8_t*)(&L_22->___sbyte_0);
		V_4 = L_23;
		int8_t* L_24 = V_4;
		V_3 = (int8_t*)((uintptr_t)L_24);
		V_5 = 0;
		goto IL_00a5;
	}

IL_008f:
	{
		int8_t* L_25 = V_3;
		int32_t L_26 = V_5;
		uint16_t L_27 = ___0_value;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26))) = (int8_t)((*(int8_t*)UnBox(L_29, il2cpp_defaults.sbyte_class)));
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a5:
	{
		int32_t L_31 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_32;
		L_32 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_008f;
		}
	}
	{
		V_4 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00b3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_010d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_38 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_39 = (uint16_t*)(&L_38->___uint16_0);
		V_7 = L_39;
		uint16_t* L_40 = V_7;
		V_6 = (uint16_t*)((uintptr_t)L_40);
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_41 = V_6;
		int32_t L_42 = V_8;
		uint16_t L_43 = ___0_value;
		uint16_t L_44 = L_43;
		RuntimeObject* L_45 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_44);
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 2))))) = (int16_t)((*(uint16_t*)UnBox(L_45, il2cpp_defaults.uint16_class)));
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00ff:
	{
		int32_t L_47 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00e5;
		}
	}
	{
		V_7 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_010d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_0167;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_54 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_55 = (int16_t*)(&L_54->___int16_0);
		V_10 = L_55;
		int16_t* L_56 = V_10;
		V_9 = (int16_t*)((uintptr_t)L_56);
		V_11 = 0;
		goto IL_0159;
	}

IL_013f:
	{
		int16_t* L_57 = V_9;
		int32_t L_58 = V_11;
		uint16_t L_59 = ___0_value;
		uint16_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_60);
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 2))))) = (int16_t)((*(int16_t*)UnBox(L_61, il2cpp_defaults.int16_class)));
		int32_t L_62 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0159:
	{
		int32_t L_63 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_64;
		L_64 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_013f;
		}
	}
	{
		V_10 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0167:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
		if (!L_69)
		{
			goto IL_01c1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_70 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_71 = (uint32_t*)(&L_70->___uint32_0);
		V_13 = L_71;
		uint32_t* L_72 = V_13;
		V_12 = (uint32_t*)((uintptr_t)L_72);
		V_14 = 0;
		goto IL_01b3;
	}

IL_0199:
	{
		uint32_t* L_73 = V_12;
		int32_t L_74 = V_14;
		uint16_t L_75 = ___0_value;
		uint16_t L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_76);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_73, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_74), 4))))) = (int32_t)((*(uint32_t*)UnBox(L_77, il2cpp_defaults.uint32_class)));
		int32_t L_78 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01b3:
	{
		int32_t L_79 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_80;
		L_80 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0199;
		}
	}
	{
		V_13 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_021b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_86 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_87 = (int32_t*)(&L_86->___int32_0);
		V_16 = L_87;
		int32_t* L_88 = V_16;
		V_15 = (int32_t*)((uintptr_t)L_88);
		V_17 = 0;
		goto IL_020d;
	}

IL_01f3:
	{
		int32_t* L_89 = V_15;
		int32_t L_90 = V_17;
		uint16_t L_91 = ___0_value;
		uint16_t L_92 = L_91;
		RuntimeObject* L_93 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_92);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)((*(int32_t*)UnBox(L_93, il2cpp_defaults.int32_class)));
		int32_t L_94 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_020d:
	{
		int32_t L_95 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_96;
		L_96 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		V_16 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_021b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		bool L_101;
		L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_0275;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_102 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_103 = (uint64_t*)(&L_102->___uint64_0);
		V_19 = L_103;
		uint64_t* L_104 = V_19;
		V_18 = (uint64_t*)((uintptr_t)L_104);
		V_20 = 0;
		goto IL_0267;
	}

IL_024d:
	{
		uint64_t* L_105 = V_18;
		int32_t L_106 = V_20;
		uint16_t L_107 = ___0_value;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_106), 8))))) = (int64_t)((*(uint64_t*)UnBox(L_109, il2cpp_defaults.uint64_class)));
		int32_t L_110 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_0267:
	{
		int32_t L_111 = V_20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_112;
		L_112 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_024d;
		}
	}
	{
		V_19 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_0275:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		bool L_117;
		L_117 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_114, L_116, NULL);
		if (!L_117)
		{
			goto IL_02cf;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_118 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_119 = (int64_t*)(&L_118->___int64_0);
		V_22 = L_119;
		int64_t* L_120 = V_22;
		V_21 = (int64_t*)((uintptr_t)L_120);
		V_23 = 0;
		goto IL_02c1;
	}

IL_02a7:
	{
		int64_t* L_121 = V_21;
		int32_t L_122 = V_23;
		uint16_t L_123 = ___0_value;
		uint16_t L_124 = L_123;
		RuntimeObject* L_125 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_124);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), 8))))) = (int64_t)((*(int64_t*)UnBox(L_125, il2cpp_defaults.int64_class)));
		int32_t L_126 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_02c1:
	{
		int32_t L_127 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_128;
		L_128 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_02a7;
		}
	}
	{
		V_22 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_02cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		if (!L_133)
		{
			goto IL_0329;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_134 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_135 = (float*)(&L_134->___single_0);
		V_25 = L_135;
		float* L_136 = V_25;
		V_24 = (float*)((uintptr_t)L_136);
		V_26 = 0;
		goto IL_031b;
	}

IL_0301:
	{
		float* L_137 = V_24;
		int32_t L_138 = V_26;
		uint16_t L_139 = ___0_value;
		uint16_t L_140 = L_139;
		RuntimeObject* L_141 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_140);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_137, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_138), 4))))) = (float)((*(float*)UnBox(L_141, il2cpp_defaults.single_class)));
		int32_t L_142 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_031b:
	{
		int32_t L_143 = V_26;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_144;
		L_144 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_0301;
		}
	}
	{
		V_25 = (float*)((uintptr_t)0);
		return;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_145 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_146;
		L_146 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_145, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		bool L_149;
		L_149 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_146, L_148, NULL);
		if (!L_149)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_150 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_151 = (double*)(&L_150->___double_0);
		V_28 = L_151;
		double* L_152 = V_28;
		V_27 = (double*)((uintptr_t)L_152);
		V_29 = 0;
		goto IL_0378;
	}

IL_035e:
	{
		double* L_153 = V_27;
		int32_t L_154 = V_29;
		uint16_t L_155 = ___0_value;
		uint16_t L_156 = L_155;
		RuntimeObject* L_157 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_156);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_153, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_154), 8))))) = (double)((*(double*)UnBox(L_157, il2cpp_defaults.double_class)));
		int32_t L_158 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0378:
	{
		int32_t L_159 = V_29;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_160;
		L_160 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_159) < ((int32_t)L_160)))
		{
			goto IL_035e;
		}
	}
	{
		V_28 = (double*)((uintptr_t)0);
		return;
	}

IL_0386:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_164;
		L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
		bool L_165;
		L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
		if (!L_165)
		{
			goto IL_0505;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_166 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_167 = ___0_value;
		uint16_t L_168 = L_167;
		RuntimeObject* L_169 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_168);
		L_166->___byte_0 = ((*(uint8_t*)UnBox(L_169, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_170 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_171 = ___0_value;
		uint16_t L_172 = L_171;
		RuntimeObject* L_173 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_172);
		L_170->___byte_1 = ((*(uint8_t*)UnBox(L_173, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_175 = ___0_value;
		uint16_t L_176 = L_175;
		RuntimeObject* L_177 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_176);
		L_174->___byte_2 = ((*(uint8_t*)UnBox(L_177, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_178 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_179 = ___0_value;
		uint16_t L_180 = L_179;
		RuntimeObject* L_181 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_180);
		L_178->___byte_3 = ((*(uint8_t*)UnBox(L_181, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_182 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_183 = ___0_value;
		uint16_t L_184 = L_183;
		RuntimeObject* L_185 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_184);
		L_182->___byte_4 = ((*(uint8_t*)UnBox(L_185, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_186 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_187 = ___0_value;
		uint16_t L_188 = L_187;
		RuntimeObject* L_189 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_188);
		L_186->___byte_5 = ((*(uint8_t*)UnBox(L_189, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_190 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_191 = ___0_value;
		uint16_t L_192 = L_191;
		RuntimeObject* L_193 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_192);
		L_190->___byte_6 = ((*(uint8_t*)UnBox(L_193, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_194 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_195 = ___0_value;
		uint16_t L_196 = L_195;
		RuntimeObject* L_197 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_196);
		L_194->___byte_7 = ((*(uint8_t*)UnBox(L_197, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_199 = ___0_value;
		uint16_t L_200 = L_199;
		RuntimeObject* L_201 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_200);
		L_198->___byte_8 = ((*(uint8_t*)UnBox(L_201, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_202 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_203 = ___0_value;
		uint16_t L_204 = L_203;
		RuntimeObject* L_205 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_204);
		L_202->___byte_9 = ((*(uint8_t*)UnBox(L_205, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_206 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_207 = ___0_value;
		uint16_t L_208 = L_207;
		RuntimeObject* L_209 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_208);
		L_206->___byte_10 = ((*(uint8_t*)UnBox(L_209, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_210 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_211 = ___0_value;
		uint16_t L_212 = L_211;
		RuntimeObject* L_213 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_212);
		L_210->___byte_11 = ((*(uint8_t*)UnBox(L_213, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_214 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_215 = ___0_value;
		uint16_t L_216 = L_215;
		RuntimeObject* L_217 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_216);
		L_214->___byte_12 = ((*(uint8_t*)UnBox(L_217, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_219 = ___0_value;
		uint16_t L_220 = L_219;
		RuntimeObject* L_221 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_220);
		L_218->___byte_13 = ((*(uint8_t*)UnBox(L_221, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_222 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_223 = ___0_value;
		uint16_t L_224 = L_223;
		RuntimeObject* L_225 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_224);
		L_222->___byte_14 = ((*(uint8_t*)UnBox(L_225, il2cpp_defaults.byte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_226 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_227 = ___0_value;
		uint16_t L_228 = L_227;
		RuntimeObject* L_229 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_228);
		L_226->___byte_15 = ((*(uint8_t*)UnBox(L_229, il2cpp_defaults.byte_class)));
		return;
	}

IL_0505:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_230 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_231;
		L_231 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_230, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_232 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_233;
		L_233 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_232, NULL);
		bool L_234;
		L_234 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_231, L_233, NULL);
		if (!L_234)
		{
			goto IL_0684;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_235 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_236 = ___0_value;
		uint16_t L_237 = L_236;
		RuntimeObject* L_238 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_237);
		L_235->___sbyte_0 = ((*(int8_t*)UnBox(L_238, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_240 = ___0_value;
		uint16_t L_241 = L_240;
		RuntimeObject* L_242 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_241);
		L_239->___sbyte_1 = ((*(int8_t*)UnBox(L_242, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_243 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_244 = ___0_value;
		uint16_t L_245 = L_244;
		RuntimeObject* L_246 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_245);
		L_243->___sbyte_2 = ((*(int8_t*)UnBox(L_246, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_247 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_248 = ___0_value;
		uint16_t L_249 = L_248;
		RuntimeObject* L_250 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_249);
		L_247->___sbyte_3 = ((*(int8_t*)UnBox(L_250, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_251 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_252 = ___0_value;
		uint16_t L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_253);
		L_251->___sbyte_4 = ((*(int8_t*)UnBox(L_254, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_255 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_256 = ___0_value;
		uint16_t L_257 = L_256;
		RuntimeObject* L_258 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_257);
		L_255->___sbyte_5 = ((*(int8_t*)UnBox(L_258, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_260 = ___0_value;
		uint16_t L_261 = L_260;
		RuntimeObject* L_262 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_261);
		L_259->___sbyte_6 = ((*(int8_t*)UnBox(L_262, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_263 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_264 = ___0_value;
		uint16_t L_265 = L_264;
		RuntimeObject* L_266 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_265);
		L_263->___sbyte_7 = ((*(int8_t*)UnBox(L_266, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_267 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_268 = ___0_value;
		uint16_t L_269 = L_268;
		RuntimeObject* L_270 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_269);
		L_267->___sbyte_8 = ((*(int8_t*)UnBox(L_270, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_271 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_272 = ___0_value;
		uint16_t L_273 = L_272;
		RuntimeObject* L_274 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_273);
		L_271->___sbyte_9 = ((*(int8_t*)UnBox(L_274, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_275 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_276 = ___0_value;
		uint16_t L_277 = L_276;
		RuntimeObject* L_278 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_277);
		L_275->___sbyte_10 = ((*(int8_t*)UnBox(L_278, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_280 = ___0_value;
		uint16_t L_281 = L_280;
		RuntimeObject* L_282 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_281);
		L_279->___sbyte_11 = ((*(int8_t*)UnBox(L_282, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_283 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_284 = ___0_value;
		uint16_t L_285 = L_284;
		RuntimeObject* L_286 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_285);
		L_283->___sbyte_12 = ((*(int8_t*)UnBox(L_286, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_287 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_288 = ___0_value;
		uint16_t L_289 = L_288;
		RuntimeObject* L_290 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_289);
		L_287->___sbyte_13 = ((*(int8_t*)UnBox(L_290, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_291 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_292 = ___0_value;
		uint16_t L_293 = L_292;
		RuntimeObject* L_294 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_293);
		L_291->___sbyte_14 = ((*(int8_t*)UnBox(L_294, il2cpp_defaults.sbyte_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_295 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_296 = ___0_value;
		uint16_t L_297 = L_296;
		RuntimeObject* L_298 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_297);
		L_295->___sbyte_15 = ((*(int8_t*)UnBox(L_298, il2cpp_defaults.sbyte_class)));
		return;
	}

IL_0684:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_299 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_300;
		L_300 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_299, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_301 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_302;
		L_302 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_301, NULL);
		bool L_303;
		L_303 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_300, L_302, NULL);
		if (!L_303)
		{
			goto IL_0753;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_305 = ___0_value;
		uint16_t L_306 = L_305;
		RuntimeObject* L_307 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_306);
		L_304->___uint16_0 = ((*(uint16_t*)UnBox(L_307, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_308 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_309 = ___0_value;
		uint16_t L_310 = L_309;
		RuntimeObject* L_311 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_310);
		L_308->___uint16_1 = ((*(uint16_t*)UnBox(L_311, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_312 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_313 = ___0_value;
		uint16_t L_314 = L_313;
		RuntimeObject* L_315 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_314);
		L_312->___uint16_2 = ((*(uint16_t*)UnBox(L_315, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_316 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_317 = ___0_value;
		uint16_t L_318 = L_317;
		RuntimeObject* L_319 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_318);
		L_316->___uint16_3 = ((*(uint16_t*)UnBox(L_319, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_320 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_321 = ___0_value;
		uint16_t L_322 = L_321;
		RuntimeObject* L_323 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_322);
		L_320->___uint16_4 = ((*(uint16_t*)UnBox(L_323, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_325 = ___0_value;
		uint16_t L_326 = L_325;
		RuntimeObject* L_327 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_326);
		L_324->___uint16_5 = ((*(uint16_t*)UnBox(L_327, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_328 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_329 = ___0_value;
		uint16_t L_330 = L_329;
		RuntimeObject* L_331 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_330);
		L_328->___uint16_6 = ((*(uint16_t*)UnBox(L_331, il2cpp_defaults.uint16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_332 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_333 = ___0_value;
		uint16_t L_334 = L_333;
		RuntimeObject* L_335 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_334);
		L_332->___uint16_7 = ((*(uint16_t*)UnBox(L_335, il2cpp_defaults.uint16_class)));
		return;
	}

IL_0753:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_338 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_339;
		L_339 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_338, NULL);
		bool L_340;
		L_340 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_337, L_339, NULL);
		if (!L_340)
		{
			goto IL_0822;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_341 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_342 = ___0_value;
		uint16_t L_343 = L_342;
		RuntimeObject* L_344 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_343);
		L_341->___int16_0 = ((*(int16_t*)UnBox(L_344, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_345 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_346 = ___0_value;
		uint16_t L_347 = L_346;
		RuntimeObject* L_348 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_347);
		L_345->___int16_1 = ((*(int16_t*)UnBox(L_348, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_349 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_350 = ___0_value;
		uint16_t L_351 = L_350;
		RuntimeObject* L_352 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_351);
		L_349->___int16_2 = ((*(int16_t*)UnBox(L_352, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_353 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_354 = ___0_value;
		uint16_t L_355 = L_354;
		RuntimeObject* L_356 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_355);
		L_353->___int16_3 = ((*(int16_t*)UnBox(L_356, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_357 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_358 = ___0_value;
		uint16_t L_359 = L_358;
		RuntimeObject* L_360 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_359);
		L_357->___int16_4 = ((*(int16_t*)UnBox(L_360, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_361 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_362 = ___0_value;
		uint16_t L_363 = L_362;
		RuntimeObject* L_364 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_363);
		L_361->___int16_5 = ((*(int16_t*)UnBox(L_364, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_366 = ___0_value;
		uint16_t L_367 = L_366;
		RuntimeObject* L_368 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_367);
		L_365->___int16_6 = ((*(int16_t*)UnBox(L_368, il2cpp_defaults.int16_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_369 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_370 = ___0_value;
		uint16_t L_371 = L_370;
		RuntimeObject* L_372 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_371);
		L_369->___int16_7 = ((*(int16_t*)UnBox(L_372, il2cpp_defaults.int16_class)));
		return;
	}

IL_0822:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_373 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_374;
		L_374 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_373, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_375 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_376;
		L_376 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_375, NULL);
		bool L_377;
		L_377 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_374, L_376, NULL);
		if (!L_377)
		{
			goto IL_0896;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_378 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_379 = ___0_value;
		uint16_t L_380 = L_379;
		RuntimeObject* L_381 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_380);
		L_378->___uint32_0 = ((*(uint32_t*)UnBox(L_381, il2cpp_defaults.uint32_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_382 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_383 = ___0_value;
		uint16_t L_384 = L_383;
		RuntimeObject* L_385 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_384);
		L_382->___uint32_1 = ((*(uint32_t*)UnBox(L_385, il2cpp_defaults.uint32_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_386 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_387 = ___0_value;
		uint16_t L_388 = L_387;
		RuntimeObject* L_389 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_388);
		L_386->___uint32_2 = ((*(uint32_t*)UnBox(L_389, il2cpp_defaults.uint32_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_390 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_391 = ___0_value;
		uint16_t L_392 = L_391;
		RuntimeObject* L_393 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_392);
		L_390->___uint32_3 = ((*(uint32_t*)UnBox(L_393, il2cpp_defaults.uint32_class)));
		return;
	}

IL_0896:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_394 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_395;
		L_395 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_394, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_396 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_397;
		L_397 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_396, NULL);
		bool L_398;
		L_398 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_395, L_397, NULL);
		if (!L_398)
		{
			goto IL_090a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_399 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_400 = ___0_value;
		uint16_t L_401 = L_400;
		RuntimeObject* L_402 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_401);
		L_399->___int32_0 = ((*(int32_t*)UnBox(L_402, il2cpp_defaults.int32_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_403 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_404 = ___0_value;
		uint16_t L_405 = L_404;
		RuntimeObject* L_406 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_405);
		L_403->___int32_1 = ((*(int32_t*)UnBox(L_406, il2cpp_defaults.int32_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_407 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_408 = ___0_value;
		uint16_t L_409 = L_408;
		RuntimeObject* L_410 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_409);
		L_407->___int32_2 = ((*(int32_t*)UnBox(L_410, il2cpp_defaults.int32_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_411 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_412 = ___0_value;
		uint16_t L_413 = L_412;
		RuntimeObject* L_414 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_413);
		L_411->___int32_3 = ((*(int32_t*)UnBox(L_414, il2cpp_defaults.int32_class)));
		return;
	}

IL_090a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_415 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_416;
		L_416 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_415, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_417 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_418;
		L_418 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_417, NULL);
		bool L_419;
		L_419 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_416, L_418, NULL);
		if (!L_419)
		{
			goto IL_0952;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_420 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_421 = ___0_value;
		uint16_t L_422 = L_421;
		RuntimeObject* L_423 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_422);
		L_420->___uint64_0 = ((*(uint64_t*)UnBox(L_423, il2cpp_defaults.uint64_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_424 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_425 = ___0_value;
		uint16_t L_426 = L_425;
		RuntimeObject* L_427 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_426);
		L_424->___uint64_1 = ((*(uint64_t*)UnBox(L_427, il2cpp_defaults.uint64_class)));
		return;
	}

IL_0952:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_428 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_429;
		L_429 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_428, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_430 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_431;
		L_431 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_430, NULL);
		bool L_432;
		L_432 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_429, L_431, NULL);
		if (!L_432)
		{
			goto IL_099a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_433 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_434 = ___0_value;
		uint16_t L_435 = L_434;
		RuntimeObject* L_436 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_435);
		L_433->___int64_0 = ((*(int64_t*)UnBox(L_436, il2cpp_defaults.int64_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_438 = ___0_value;
		uint16_t L_439 = L_438;
		RuntimeObject* L_440 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_439);
		L_437->___int64_1 = ((*(int64_t*)UnBox(L_440, il2cpp_defaults.int64_class)));
		return;
	}

IL_099a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_441 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_442;
		L_442 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_441, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_443 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_444;
		L_444 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_443, NULL);
		bool L_445;
		L_445 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_442, L_444, NULL);
		if (!L_445)
		{
			goto IL_0a0e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_446 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_447 = ___0_value;
		uint16_t L_448 = L_447;
		RuntimeObject* L_449 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_448);
		L_446->___single_0 = ((*(float*)UnBox(L_449, il2cpp_defaults.single_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_450 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_451 = ___0_value;
		uint16_t L_452 = L_451;
		RuntimeObject* L_453 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_452);
		L_450->___single_1 = ((*(float*)UnBox(L_453, il2cpp_defaults.single_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_454 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_455 = ___0_value;
		uint16_t L_456 = L_455;
		RuntimeObject* L_457 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_456);
		L_454->___single_2 = ((*(float*)UnBox(L_457, il2cpp_defaults.single_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_458 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_459 = ___0_value;
		uint16_t L_460 = L_459;
		RuntimeObject* L_461 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_460);
		L_458->___single_3 = ((*(float*)UnBox(L_461, il2cpp_defaults.single_class)));
		return;
	}

IL_0a0e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_462 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_463;
		L_463 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_462, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_464 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_465;
		L_465 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_464, NULL);
		bool L_466;
		L_466 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_463, L_465, NULL);
		if (!L_466)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_467 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_468 = ___0_value;
		uint16_t L_469 = L_468;
		RuntimeObject* L_470 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_469);
		L_467->___double_0 = ((*(double*)UnBox(L_470, il2cpp_defaults.double_class)));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_471 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_472 = ___0_value;
		uint16_t L_473 = L_472;
		RuntimeObject* L_474 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_473);
		L_471->___double_1 = ((*(double*)UnBox(L_474, il2cpp_defaults.double_class)));
	}

IL_0a55:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_AdjustorThunk (RuntimeObject* __this, uint16_t ___0_value, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_dataPointer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(__this, L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3(_thisAdjusted, ___0_dataPointer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		void* L_5 = ___0_dataPointer;
		V_0 = (uint8_t*)L_5;
		uint8_t* L_6 = V_0;
		int32_t L_7 = ___1_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_9 = (uint8_t*)(&L_8->___byte_0);
		V_2 = L_9;
		uint8_t* L_10 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_10);
		V_3 = 0;
		goto IL_0047;
	}

IL_003b:
	{
		uint8_t* L_11 = V_1;
		int32_t L_12 = V_3;
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14))));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12))) = (int8_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_18;
		L_18 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		void* L_24 = ___0_dataPointer;
		V_4 = (int8_t*)L_24;
		int8_t* L_25 = V_4;
		int32_t L_26 = ___1_offset;
		V_4 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_28 = (int8_t*)(&L_27->___sbyte_0);
		V_6 = L_28;
		int8_t* L_29 = V_6;
		V_5 = (int8_t*)((uintptr_t)L_29);
		V_7 = 0;
		goto IL_00a0;
	}

IL_008e:
	{
		int8_t* L_30 = V_5;
		int32_t L_31 = V_7;
		int8_t* L_32 = V_4;
		int32_t L_33 = V_7;
		int32_t L_34 = (*(((int8_t*)il2cpp_codegen_add((intptr_t)L_32, L_33))));
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31))) = (int8_t)L_34;
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a0:
	{
		int32_t L_36 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_37;
		L_37 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_008e;
		}
	}
	{
		V_6 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00ae:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (!L_42)
		{
			goto IL_0112;
		}
	}
	{
		void* L_43 = ___0_dataPointer;
		V_8 = (uint16_t*)L_43;
		uint16_t* L_44 = V_8;
		int32_t L_45 = ___1_offset;
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_0);
		V_10 = L_47;
		uint16_t* L_48 = V_10;
		V_9 = (uint16_t*)((uintptr_t)L_48);
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_49 = V_9;
		int32_t L_50 = V_11;
		uint16_t* L_51 = V_8;
		int32_t L_52 = V_11;
		int32_t L_53 = (*(((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), 2))))) = (int16_t)L_53;
		int32_t L_54 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0104:
	{
		int32_t L_55 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_56;
		L_56 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00ec;
		}
	}
	{
		V_10 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
		if (!L_61)
		{
			goto IL_0176;
		}
	}
	{
		void* L_62 = ___0_dataPointer;
		V_12 = (int16_t*)L_62;
		int16_t* L_63 = V_12;
		int32_t L_64 = ___1_offset;
		V_12 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_63, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_65 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_66 = (int16_t*)(&L_65->___int16_0);
		V_14 = L_66;
		int16_t* L_67 = V_14;
		V_13 = (int16_t*)((uintptr_t)L_67);
		V_15 = 0;
		goto IL_0168;
	}

IL_0150:
	{
		int16_t* L_68 = V_13;
		int32_t L_69 = V_15;
		int16_t* L_70 = V_12;
		int32_t L_71 = V_15;
		int32_t L_72 = (*(((int16_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_71), 2))))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 2))))) = (int16_t)L_72;
		int32_t L_73 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0168:
	{
		int32_t L_74 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_75;
		L_75 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0150;
		}
	}
	{
		V_14 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0176:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01da;
		}
	}
	{
		void* L_81 = ___0_dataPointer;
		V_16 = (uint32_t*)L_81;
		uint32_t* L_82 = V_16;
		int32_t L_83 = ___1_offset;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_82, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_83), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_85 = (uint32_t*)(&L_84->___uint32_0);
		V_18 = L_85;
		uint32_t* L_86 = V_18;
		V_17 = (uint32_t*)((uintptr_t)L_86);
		V_19 = 0;
		goto IL_01cc;
	}

IL_01b4:
	{
		uint32_t* L_87 = V_17;
		int32_t L_88 = V_19;
		uint32_t* L_89 = V_16;
		int32_t L_90 = V_19;
		int32_t L_91 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))) = (int32_t)L_91;
		int32_t L_92 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01cc:
	{
		int32_t L_93 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_94;
		L_94 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01b4;
		}
	}
	{
		V_18 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_96;
		L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		bool L_99;
		L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
		if (!L_99)
		{
			goto IL_023e;
		}
	}
	{
		void* L_100 = ___0_dataPointer;
		V_20 = (int32_t*)L_100;
		int32_t* L_101 = V_20;
		int32_t L_102 = ___1_offset;
		V_20 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_102), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_103 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_104 = (int32_t*)(&L_103->___int32_0);
		V_22 = L_104;
		int32_t* L_105 = V_22;
		V_21 = (int32_t*)((uintptr_t)L_105);
		V_23 = 0;
		goto IL_0230;
	}

IL_0218:
	{
		int32_t* L_106 = V_21;
		int32_t L_107 = V_23;
		int32_t* L_108 = V_20;
		int32_t L_109 = V_23;
		int32_t L_110 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_108, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_109), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_107), 4))))) = (int32_t)L_110;
		int32_t L_111 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0230:
	{
		int32_t L_112 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_113;
		L_113 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_0218;
		}
	}
	{
		V_22 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_023e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_02a2;
		}
	}
	{
		void* L_119 = ___0_dataPointer;
		V_24 = (uint64_t*)L_119;
		uint64_t* L_120 = V_24;
		int32_t L_121 = ___1_offset;
		V_24 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_120, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_121), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_122 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_123 = (uint64_t*)(&L_122->___uint64_0);
		V_26 = L_123;
		uint64_t* L_124 = V_26;
		V_25 = (uint64_t*)((uintptr_t)L_124);
		V_27 = 0;
		goto IL_0294;
	}

IL_027c:
	{
		uint64_t* L_125 = V_25;
		int32_t L_126 = V_27;
		uint64_t* L_127 = V_24;
		int32_t L_128 = V_27;
		int64_t L_129 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_128), 8)))));
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_126), 8))))) = (int64_t)L_129;
		int32_t L_130 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_0294:
	{
		int32_t L_131 = V_27;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_027c;
		}
	}
	{
		V_26 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (!L_137)
		{
			goto IL_0306;
		}
	}
	{
		void* L_138 = ___0_dataPointer;
		V_28 = (int64_t*)L_138;
		int64_t* L_139 = V_28;
		int32_t L_140 = ___1_offset;
		V_28 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_140), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_141 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_142 = (int64_t*)(&L_141->___int64_0);
		V_30 = L_142;
		int64_t* L_143 = V_30;
		V_29 = (int64_t*)((uintptr_t)L_143);
		V_31 = 0;
		goto IL_02f8;
	}

IL_02e0:
	{
		int64_t* L_144 = V_29;
		int32_t L_145 = V_31;
		int64_t* L_146 = V_28;
		int32_t L_147 = V_31;
		int64_t L_148 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_146, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_147), 8))))));
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_144, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 8))))) = (int64_t)L_148;
		int32_t L_149 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_02f8:
	{
		int32_t L_150 = V_31;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_151;
		L_151 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_02e0;
		}
	}
	{
		V_30 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_036a;
		}
	}
	{
		void* L_157 = ___0_dataPointer;
		V_32 = (float*)L_157;
		float* L_158 = V_32;
		int32_t L_159 = ___1_offset;
		V_32 = ((float*)il2cpp_codegen_add((intptr_t)L_158, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_159), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_160 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_161 = (float*)(&L_160->___single_0);
		V_34 = L_161;
		float* L_162 = V_34;
		V_33 = (float*)((uintptr_t)L_162);
		V_35 = 0;
		goto IL_035c;
	}

IL_0344:
	{
		float* L_163 = V_33;
		int32_t L_164 = V_35;
		float* L_165 = V_32;
		int32_t L_166 = V_35;
		float L_167 = (*(((float*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_166), 4))))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_164), 4))))) = (float)L_167;
		int32_t L_168 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_035c:
	{
		int32_t L_169 = V_35;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_170;
		L_170 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0344;
		}
	}
	{
		V_34 = (float*)((uintptr_t)0);
		return;
	}

IL_036a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_174;
		L_174 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_173, NULL);
		bool L_175;
		L_175 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_172, L_174, NULL);
		if (!L_175)
		{
			goto IL_03ce;
		}
	}
	{
		void* L_176 = ___0_dataPointer;
		V_36 = (double*)L_176;
		double* L_177 = V_36;
		int32_t L_178 = ___1_offset;
		V_36 = ((double*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_179 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_180 = (double*)(&L_179->___double_0);
		V_38 = L_180;
		double* L_181 = V_38;
		V_37 = (double*)((uintptr_t)L_181);
		V_39 = 0;
		goto IL_03c0;
	}

IL_03a8:
	{
		double* L_182 = V_37;
		int32_t L_183 = V_39;
		double* L_184 = V_36;
		int32_t L_185 = V_39;
		double L_186 = (*(((double*)il2cpp_codegen_add((intptr_t)L_184, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_185), 8))))));
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_183), 8))))) = (double)L_186;
		int32_t L_187 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_03c0:
	{
		int32_t L_188 = V_39;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_189;
		L_189 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_188) < ((int32_t)L_189)))
		{
			goto IL_03a8;
		}
	}
	{
		V_38 = (double*)((uintptr_t)0);
		return;
	}

IL_03ce:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_190 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_190, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_190, method);
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(_thisAdjusted, ___0_dataPointer, ___1_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) 
{
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = ___0_existingRegister;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_1 = (*(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)L_0);
		__this->___register = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_AdjustorThunk (RuntimeObject* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A(_thisAdjusted, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_14 = (uint8_t*)(&L_13->___byte_0);
		V_0 = L_14;
		uint8_t* L_15 = V_0;
		int32_t L_16 = ___0_index;
		int32_t L_17 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_15), L_16)));
		uint8_t L_18 = ((uint8_t)L_17);
		RuntimeObject* L_19 = Box(il2cpp_defaults.byte_class, &L_18);
		return ((*(uint16_t*)UnBox(L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_26 = (int8_t*)(&L_25->___sbyte_0);
		V_1 = L_26;
		int8_t* L_27 = V_1;
		int32_t L_28 = ___0_index;
		int32_t L_29 = *((int8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_27), L_28)));
		int8_t L_30 = ((int8_t)L_29);
		RuntimeObject* L_31 = Box(il2cpp_defaults.sbyte_class, &L_30);
		return ((*(uint16_t*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0090:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00ca;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_37 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_38 = (uint16_t*)(&L_37->___uint16_0);
		V_2 = L_38;
		uint16_t* L_39 = V_2;
		int32_t L_40 = ___0_index;
		int32_t L_41 = *((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_39), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 2)))));
		uint16_t L_42 = ((uint16_t)L_41);
		RuntimeObject* L_43 = Box(il2cpp_defaults.uint16_class, &L_42);
		return ((*(uint16_t*)UnBox(L_43, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00ca:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_50 = (int16_t*)(&L_49->___int16_0);
		V_3 = L_50;
		int16_t* L_51 = V_3;
		int32_t L_52 = ___0_index;
		int32_t L_53 = *((int16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_51), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2)))));
		int16_t L_54 = ((int16_t)L_53);
		RuntimeObject* L_55 = Box(il2cpp_defaults.int16_class, &L_54);
		return ((*(uint16_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0140;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_61 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_62 = (uint32_t*)(&L_61->___uint32_0);
		V_4 = L_62;
		uint32_t* L_63 = V_4;
		int32_t L_64 = ___0_index;
		int32_t L_65 = *((uint32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_63), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 4)))));
		uint32_t L_66 = ((uint32_t)L_65);
		RuntimeObject* L_67 = Box(il2cpp_defaults.uint32_class, &L_66);
		return ((*(uint16_t*)UnBox(L_67, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0140:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_017c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_73 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_74 = (int32_t*)(&L_73->___int32_0);
		V_5 = L_74;
		int32_t* L_75 = V_5;
		int32_t L_76 = ___0_index;
		int32_t L_77 = *((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_75), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4)))));
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(il2cpp_defaults.int32_class, &L_78);
		return ((*(uint16_t*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_017c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		if (!L_84)
		{
			goto IL_01b8;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_85 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_86 = (uint64_t*)(&L_85->___uint64_0);
		V_6 = L_86;
		uint64_t* L_87 = V_6;
		int32_t L_88 = ___0_index;
		int64_t L_89 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_87), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 8)))));
		uint64_t L_90 = ((uint64_t)L_89);
		RuntimeObject* L_91 = Box(il2cpp_defaults.uint64_class, &L_90);
		return ((*(uint16_t*)UnBox(L_91, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_01b8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_93, L_95, NULL);
		if (!L_96)
		{
			goto IL_01f4;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_97 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_98 = (int64_t*)(&L_97->___int64_0);
		V_7 = L_98;
		int64_t* L_99 = V_7;
		int32_t L_100 = ___0_index;
		int64_t L_101 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_99), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_100), 8)))));
		int64_t L_102 = L_101;
		RuntimeObject* L_103 = Box(il2cpp_defaults.int64_class, &L_102);
		return ((*(uint16_t*)UnBox(L_103, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_01f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0230;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_110 = (float*)(&L_109->___single_0);
		V_8 = L_110;
		float* L_111 = V_8;
		int32_t L_112 = ___0_index;
		float L_113 = *((float*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_111), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_112), 4)))));
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		return ((*(uint16_t*)UnBox(L_115, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0230:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		if (!L_120)
		{
			goto IL_026c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_121 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_122 = (double*)(&L_121->___double_0);
		V_9 = L_122;
		double* L_123 = V_9;
		int32_t L_124 = ___0_index;
		double L_125 = *((double*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_123), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_124), 8)))));
		double L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_defaults.double_class, &L_126);
		return ((*(uint16_t*)UnBox(L_127, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_026c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_128 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_128, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
	}
}
IL2CPP_EXTERN_C  uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_2;
		L_2 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_3 = V_0;
		uint16_t L_4;
		L_4 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_other), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_01f0;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_15 = L_14->___byte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint8_t L_18 = L_17.___byte_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_20 = L_19->___byte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register;
		uint8_t L_23 = L_22.___byte_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_25 = L_24->___byte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint8_t L_28 = L_27.___byte_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_30 = L_29->___byte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint8_t L_33 = L_32.___byte_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_35 = L_34->___byte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint8_t L_38 = L_37.___byte_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_40 = L_39->___byte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register;
		uint8_t L_43 = L_42.___byte_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_45 = L_44->___byte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register;
		uint8_t L_48 = L_47.___byte_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_48))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_50 = L_49->___byte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_51 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_52 = L_51.___register;
		uint8_t L_53 = L_52.___byte_7;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_53))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_54 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_55 = L_54->___byte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_56 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_57 = L_56.___register;
		uint8_t L_58 = L_57.___byte_8;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_58))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_59 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_60 = L_59->___byte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint8_t L_63 = L_62.___byte_9;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_63))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_64 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_65 = L_64->___byte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_66 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_67 = L_66.___register;
		uint8_t L_68 = L_67.___byte_10;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_68))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_69 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_70 = L_69->___byte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint8_t L_73 = L_72.___byte_11;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_73))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_74 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_75 = L_74->___byte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_76 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_77 = L_76.___register;
		uint8_t L_78 = L_77.___byte_12;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_78))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_79 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_80 = L_79->___byte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_81 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_82 = L_81.___register;
		uint8_t L_83 = L_82.___byte_13;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_83))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_85 = L_84->___byte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_86 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_87 = L_86.___register;
		uint8_t L_88 = L_87.___byte_14;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_88))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_89 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_90 = L_89->___byte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_91 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_92 = L_91.___register;
		uint8_t L_93 = L_92.___byte_15;
		return (bool)((((int32_t)L_90) == ((int32_t)L_93))? 1 : 0);
	}

IL_01ee:
	{
		return (bool)0;
	}

IL_01f0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (!L_98)
		{
			goto IL_03af;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_99 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_100 = L_99->___sbyte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_101 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_102 = L_101.___register;
		int8_t L_103 = L_102.___sbyte_0;
		if ((!(((uint32_t)L_100) == ((uint32_t)L_103))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_104 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_105 = L_104->___sbyte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_106 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_107 = L_106.___register;
		int8_t L_108 = L_107.___sbyte_1;
		if ((!(((uint32_t)L_105) == ((uint32_t)L_108))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_110 = L_109->___sbyte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_111 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_112 = L_111.___register;
		int8_t L_113 = L_112.___sbyte_2;
		if ((!(((uint32_t)L_110) == ((uint32_t)L_113))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_114 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_115 = L_114->___sbyte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_116 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_117 = L_116.___register;
		int8_t L_118 = L_117.___sbyte_3;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_118))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_119 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_120 = L_119->___sbyte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_121 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_122 = L_121.___register;
		int8_t L_123 = L_122.___sbyte_4;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_123))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_124 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_125 = L_124->___sbyte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_126 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_127 = L_126.___register;
		int8_t L_128 = L_127.___sbyte_5;
		if ((!(((uint32_t)L_125) == ((uint32_t)L_128))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_129 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_130 = L_129->___sbyte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_131 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_132 = L_131.___register;
		int8_t L_133 = L_132.___sbyte_6;
		if ((!(((uint32_t)L_130) == ((uint32_t)L_133))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_134 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_135 = L_134->___sbyte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_136 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_137 = L_136.___register;
		int8_t L_138 = L_137.___sbyte_7;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_138))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_139 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_140 = L_139->___sbyte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_141 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_142 = L_141.___register;
		int8_t L_143 = L_142.___sbyte_8;
		if ((!(((uint32_t)L_140) == ((uint32_t)L_143))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_144 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_145 = L_144->___sbyte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_146 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_147 = L_146.___register;
		int8_t L_148 = L_147.___sbyte_9;
		if ((!(((uint32_t)L_145) == ((uint32_t)L_148))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_149 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_150 = L_149->___sbyte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_151 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_152 = L_151.___register;
		int8_t L_153 = L_152.___sbyte_10;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_153))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_154 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_155 = L_154->___sbyte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_156 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_157 = L_156.___register;
		int8_t L_158 = L_157.___sbyte_11;
		if ((!(((uint32_t)L_155) == ((uint32_t)L_158))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_159 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_160 = L_159->___sbyte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_161 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_162 = L_161.___register;
		int8_t L_163 = L_162.___sbyte_12;
		if ((!(((uint32_t)L_160) == ((uint32_t)L_163))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_164 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_165 = L_164->___sbyte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_166 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_167 = L_166.___register;
		int8_t L_168 = L_167.___sbyte_13;
		if ((!(((uint32_t)L_165) == ((uint32_t)L_168))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_169 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_170 = L_169->___sbyte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_171 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_172 = L_171.___register;
		int8_t L_173 = L_172.___sbyte_14;
		if ((!(((uint32_t)L_170) == ((uint32_t)L_173))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_175 = L_174->___sbyte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_176 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_177 = L_176.___register;
		int8_t L_178 = L_177.___sbyte_15;
		return (bool)((((int32_t)L_175) == ((int32_t)L_178))? 1 : 0);
	}

IL_03ad:
	{
		return (bool)0;
	}

IL_03af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0496;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_184 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_185 = L_184->___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_186 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_187 = L_186.___register;
		uint16_t L_188 = L_187.___uint16_0;
		if ((!(((uint32_t)L_185) == ((uint32_t)L_188))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_189 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_190 = L_189->___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_191 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_192 = L_191.___register;
		uint16_t L_193 = L_192.___uint16_1;
		if ((!(((uint32_t)L_190) == ((uint32_t)L_193))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_194 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_195 = L_194->___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_196 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_197 = L_196.___register;
		uint16_t L_198 = L_197.___uint16_2;
		if ((!(((uint32_t)L_195) == ((uint32_t)L_198))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_199 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_200 = L_199->___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_201 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_202 = L_201.___register;
		uint16_t L_203 = L_202.___uint16_3;
		if ((!(((uint32_t)L_200) == ((uint32_t)L_203))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_204 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_205 = L_204->___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_206 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_207 = L_206.___register;
		uint16_t L_208 = L_207.___uint16_4;
		if ((!(((uint32_t)L_205) == ((uint32_t)L_208))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_209 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_210 = L_209->___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_211 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_212 = L_211.___register;
		uint16_t L_213 = L_212.___uint16_5;
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_214 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_215 = L_214->___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_216 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_217 = L_216.___register;
		uint16_t L_218 = L_217.___uint16_6;
		if ((!(((uint32_t)L_215) == ((uint32_t)L_218))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_219 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_220 = L_219->___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_221 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_222 = L_221.___register;
		uint16_t L_223 = L_222.___uint16_7;
		return (bool)((((int32_t)L_220) == ((int32_t)L_223))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}

IL_0496:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_057d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_229 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_230 = L_229->___int16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_231 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		int16_t L_233 = L_232.___int16_0;
		if ((!(((uint32_t)L_230) == ((uint32_t)L_233))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_234 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_235 = L_234->___int16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_236 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_237 = L_236.___register;
		int16_t L_238 = L_237.___int16_1;
		if ((!(((uint32_t)L_235) == ((uint32_t)L_238))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_240 = L_239->___int16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_241 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		int16_t L_243 = L_242.___int16_2;
		if ((!(((uint32_t)L_240) == ((uint32_t)L_243))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_244 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_245 = L_244->___int16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_246 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_247 = L_246.___register;
		int16_t L_248 = L_247.___int16_3;
		if ((!(((uint32_t)L_245) == ((uint32_t)L_248))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_250 = L_249->___int16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_251 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_252 = L_251.___register;
		int16_t L_253 = L_252.___int16_4;
		if ((!(((uint32_t)L_250) == ((uint32_t)L_253))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_255 = L_254->___int16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_256 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_257 = L_256.___register;
		int16_t L_258 = L_257.___int16_5;
		if ((!(((uint32_t)L_255) == ((uint32_t)L_258))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_260 = L_259->___int16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_261 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_262 = L_261.___register;
		int16_t L_263 = L_262.___int16_6;
		if ((!(((uint32_t)L_260) == ((uint32_t)L_263))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_265 = L_264->___int16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_266 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		int16_t L_268 = L_267.___int16_7;
		return (bool)((((int32_t)L_265) == ((int32_t)L_268))? 1 : 0);
	}

IL_057b:
	{
		return (bool)0;
	}

IL_057d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_269 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_270;
		L_270 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_269, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_271 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_272;
		L_272 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_271, NULL);
		bool L_273;
		L_273 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_270, L_272, NULL);
		if (!L_273)
		{
			goto IL_05fb;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_275 = L_274->___uint32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_276 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint32_t L_278 = L_277.___uint32_0;
		if ((!(((uint32_t)L_275) == ((uint32_t)L_278))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_280 = L_279->___uint32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_281 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_282 = L_281.___register;
		uint32_t L_283 = L_282.___uint32_1;
		if ((!(((uint32_t)L_280) == ((uint32_t)L_283))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_285 = L_284->___uint32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_286 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_287 = L_286.___register;
		uint32_t L_288 = L_287.___uint32_2;
		if ((!(((uint32_t)L_285) == ((uint32_t)L_288))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_290 = L_289->___uint32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_291 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_292 = L_291.___register;
		uint32_t L_293 = L_292.___uint32_3;
		return (bool)((((int32_t)L_290) == ((int32_t)L_293))? 1 : 0);
	}

IL_05f9:
	{
		return (bool)0;
	}

IL_05fb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_294 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_295;
		L_295 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_294, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_296 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_297;
		L_297 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_296, NULL);
		bool L_298;
		L_298 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_295, L_297, NULL);
		if (!L_298)
		{
			goto IL_0679;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_300 = L_299->___int32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_301 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		int32_t L_303 = L_302.___int32_0;
		if ((!(((uint32_t)L_300) == ((uint32_t)L_303))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_305 = L_304->___int32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_306 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_307 = L_306.___register;
		int32_t L_308 = L_307.___int32_1;
		if ((!(((uint32_t)L_305) == ((uint32_t)L_308))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_310 = L_309->___int32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_311 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		int32_t L_313 = L_312.___int32_2;
		if ((!(((uint32_t)L_310) == ((uint32_t)L_313))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_315 = L_314->___int32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_316 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_317 = L_316.___register;
		int32_t L_318 = L_317.___int32_3;
		return (bool)((((int32_t)L_315) == ((int32_t)L_318))? 1 : 0);
	}

IL_0677:
	{
		return (bool)0;
	}

IL_0679:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_319 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_320;
		L_320 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_319, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_321 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_322;
		L_322 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_321, NULL);
		bool L_323;
		L_323 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_320, L_322, NULL);
		if (!L_323)
		{
			goto IL_06c7;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_325 = L_324->___uint64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_326 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_327 = L_326.___register;
		uint64_t L_328 = L_327.___uint64_0;
		if ((!(((uint64_t)L_325) == ((uint64_t)L_328))))
		{
			goto IL_06c5;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_330 = L_329->___uint64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_331 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_332 = L_331.___register;
		uint64_t L_333 = L_332.___uint64_1;
		return (bool)((((int64_t)L_330) == ((int64_t)L_333))? 1 : 0);
	}

IL_06c5:
	{
		return (bool)0;
	}

IL_06c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		bool L_338;
		L_338 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_335, L_337, NULL);
		if (!L_338)
		{
			goto IL_0715;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_339 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t L_340 = L_339->___int64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_341 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_342 = L_341.___register;
		int64_t L_343 = L_342.___int64_0;
		if ((!(((uint64_t)L_340) == ((uint64_t)L_343))))
		{
			goto IL_0713;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_344 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t L_345 = L_344->___int64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_346 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_347 = L_346.___register;
		int64_t L_348 = L_347.___int64_1;
		return (bool)((((int64_t)L_345) == ((int64_t)L_348))? 1 : 0);
	}

IL_0713:
	{
		return (bool)0;
	}

IL_0715:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_349 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_350;
		L_350 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_349, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		bool L_353;
		L_353 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_350, L_352, NULL);
		if (!L_353)
		{
			goto IL_0793;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_354 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_355 = L_354->___single_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_356 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		float L_358 = L_357.___single_0;
		if ((!(((float)L_355) == ((float)L_358))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_359 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_360 = L_359->___single_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_361 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_362 = L_361.___register;
		float L_363 = L_362.___single_1;
		if ((!(((float)L_360) == ((float)L_363))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_364 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_365 = L_364->___single_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_366 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		float L_368 = L_367.___single_2;
		if ((!(((float)L_365) == ((float)L_368))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_369 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_370 = L_369->___single_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_371 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_372 = L_371.___register;
		float L_373 = L_372.___single_3;
		return (bool)((((float)L_370) == ((float)L_373))? 1 : 0);
	}

IL_0791:
	{
		return (bool)0;
	}

IL_0793:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_374 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_375;
		L_375 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_374, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_376 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_377;
		L_377 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_376, NULL);
		bool L_378;
		L_378 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_375, L_377, NULL);
		if (!L_378)
		{
			goto IL_07e1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_379 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double L_380 = L_379->___double_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_381 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_382 = L_381.___register;
		double L_383 = L_382.___double_0;
		if ((!(((double)L_380) == ((double)L_383))))
		{
			goto IL_07df;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_384 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double L_385 = L_384->___double_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_386 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_387 = L_386.___register;
		double L_388 = L_387.___double_1;
		return (bool)((((double)L_385) == ((double)L_388))? 1 : 0);
	}

IL_07df:
	{
		return (bool)0;
	}

IL_07e1:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_389 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_389, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_389, method);
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_AdjustorThunk (RuntimeObject* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_8;
		L_8 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		V_2 = ((*(uint8_t*)UnBox(L_10, il2cpp_defaults.byte_class)));
		int32_t L_11;
		L_11 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_6, L_11, NULL);
		V_0 = L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_15;
		L_15 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a7;
		}
	}
	{
		V_3 = 0;
		goto IL_009d;
	}

IL_0078:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_24;
		L_24 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_25 = L_24;
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_25);
		V_4 = ((*(int8_t*)UnBox(L_26, il2cpp_defaults.sbyte_class)));
		int32_t L_27;
		L_27 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF((&V_4), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_22, L_27, NULL);
		V_0 = L_28;
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009d:
	{
		int32_t L_30 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_31;
		L_31 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_32 = V_0;
		return L_32;
	}

IL_00a7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00fa;
		}
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_40;
		L_40 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_41 = L_40;
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_41);
		V_6 = ((*(uint16_t*)UnBox(L_42, il2cpp_defaults.uint16_class)));
		int32_t L_43;
		L_43 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_44;
		L_44 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_38, L_43, NULL);
		V_0 = L_44;
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ef:
	{
		int32_t L_46 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_47;
		L_47 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_48 = V_0;
		return L_48;
	}

IL_00fa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_014d;
		}
	}
	{
		V_7 = 0;
		goto IL_0142;
	}

IL_011a:
	{
		int32_t L_54 = V_0;
		int32_t L_55 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_56;
		L_56 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_57);
		V_8 = ((*(int16_t*)UnBox(L_58, il2cpp_defaults.int16_class)));
		int32_t L_59;
		L_59 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_60;
		L_60 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_54, L_59, NULL);
		V_0 = L_60;
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0142:
	{
		int32_t L_62 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_63;
		L_63 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_64 = V_0;
		return L_64;
	}

IL_014d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		V_9 = 0;
		goto IL_0195;
	}

IL_016d:
	{
		int32_t L_70 = V_0;
		int32_t L_71 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_72;
		L_72 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_71, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_73 = L_72;
		RuntimeObject* L_74 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_73);
		V_10 = ((*(uint32_t*)UnBox(L_74, il2cpp_defaults.uint32_class)));
		int32_t L_75;
		L_75 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_10), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_76;
		L_76 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_70, L_75, NULL);
		V_0 = L_76;
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0195:
	{
		int32_t L_78 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_79;
		L_79 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_80 = V_0;
		return L_80;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_01f3;
		}
	}
	{
		V_11 = 0;
		goto IL_01e8;
	}

IL_01c0:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_88;
		L_88 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_87, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_89);
		V_12 = ((*(int32_t*)UnBox(L_90, il2cpp_defaults.int32_class)));
		int32_t L_91;
		L_91 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_12), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_92;
		L_92 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_86, L_91, NULL);
		V_0 = L_92;
		int32_t L_93 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_01e8:
	{
		int32_t L_94 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_95;
		L_95 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_01c0;
		}
	}
	{
		int32_t L_96 = V_0;
		return L_96;
	}

IL_01f3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		bool L_101;
		L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_0246;
		}
	}
	{
		V_13 = 0;
		goto IL_023b;
	}

IL_0213:
	{
		int32_t L_102 = V_0;
		int32_t L_103 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_104;
		L_104 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_103, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		V_14 = ((*(uint64_t*)UnBox(L_106, il2cpp_defaults.uint64_class)));
		int32_t L_107;
		L_107 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_14), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_108;
		L_108 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_102, L_107, NULL);
		V_0 = L_108;
		int32_t L_109 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_023b:
	{
		int32_t L_110 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_0213;
		}
	}
	{
		int32_t L_112 = V_0;
		return L_112;
	}

IL_0246:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		bool L_117;
		L_117 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_114, L_116, NULL);
		if (!L_117)
		{
			goto IL_0299;
		}
	}
	{
		V_15 = 0;
		goto IL_028e;
	}

IL_0266:
	{
		int32_t L_118 = V_0;
		int32_t L_119 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_120;
		L_120 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_121 = L_120;
		RuntimeObject* L_122 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_121);
		V_16 = ((*(int64_t*)UnBox(L_122, il2cpp_defaults.int64_class)));
		int32_t L_123;
		L_123 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_16), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_124;
		L_124 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_118, L_123, NULL);
		V_0 = L_124;
		int32_t L_125 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_028e:
	{
		int32_t L_126 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_127;
		L_127 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_126) < ((int32_t)L_127)))
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_128 = V_0;
		return L_128;
	}

IL_0299:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		if (!L_133)
		{
			goto IL_02ec;
		}
	}
	{
		V_17 = 0;
		goto IL_02e1;
	}

IL_02b9:
	{
		int32_t L_134 = V_0;
		int32_t L_135 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_136;
		L_136 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_135, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_137);
		V_18 = ((*(float*)UnBox(L_138, il2cpp_defaults.single_class)));
		int32_t L_139;
		L_139 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_18), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_140;
		L_140 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_134, L_139, NULL);
		V_0 = L_140;
		int32_t L_141 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_02e1:
	{
		int32_t L_142 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_143;
		L_143 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_02b9;
		}
	}
	{
		int32_t L_144 = V_0;
		return L_144;
	}

IL_02ec:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_145 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_146;
		L_146 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_145, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		bool L_149;
		L_149 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_146, L_148, NULL);
		if (!L_149)
		{
			goto IL_033f;
		}
	}
	{
		V_19 = 0;
		goto IL_0334;
	}

IL_030c:
	{
		int32_t L_150 = V_0;
		int32_t L_151 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_152;
		L_152 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_151, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_153 = L_152;
		RuntimeObject* L_154 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_153);
		V_20 = ((*(double*)UnBox(L_154, il2cpp_defaults.double_class)));
		int32_t L_155;
		L_155 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_20), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_156;
		L_156 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_150, L_155, NULL);
		V_0 = L_156;
		int32_t L_157 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_157, 1));
	}

IL_0334:
	{
		int32_t L_158 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_159;
		L_159 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_158) < ((int32_t)L_159)))
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_160 = V_0;
		return L_160;
	}

IL_033f:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_161 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_161, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_161, method);
	}

IL_034a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_162 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_163;
		L_163 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_162, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		bool L_166;
		L_166 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_163, L_165, NULL);
		if (!L_166)
		{
			goto IL_04da;
		}
	}
	{
		int32_t L_167 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_168 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_169 = (uint8_t*)(&L_168->___byte_0);
		int32_t L_170;
		L_170 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_169, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_171;
		L_171 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_167, L_170, NULL);
		V_0 = L_171;
		int32_t L_172 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_173 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_174 = (uint8_t*)(&L_173->___byte_1);
		int32_t L_175;
		L_175 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_174, NULL);
		int32_t L_176;
		L_176 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_172, L_175, NULL);
		V_0 = L_176;
		int32_t L_177 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_178 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_179 = (uint8_t*)(&L_178->___byte_2);
		int32_t L_180;
		L_180 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_179, NULL);
		int32_t L_181;
		L_181 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_177, L_180, NULL);
		V_0 = L_181;
		int32_t L_182 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_183 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_184 = (uint8_t*)(&L_183->___byte_3);
		int32_t L_185;
		L_185 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_184, NULL);
		int32_t L_186;
		L_186 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_182, L_185, NULL);
		V_0 = L_186;
		int32_t L_187 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_188 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_189 = (uint8_t*)(&L_188->___byte_4);
		int32_t L_190;
		L_190 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_189, NULL);
		int32_t L_191;
		L_191 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_187, L_190, NULL);
		V_0 = L_191;
		int32_t L_192 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_193 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_194 = (uint8_t*)(&L_193->___byte_5);
		int32_t L_195;
		L_195 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_194, NULL);
		int32_t L_196;
		L_196 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_192, L_195, NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_199 = (uint8_t*)(&L_198->___byte_6);
		int32_t L_200;
		L_200 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_199, NULL);
		int32_t L_201;
		L_201 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_197, L_200, NULL);
		V_0 = L_201;
		int32_t L_202 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_203 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_204 = (uint8_t*)(&L_203->___byte_7);
		int32_t L_205;
		L_205 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_204, NULL);
		int32_t L_206;
		L_206 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_202, L_205, NULL);
		V_0 = L_206;
		int32_t L_207 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_208 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_209 = (uint8_t*)(&L_208->___byte_8);
		int32_t L_210;
		L_210 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_209, NULL);
		int32_t L_211;
		L_211 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_207, L_210, NULL);
		V_0 = L_211;
		int32_t L_212 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_213 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_214 = (uint8_t*)(&L_213->___byte_9);
		int32_t L_215;
		L_215 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_214, NULL);
		int32_t L_216;
		L_216 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_212, L_215, NULL);
		V_0 = L_216;
		int32_t L_217 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_219 = (uint8_t*)(&L_218->___byte_10);
		int32_t L_220;
		L_220 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_219, NULL);
		int32_t L_221;
		L_221 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_217, L_220, NULL);
		V_0 = L_221;
		int32_t L_222 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_223 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_224 = (uint8_t*)(&L_223->___byte_11);
		int32_t L_225;
		L_225 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_224, NULL);
		int32_t L_226;
		L_226 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_222, L_225, NULL);
		V_0 = L_226;
		int32_t L_227 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_228 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_229 = (uint8_t*)(&L_228->___byte_12);
		int32_t L_230;
		L_230 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_229, NULL);
		int32_t L_231;
		L_231 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_227, L_230, NULL);
		V_0 = L_231;
		int32_t L_232 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_233 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_234 = (uint8_t*)(&L_233->___byte_13);
		int32_t L_235;
		L_235 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_234, NULL);
		int32_t L_236;
		L_236 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_232, L_235, NULL);
		V_0 = L_236;
		int32_t L_237 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_238 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_239 = (uint8_t*)(&L_238->___byte_14);
		int32_t L_240;
		L_240 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_239, NULL);
		int32_t L_241;
		L_241 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_237, L_240, NULL);
		V_0 = L_241;
		int32_t L_242 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_243 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_244 = (uint8_t*)(&L_243->___byte_15);
		int32_t L_245;
		L_245 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_244, NULL);
		int32_t L_246;
		L_246 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_242, L_245, NULL);
		V_0 = L_246;
		int32_t L_247 = V_0;
		return L_247;
	}

IL_04da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_248 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_249;
		L_249 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_248, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_250 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_251;
		L_251 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_250, NULL);
		bool L_252;
		L_252 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_249, L_251, NULL);
		if (!L_252)
		{
			goto IL_066a;
		}
	}
	{
		int32_t L_253 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_255 = (int8_t*)(&L_254->___sbyte_0);
		int32_t L_256;
		L_256 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_255, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_257;
		L_257 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_253, L_256, NULL);
		V_0 = L_257;
		int32_t L_258 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_260 = (int8_t*)(&L_259->___sbyte_1);
		int32_t L_261;
		L_261 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_260, NULL);
		int32_t L_262;
		L_262 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_258, L_261, NULL);
		V_0 = L_262;
		int32_t L_263 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_265 = (int8_t*)(&L_264->___sbyte_2);
		int32_t L_266;
		L_266 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_265, NULL);
		int32_t L_267;
		L_267 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_263, L_266, NULL);
		V_0 = L_267;
		int32_t L_268 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_269 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_270 = (int8_t*)(&L_269->___sbyte_3);
		int32_t L_271;
		L_271 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_270, NULL);
		int32_t L_272;
		L_272 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_268, L_271, NULL);
		V_0 = L_272;
		int32_t L_273 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_275 = (int8_t*)(&L_274->___sbyte_4);
		int32_t L_276;
		L_276 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_275, NULL);
		int32_t L_277;
		L_277 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_273, L_276, NULL);
		V_0 = L_277;
		int32_t L_278 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_280 = (int8_t*)(&L_279->___sbyte_5);
		int32_t L_281;
		L_281 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_280, NULL);
		int32_t L_282;
		L_282 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_278, L_281, NULL);
		V_0 = L_282;
		int32_t L_283 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_285 = (int8_t*)(&L_284->___sbyte_6);
		int32_t L_286;
		L_286 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_285, NULL);
		int32_t L_287;
		L_287 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_283, L_286, NULL);
		V_0 = L_287;
		int32_t L_288 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_290 = (int8_t*)(&L_289->___sbyte_7);
		int32_t L_291;
		L_291 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_290, NULL);
		int32_t L_292;
		L_292 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_288, L_291, NULL);
		V_0 = L_292;
		int32_t L_293 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_294 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_295 = (int8_t*)(&L_294->___sbyte_8);
		int32_t L_296;
		L_296 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_295, NULL);
		int32_t L_297;
		L_297 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_293, L_296, NULL);
		V_0 = L_297;
		int32_t L_298 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_300 = (int8_t*)(&L_299->___sbyte_9);
		int32_t L_301;
		L_301 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_300, NULL);
		int32_t L_302;
		L_302 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_298, L_301, NULL);
		V_0 = L_302;
		int32_t L_303 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_305 = (int8_t*)(&L_304->___sbyte_10);
		int32_t L_306;
		L_306 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_305, NULL);
		int32_t L_307;
		L_307 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_303, L_306, NULL);
		V_0 = L_307;
		int32_t L_308 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_310 = (int8_t*)(&L_309->___sbyte_11);
		int32_t L_311;
		L_311 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_310, NULL);
		int32_t L_312;
		L_312 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_308, L_311, NULL);
		V_0 = L_312;
		int32_t L_313 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_315 = (int8_t*)(&L_314->___sbyte_12);
		int32_t L_316;
		L_316 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_315, NULL);
		int32_t L_317;
		L_317 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_313, L_316, NULL);
		V_0 = L_317;
		int32_t L_318 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_319 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_320 = (int8_t*)(&L_319->___sbyte_13);
		int32_t L_321;
		L_321 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_320, NULL);
		int32_t L_322;
		L_322 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_318, L_321, NULL);
		V_0 = L_322;
		int32_t L_323 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_325 = (int8_t*)(&L_324->___sbyte_14);
		int32_t L_326;
		L_326 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_325, NULL);
		int32_t L_327;
		L_327 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_323, L_326, NULL);
		V_0 = L_327;
		int32_t L_328 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_330 = (int8_t*)(&L_329->___sbyte_15);
		int32_t L_331;
		L_331 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_330, NULL);
		int32_t L_332;
		L_332 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_328, L_331, NULL);
		V_0 = L_332;
		int32_t L_333 = V_0;
		return L_333;
	}

IL_066a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		bool L_338;
		L_338 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_335, L_337, NULL);
		if (!L_338)
		{
			goto IL_0742;
		}
	}
	{
		int32_t L_339 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_340 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_341 = (uint16_t*)(&L_340->___uint16_0);
		int32_t L_342;
		L_342 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_341, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_343;
		L_343 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_339, L_342, NULL);
		V_0 = L_343;
		int32_t L_344 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_345 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_346 = (uint16_t*)(&L_345->___uint16_1);
		int32_t L_347;
		L_347 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_346, NULL);
		int32_t L_348;
		L_348 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_344, L_347, NULL);
		V_0 = L_348;
		int32_t L_349 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_350 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_351 = (uint16_t*)(&L_350->___uint16_2);
		int32_t L_352;
		L_352 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_351, NULL);
		int32_t L_353;
		L_353 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_349, L_352, NULL);
		V_0 = L_353;
		int32_t L_354 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_355 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_356 = (uint16_t*)(&L_355->___uint16_3);
		int32_t L_357;
		L_357 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_356, NULL);
		int32_t L_358;
		L_358 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_354, L_357, NULL);
		V_0 = L_358;
		int32_t L_359 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_360 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_361 = (uint16_t*)(&L_360->___uint16_4);
		int32_t L_362;
		L_362 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_361, NULL);
		int32_t L_363;
		L_363 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_359, L_362, NULL);
		V_0 = L_363;
		int32_t L_364 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_366 = (uint16_t*)(&L_365->___uint16_5);
		int32_t L_367;
		L_367 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_366, NULL);
		int32_t L_368;
		L_368 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_364, L_367, NULL);
		V_0 = L_368;
		int32_t L_369 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_370 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_371 = (uint16_t*)(&L_370->___uint16_6);
		int32_t L_372;
		L_372 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_371, NULL);
		int32_t L_373;
		L_373 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_369, L_372, NULL);
		V_0 = L_373;
		int32_t L_374 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_375 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_376 = (uint16_t*)(&L_375->___uint16_7);
		int32_t L_377;
		L_377 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_376, NULL);
		int32_t L_378;
		L_378 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_374, L_377, NULL);
		V_0 = L_378;
		int32_t L_379 = V_0;
		return L_379;
	}

IL_0742:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_380 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_381;
		L_381 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_380, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_382 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_383;
		L_383 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_382, NULL);
		bool L_384;
		L_384 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_381, L_383, NULL);
		if (!L_384)
		{
			goto IL_081a;
		}
	}
	{
		int32_t L_385 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_386 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_387 = (int16_t*)(&L_386->___int16_0);
		int32_t L_388;
		L_388 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_387, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_389;
		L_389 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_385, L_388, NULL);
		V_0 = L_389;
		int32_t L_390 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_391 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_392 = (int16_t*)(&L_391->___int16_1);
		int32_t L_393;
		L_393 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_392, NULL);
		int32_t L_394;
		L_394 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_390, L_393, NULL);
		V_0 = L_394;
		int32_t L_395 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_396 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_397 = (int16_t*)(&L_396->___int16_2);
		int32_t L_398;
		L_398 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_397, NULL);
		int32_t L_399;
		L_399 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_395, L_398, NULL);
		V_0 = L_399;
		int32_t L_400 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_401 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_402 = (int16_t*)(&L_401->___int16_3);
		int32_t L_403;
		L_403 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_402, NULL);
		int32_t L_404;
		L_404 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_400, L_403, NULL);
		V_0 = L_404;
		int32_t L_405 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_406 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_407 = (int16_t*)(&L_406->___int16_4);
		int32_t L_408;
		L_408 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_407, NULL);
		int32_t L_409;
		L_409 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_405, L_408, NULL);
		V_0 = L_409;
		int32_t L_410 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_411 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_412 = (int16_t*)(&L_411->___int16_5);
		int32_t L_413;
		L_413 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_412, NULL);
		int32_t L_414;
		L_414 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_410, L_413, NULL);
		V_0 = L_414;
		int32_t L_415 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_416 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_417 = (int16_t*)(&L_416->___int16_6);
		int32_t L_418;
		L_418 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_417, NULL);
		int32_t L_419;
		L_419 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_415, L_418, NULL);
		V_0 = L_419;
		int32_t L_420 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_421 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_422 = (int16_t*)(&L_421->___int16_7);
		int32_t L_423;
		L_423 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_422, NULL);
		int32_t L_424;
		L_424 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_420, L_423, NULL);
		V_0 = L_424;
		int32_t L_425 = V_0;
		return L_425;
	}

IL_081a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_426 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_427;
		L_427 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_426, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_428 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_429;
		L_429 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_428, NULL);
		bool L_430;
		L_430 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_427, L_429, NULL);
		if (!L_430)
		{
			goto IL_0893;
		}
	}
	{
		int32_t L_431 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_432 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_433 = (uint32_t*)(&L_432->___uint32_0);
		int32_t L_434;
		L_434 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_433, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_435;
		L_435 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_431, L_434, NULL);
		V_0 = L_435;
		int32_t L_436 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_438 = (uint32_t*)(&L_437->___uint32_1);
		int32_t L_439;
		L_439 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_438, NULL);
		int32_t L_440;
		L_440 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_436, L_439, NULL);
		V_0 = L_440;
		int32_t L_441 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_442 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_443 = (uint32_t*)(&L_442->___uint32_2);
		int32_t L_444;
		L_444 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_443, NULL);
		int32_t L_445;
		L_445 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_441, L_444, NULL);
		V_0 = L_445;
		int32_t L_446 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_447 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_448 = (uint32_t*)(&L_447->___uint32_3);
		int32_t L_449;
		L_449 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_448, NULL);
		int32_t L_450;
		L_450 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_446, L_449, NULL);
		V_0 = L_450;
		int32_t L_451 = V_0;
		return L_451;
	}

IL_0893:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_452 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_453;
		L_453 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_452, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_454 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_455;
		L_455 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_454, NULL);
		bool L_456;
		L_456 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_453, L_455, NULL);
		if (!L_456)
		{
			goto IL_090c;
		}
	}
	{
		int32_t L_457 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_458 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_459 = (int32_t*)(&L_458->___int32_0);
		int32_t L_460;
		L_460 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_459, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_461;
		L_461 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_457, L_460, NULL);
		V_0 = L_461;
		int32_t L_462 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_463 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_464 = (int32_t*)(&L_463->___int32_1);
		int32_t L_465;
		L_465 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_464, NULL);
		int32_t L_466;
		L_466 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_462, L_465, NULL);
		V_0 = L_466;
		int32_t L_467 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_468 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_469 = (int32_t*)(&L_468->___int32_2);
		int32_t L_470;
		L_470 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_469, NULL);
		int32_t L_471;
		L_471 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_467, L_470, NULL);
		V_0 = L_471;
		int32_t L_472 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_473 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_474 = (int32_t*)(&L_473->___int32_3);
		int32_t L_475;
		L_475 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_474, NULL);
		int32_t L_476;
		L_476 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_472, L_475, NULL);
		V_0 = L_476;
		int32_t L_477 = V_0;
		return L_477;
	}

IL_090c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_478 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_479;
		L_479 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_478, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_480 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_481;
		L_481 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_480, NULL);
		bool L_482;
		L_482 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_479, L_481, NULL);
		if (!L_482)
		{
			goto IL_0957;
		}
	}
	{
		int32_t L_483 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_484 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_485 = (uint64_t*)(&L_484->___uint64_0);
		int32_t L_486;
		L_486 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_485, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_487;
		L_487 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_483, L_486, NULL);
		V_0 = L_487;
		int32_t L_488 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_489 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_490 = (uint64_t*)(&L_489->___uint64_1);
		int32_t L_491;
		L_491 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_490, NULL);
		int32_t L_492;
		L_492 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_488, L_491, NULL);
		V_0 = L_492;
		int32_t L_493 = V_0;
		return L_493;
	}

IL_0957:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_494 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_495;
		L_495 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_494, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_496 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_497;
		L_497 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_496, NULL);
		bool L_498;
		L_498 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_495, L_497, NULL);
		if (!L_498)
		{
			goto IL_09a2;
		}
	}
	{
		int32_t L_499 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_500 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_501 = (int64_t*)(&L_500->___int64_0);
		int32_t L_502;
		L_502 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_501, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_503;
		L_503 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_499, L_502, NULL);
		V_0 = L_503;
		int32_t L_504 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_505 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_506 = (int64_t*)(&L_505->___int64_1);
		int32_t L_507;
		L_507 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_506, NULL);
		int32_t L_508;
		L_508 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_504, L_507, NULL);
		V_0 = L_508;
		int32_t L_509 = V_0;
		return L_509;
	}

IL_09a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0a1b;
		}
	}
	{
		int32_t L_515 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_516 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_517 = (float*)(&L_516->___single_0);
		int32_t L_518;
		L_518 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_517, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_519;
		L_519 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_515, L_518, NULL);
		V_0 = L_519;
		int32_t L_520 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_521 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_522 = (float*)(&L_521->___single_1);
		int32_t L_523;
		L_523 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_522, NULL);
		int32_t L_524;
		L_524 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_520, L_523, NULL);
		V_0 = L_524;
		int32_t L_525 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_526 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_527 = (float*)(&L_526->___single_2);
		int32_t L_528;
		L_528 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_527, NULL);
		int32_t L_529;
		L_529 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_525, L_528, NULL);
		V_0 = L_529;
		int32_t L_530 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_531 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_532 = (float*)(&L_531->___single_3);
		int32_t L_533;
		L_533 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_532, NULL);
		int32_t L_534;
		L_534 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_530, L_533, NULL);
		V_0 = L_534;
		int32_t L_535 = V_0;
		return L_535;
	}

IL_0a1b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_536 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_537;
		L_537 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_536, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_538 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_539;
		L_539 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_538, NULL);
		bool L_540;
		L_540 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_537, L_539, NULL);
		if (!L_540)
		{
			goto IL_0a66;
		}
	}
	{
		int32_t L_541 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_542 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_543 = (double*)(&L_542->___double_0);
		int32_t L_544;
		L_544 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_543, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_545;
		L_545 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_541, L_544, NULL);
		V_0 = L_545;
		int32_t L_546 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_547 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_548 = (double*)(&L_547->___double_1);
		int32_t L_549;
		L_549 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_548, NULL);
		int32_t L_550;
		L_550 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_546, L_549, NULL);
		V_0 = L_550;
		int32_t L_551 = V_0;
		return L_551;
	}

IL_0a66:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_552 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_552, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_552, method);
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		String_t* L_1;
		L_1 = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, (RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, (Il2CppChar)((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_8;
		L_8 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, L_11, L_12);
		NullCheck(L_6);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, (Il2CppChar)((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_22;
		L_22 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_24;
		L_24 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint16_t L_25;
		L_25 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)L_27, L_28, L_29);
		NullCheck(L_23);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, (Il2CppChar)((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		NullCheck((RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m32F4DFF513244591C00E23353EB6F6294E8BE9F0_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&(&___0_value)->___register);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_1), L_0, Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_12;
		L_12 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_13 = V_1;
		uint16_t L_14;
		L_14 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_15;
		L_15 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_33;
		L_33 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_34 = V_3;
		uint16_t L_35;
		L_35 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_36;
		L_36 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_33, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_54;
		L_54 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_55 = V_5;
		uint16_t L_56;
		L_56 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_57;
		L_57 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_54, L_56, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_75;
		L_75 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_74, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_76 = V_7;
		uint16_t L_77;
		L_77 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_78;
		L_78 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_75, L_77, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_96;
		L_96 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_95, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_97 = V_9;
		uint16_t L_98;
		L_98 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_97, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_99;
		L_99 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_96, L_98, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_117;
		L_117 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_116, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_118 = V_11;
		uint16_t L_119;
		L_119 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_118, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_120;
		L_120 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_117, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_138;
		L_138 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_137, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_139 = V_13;
		uint16_t L_140;
		L_140 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_139, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_141;
		L_141 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_138, L_140, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_159;
		L_159 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_158, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_160 = V_15;
		uint16_t L_161;
		L_161 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_160, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_162;
		L_162 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_159, L_161, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_180;
		L_180 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_179, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_181 = V_17;
		uint16_t L_182;
		L_182 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_181, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_183;
		L_183 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_180, L_182, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_201;
		L_201 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_200, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_202 = V_19;
		uint16_t L_203;
		L_203 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_202, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_204;
		L_204 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_201, L_203, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register;
		uint8_t L_219 = L_218.___byte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register;
		uint8_t L_222 = L_221.___byte_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0 = (uint8_t)G_B86_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register;
		uint8_t L_226 = L_225.___byte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register;
		uint8_t L_229 = L_228.___byte_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1 = (uint8_t)G_B89_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		uint8_t L_233 = L_232.___byte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register;
		uint8_t L_236 = L_235.___byte_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2 = (uint8_t)G_B92_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register;
		uint8_t L_240 = L_239.___byte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		uint8_t L_243 = L_242.___byte_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3 = (uint8_t)G_B95_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register;
		uint8_t L_247 = L_246.___byte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register;
		uint8_t L_250 = L_249.___byte_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4 = (uint8_t)G_B98_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register;
		uint8_t L_254 = L_253.___byte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register;
		uint8_t L_257 = L_256.___byte_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5 = (uint8_t)G_B101_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register;
		uint8_t L_261 = L_260.___byte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register;
		uint8_t L_264 = L_263.___byte_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6 = (uint8_t)G_B104_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		uint8_t L_268 = L_267.___byte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register;
		uint8_t L_271 = L_270.___byte_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7 = (uint8_t)G_B107_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register;
		uint8_t L_275 = L_274.___byte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint8_t L_278 = L_277.___byte_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8 = (uint8_t)G_B110_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register;
		uint8_t L_282 = L_281.___byte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register;
		uint8_t L_285 = L_284.___byte_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9 = (uint8_t)G_B113_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register;
		uint8_t L_289 = L_288.___byte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register;
		uint8_t L_292 = L_291.___byte_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10 = (uint8_t)G_B116_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register;
		uint8_t L_296 = L_295.___byte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register;
		uint8_t L_299 = L_298.___byte_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11 = (uint8_t)G_B119_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		uint8_t L_303 = L_302.___byte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register;
		uint8_t L_306 = L_305.___byte_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12 = (uint8_t)G_B122_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register;
		uint8_t L_310 = L_309.___byte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		uint8_t L_313 = L_312.___byte_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13 = (uint8_t)G_B125_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register;
		uint8_t L_317 = L_316.___byte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register;
		uint8_t L_320 = L_319.___byte_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14 = (uint8_t)G_B128_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register;
		uint8_t L_324 = L_323.___byte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register;
		uint8_t L_327 = L_326.___byte_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15 = (uint8_t)G_B131_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register;
		int8_t L_337 = L_336.___sbyte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register;
		int8_t L_340 = L_339.___sbyte_0;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0 = (int8_t)G_B136_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register;
		int8_t L_344 = L_343.___sbyte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register;
		int8_t L_347 = L_346.___sbyte_1;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1 = (int8_t)G_B139_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register;
		int8_t L_351 = L_350.___sbyte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register;
		int8_t L_354 = L_353.___sbyte_2;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2 = (int8_t)G_B142_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		int8_t L_358 = L_357.___sbyte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register;
		int8_t L_361 = L_360.___sbyte_3;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3 = (int8_t)G_B145_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register;
		int8_t L_365 = L_364.___sbyte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		int8_t L_368 = L_367.___sbyte_4;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4 = (int8_t)G_B148_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register;
		int8_t L_372 = L_371.___sbyte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register;
		int8_t L_375 = L_374.___sbyte_5;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5 = (int8_t)G_B151_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register;
		int8_t L_379 = L_378.___sbyte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register;
		int8_t L_382 = L_381.___sbyte_6;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6 = (int8_t)G_B154_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register;
		int8_t L_386 = L_385.___sbyte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register;
		int8_t L_389 = L_388.___sbyte_7;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7 = (int8_t)G_B157_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register;
		int8_t L_393 = L_392.___sbyte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register;
		int8_t L_396 = L_395.___sbyte_8;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8 = (int8_t)G_B160_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register;
		int8_t L_400 = L_399.___sbyte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register;
		int8_t L_403 = L_402.___sbyte_9;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9 = (int8_t)G_B163_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register;
		int8_t L_407 = L_406.___sbyte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register;
		int8_t L_410 = L_409.___sbyte_10;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10 = (int8_t)G_B166_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register;
		int8_t L_414 = L_413.___sbyte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register;
		int8_t L_417 = L_416.___sbyte_11;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11 = (int8_t)G_B169_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register;
		int8_t L_421 = L_420.___sbyte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register;
		int8_t L_424 = L_423.___sbyte_12;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12 = (int8_t)G_B172_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register;
		int8_t L_428 = L_427.___sbyte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register;
		int8_t L_431 = L_430.___sbyte_13;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13 = (int8_t)G_B175_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register;
		int8_t L_435 = L_434.___sbyte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register;
		int8_t L_438 = L_437.___sbyte_14;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14 = (int8_t)G_B178_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register;
		int8_t L_442 = L_441.___sbyte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register;
		int8_t L_445 = L_444.___sbyte_15;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15 = (int8_t)G_B181_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register;
		uint16_t L_455 = L_454.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register;
		uint16_t L_458 = L_457.___uint16_0;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register;
		uint16_t L_462 = L_461.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register;
		uint16_t L_465 = L_464.___uint16_1;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register;
		uint16_t L_469 = L_468.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register;
		uint16_t L_472 = L_471.___uint16_2;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register;
		uint16_t L_476 = L_475.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register;
		uint16_t L_479 = L_478.___uint16_3;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register;
		uint16_t L_483 = L_482.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register;
		uint16_t L_486 = L_485.___uint16_4;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register;
		uint16_t L_490 = L_489.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register;
		uint16_t L_493 = L_492.___uint16_5;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register;
		uint16_t L_497 = L_496.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register;
		uint16_t L_500 = L_499.___uint16_6;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register;
		uint16_t L_504 = L_503.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register;
		uint16_t L_507 = L_506.___uint16_7;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register;
		int16_t L_517 = L_516.___int16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register;
		int16_t L_520 = L_519.___int16_0;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0 = (int16_t)G_B212_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register;
		int16_t L_524 = L_523.___int16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register;
		int16_t L_527 = L_526.___int16_1;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1 = (int16_t)G_B215_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register;
		int16_t L_531 = L_530.___int16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register;
		int16_t L_534 = L_533.___int16_2;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2 = (int16_t)G_B218_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register;
		int16_t L_538 = L_537.___int16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register;
		int16_t L_541 = L_540.___int16_3;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3 = (int16_t)G_B221_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register;
		int16_t L_545 = L_544.___int16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register;
		int16_t L_548 = L_547.___int16_4;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4 = (int16_t)G_B224_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register;
		int16_t L_552 = L_551.___int16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register;
		int16_t L_555 = L_554.___int16_5;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5 = (int16_t)G_B227_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register;
		int16_t L_559 = L_558.___int16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register;
		int16_t L_562 = L_561.___int16_6;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6 = (int16_t)G_B230_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register;
		int16_t L_566 = L_565.___int16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register;
		int16_t L_569 = L_568.___int16_7;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7 = (int16_t)G_B233_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register;
		uint32_t L_579 = L_578.___uint32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register;
		uint32_t L_582 = L_581.___uint32_0;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0 = G_B238_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register;
		uint32_t L_586 = L_585.___uint32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register;
		uint32_t L_589 = L_588.___uint32_1;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1 = G_B241_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register;
		uint32_t L_593 = L_592.___uint32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register;
		uint32_t L_596 = L_595.___uint32_2;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2 = G_B244_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register;
		uint32_t L_600 = L_599.___uint32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register;
		uint32_t L_603 = L_602.___uint32_3;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3 = G_B247_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register;
		int32_t L_613 = L_612.___int32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register;
		int32_t L_616 = L_615.___int32_0;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0 = G_B252_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register;
		int32_t L_620 = L_619.___int32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register;
		int32_t L_623 = L_622.___int32_1;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1 = G_B255_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register;
		int32_t L_627 = L_626.___int32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register;
		int32_t L_630 = L_629.___int32_2;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2 = G_B258_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register;
		int32_t L_634 = L_633.___int32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register;
		int32_t L_637 = L_636.___int32_3;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3 = G_B261_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register;
		uint64_t L_647 = L_646.___uint64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register;
		uint64_t L_650 = L_649.___uint64_0;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register;
		uint64_t L_654 = L_653.___uint64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register;
		uint64_t L_657 = L_656.___uint64_1;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register;
		int64_t L_667 = L_666.___int64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register;
		int64_t L_670 = L_669.___int64_0;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0 = G_B274_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register;
		int64_t L_674 = L_673.___int64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register;
		int64_t L_677 = L_676.___int64_1;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1 = G_B277_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register;
		float L_687 = L_686.___single_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register;
		float L_690 = L_689.___single_0;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0 = G_B282_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register;
		float L_694 = L_693.___single_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register;
		float L_697 = L_696.___single_1;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1 = G_B285_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register;
		float L_701 = L_700.___single_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register;
		float L_704 = L_703.___single_2;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2 = G_B288_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register;
		float L_708 = L_707.___single_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register;
		float L_711 = L_710.___single_3;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3 = G_B291_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register;
		double L_721 = L_720.___double_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register;
		double L_724 = L_723.___double_0;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0 = G_B296_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register;
		double L_728 = L_727.___double_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register;
		double L_731 = L_730.___double_1;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1 = G_B299_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = ___0_left;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		uint16_t L_8 = ___1_right;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)UnBox(L_7, il2cpp_defaults.byte_class)))) == ((int32_t)((*(uint8_t*)UnBox(L_10, il2cpp_defaults.byte_class)))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint16_t L_16 = ___0_left;
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_17);
		uint16_t L_19 = ___1_right;
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_20);
		return (bool)((((int32_t)((*(int8_t*)UnBox(L_18, il2cpp_defaults.sbyte_class)))) == ((int32_t)((*(int8_t*)UnBox(L_21, il2cpp_defaults.sbyte_class)))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_27 = ___0_left;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		uint16_t L_30 = ___1_right;
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)UnBox(L_29, il2cpp_defaults.uint16_class)))) == ((int32_t)((*(uint16_t*)UnBox(L_32, il2cpp_defaults.uint16_class)))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint16_t L_38 = ___0_left;
		uint16_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_39);
		uint16_t L_41 = ___1_right;
		uint16_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_42);
		return (bool)((((int32_t)((*(int16_t*)UnBox(L_40, il2cpp_defaults.int16_class)))) == ((int32_t)((*(int16_t*)UnBox(L_43, il2cpp_defaults.int16_class)))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint16_t L_49 = ___0_left;
		uint16_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_50);
		uint16_t L_52 = ___1_right;
		uint16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)UnBox(L_51, il2cpp_defaults.uint32_class)))) == ((int32_t)((*(uint32_t*)UnBox(L_54, il2cpp_defaults.uint32_class)))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint16_t L_60 = ___0_left;
		uint16_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_61);
		uint16_t L_63 = ___1_right;
		uint16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_64);
		return (bool)((((int32_t)((*(int32_t*)UnBox(L_62, il2cpp_defaults.int32_class)))) == ((int32_t)((*(int32_t*)UnBox(L_65, il2cpp_defaults.int32_class)))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_71 = ___0_left;
		uint16_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_72);
		uint16_t L_74 = ___1_right;
		uint16_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)UnBox(L_73, il2cpp_defaults.uint64_class)))) == ((int64_t)((*(uint64_t*)UnBox(L_76, il2cpp_defaults.uint64_class)))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint16_t L_82 = ___0_left;
		uint16_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_83);
		uint16_t L_85 = ___1_right;
		uint16_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_86);
		return (bool)((((int64_t)((*(int64_t*)UnBox(L_84, il2cpp_defaults.int64_class)))) == ((int64_t)((*(int64_t*)UnBox(L_87, il2cpp_defaults.int64_class)))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint16_t L_93 = ___0_left;
		uint16_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_94);
		uint16_t L_96 = ___1_right;
		uint16_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_97);
		return (bool)((((float)((*(float*)UnBox(L_95, il2cpp_defaults.single_class)))) == ((float)((*(float*)UnBox(L_98, il2cpp_defaults.single_class)))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint16_t L_104 = ___0_left;
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		uint16_t L_107 = ___1_right;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		return (bool)((((double)((*(double*)UnBox(L_106, il2cpp_defaults.double_class)))) == ((double)((*(double*)UnBox(L_109, il2cpp_defaults.double_class)))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared (const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_5 = ((uint8_t)1);
		RuntimeObject* L_6 = Box(il2cpp_defaults.byte_class, &L_5);
		return ((*(uint16_t*)UnBox(L_6, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0027:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		int8_t L_12 = ((int8_t)1);
		RuntimeObject* L_13 = Box(il2cpp_defaults.sbyte_class, &L_12);
		return ((*(uint16_t*)UnBox(L_13, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_004e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		uint16_t L_19 = ((uint16_t)1);
		RuntimeObject* L_20 = Box(il2cpp_defaults.uint16_class, &L_19);
		return ((*(uint16_t*)UnBox(L_20, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0075:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_009c;
		}
	}
	{
		int16_t L_26 = ((int16_t)1);
		RuntimeObject* L_27 = Box(il2cpp_defaults.int16_class, &L_26);
		return ((*(uint16_t*)UnBox(L_27, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_33 = ((uint32_t)1);
		RuntimeObject* L_34 = Box(il2cpp_defaults.uint32_class, &L_33);
		return ((*(uint16_t*)UnBox(L_34, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00c3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_40 = 1;
		RuntimeObject* L_41 = Box(il2cpp_defaults.int32_class, &L_40);
		return ((*(uint16_t*)UnBox(L_41, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00ea:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0112;
		}
	}
	{
		uint64_t L_47 = ((uint64_t)((int64_t)1));
		RuntimeObject* L_48 = Box(il2cpp_defaults.uint64_class, &L_47);
		return ((*(uint16_t*)UnBox(L_48, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_013a;
		}
	}
	{
		int64_t L_54 = ((int64_t)1);
		RuntimeObject* L_55 = Box(il2cpp_defaults.int64_class, &L_54);
		return ((*(uint16_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_013a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0165;
		}
	}
	{
		float L_61 = (1.0f);
		RuntimeObject* L_62 = Box(il2cpp_defaults.single_class, &L_61);
		return ((*(uint16_t*)UnBox(L_62, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0194;
		}
	}
	{
		double L_68 = (1.0);
		RuntimeObject* L_69 = Box(il2cpp_defaults.double_class, &L_68);
		return ((*(uint16_t*)UnBox(L_69, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0194:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_70 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared (const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		uint8_t L_5;
		L_5 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.byte_class, &L_6);
		return ((*(uint16_t*)UnBox(L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_002b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int8_t L_13;
		L_13 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		int8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.sbyte_class, &L_14);
		return ((*(uint16_t*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		uint16_t L_21;
		L_21 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		uint16_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.uint16_class, &L_22);
		return ((*(uint16_t*)UnBox(L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00ac;
		}
	}
	{
		int16_t L_29;
		L_29 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		int16_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_defaults.int16_class, &L_30);
		return ((*(uint16_t*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00ac:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t L_37;
		L_37 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		uint32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_defaults.uint32_class, &L_38);
		return ((*(uint16_t*)UnBox(L_39, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00d7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_45;
		L_45 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(il2cpp_defaults.int32_class, &L_46);
		return ((*(uint16_t*)UnBox(L_47, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0102:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_012d;
		}
	}
	{
		uint64_t L_53;
		L_53 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		uint64_t L_54 = L_53;
		RuntimeObject* L_55 = Box(il2cpp_defaults.uint64_class, &L_54);
		return ((*(uint16_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		int64_t L_61;
		L_61 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		int64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_defaults.int64_class, &L_62);
		return ((*(uint16_t*)UnBox(L_63, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0158:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_0183;
		}
	}
	{
		float L_69;
		L_69 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		float L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_defaults.single_class, &L_70);
		return ((*(uint16_t*)UnBox(L_71, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0183:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01ae;
		}
	}
	{
		double L_77;
		L_77 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		double L_78 = L_77;
		RuntimeObject* L_79 = Box(il2cpp_defaults.double_class, &L_78);
		return ((*(uint16_t*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_01ae:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_80 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m6764AA686DE7E188C362C5B3E96AB2F5AB09F3CA_gshared (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero), sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		uint16_t L_1;
		L_1 = Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_2), L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_one = L_2;
		uint16_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_4), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_allOnes = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CelementTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m0739A3F859F311518468915E2929EA67B9744EB3_gshared_inline (Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_arg1, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 Enumerator_get_Current_m4ACDDEB7F5FFC66AFA3A3C05D0B5FB7ABD471FFD_gshared_inline (Enumerator_t802BFC19A53773B2AE8F0F44521FB90B06501577* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 KeyValuePair_2_get_Key_m204134D5294D0652A7BEC9251C7BDD29B507542A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) 
{
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC161A41DE956DE045D4BE7D7D3FAA6B97A774C4A_gshared_inline (KeyValuePair_2_t5EA39A38B18A7FBA9D70D487DBE55714255FAAA6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m484887F5E90ADF2A8AA68A11FEACE98BA806D474_gshared_inline (Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_arg1, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = ___0_left;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		uint16_t L_8 = ___1_right;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)UnBox(L_7, il2cpp_defaults.byte_class)))) == ((int32_t)((*(uint8_t*)UnBox(L_10, il2cpp_defaults.byte_class)))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint16_t L_16 = ___0_left;
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_17);
		uint16_t L_19 = ___1_right;
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_20);
		return (bool)((((int32_t)((*(int8_t*)UnBox(L_18, il2cpp_defaults.sbyte_class)))) == ((int32_t)((*(int8_t*)UnBox(L_21, il2cpp_defaults.sbyte_class)))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_27 = ___0_left;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		uint16_t L_30 = ___1_right;
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)UnBox(L_29, il2cpp_defaults.uint16_class)))) == ((int32_t)((*(uint16_t*)UnBox(L_32, il2cpp_defaults.uint16_class)))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint16_t L_38 = ___0_left;
		uint16_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_39);
		uint16_t L_41 = ___1_right;
		uint16_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_42);
		return (bool)((((int32_t)((*(int16_t*)UnBox(L_40, il2cpp_defaults.int16_class)))) == ((int32_t)((*(int16_t*)UnBox(L_43, il2cpp_defaults.int16_class)))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint16_t L_49 = ___0_left;
		uint16_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_50);
		uint16_t L_52 = ___1_right;
		uint16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)UnBox(L_51, il2cpp_defaults.uint32_class)))) == ((int32_t)((*(uint32_t*)UnBox(L_54, il2cpp_defaults.uint32_class)))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint16_t L_60 = ___0_left;
		uint16_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_61);
		uint16_t L_63 = ___1_right;
		uint16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_64);
		return (bool)((((int32_t)((*(int32_t*)UnBox(L_62, il2cpp_defaults.int32_class)))) == ((int32_t)((*(int32_t*)UnBox(L_65, il2cpp_defaults.int32_class)))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_71 = ___0_left;
		uint16_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_72);
		uint16_t L_74 = ___1_right;
		uint16_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)UnBox(L_73, il2cpp_defaults.uint64_class)))) == ((int64_t)((*(uint64_t*)UnBox(L_76, il2cpp_defaults.uint64_class)))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint16_t L_82 = ___0_left;
		uint16_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_83);
		uint16_t L_85 = ___1_right;
		uint16_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_86);
		return (bool)((((int64_t)((*(int64_t*)UnBox(L_84, il2cpp_defaults.int64_class)))) == ((int64_t)((*(int64_t*)UnBox(L_87, il2cpp_defaults.int64_class)))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint16_t L_93 = ___0_left;
		uint16_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_94);
		uint16_t L_96 = ___1_right;
		uint16_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_97);
		return (bool)((((float)((*(float*)UnBox(L_95, il2cpp_defaults.single_class)))) == ((float)((*(float*)UnBox(L_98, il2cpp_defaults.single_class)))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint16_t L_104 = ___0_left;
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		uint16_t L_107 = ___1_right;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		return (bool)((((double)((*(double*)UnBox(L_106, il2cpp_defaults.double_class)))) == ((double)((*(double*)UnBox(L_109, il2cpp_defaults.double_class)))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared_inline (const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_5 = ((uint8_t)1);
		RuntimeObject* L_6 = Box(il2cpp_defaults.byte_class, &L_5);
		return ((*(uint16_t*)UnBox(L_6, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0027:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		int8_t L_12 = ((int8_t)1);
		RuntimeObject* L_13 = Box(il2cpp_defaults.sbyte_class, &L_12);
		return ((*(uint16_t*)UnBox(L_13, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_004e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		uint16_t L_19 = ((uint16_t)1);
		RuntimeObject* L_20 = Box(il2cpp_defaults.uint16_class, &L_19);
		return ((*(uint16_t*)UnBox(L_20, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0075:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_009c;
		}
	}
	{
		int16_t L_26 = ((int16_t)1);
		RuntimeObject* L_27 = Box(il2cpp_defaults.int16_class, &L_26);
		return ((*(uint16_t*)UnBox(L_27, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_33 = ((uint32_t)1);
		RuntimeObject* L_34 = Box(il2cpp_defaults.uint32_class, &L_33);
		return ((*(uint16_t*)UnBox(L_34, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00c3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_40 = 1;
		RuntimeObject* L_41 = Box(il2cpp_defaults.int32_class, &L_40);
		return ((*(uint16_t*)UnBox(L_41, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00ea:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0112;
		}
	}
	{
		uint64_t L_47 = ((uint64_t)((int64_t)1));
		RuntimeObject* L_48 = Box(il2cpp_defaults.uint64_class, &L_47);
		return ((*(uint16_t*)UnBox(L_48, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_013a;
		}
	}
	{
		int64_t L_54 = ((int64_t)1);
		RuntimeObject* L_55 = Box(il2cpp_defaults.int64_class, &L_54);
		return ((*(uint16_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_013a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0165;
		}
	}
	{
		float L_61 = (1.0f);
		RuntimeObject* L_62 = Box(il2cpp_defaults.single_class, &L_61);
		return ((*(uint16_t*)UnBox(L_62, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0194;
		}
	}
	{
		double L_68 = (1.0);
		RuntimeObject* L_69 = Box(il2cpp_defaults.double_class, &L_68);
		return ((*(uint16_t*)UnBox(L_69, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0194:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_70 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared_inline (const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		uint8_t L_5;
		L_5 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.byte_class, &L_6);
		return ((*(uint16_t*)UnBox(L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_002b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int8_t L_13;
		L_13 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		int8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.sbyte_class, &L_14);
		return ((*(uint16_t*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		uint16_t L_21;
		L_21 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		uint16_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.uint16_class, &L_22);
		return ((*(uint16_t*)UnBox(L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00ac;
		}
	}
	{
		int16_t L_29;
		L_29 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		int16_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_defaults.int16_class, &L_30);
		return ((*(uint16_t*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00ac:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t L_37;
		L_37 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		uint32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_defaults.uint32_class, &L_38);
		return ((*(uint16_t*)UnBox(L_39, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_00d7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_45;
		L_45 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(il2cpp_defaults.int32_class, &L_46);
		return ((*(uint16_t*)UnBox(L_47, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0102:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_012d;
		}
	}
	{
		uint64_t L_53;
		L_53 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		uint64_t L_54 = L_53;
		RuntimeObject* L_55 = Box(il2cpp_defaults.uint64_class, &L_54);
		return ((*(uint16_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		int64_t L_61;
		L_61 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		int64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_defaults.int64_class, &L_62);
		return ((*(uint16_t*)UnBox(L_63, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0158:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_0183;
		}
	}
	{
		float L_69;
		L_69 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		float L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_defaults.single_class, &L_70);
		return ((*(uint16_t*)UnBox(L_71, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_0183:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01ae;
		}
	}
	{
		double L_77;
		L_77 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		double L_78 = L_77;
		RuntimeObject* L_79 = Box(il2cpp_defaults.double_class, &L_78);
		return ((*(uint16_t*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))));
	}

IL_01ae:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_80 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
