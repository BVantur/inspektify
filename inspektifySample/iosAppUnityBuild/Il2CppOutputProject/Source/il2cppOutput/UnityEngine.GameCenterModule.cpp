#include "pch-cpp.hpp"





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

struct Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5;
struct Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49;
struct Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B;
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB;
struct Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D;
struct List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612;
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94;
struct GcLeaderboardU5BU5D_t3680FC46C1DC6D830D99BD08FC946D62140B0B31;
struct GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F;
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3;
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A;
struct Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B;
struct AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F;
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D;
struct IAchievement_tB5F481CB68CBDE785E796E6FE0457D9EA7A5C986;
struct IAchievementDescription_t3B0831EC194F0E304AA0073BDAA7B3E90BE13B3F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93;
struct ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6;
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
struct IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71;
struct LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1;

IL2CPP_EXTERN_C RuntimeClass* AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0;
IL2CPP_EXTERN_C String_t* _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral410946CD131353B68F194902EF06C27382525682;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152;
IL2CPP_EXTERN_C String_t* _stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8;
IL2CPP_EXTERN_C String_t* _stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5;
IL2CPP_EXTERN_C String_t* _stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC;
IL2CPP_EXTERN_C String_t* _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241;
IL2CPP_EXTERN_C String_t* _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFFE2B018FE9C481B67387513F728E577370086;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278;
IL2CPP_EXTERN_C String_t* _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mE2F03F073E790DEB25AEB86A40D6542F05607E5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612;
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5;
struct GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94;
struct GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F;
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3;
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t48670A4A557D138A8C338D0B799AEE0AB575434C 
{
};
struct List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30  : public RuntimeObject
{
	GcLeaderboardU5BU5D_t3680FC46C1DC6D830D99BD08FC946D62140B0B31* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9  : public RuntimeObject
{
	String_t* ___m_Title;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image;
	String_t* ___m_AchievedDescription;
	String_t* ___m_UnachievedDescription;
	bool ___m_Hidden;
	int32_t ___m_Points;
	String_t* ___U3CidU3Ek__BackingField;
};
struct GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1  : public RuntimeObject
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback;
};
struct Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 
{
	List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* ____list;
	int32_t ____index;
	int32_t ____version;
	GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
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
struct GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 
{
	String_t* ___m_Identifier;
	double ___m_PercentCompleted;
	int32_t ___m_Completed;
	int32_t ___m_Hidden;
	int32_t ___m_LastReportedDate;
};
struct GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke
{
	char* ___m_Identifier;
	double ___m_PercentCompleted;
	int32_t ___m_Completed;
	int32_t ___m_Hidden;
	int32_t ___m_LastReportedDate;
};
struct GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com
{
	Il2CppChar* ___m_Identifier;
	double ___m_PercentCompleted;
	int32_t ___m_Completed;
	int32_t ___m_Hidden;
	int32_t ___m_LastReportedDate;
};
struct GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 
{
	String_t* ___m_Identifier;
	String_t* ___m_Title;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image;
	String_t* ___m_AchievedDescription;
	String_t* ___m_UnachievedDescription;
	int32_t ___m_Hidden;
	int32_t ___m_Points;
};
struct GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke
{
	char* ___m_Identifier;
	char* ___m_Title;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image;
	char* ___m_AchievedDescription;
	char* ___m_UnachievedDescription;
	int32_t ___m_Hidden;
	int32_t ___m_Points;
};
struct GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com
{
	Il2CppChar* ___m_Identifier;
	Il2CppChar* ___m_Title;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image;
	Il2CppChar* ___m_AchievedDescription;
	Il2CppChar* ___m_UnachievedDescription;
	int32_t ___m_Hidden;
	int32_t ___m_Points;
};
struct GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F 
{
	String_t* ___m_Category;
	uint32_t ___m_ValueLow;
	int32_t ___m_ValueHigh;
	int32_t ___m_Date;
	String_t* ___m_FormattedValue;
	String_t* ___m_PlayerID;
	int32_t ___m_Rank;
};
struct GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke
{
	char* ___m_Category;
	uint32_t ___m_ValueLow;
	int32_t ___m_ValueHigh;
	int32_t ___m_Date;
	char* ___m_FormattedValue;
	char* ___m_PlayerID;
	int32_t ___m_Rank;
};
struct GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com
{
	Il2CppChar* ___m_Category;
	uint32_t ___m_ValueLow;
	int32_t ___m_ValueHigh;
	int32_t ___m_Date;
	Il2CppChar* ___m_FormattedValue;
	Il2CppChar* ___m_PlayerID;
	int32_t ___m_Rank;
};
struct GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 
{
	String_t* ___userName;
	String_t* ___teamID;
	String_t* ___gameID;
	int32_t ___isFriend;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image;
};
struct GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke
{
	char* ___userName;
	char* ___teamID;
	char* ___gameID;
	int32_t ___isFriend;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image;
};
struct GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com
{
	Il2CppChar* ___userName;
	Il2CppChar* ___teamID;
	Il2CppChar* ___gameID;
	int32_t ___isFriend;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image;
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
struct ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E 
{
	void* ___begin;
	int32_t ___length;
};
struct Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 
{
	int32_t ___from;
	int32_t ___count;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B  : public RuntimeObject
{
	bool ___m_Completed;
	bool ___m_Hidden;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_LastReportedDate;
	String_t* ___U3CidU3Ek__BackingField;
	double ___U3CpercentCompletedU3Ek__BackingField;
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
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D  : public RuntimeObject
{
	intptr_t ___m_InternalLeaderboard;
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___m_GenericLeaderboard;
};
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard;
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___m_GenericLeaderboard;
};
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com
{
	intptr_t ___m_InternalLeaderboard;
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___m_GenericLeaderboard;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53  : public RuntimeObject
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_Date;
	String_t* ___m_FormattedValue;
	String_t* ___m_UserID;
	int32_t ___m_Rank;
	String_t* ___U3CleaderboardIDU3Ek__BackingField;
	int64_t ___U3CvalueU3Ek__BackingField;
};
struct TimeScope_t20CB388177E885D6B11816946D623907E276F08E 
{
	int32_t ___value__;
};
struct UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0 
{
	int32_t ___value__;
};
struct UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C 
{
	int32_t ___value__;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71  : public RuntimeObject
{
	bool ___m_Loading;
	RuntimeObject* ___m_LocalUserScore;
	uint32_t ___m_MaxRange;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___m_Scores;
	String_t* ___m_Title;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_UserIDs;
	String_t* ___U3CidU3Ek__BackingField;
	int32_t ___U3CuserScopeU3Ek__BackingField;
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___U3CrangeU3Ek__BackingField;
	int32_t ___U3CtimeScopeU3Ek__BackingField;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29  : public RuntimeObject
{
	String_t* ___m_UserName;
	String_t* ___m_ID;
	String_t* ___m_legacyID;
	bool ___m_IsFriend;
	int32_t ___m_State;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image;
	String_t* ___m_gameID;
};
struct Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5  : public MulticastDelegate_t
{
};
struct Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49  : public MulticastDelegate_t
{
};
struct Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B  : public MulticastDelegate_t
{
};
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78  : public MulticastDelegate_t
{
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB  : public MulticastDelegate_t
{
};
struct Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD  : public UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29
{
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___m_Friends;
	bool ___m_Authenticated;
	bool ___m_Underage;
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_StaticFields
{
	GcLeaderboardU5BU5D_t3680FC46C1DC6D830D99BD08FC946D62140B0B31* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields
{
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* ___s_AuthenticateCallback;
	AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* ___s_adCache;
	UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* ___s_friends;
	UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* ___s_users;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___s_ResetAchievements;
	LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* ___m_LocalUser;
	List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* ___m_GcBoards;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A  : public RuntimeArray
{
	ALIGN_FIELD (8) UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* m_Items[1];

	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2  : public RuntimeArray
{
	ALIGN_FIELD (8) Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* m_Items[1];

	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5  : public RuntimeArray
{
	ALIGN_FIELD (8) AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* m_Items[1];

	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
struct GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94  : public RuntimeArray
{
	ALIGN_FIELD (8) GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 m_Items[1];

	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Identifier), (void*)NULL);
	}
	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Identifier), (void*)NULL);
	}
};
struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612  : public RuntimeArray
{
	ALIGN_FIELD (8) Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* m_Items[1];

	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
struct GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F  : public RuntimeArray
{
	ALIGN_FIELD (8) GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F m_Items[1];

	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FormattedValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PlayerID), (void*)NULL);
		#endif
	}
	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FormattedValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PlayerID), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m5387D08742D6C89CAB31D981C0F63C08D70AB3AD_gshared_inline (Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB* __this, bool ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m910EDF0572CB2F28E45048A2EB215E25296E58BD_gshared (Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B (Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6* __this, int32_t ___0_fromValue, int32_t ___1_valueCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m18A74E7A97AEBD079DA90A210C02C6CE47B44FFC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_id, double ___1_percent, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, String_t* ___2_userID, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_date, String_t* ___4_formattedValue, int32_t ___5_rank, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, String_t* ___1_teamId, String_t* ___2_gameId, bool ___3_friend, int32_t ___4_state, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___5_image, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535* __this, UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, int32_t ___1_number, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_id, String_t* ___1_title, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_image, String_t* ___3_achievedDescription, String_t* ___4_unachievedDescription, bool ___5_hidden, int32_t ___6_points, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3 (GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_id, double ___1_percentCompleted, bool ___2_completed, bool ___3_hidden, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_lastReportedDate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4 (GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E (GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_SetImage_m16FC76EE05781DB25586A64D3B0D6CE3E6213CF5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_inline (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* __this, IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49*, IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_PopulateLocalUser_m530576FBF88694356BFB3225D489B31DE7AC2239 (const RuntimeMethod* method) ;
inline void Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E_inline (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* __this, bool ___0_arg1, String_t* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D*, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m5387D08742D6C89CAB31D981C0F63C08D70AB3AD_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeClearArray_m582138D71F5DF50C5399B2E6F8B3F35B792FBFC9 (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeSetUserImage_m5C9205AC773B23BFEA86D8F833811A863620B4A5 (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_texture, int32_t ___2_number, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___0_friends, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
inline void Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_inline (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* __this, IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5*, IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline void Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_inline (Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B*, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadFriends_m4FE323D2E3AD644E3984E2EE623388D96EEDDA0A (RuntimeObject* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m88E5FDE6B93424368864BF746056A7FC84B7D830 (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* __this, const RuntimeMethod* method) ;
inline void Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191 (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m910EDF0572CB2F28E45048A2EB215E25296E58BD_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Authenticate_m2C7CD52B1DF5A726431D11F5FDC92A78620E79A1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserName_mFF1EA7622768C0AB95C831D920078B0EB305151D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserID_mB9D9BBCC77F8F91EDBCAAED850FF9188F5C08273 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserGameID_mDD756F1327B65CCFDDDA6270B9039D7C853B31EA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserGameID_m9A90E716F9DB8138181F748243D7BB12BCCAA2D5 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_LegacyUserID_mCA68D0FD9441951433DB2306179CD5181CDA61DD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetLegacyUserID_m3A0B0F4DD6782D40B5CF6D575B670EC96396F030 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetIsUnderage_m079167A5B106AFA57D0CAB20D00E16D1CD5DEE2B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GameCenterPlatform_GetUserImage_m0CBDA5D68C7A7A4BEC13EBE77479FC9DA52166AB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievementDescriptions_mB95C4646875A32D657F0CDED7BC27CEE699E773E (RuntimeObject* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_m4A9784CD054C3339C8DBC4F5E99D817C69A33ABC (String_t* ___0_id, double ___1_progress, RuntimeObject* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievements_m2E861B69D07FFF5AF3812FC5500A111C71818963 (RuntimeObject* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_m61071235860F32C299F6475A70BBFA0D6542A490 (int64_t ___0_score, String_t* ___1_category, RuntimeObject* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_mC0B34238A956FC1875EE034365A82C7DA2CA3C8D (String_t* ___0_category, RuntimeObject* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard__ctor_mE6ABD1A5D616A3371023FB53BAAA34C638081632 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___0_board, const RuntimeMethod* method) ;
inline void List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_inline (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* __this, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30*, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Leaderboard_GetUserFilter_m859FFF97FCAF7D42B215AA0166FCB6B8B0025FF3 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Internal_LoadScores_m94273C598B909F6E518E4C6A0A1EEFA83BD2ECAD (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, String_t* ___0_category, int32_t ___1_from, int32_t ___2_count, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_userIDs, int32_t ___4_playerScope, int32_t ___5_timeScope, RuntimeObject* ___6_callback, const RuntimeMethod* method) ;
inline Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 (*) (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3 (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_inline (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77* __this, const RuntimeMethod* method)
{
	return ((  GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* (*) (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Contains_m08D3F5665F1A25DBDC41B9D98461D5DBB98DCD48 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___0_board, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Loading_m089B19A42B7EA2AB31481F2CA81E47279ABF0E75 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_get_localUser_m3EEB7917C0629DBADEE2DCF8E979BBA09A83AF92 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowAchievementsUI_m1AC768F918D4A93F7350EBF1F89FC81C4DDC7369 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowLeaderboardUI_m1D84677B42CDB5A14134B65CA51727B38BAB5D98 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LoadUsers_mE09B0D2E48ABFBA3C24FC8047CBD8C3CC189CA6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_userIds, RuntimeObject* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m9EA819E3F3EA4B91F8998D54EF2F5B2B1E29976F (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E ___0_managedSpan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_UserName_Injected_m6BA86D151E826231D06CC916CC2AFC799F49B97A (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_UserID_Injected_mD2DB0354F019A908B2E3CDF1D3E84A714C385950 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_UserGameID_Injected_mA3DBF77302FE1E5C4798FE498D6FF89BFB80CF43 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LegacyUserID_Injected_mD1A8D028B8EB4A8F1941FF6313FC59907370B3EB (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GameCenterPlatform_GetUserImage_Injected_m4B89DC31069FDD09C80A2BEF559AB41764AE452B (const RuntimeMethod* method) ;
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Unmarshal_UnmarshalUnityObject_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mE2F03F073E790DEB25AEB86A40D6542F05607E5A_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline (String_t* ___0_s, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_managedSpanWrapper, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) ;
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_Injected_m0C69E37785F832B3200AFA94D2270FDBD4393CBB (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_id, double ___1_progress, RuntimeObject* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_Injected_mA81C06F47E518309B7D2932D470D5ECDD827CB21 (int64_t ___0_score, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_category, RuntimeObject* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_Injected_m770388996602A2797812633DAE0DA0208DE4F2D0 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_category, RuntimeObject* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_m85F77F26AAA1450BCEC43692DF91E5E64D31A4C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementBanner_m3BF0634CFE7F665A87284BBE9EB81DC579D82EE1 (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_m86884D45010C205C96BADD5E60569FC7B1F7B0CF (String_t* ___0_leaderboardID, int32_t ___1_timeScope, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_Injected_mE2EDF552B45C0DC3CF7F922FBB8AE298B6A56584 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_leaderboardID, int32_t ___1_timeScope, const RuntimeMethod* method) ;
inline void List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Dispose_m115757D5DFB8FFE4CD11F2D20244965F992A950C (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___0_scores, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetLocalUserScore_m424D44D0AFCBA825FA9604E8BBB538854E1E0C4E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, RuntimeObject* ___0_score, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetMaxRange_m1C820B01C8989228954B466EDC4C1B8DC95EDE5B (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, uint32_t ___0_maxRange, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_title, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_m972EA4A7913D14B3C0D9C57F89B1330A9E21EE9E (RuntimeObject* ___0_self, String_t* ___1_category, int32_t ___2_from, int32_t ___3_count, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_userIDs, int32_t ___5_playerScope, int32_t ___6_timeScope, RuntimeObject* ___7_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_Injected_mFD268DF2CE104588AAC7717A1B37D7C49A83110E (RuntimeObject* ___0_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_category, int32_t ___2_from, int32_t ___3_count, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_userIDs, int32_t ___5_playerScope, int32_t ___6_timeScope, RuntimeObject* ___7_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_GcLeaderboard_Loading_m15F693AAA3921AC60FA7F5B8EB0EBD7C372BFF73 (intptr_t ___0_leaderboard, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_GcLeaderboard_Dispose_m3C583A1922AE26F38C5228FF13AC66824A67E5D0 (intptr_t ___0_leaderboard, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B (Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6* __this, int32_t ___0_fromValue, int32_t ___1_valueCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_fromValue;
		__this->___from = L_0;
		int32_t L_1 = ___1_valueCount;
		__this->___count = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_fromValue, int32_t ___1_valueCount, const RuntimeMethod* method)
{
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6*>(__this + _offset);
	Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B(_thisAdjusted, ___0_fromValue, ___1_valueCount, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_0 = NULL;
	{
		UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680(__this, NULL);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_0 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_0;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_1 = V_0;
		__this->___m_Friends = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends), (void*)L_1);
		__this->___m_Authenticated = (bool)0;
		__this->___m_Underage = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___0_friends, const RuntimeMethod* method) 
{
	{
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = ___0_friends;
		__this->___m_Friends = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Authenticated = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Underage = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalUser_get_authenticated_m3121DA81FF48CFFB4024ADECEE98F8E686497C54 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Authenticated;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_UserName = _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName), (void*)_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		__this->___m_ID = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___m_legacyID = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_legacyID), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___m_IsFriend = (bool)0;
		__this->___m_State = 3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, ((int32_t)32), ((int32_t)32), NULL);
		__this->___m_Image = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, String_t* ___1_teamId, String_t* ___2_gameId, bool ___3_friend, int32_t ___4_state, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___5_image, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_name;
		__this->___m_UserName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName), (void*)L_0);
		String_t* L_1 = ___1_teamId;
		__this->___m_ID = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID), (void*)L_1);
		String_t* L_2 = ___2_gameId;
		__this->___m_gameID = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_gameID), (void*)L_2);
		bool L_3 = ___3_friend;
		__this->___m_IsFriend = L_3;
		int32_t L_4 = ___4_state;
		__this->___m_State = L_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___5_image;
		__this->___m_Image = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_mEB091241EC114F4F42D2CE15F127B83556EBE45D (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336(__this, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30(__this, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		bool L_8;
		L_8 = UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC(__this, NULL);
		V_0 = L_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_9;
		L_9 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		int32_t L_12;
		L_12 = UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A(__this, NULL);
		V_1 = L_12;
		Il2CppFakeBox<int32_t> L_13(UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		V_2 = L_15;
		goto IL_0061;
	}

IL_0061:
	{
		String_t* L_16 = V_2;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		__this->___m_UserName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_id;
		__this->___m_ID = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetLegacyUserID_m3A0B0F4DD6782D40B5CF6D575B670EC96396F030 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_id;
		__this->___m_legacyID = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_legacyID), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserGameID_m9A90E716F9DB8138181F748243D7BB12BCCAA2D5 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_id;
		__this->___m_gameID = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_gameID), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_image;
		__this->___m_Image = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_UserName;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_ID;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_IsFriend;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_State;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_id, double ___1_percentCompleted, bool ___2_completed, bool ___3_hidden, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_lastReportedDate, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline(__this, L_0, NULL);
		double L_1 = ___1_percentCompleted;
		Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline(__this, L_1, NULL);
		bool L_2 = ___2_completed;
		__this->___m_Completed = L_2;
		bool L_3 = ___3_hidden;
		__this->___m_Hidden = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___4_lastReportedDate;
		__this->___m_LastReportedDate = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m18A74E7A97AEBD079DA90A210C02C6CE47B44FFC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_id, double ___1_percent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline(__this, L_0, NULL);
		double L_1 = ___1_percent;
		Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline(__this, L_1, NULL);
		__this->___m_Hidden = (bool)0;
		__this->___m_Completed = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue;
		__this->___m_LastReportedDate = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m9EA819E3F3EA4B91F8998D54EF2F5B2B1E29976F (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		s_Il2CppMethodInitialized = true;
	}
	{
		Achievement__ctor_m18A74E7A97AEBD079DA90A210C02C6CE47B44FFC(__this, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, (0.0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_m15B103F95C549FCED0D581FBACD73E47310C9EAC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline(__this, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		double L_5;
		L_5 = Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline(__this, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		bool L_9;
		L_9 = Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF(__this, NULL);
		V_1 = L_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		bool L_13;
		L_13 = Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E(__this, NULL);
		V_1 = L_13;
		String_t* L_14;
		L_14 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
		L_17 = Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091(__this, NULL);
		V_2 = L_17;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_2), NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		V_3 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_20 = V_3;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CpercentCompletedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CpercentCompletedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Completed;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Hidden;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___m_LastReportedDate;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_id, String_t* ___1_title, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_image, String_t* ___3_achievedDescription, String_t* ___4_unachievedDescription, bool ___5_hidden, int32_t ___6_points, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_title;
		__this->___m_Title = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title), (void*)L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___2_image;
		__this->___m_Image = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image), (void*)L_2);
		String_t* L_3 = ___3_achievedDescription;
		__this->___m_AchievedDescription = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AchievedDescription), (void*)L_3);
		String_t* L_4 = ___4_unachievedDescription;
		__this->___m_UnachievedDescription = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnachievedDescription), (void*)L_4);
		bool L_5 = ___5_hidden;
		__this->___m_Hidden = L_5;
		int32_t L_6 = ___6_points;
		__this->___m_Points = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_ToString_m25F3CC08322EAB311EDBC23D85F067387706DE02 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline(__this, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67(__this, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8;
		L_8 = AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5(__this, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5(__this, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		int32_t L_14;
		L_14 = AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3(__this, NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		bool L_18;
		L_18 = AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E(__this, NULL);
		V_1 = L_18;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_19;
		L_19 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		V_2 = L_20;
		goto IL_0080;
	}

IL_0080:
	{
		String_t* L_21 = V_2;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_SetImage_m16FC76EE05781DB25586A64D3B0D6CE3E6213CF5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_image;
		__this->___m_Image = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Title;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_AchievedDescription;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_UnachievedDescription;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Hidden;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Points;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_leaderboardID;
		int64_t L_1 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(__this, L_0, L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (-1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, String_t* ___2_userID, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_date, String_t* ___4_formattedValue, int32_t ___5_rank, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_leaderboardID;
		Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline(__this, L_0, NULL);
		int64_t L_1 = ___1_value;
		Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_userID;
		__this->___m_UserID = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserID), (void*)L_2);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___3_date;
		__this->___m_Date = L_3;
		String_t* L_4 = ___4_formattedValue;
		__this->___m_FormattedValue = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FormattedValue), (void*)L_4);
		int32_t L_5 = ___5_rank;
		__this->___m_Rank = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_ToString_m497A4E6B7AA8D2B8433137127949781736A16037 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410946CD131353B68F194902EF06C27382525682);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral410946CD131353B68F194902EF06C27382525682);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (int32_t*)(&__this->___m_Rank);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int64_t L_7;
		L_7 = Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline(__this, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = __this->___m_UserID;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_17 = (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(&__this->___m_Date);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_17, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		V_1 = L_19;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CleaderboardIDU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CleaderboardIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CleaderboardIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CvalueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CvalueU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline(__this, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, NULL);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B((&L_0), 1, ((int32_t)10), NULL);
		Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline(__this, L_0, NULL);
		Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline(__this, 0, NULL);
		Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline(__this, 2, NULL);
		__this->___m_Loading = (bool)0;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_1 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751(L_1, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, ((int64_t)0), NULL);
		__this->___m_LocalUserScore = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalUserScore), (void*)L_1);
		__this->___m_MaxRange = 0;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_2 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_2;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_3 = V_0;
		__this->___m_Scores = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scores), (void*)L_3);
		__this->___m_Title = _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title), (void*)_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_UserIDs = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserIDs), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_ToString_m13D23F36219548442D56D029B561F628305F3500 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		s_Il2CppMethodInitialized = true;
	}
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3;
		L_3 = Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline(__this, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = __this->___m_Title;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		bool* L_9 = (bool*)(&__this->___m_Loading);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_9, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_13;
		L_13 = Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline(__this, NULL);
		V_0 = L_13;
		int32_t* L_14 = (int32_t*)(&(&V_0)->___from);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_18;
		L_18 = Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline(__this, NULL);
		V_0 = L_18;
		int32_t* L_19 = (int32_t*)(&(&V_0)->___count);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		uint32_t* L_23 = (uint32_t*)(&__this->___m_MaxRange);
		String_t* L_24;
		L_24 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_23, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_27 = __this->___m_Scores;
		NullCheck(L_27);
		V_1 = ((int32_t)(((RuntimeArray*)L_27)->max_length));
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		int32_t L_31;
		L_31 = Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline(__this, NULL);
		V_2 = L_31;
		Il2CppFakeBox<int32_t> L_32(UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_32), NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_30;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t L_36;
		L_36 = Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline(__this, NULL);
		V_3 = L_36;
		Il2CppFakeBox<int32_t> L_37(TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_38;
		L_38 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_37), NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_35;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = __this->___m_UserIDs;
		NullCheck(L_41);
		V_1 = ((int32_t)(((RuntimeArray*)L_41)->max_length));
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_42);
		String_t* L_43;
		L_43 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_40, NULL);
		V_4 = L_43;
		goto IL_011a;
	}

IL_011a:
	{
		String_t* L_44 = V_4;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetLocalUserScore_m424D44D0AFCBA825FA9604E8BBB538854E1E0C4E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, RuntimeObject* ___0_score, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_score;
		__this->___m_LocalUserScore = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalUserScore), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetMaxRange_m1C820B01C8989228954B466EDC4C1B8DC95EDE5B (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, uint32_t ___0_maxRange, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_maxRange;
		__this->___m_MaxRange = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___0_scores, const RuntimeMethod* method) 
{
	{
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_0 = ___0_scores;
		__this->___m_Scores = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scores), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_title;
		__this->___m_Title = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Leaderboard_GetUserFilter_m859FFF97FCAF7D42B215AA0166FCB6B8B0025FF3 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___m_UserIDs;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CuserScopeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CuserScopeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = __this->___U3CrangeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___0_value, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = ___0_value;
		__this->___U3CrangeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtimeScopeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CtimeScopeU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_pinvoke(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___imageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___imageException, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_pinvoke_back(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke& marshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___imageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___imageException, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_pinvoke_cleanup(GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_com(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___imageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___imageException, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_com_back(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com& marshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___imageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535____image_FieldInfo_var, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___imageException, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_com_cleanup(GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	{
		String_t* L_0 = __this->___userName;
		String_t* L_1 = __this->___teamID;
		String_t* L_2 = __this->___gameID;
		int32_t L_3 = __this->___isFriend;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_001f;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___image;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_5 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1(L_5, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, 3, L_4, NULL);
		V_0 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535*>(__this + _offset);
	UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* _returnValue;
	_returnValue = GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535* __this, UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_0 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___1_number;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = ___1_number;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_5 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_6 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_5);
		int32_t L_7 = ___1_number;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_8;
		L_8 = GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0(__this, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)L_8);
		goto IL_002d;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8, NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB_AdjustorThunk (RuntimeObject* __this, UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, int32_t ___1_number, const RuntimeMethod* method)
{
	GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535*>(__this + _offset);
	GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB(_thisAdjusted, ___0_array, ___1_number, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_pinvoke(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_ImageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ImageException, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_pinvoke_back(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke& marshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_ImageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ImageException, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_pinvoke_cleanup(GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_com(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_ImageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ImageException, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_com_back(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com& marshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_ImageException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086____m_Image_FieldInfo_var, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ImageException, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_com_cleanup(GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3 (GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	{
		String_t* L_0 = __this->___m_Identifier;
		String_t* L_1 = __this->___m_Title;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Image;
		String_t* L_3 = __this->___m_AchievedDescription;
		String_t* L_4 = __this->___m_UnachievedDescription;
		int32_t L_5 = __this->___m_Hidden;
		if (!L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002a;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002b:
	{
		int32_t L_6 = __this->___m_Points;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_7 = (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9*)il2cpp_codegen_object_new(AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, L_6, NULL);
		V_0 = L_7;
		goto IL_0039;
	}

IL_0039:
	{
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086*>(__this + _offset);
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* _returnValue;
	_returnValue = GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_pinvoke(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Identifier = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier);
	marshaled.___m_PercentCompleted = unmarshaled.___m_PercentCompleted;
	marshaled.___m_Completed = unmarshaled.___m_Completed;
	marshaled.___m_Hidden = unmarshaled.___m_Hidden;
	marshaled.___m_LastReportedDate = unmarshaled.___m_LastReportedDate;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_pinvoke_back(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke& marshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled)
{
	unmarshaled.___m_Identifier = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Identifier), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier));
	double unmarshaledm_PercentCompleted_temp_1 = 0.0;
	unmarshaledm_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted;
	unmarshaled.___m_PercentCompleted = unmarshaledm_PercentCompleted_temp_1;
	int32_t unmarshaledm_Completed_temp_2 = 0;
	unmarshaledm_Completed_temp_2 = marshaled.___m_Completed;
	unmarshaled.___m_Completed = unmarshaledm_Completed_temp_2;
	int32_t unmarshaledm_Hidden_temp_3 = 0;
	unmarshaledm_Hidden_temp_3 = marshaled.___m_Hidden;
	unmarshaled.___m_Hidden = unmarshaledm_Hidden_temp_3;
	int32_t unmarshaledm_LastReportedDate_temp_4 = 0;
	unmarshaledm_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate;
	unmarshaled.___m_LastReportedDate = unmarshaledm_LastReportedDate_temp_4;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_pinvoke_cleanup(GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier);
	marshaled.___m_Identifier = NULL;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_com(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com& marshaled)
{
	marshaled.___m_Identifier = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Identifier);
	marshaled.___m_PercentCompleted = unmarshaled.___m_PercentCompleted;
	marshaled.___m_Completed = unmarshaled.___m_Completed;
	marshaled.___m_Hidden = unmarshaled.___m_Hidden;
	marshaled.___m_LastReportedDate = unmarshaled.___m_LastReportedDate;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_com_back(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com& marshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled)
{
	unmarshaled.___m_Identifier = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Identifier), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier));
	double unmarshaledm_PercentCompleted_temp_1 = 0.0;
	unmarshaledm_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted;
	unmarshaled.___m_PercentCompleted = unmarshaledm_PercentCompleted_temp_1;
	int32_t unmarshaledm_Completed_temp_2 = 0;
	unmarshaledm_Completed_temp_2 = marshaled.___m_Completed;
	unmarshaled.___m_Completed = unmarshaledm_Completed_temp_2;
	int32_t unmarshaledm_Hidden_temp_3 = 0;
	unmarshaledm_Hidden_temp_3 = marshaled.___m_Hidden;
	unmarshaled.___m_Hidden = unmarshaledm_Hidden_temp_3;
	int32_t unmarshaledm_LastReportedDate_temp_4 = 0;
	unmarshaledm_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate;
	unmarshaled.___m_LastReportedDate = unmarshaledm_LastReportedDate_temp_4;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_com_cleanup(GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Identifier);
	marshaled.___m_Identifier = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4 (GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* V_1 = NULL;
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = NULL;
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = NULL;
	{
		String_t* L_0 = __this->___m_Identifier;
		double L_1 = __this->___m_PercentCompleted;
		int32_t L_2 = __this->___m_Completed;
		if (!L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0018;
		}
		G_B1_0 = L_1;
		G_B1_1 = L_0;
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		int32_t L_3 = __this->___m_Hidden;
		if (!L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0024;
		}
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0025:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&L_4), ((int32_t)1970), 1, 1, 0, 0, 0, 0, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_LastReportedDate;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)L_5), NULL);
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_7 = (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B*)il2cpp_codegen_object_new(Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85(L_7, G_B6_3, G_B6_2, (bool)G_B6_1, (bool)G_B6_0, L_6, NULL);
		V_1 = L_7;
		goto IL_004c;
	}

IL_004c:
	{
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4*>(__this + _offset);
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* _returnValue;
	_returnValue = GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_pinvoke(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Category = il2cpp_codegen_marshal_string(unmarshaled.___m_Category);
	marshaled.___m_ValueLow = unmarshaled.___m_ValueLow;
	marshaled.___m_ValueHigh = unmarshaled.___m_ValueHigh;
	marshaled.___m_Date = unmarshaled.___m_Date;
	marshaled.___m_FormattedValue = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue);
	marshaled.___m_PlayerID = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID);
	marshaled.___m_Rank = unmarshaled.___m_Rank;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_pinvoke_back(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke& marshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled)
{
	unmarshaled.___m_Category = il2cpp_codegen_marshal_string_result(marshaled.___m_Category);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Category), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Category));
	uint32_t unmarshaledm_ValueLow_temp_1 = 0;
	unmarshaledm_ValueLow_temp_1 = marshaled.___m_ValueLow;
	unmarshaled.___m_ValueLow = unmarshaledm_ValueLow_temp_1;
	int32_t unmarshaledm_ValueHigh_temp_2 = 0;
	unmarshaledm_ValueHigh_temp_2 = marshaled.___m_ValueHigh;
	unmarshaled.___m_ValueHigh = unmarshaledm_ValueHigh_temp_2;
	int32_t unmarshaledm_Date_temp_3 = 0;
	unmarshaledm_Date_temp_3 = marshaled.___m_Date;
	unmarshaled.___m_Date = unmarshaledm_Date_temp_3;
	unmarshaled.___m_FormattedValue = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_FormattedValue), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue));
	unmarshaled.___m_PlayerID = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_PlayerID), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID));
	int32_t unmarshaledm_Rank_temp_6 = 0;
	unmarshaledm_Rank_temp_6 = marshaled.___m_Rank;
	unmarshaled.___m_Rank = unmarshaledm_Rank_temp_6;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_pinvoke_cleanup(GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category);
	marshaled.___m_Category = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue);
	marshaled.___m_FormattedValue = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID);
	marshaled.___m_PlayerID = NULL;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_com(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com& marshaled)
{
	marshaled.___m_Category = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Category);
	marshaled.___m_ValueLow = unmarshaled.___m_ValueLow;
	marshaled.___m_ValueHigh = unmarshaled.___m_ValueHigh;
	marshaled.___m_Date = unmarshaled.___m_Date;
	marshaled.___m_FormattedValue = il2cpp_codegen_marshal_bstring(unmarshaled.___m_FormattedValue);
	marshaled.___m_PlayerID = il2cpp_codegen_marshal_bstring(unmarshaled.___m_PlayerID);
	marshaled.___m_Rank = unmarshaled.___m_Rank;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_com_back(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com& marshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled)
{
	unmarshaled.___m_Category = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Category), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category));
	uint32_t unmarshaledm_ValueLow_temp_1 = 0;
	unmarshaledm_ValueLow_temp_1 = marshaled.___m_ValueLow;
	unmarshaled.___m_ValueLow = unmarshaledm_ValueLow_temp_1;
	int32_t unmarshaledm_ValueHigh_temp_2 = 0;
	unmarshaledm_ValueHigh_temp_2 = marshaled.___m_ValueHigh;
	unmarshaled.___m_ValueHigh = unmarshaledm_ValueHigh_temp_2;
	int32_t unmarshaledm_Date_temp_3 = 0;
	unmarshaledm_Date_temp_3 = marshaled.___m_Date;
	unmarshaled.___m_Date = unmarshaledm_Date_temp_3;
	unmarshaled.___m_FormattedValue = il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_FormattedValue), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue));
	unmarshaled.___m_PlayerID = il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_PlayerID), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID));
	int32_t unmarshaledm_Rank_temp_6 = 0;
	unmarshaledm_Rank_temp_6 = marshaled.___m_Rank;
	unmarshaled.___m_Rank = unmarshaledm_Rank_temp_6;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_com_cleanup(GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Category);
	marshaled.___m_Category = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_FormattedValue);
	marshaled.___m_FormattedValue = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_PlayerID);
	marshaled.___m_PlayerID = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E (GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* V_1 = NULL;
	{
		String_t* L_0 = __this->___m_Category;
		int32_t L_1 = __this->___m_ValueHigh;
		uint32_t L_2 = __this->___m_ValueLow;
		String_t* L_3 = __this->___m_PlayerID;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&L_4), ((int32_t)1970), 1, 1, 0, 0, 0, 0, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_Date;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)L_5), NULL);
		String_t* L_7 = __this->___m_FormattedValue;
		int32_t L_8 = __this->___m_Rank;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_9 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(L_9, L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)L_1)<<((int32_t)32))), ((int64_t)(uint64_t)L_2))), L_3, L_6, L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0052;
	}

IL_0052:
	{
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F*>(__this + _offset);
	Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* _returnValue;
	_returnValue = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearAchievementDescriptions_mFC0180DC036AEC26DE512750183DBF28716D1AD8 (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_1 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		NullCheck(L_1);
		int32_t L_2 = ___0_size;
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___0_size;
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_5 = (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)SZArrayNew(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var, (uint32_t)L_4);
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache), (void*)L_5);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetAchievementDescription_mAF211CCF334C2D12447A979CF93BEC1DC46228DD (GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 ___0_data, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		int32_t L_1 = ___1_number;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_2;
		L_2 = GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3((&___0_data), NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetAchievementDescriptionImage_mC749EF8DFCF2B3A7D1AE589DD00A75425768C7BA (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		NullCheck(L_0);
		int32_t L_1 = ___1_number;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___1_number;
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0, NULL);
		goto IL_0032;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_4 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		int32_t L_5 = ___1_number;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		NullCheck(L_7);
		AchievementDescription_SetImage_m16FC76EE05781DB25586A64D3B0D6CE3E6213CF5(L_7, L_8, NULL);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerAchievementDescriptionCallback_m0F1810085F7010D4375CCAFA088B733436888DEA (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_0 = ___0_callback;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_1 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		G_B3_0 = ((!(((RuntimeObject*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_3 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		NullCheck(L_3);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9, NULL);
	}

IL_002c:
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_5 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_6 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache;
		V_2 = (IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*)L_6;
		IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* L_7 = V_2;
		NullCheck(L_5);
		Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_inline(L_5, L_7, NULL);
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_AuthenticateCallbackWrapper_mBBDEF86CA2DA410C1ABD8DFBDEEA558F53D11E57 (int32_t ___0_result, String_t* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* G_B3_0 = NULL;
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* G_B4_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m530576FBF88694356BFB3225D489B31DE7AC2239(NULL);
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback;
		int32_t L_3 = ___0_result;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B3_0 = L_2;
			goto IL_0020;
		}
		G_B2_0 = L_2;
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0021:
	{
		String_t* L_4 = ___1_error;
		NullCheck(G_B4_1);
		Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E_inline(G_B4_1, (bool)G_B4_0, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback = (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback), (void*)(Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D*)NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearFriends_m45B4C09623AE8DB864C43A54A36A745CD96962F6 (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___0_size;
		GameCenterPlatform_SafeClearArray_m582138D71F5DF50C5399B2E6F8B3F35B792FBFC9((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetFriends_mC9766A473E039C70D2578FCDA79A1A40A68B2946 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 ___0_data, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___1_number;
		GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB((&___0_data), (&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetFriendImage_m9E454400B1CDAEDC2096043B6901DB41879693DE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		int32_t L_1 = ___1_number;
		GameCenterPlatform_SafeSetUserImage_m5C9205AC773B23BFEA86D8F833811A863620B4A5((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerFriendsCallbackWrapper_m0A2B35B02A9548A7B6F4B48D8CC93327F6D2C941 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, int32_t ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_1 = NULL;
	bool V_2 = false;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B5_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B6_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends;
		V_0 = (bool)((!(((RuntimeObject*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_3 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends;
		V_1 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_3;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_4 = V_1;
		NullCheck(L_2);
		LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B(L_2, L_4, NULL);
	}

IL_001f:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = ___0_callback;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = ___0_callback;
		int32_t L_8 = ___1_result;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			G_B5_0 = L_7;
			goto IL_002f;
		}
		G_B4_0 = L_7;
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0030:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B6_1, (bool)G_B6_0, NULL);
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_AchievementCallbackWrapper_m5F495D50FF3F29F655280DB50B653BA1B1F8E87A (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* ___0_callback, GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* V_5 = NULL;
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_0 = ___0_callback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_2 = ___1_result;
		NullCheck(L_2);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC, NULL);
	}

IL_001e:
	{
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_4 = ___1_result;
		NullCheck(L_4);
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_5 = (AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)SZArrayNew(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		V_3 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_6 = V_1;
		int32_t L_7 = V_3;
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_8 = ___1_result;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_10;
		L_10 = GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B*)L_10);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		int32_t L_12 = V_3;
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_13 = ___1_result;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_15 = ___0_callback;
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_16 = V_1;
		V_5 = (IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*)L_16;
		IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* L_17 = V_5;
		NullCheck(L_15);
		Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_inline(L_15, L_17, NULL);
	}

IL_0057:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ProgressCallbackWrapper_mE29C6E6CB7F7824621583BA649B226D2D500DE63 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, bool ___1_success, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___0_callback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___0_callback;
		bool L_3 = ___1_success;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, L_3, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ScoreCallbackWrapper_mBC49DCCB37760513FBD1D43A832A3E6A63B56C68 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, bool ___1_success, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___0_callback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___0_callback;
		bool L_3 = ___1_success;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, L_3, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ScoreLoaderCallbackWrapper_mE5C2232C34F35C35B4DCA01EC7B1297546931476 (Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* ___0_callback, GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_4 = NULL;
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* L_0 = ___0_callback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_2 = ___1_result;
		NullCheck(L_2);
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_3 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_002a;
	}

IL_0017:
	{
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_4 = V_1;
		int32_t L_5 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_6 = ___1_result;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_8;
		L_8 = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_11 = ___1_result;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* L_13 = ___0_callback;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_14 = V_1;
		V_4 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_14;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_15 = V_4;
		NullCheck(L_13);
		Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_inline(L_13, L_15, NULL);
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2588423AB4981E834EDBF91FAFBC14B34CE5A315 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, RuntimeObject* ___0_user, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___1_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___1_callback;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, (bool)0, NULL);
	}

IL_001f:
	{
		goto IL_0028;
	}

IL_0021:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_LoadFriends_m4FE323D2E3AD644E3984E2EE623388D96EEDDA0A(L_5, NULL);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_mD2BD6C6784B53686B875E94B35538729377EEC0C (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, RuntimeObject* ___0_user, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* L_0 = (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m88E5FDE6B93424368864BF746056A7FC84B7D830(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* L_1 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___1_callback;
		NullCheck(L_1);
		L_1->___callback = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback), (void*)L_2);
		RuntimeObject* L_3 = ___0_user;
		U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* L_4 = V_0;
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* L_5 = (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D*)il2cpp_codegen_object_new(Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D_il2cpp_TypeInfo_var);
		Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A_RuntimeMethod_var), NULL);
		InterfaceActionInvoker2< RuntimeObject*, Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* >::Invoke(1, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, __this, L_3, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m00EE28E82D18463D20F3938E89FF9EC634C14E57 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, RuntimeObject* ___0_user, Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D* L_0 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback), (void*)L_0);
		GameCenterPlatform_Authenticate_m2C7CD52B1DF5A726431D11F5FDC92A78620E79A1(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_get_localUser_m3EEB7917C0629DBADEE2DCF8E979BBA09A83AF92 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		V_0 = (bool)((((RuntimeObject*)(LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_2 = (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD*)il2cpp_codegen_object_new(LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C(NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_4 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m530576FBF88694356BFB3225D489B31DE7AC2239(NULL);
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_8 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		V_2 = L_8;
		goto IL_0047;
	}

IL_0047:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_PopulateLocalUser_m530576FBF88694356BFB3225D489B31DE7AC2239 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		bool L_1;
		L_1 = GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C(NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44(L_0, L_1, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		String_t* L_3;
		L_3 = GameCenterPlatform_Internal_UserName_mFF1EA7622768C0AB95C831D920078B0EB305151D(NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA(L_2, L_3, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_4 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		String_t* L_5;
		L_5 = GameCenterPlatform_Internal_UserID_mB9D9BBCC77F8F91EDBCAAED850FF9188F5C08273(NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353(L_4, L_5, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_6 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		String_t* L_7;
		L_7 = GameCenterPlatform_Internal_UserGameID_mDD756F1327B65CCFDDDA6270B9039D7C853B31EA(NULL);
		NullCheck(L_6);
		UserProfile_SetUserGameID_m9A90E716F9DB8138181F748243D7BB12BCCAA2D5(L_6, L_7, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_8 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		String_t* L_9;
		L_9 = GameCenterPlatform_Internal_LegacyUserID_mCA68D0FD9441951433DB2306179CD5181CDA61DD(NULL);
		NullCheck(L_8);
		UserProfile_SetLegacyUserID_m3A0B0F4DD6782D40B5CF6D575B670EC96396F030(L_8, L_9, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_10 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		bool L_11;
		L_11 = GameCenterPlatform_GetIsUnderage_m079167A5B106AFA57D0CAB20D00E16D1CD5DEE2B(NULL);
		NullCheck(L_10);
		LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C(L_10, L_11, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_12 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13;
		L_13 = GameCenterPlatform_GetUserImage_m0CBDA5D68C7A7A4BEC13EBE77479FC9DA52166AB(NULL);
		NullCheck(L_12);
		UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221(L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadAchievementDescriptions_m2ABE78471BB5B0FD49A5E640881F940411EF2E7D (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_2 = ___0_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_4 = ___0_callback;
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_5 = (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)SZArrayNew(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*)L_5;
		IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_inline(L_4, L_6, NULL);
	}

IL_0026:
	{
		goto IL_002f;
	}

IL_0028:
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_7 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadAchievementDescriptions_mB95C4646875A32D657F0CDED7BC27CEE699E773E(L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ReportProgress_m84D8EA9E8FF51493E28468EDB8FB330D112725C7 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, String_t* ___0_id, double ___1_progress, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___2_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___2_callback;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, (bool)0, NULL);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0021:
	{
		String_t* L_5 = ___0_id;
		double L_6 = ___1_progress;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = ___2_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalReportProgress_m4A9784CD054C3339C8DBC4F5E99D817C69A33ABC(L_5, L_6, L_7, NULL);
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadAchievements_m23EED7C060A33D403C9F91F5F95CFA2C12AB90B9 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_2 = ___0_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_4 = ___0_callback;
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_5 = (AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)SZArrayNew(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*)L_5;
		IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_inline(L_4, L_6, NULL);
	}

IL_0026:
	{
		goto IL_002f;
	}

IL_0028:
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_7 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadAchievements_m2E861B69D07FFF5AF3812FC5500A111C71818963(L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ReportScore_mC2F686533059939CF30468D9D46E14C84AABAF2E (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, int64_t ___0_score, String_t* ___1_board, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___2_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___2_callback;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, (bool)0, NULL);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0021:
	{
		int64_t L_5 = ___0_score;
		String_t* L_6 = ___1_board;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = ___2_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalReportScore_m61071235860F32C299F6475A70BBFA0D6542A490(L_5, L_6, L_7, NULL);
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadScores_mC159C539D06107214560137F98CB37C14013B48D (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, String_t* ___0_category, Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* L_2 = ___1_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* L_4 = ___1_callback;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_5 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_5;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_inline(L_4, L_6, NULL);
	}

IL_0026:
	{
		goto IL_0030;
	}

IL_0028:
	{
		String_t* L_7 = ___0_category;
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B* L_8 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadScores_mC0B34238A956FC1875EE034365A82C7DA2CA3C8D(L_7, L_8, NULL);
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadScores_m12ED827C5C14AE481BDFB6C12DC973A46CF53056 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, RuntimeObject* ___0_board, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* V_0 = NULL;
	GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___1_callback;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___1_callback;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, (bool)0, NULL);
	}

IL_0021:
	{
		goto IL_0082;
	}

IL_0023:
	{
		RuntimeObject* L_5 = ___0_board;
		V_0 = ((Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)CastclassClass((RuntimeObject*)L_5, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var));
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_6 = V_0;
		GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* L_7 = (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D*)il2cpp_codegen_object_new(GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_mE6ABD1A5D616A3371023FB53BAAA34C638081632(L_7, L_6, NULL);
		V_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* L_8 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards;
		GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* L_9 = V_1;
		NullCheck(L_8);
		List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_inline(L_8, L_9, List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_RuntimeMethod_var);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = Leaderboard_GetUserFilter_m859FFF97FCAF7D42B215AA0166FCB6B8B0025FF3(L_10, NULL);
		V_2 = L_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_2;
		NullCheck(L_12);
		V_5 = (bool)((((int32_t)(((RuntimeArray*)L_12)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		V_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0051:
	{
		GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* L_14 = V_1;
		RuntimeObject* L_15 = ___0_board;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(0, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_15);
		RuntimeObject* L_17 = ___0_board;
		NullCheck(L_17);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_18;
		L_18 = InterfaceFuncInvoker0< Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 >::Invoke(2, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_17);
		int32_t L_19 = L_18.___from;
		RuntimeObject* L_20 = ___0_board;
		NullCheck(L_20);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_21;
		L_21 = InterfaceFuncInvoker0< Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 >::Invoke(2, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_20);
		int32_t L_22 = L_21.___count;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_2;
		RuntimeObject* L_24 = ___0_board;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_24);
		RuntimeObject* L_26 = ___0_board;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(3, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_26);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_28 = ___1_callback;
		NullCheck(L_14);
		GcLeaderboard_Internal_LoadScores_m94273C598B909F6E518E4C6A0A1EEFA83BD2ECAD(L_14, L_16, L_19, L_22, L_23, L_25, L_27, L_28, NULL);
	}

IL_0082:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LeaderboardCallbackWrapper_mA79EB4ADBFE7E489A9E21ADAA848CCFE5A9BDD1C (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, bool ___1_success, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___0_callback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___0_callback;
		bool L_3 = ___1_success;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, L_3, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetLoading_m8B553D2C428CCC0172953A741C624A1A5F344617 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, RuntimeObject* ___0_board, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* V_3 = NULL;
	bool V_4 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards;
		NullCheck(L_2);
		Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 L_3;
		L_3 = List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C(L_2, List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3((&V_2), Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0045_1;
			}

IL_0020_1:
			{
				GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* L_4;
				L_4 = Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_inline((&V_2), Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_RuntimeMethod_var);
				V_3 = L_4;
				GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* L_5 = V_3;
				RuntimeObject* L_6 = ___0_board;
				NullCheck(L_5);
				bool L_7;
				L_7 = GcLeaderboard_Contains_m08D3F5665F1A25DBDC41B9D98461D5DBB98DCD48(L_5, ((Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)CastclassClass((RuntimeObject*)L_6, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var)), NULL);
				V_4 = L_7;
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0044_1;
				}
			}
			{
				GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* L_9 = V_3;
				NullCheck(L_9);
				bool L_10;
				L_10 = GcLeaderboard_Loading_m089B19A42B7EA2AB31481F2CA81E47279ABF0E75(L_9, NULL);
				V_1 = L_10;
				goto IL_0063;
			}

IL_0044_1:
			{
			}

IL_0045_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C((&V_2), Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_005f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0063:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = GameCenterPlatform_get_localUser_m3EEB7917C0629DBADEE2DCF8E979BBA09A83AF92(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA, NULL);
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_0023:
	{
		V_1 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowAchievementsUI_m0401580BA149B7E30547E7E05DC4644CB7E2DBA6 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m1AC768F918D4A93F7350EBF1F89FC81C4DDC7369(NULL);
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowLeaderboardUI_m10D84DC004496337D2927EA748EEEE0689FF6284 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m1D84677B42CDB5A14134B65CA51727B38BAB5D98(NULL);
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearUsers_m992B15D20DF29845B75877B825D09DB5BEF88794 (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___0_size;
		GameCenterPlatform_SafeClearArray_m582138D71F5DF50C5399B2E6F8B3F35B792FBFC9((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetUser_mF0C7848C4575678BCB7E0F9F66AFC06F86ABDE3B (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 ___0_data, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___1_number;
		GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB((&___0_data), (&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetUserImage_m1DF6E3FDB5A35D7ECA9D3EFE135E6876FA8B65D3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		int32_t L_1 = ___1_number;
		GameCenterPlatform_SafeSetUserImage_m5C9205AC773B23BFEA86D8F833811A863620B4A5((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerUsersCallbackWrapper_m252F1BF83F20ADAD9F7863AAB7681D2F36A7434A (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_1 = NULL;
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_0 = ___0_callback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_2 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_3 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users;
		V_1 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_3;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_4 = V_1;
		NullCheck(L_2);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline(L_2, L_4, NULL);
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadUsers_m616D01C1A67469537A3F2D02DC934D57CE4B01A2 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_userIds, Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_2 = ___1_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_4 = ___1_callback;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_5 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_5;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline(L_4, L_6, NULL);
	}

IL_0026:
	{
		goto IL_0030;
	}

IL_0028:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___0_userIds;
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_8 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadUsers_mE09B0D2E48ABFBA3C24FC8047CBD8C3CC189CA6A(L_7, L_8, NULL);
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeSetUserImage_m5C9205AC773B23BFEA86D8F833811A863620B4A5 (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_texture, int32_t ___2_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBFFE2B018FE9C481B67387513F728E577370086);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_0 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___2_number;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___2_number;
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_5, ((int32_t)76), ((int32_t)76), NULL);
		___1_texture = L_5;
	}

IL_002b:
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_6 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_7 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_6);
		NullCheck(L_7);
		int32_t L_8 = ___2_number;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) <= ((int32_t)L_8)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = ___2_number;
		G_B8_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B8_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_11 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_12 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_11);
		int32_t L_13 = ___2_number;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = ___1_texture;
		NullCheck(L_15);
		UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221(L_15, L_16, NULL);
		goto IL_0058;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBBFFE2B018FE9C481B67387513F728E577370086, NULL);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeClearArray_m582138D71F5DF50C5399B2E6F8B3F35B792FBFC9 (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_0 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_2 = ___0_array;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_3 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_2);
		NullCheck(L_3);
		int32_t L_4 = ___1_size;
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_6 = ___0_array;
		int32_t L_7 = ___1_size;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_8 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)L_7);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_CreateLeaderboard_m4D487F47156DF1F0EE7DA44946D4ED48936689BB (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)il2cpp_codegen_object_new(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73(L_0, NULL);
		V_0 = L_0;
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_CreateAchievement_mD92E4A555CBCE298E00F99220CF3930DE64DE35B (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_0 = (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B*)il2cpp_codegen_object_new(Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		Achievement__ctor_m9EA819E3F3EA4B91F8998D54EF2F5B2B1E29976F(L_0, NULL);
		V_0 = L_0;
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerResetAchievementCallback_mC66B7555E8FE8200A2B85D97A73046FB6B099DE9 (bool ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements;
		bool L_3 = ___0_result;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Authenticate_m2C7CD52B1DF5A726431D11F5FDC92A78620E79A1 (const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Authenticate_m2C7CD52B1DF5A726431D11F5FDC92A78620E79A1_ftn) ();
	static GameCenterPlatform_Authenticate_m2C7CD52B1DF5A726431D11F5FDC92A78620E79A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Authenticate_m2C7CD52B1DF5A726431D11F5FDC92A78620E79A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C (const RuntimeMethod* method) 
{
	typedef bool (*GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C_ftn) ();
	static GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetAuthenticated_mE4EC863A99E6238523C599BEC5D9E83ADA3ECD0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserName_mFF1EA7622768C0AB95C831D920078B0EB305151D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
			GameCenterPlatform_Internal_UserName_Injected_m6BA86D151E826231D06CC916CC2AFC799F49B97A((&V_0), NULL);
			goto IL_0011;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0011:
	{
		String_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserID_mB9D9BBCC77F8F91EDBCAAED850FF9188F5C08273 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
			GameCenterPlatform_Internal_UserID_Injected_mD2DB0354F019A908B2E3CDF1D3E84A714C385950((&V_0), NULL);
			goto IL_0011;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0011:
	{
		String_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserGameID_mDD756F1327B65CCFDDDA6270B9039D7C853B31EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
			GameCenterPlatform_Internal_UserGameID_Injected_mA3DBF77302FE1E5C4798FE498D6FF89BFB80CF43((&V_0), NULL);
			goto IL_0011;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0011:
	{
		String_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_LegacyUserID_mCA68D0FD9441951433DB2306179CD5181CDA61DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
			GameCenterPlatform_Internal_LegacyUserID_Injected_mD1A8D028B8EB4A8F1941FF6313FC59907370B3EB((&V_0), NULL);
			goto IL_0011;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0011:
	{
		String_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetIsUnderage_m079167A5B106AFA57D0CAB20D00E16D1CD5DEE2B (const RuntimeMethod* method) 
{
	typedef bool (*GameCenterPlatform_GetIsUnderage_m079167A5B106AFA57D0CAB20D00E16D1CD5DEE2B_ftn) ();
	static GameCenterPlatform_GetIsUnderage_m079167A5B106AFA57D0CAB20D00E16D1CD5DEE2B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetIsUnderage_m079167A5B106AFA57D0CAB20D00E16D1CD5DEE2B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GameCenterPlatform_GetUserImage_m0CBDA5D68C7A7A4BEC13EBE77479FC9DA52166AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mE2F03F073E790DEB25AEB86A40D6542F05607E5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = GameCenterPlatform_GetUserImage_Injected_m4B89DC31069FDD09C80A2BEF559AB41764AE452B(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = Unmarshal_UnmarshalUnityObject_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mE2F03F073E790DEB25AEB86A40D6542F05607E5A_inline(L_0, Unmarshal_UnmarshalUnityObject_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mE2F03F073E790DEB25AEB86A40D6542F05607E5A_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadFriends_m4FE323D2E3AD644E3984E2EE623388D96EEDDA0A (RuntimeObject* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_LoadFriends_m4FE323D2E3AD644E3984E2EE623388D96EEDDA0A_ftn) (RuntimeObject*);
	static GameCenterPlatform_LoadFriends_m4FE323D2E3AD644E3984E2EE623388D96EEDDA0A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_LoadFriends_m4FE323D2E3AD644E3984E2EE623388D96EEDDA0A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)");
	_il2cpp_icall_func(___0_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievementDescriptions_mB95C4646875A32D657F0CDED7BC27CEE699E773E (RuntimeObject* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_InternalLoadAchievementDescriptions_mB95C4646875A32D657F0CDED7BC27CEE699E773E_ftn) (RuntimeObject*);
	static GameCenterPlatform_InternalLoadAchievementDescriptions_mB95C4646875A32D657F0CDED7BC27CEE699E773E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadAchievementDescriptions_mB95C4646875A32D657F0CDED7BC27CEE699E773E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)");
	_il2cpp_icall_func(___0_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievements_m2E861B69D07FFF5AF3812FC5500A111C71818963 (RuntimeObject* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_InternalLoadAchievements_m2E861B69D07FFF5AF3812FC5500A111C71818963_ftn) (RuntimeObject*);
	static GameCenterPlatform_InternalLoadAchievements_m2E861B69D07FFF5AF3812FC5500A111C71818963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadAchievements_m2E861B69D07FFF5AF3812FC5500A111C71818963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)");
	_il2cpp_icall_func(___0_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_m4A9784CD054C3339C8DBC4F5E99D817C69A33ABC (String_t* ___0_id, double ___1_progress, RuntimeObject* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				String_t* L_0 = ___0_id;
				bool L_1;
				L_1 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_0, (&V_2), NULL);
				if (L_1)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_2 = ___0_id;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
				L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_2, NULL);
				V_0 = L_3;
				Il2CppChar* L_4;
				L_4 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_4;
				Il2CppChar* L_5 = V_1;
				int32_t L_6;
				L_6 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_5), L_6, NULL);
			}

IL_0029_1:
			{
				double L_7 = ___1_progress;
				RuntimeObject* L_8 = ___2_callback;
				il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
				GameCenterPlatform_InternalReportProgress_Injected_m0C69E37785F832B3200AFA94D2270FDBD4393CBB((&V_2), L_7, L_8, NULL);
				goto IL_0039;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_m61071235860F32C299F6475A70BBFA0D6542A490 (int64_t ___0_score, String_t* ___1_category, RuntimeObject* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int64_t G_B2_0 = 0;
	int64_t G_B1_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				int64_t L_0 = ___0_score;
				String_t* L_1 = ___1_category;
				bool L_2;
				L_2 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_1, (&V_2), NULL);
				if (L_2)
				{
					G_B2_0 = L_0;
					goto IL_002a_1;
				}
				G_B1_0 = L_0;
			}
			{
				String_t* L_3 = ___1_category;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4;
				L_4 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_3, NULL);
				V_0 = L_4;
				Il2CppChar* L_5;
				L_5 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_5;
				Il2CppChar* L_6 = V_1;
				int32_t L_7;
				L_7 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_6), L_7, NULL);
				G_B2_0 = G_B1_0;
			}

IL_002a_1:
			{
				RuntimeObject* L_8 = ___2_callback;
				il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
				GameCenterPlatform_InternalReportScore_Injected_mA81C06F47E518309B7D2932D470D5ECDD827CB21(G_B2_0, (&V_2), L_8, NULL);
				goto IL_0039;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_mC0B34238A956FC1875EE034365A82C7DA2CA3C8D (String_t* ___0_category, RuntimeObject* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				String_t* L_0 = ___0_category;
				bool L_1;
				L_1 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_0, (&V_2), NULL);
				if (L_1)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_2 = ___0_category;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
				L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_2, NULL);
				V_0 = L_3;
				Il2CppChar* L_4;
				L_4 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_4;
				Il2CppChar* L_5 = V_1;
				int32_t L_6;
				L_6 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_5), L_6, NULL);
			}

IL_0029_1:
			{
				RuntimeObject* L_7 = ___1_callback;
				il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
				GameCenterPlatform_InternalLoadScores_Injected_m770388996602A2797812633DAE0DA0208DE4F2D0((&V_2), L_7, NULL);
				goto IL_0038;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowAchievementsUI_m1AC768F918D4A93F7350EBF1F89FC81C4DDC7369 (const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m1AC768F918D4A93F7350EBF1F89FC81C4DDC7369_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m1AC768F918D4A93F7350EBF1F89FC81C4DDC7369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m1AC768F918D4A93F7350EBF1F89FC81C4DDC7369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowLeaderboardUI_m1D84677B42CDB5A14134B65CA51727B38BAB5D98 (const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m1D84677B42CDB5A14134B65CA51727B38BAB5D98_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m1D84677B42CDB5A14134B65CA51727B38BAB5D98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m1D84677B42CDB5A14134B65CA51727B38BAB5D98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LoadUsers_mE09B0D2E48ABFBA3C24FC8047CBD8C3CC189CA6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_userIds, RuntimeObject* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_mE09B0D2E48ABFBA3C24FC8047CBD8C3CC189CA6A_ftn) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, RuntimeObject*);
	static GameCenterPlatform_Internal_LoadUsers_mE09B0D2E48ABFBA3C24FC8047CBD8C3CC189CA6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_mE09B0D2E48ABFBA3C24FC8047CBD8C3CC189CA6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)");
	_il2cpp_icall_func(___0_userIds, ___1_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_m85F77F26AAA1450BCEC43692DF91E5E64D31A4C0 (const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_ResetAllAchievements_m85F77F26AAA1450BCEC43692DF91E5E64D31A4C0_ftn) ();
	static GameCenterPlatform_ResetAllAchievements_m85F77F26AAA1450BCEC43692DF91E5E64D31A4C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ResetAllAchievements_m85F77F26AAA1450BCEC43692DF91E5E64D31A4C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementBanner_m3BF0634CFE7F665A87284BBE9EB81DC579D82EE1 (bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_ShowDefaultAchievementBanner_m3BF0634CFE7F665A87284BBE9EB81DC579D82EE1_ftn) (bool);
	static GameCenterPlatform_ShowDefaultAchievementBanner_m3BF0634CFE7F665A87284BBE9EB81DC579D82EE1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ShowDefaultAchievementBanner_m3BF0634CFE7F665A87284BBE9EB81DC579D82EE1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_mA20580F1523218065AA490BD84E9D91C6A041B9C (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements), (void*)L_0);
		GameCenterPlatform_ResetAllAchievements_m85F77F26AAA1450BCEC43692DF91E5E64D31A4C0(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m16F5C6260F8AC72F9020BC896B787479CA19F953 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementBanner_m3BF0634CFE7F665A87284BBE9EB81DC579D82EE1(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowLeaderboardUI_mF61D3E7F3BDC7E62607591BE7E0896C9508CA965 (String_t* ___0_leaderboardID, int32_t ___1_timeScope, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_leaderboardID;
		int32_t L_1 = ___1_timeScope;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowSpecificLeaderboardUI_m86884D45010C205C96BADD5E60569FC7B1F7B0CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_m86884D45010C205C96BADD5E60569FC7B1F7B0CF (String_t* ___0_leaderboardID, int32_t ___1_timeScope, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				String_t* L_0 = ___0_leaderboardID;
				bool L_1;
				L_1 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_0, (&V_2), NULL);
				if (L_1)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_2 = ___0_leaderboardID;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
				L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_2, NULL);
				V_0 = L_3;
				Il2CppChar* L_4;
				L_4 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_4;
				Il2CppChar* L_5 = V_1;
				int32_t L_6;
				L_6 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_5), L_6, NULL);
			}

IL_0029_1:
			{
				int32_t L_7 = ___1_timeScope;
				il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
				GameCenterPlatform_ShowSpecificLeaderboardUI_Injected_mE2EDF552B45C0DC3CF7F922FBB8AE298B6A56584((&V_2), L_7, NULL);
				goto IL_0038;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform__ctor_m341814BE3C4AC9683D3C828F744775C56E3B37A8 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform__cctor_mD36CEF8F96BDB310761AE35ECC8DECB6C9BB5195 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)SZArrayNew(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache), (void*)L_0);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends), (void*)L_1);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_2 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users), (void*)L_2);
		List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30* L_3 = (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30*)il2cpp_codegen_object_new(List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_il2cpp_TypeInfo_var);
		List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA(L_3, List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA_RuntimeMethod_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_UserName_Injected_m6BA86D151E826231D06CC916CC2AFC799F49B97A (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_UserName_Injected_m6BA86D151E826231D06CC916CC2AFC799F49B97A_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static GameCenterPlatform_Internal_UserName_Injected_m6BA86D151E826231D06CC916CC2AFC799F49B97A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_Injected_m6BA86D151E826231D06CC916CC2AFC799F49B97A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_UserID_Injected_mD2DB0354F019A908B2E3CDF1D3E84A714C385950 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_UserID_Injected_mD2DB0354F019A908B2E3CDF1D3E84A714C385950_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static GameCenterPlatform_Internal_UserID_Injected_mD2DB0354F019A908B2E3CDF1D3E84A714C385950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_Injected_mD2DB0354F019A908B2E3CDF1D3E84A714C385950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_UserGameID_Injected_mA3DBF77302FE1E5C4798FE498D6FF89BFB80CF43 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_UserGameID_Injected_mA3DBF77302FE1E5C4798FE498D6FF89BFB80CF43_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static GameCenterPlatform_Internal_UserGameID_Injected_mA3DBF77302FE1E5C4798FE498D6FF89BFB80CF43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserGameID_Injected_mA3DBF77302FE1E5C4798FE498D6FF89BFB80CF43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LegacyUserID_Injected_mD1A8D028B8EB4A8F1941FF6313FC59907370B3EB (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_Internal_LegacyUserID_Injected_mD1A8D028B8EB4A8F1941FF6313FC59907370B3EB_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static GameCenterPlatform_Internal_LegacyUserID_Injected_mD1A8D028B8EB4A8F1941FF6313FC59907370B3EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LegacyUserID_Injected_mD1A8D028B8EB4A8F1941FF6313FC59907370B3EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LegacyUserID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GameCenterPlatform_GetUserImage_Injected_m4B89DC31069FDD09C80A2BEF559AB41764AE452B (const RuntimeMethod* method) 
{
	typedef intptr_t (*GameCenterPlatform_GetUserImage_Injected_m4B89DC31069FDD09C80A2BEF559AB41764AE452B_ftn) ();
	static GameCenterPlatform_GetUserImage_Injected_m4B89DC31069FDD09C80A2BEF559AB41764AE452B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetUserImage_Injected_m4B89DC31069FDD09C80A2BEF559AB41764AE452B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage_Injected()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_Injected_m0C69E37785F832B3200AFA94D2270FDBD4393CBB (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_id, double ___1_progress, RuntimeObject* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_InternalReportProgress_Injected_m0C69E37785F832B3200AFA94D2270FDBD4393CBB_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, double, RuntimeObject*);
	static GameCenterPlatform_InternalReportProgress_Injected_m0C69E37785F832B3200AFA94D2270FDBD4393CBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalReportProgress_Injected_m0C69E37785F832B3200AFA94D2270FDBD4393CBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Double,System.Object)");
	_il2cpp_icall_func(___0_id, ___1_progress, ___2_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_Injected_mA81C06F47E518309B7D2932D470D5ECDD827CB21 (int64_t ___0_score, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_category, RuntimeObject* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_InternalReportScore_Injected_mA81C06F47E518309B7D2932D470D5ECDD827CB21_ftn) (int64_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, RuntimeObject*);
	static GameCenterPlatform_InternalReportScore_Injected_mA81C06F47E518309B7D2932D470D5ECDD827CB21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalReportScore_Injected_mA81C06F47E518309B7D2932D470D5ECDD827CB21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore_Injected(System.Int64,UnityEngine.Bindings.ManagedSpanWrapper&,System.Object)");
	_il2cpp_icall_func(___0_score, ___1_category, ___2_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_Injected_m770388996602A2797812633DAE0DA0208DE4F2D0 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_category, RuntimeObject* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_InternalLoadScores_Injected_m770388996602A2797812633DAE0DA0208DE4F2D0_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, RuntimeObject*);
	static GameCenterPlatform_InternalLoadScores_Injected_m770388996602A2797812633DAE0DA0208DE4F2D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadScores_Injected_m770388996602A2797812633DAE0DA0208DE4F2D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Object)");
	_il2cpp_icall_func(___0_category, ___1_callback);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_Injected_mE2EDF552B45C0DC3CF7F922FBB8AE298B6A56584 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___0_leaderboardID, int32_t ___1_timeScope, const RuntimeMethod* method) 
{
	typedef void (*GameCenterPlatform_ShowSpecificLeaderboardUI_Injected_mE2EDF552B45C0DC3CF7F922FBB8AE298B6A56584_ftn) (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, int32_t);
	static GameCenterPlatform_ShowSpecificLeaderboardUI_Injected_mE2EDF552B45C0DC3CF7F922FBB8AE298B6A56584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ShowSpecificLeaderboardUI_Injected_mE2EDF552B45C0DC3CF7F922FBB8AE298B6A56584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)");
	_il2cpp_icall_func(___0_leaderboardID, ___1_timeScope);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m88E5FDE6B93424368864BF746056A7FC84B7D830 (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1* __this, bool ___0_success, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___callback;
		bool L_1 = ___0_success;
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_0, L_1, NULL);
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
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_pinvoke(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_GenericLeaderboardException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboardException, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_pinvoke_back(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke& marshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_GenericLeaderboardException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboardException, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_pinvoke_cleanup(GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_com(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_GenericLeaderboardException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboardException, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_com_back(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com& marshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_GenericLeaderboardException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D____m_GenericLeaderboard_FieldInfo_var, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboardException, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_com_cleanup(GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard__ctor_mE6ABD1A5D616A3371023FB53BAAA34C638081632 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___0_board, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = ___0_board;
		__this->___m_GenericLeaderboard = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GenericLeaderboard), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Finalize_mFB136BB37E37121BCC3288CED360961840FC4663 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			GcLeaderboard_Dispose_m115757D5DFB8FFE4CD11F2D20244965F992A950C(__this, NULL);
			goto IL_0013;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Contains_m08D3F5665F1A25DBDC41B9D98461D5DBB98DCD48 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___0_board, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = __this->___m_GenericLeaderboard;
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_1 = ___0_board;
		V_0 = (bool)((((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)L_0) == ((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)L_1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetScores_mEBD889F27BCC226B108D4BB5DD6E24C3BF893F24 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* ___0_scoreDatas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_4 = NULL;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = __this->___m_GenericLeaderboard;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_2 = ___0_scoreDatas;
		NullCheck(L_2);
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_3 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_002f;
	}

IL_001c:
	{
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_4 = V_1;
		int32_t L_5 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_6 = ___0_scoreDatas;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_8;
		L_8 = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002f:
	{
		int32_t L_10 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_11 = ___0_scoreDatas;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_001c;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_13 = __this->___m_GenericLeaderboard;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_14 = V_1;
		V_4 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_14;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_15 = V_4;
		NullCheck(L_13);
		Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943(L_13, L_15, NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetLocalScore_mE4B7C301194F99B8CE19D4514825303AAEA54CDB (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F ___0_scoreData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = __this->___m_GenericLeaderboard;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_2 = __this->___m_GenericLeaderboard;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_3;
		L_3 = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E((&___0_scoreData), NULL);
		NullCheck(L_2);
		Leaderboard_SetLocalUserScore_m424D44D0AFCBA825FA9604E8BBB538854E1E0C4E(L_2, L_3, NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetMaxRange_m387A4CB1A33D2B3C4A5ED16B8877F00D0AA44B80 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, uint32_t ___0_maxRange, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = __this->___m_GenericLeaderboard;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_2 = __this->___m_GenericLeaderboard;
		uint32_t L_3 = ___0_maxRange;
		NullCheck(L_2);
		Leaderboard_SetMaxRange_m1C820B01C8989228954B466EDC4C1B8DC95EDE5B(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetTitle_m979181BD4D8E63155ECB306F3E9FE90CE0973208 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_0 = __this->___m_GenericLeaderboard;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_2 = __this->___m_GenericLeaderboard;
		String_t* L_3 = ___0_title;
		NullCheck(L_2);
		Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Internal_LoadScores_m94273C598B909F6E518E4C6A0A1EEFA83BD2ECAD (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, String_t* ___0_category, int32_t ___1_from, int32_t ___2_count, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_userIDs, int32_t ___4_playerScope, int32_t ___5_timeScope, RuntimeObject* ___6_callback, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_category;
		int32_t L_1 = ___1_from;
		int32_t L_2 = ___2_count;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___3_userIDs;
		int32_t L_4 = ___4_playerScope;
		int32_t L_5 = ___5_timeScope;
		RuntimeObject* L_6 = ___6_callback;
		intptr_t L_7;
		L_7 = GcLeaderboard_GcLeaderboard_LoadScores_m972EA4A7913D14B3C0D9C57F89B1330A9E21EE9E(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		__this->___m_InternalLeaderboard = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_m972EA4A7913D14B3C0D9C57F89B1330A9E21EE9E (RuntimeObject* ___0_self, String_t* ___1_category, int32_t ___2_from, int32_t ___3_count, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_userIDs, int32_t ___5_playerScope, int32_t ___6_timeScope, RuntimeObject* ___7_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				RuntimeObject* L_0 = ___0_self;
				String_t* L_1 = ___1_category;
				bool L_2;
				L_2 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_1, (&V_2), NULL);
				if (L_2)
				{
					G_B2_0 = L_0;
					goto IL_002a_1;
				}
				G_B1_0 = L_0;
			}
			{
				String_t* L_3 = ___1_category;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4;
				L_4 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_3, NULL);
				V_0 = L_4;
				Il2CppChar* L_5;
				L_5 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_5;
				Il2CppChar* L_6 = V_1;
				int32_t L_7;
				L_7 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_6), L_7, NULL);
				G_B2_0 = G_B1_0;
			}

IL_002a_1:
			{
				int32_t L_8 = ___2_from;
				int32_t L_9 = ___3_count;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___4_userIDs;
				int32_t L_11 = ___5_playerScope;
				int32_t L_12 = ___6_timeScope;
				RuntimeObject* L_13 = ___7_callback;
				intptr_t L_14;
				L_14 = GcLeaderboard_GcLeaderboard_LoadScores_Injected_mFD268DF2CE104588AAC7717A1B37D7C49A83110E(G_B2_0, (&V_2), L_8, L_9, L_10, L_11, L_12, L_13, NULL);
				V_3 = L_14;
				goto IL_0043;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		intptr_t L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Loading_m089B19A42B7EA2AB31481F2CA81E47279ABF0E75 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_InternalLeaderboard;
		bool L_1;
		L_1 = GcLeaderboard_GcLeaderboard_Loading_m15F693AAA3921AC60FA7F5B8EB0EBD7C372BFF73(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_GcLeaderboard_Loading_m15F693AAA3921AC60FA7F5B8EB0EBD7C372BFF73 (intptr_t ___0_leaderboard, const RuntimeMethod* method) 
{
	typedef bool (*GcLeaderboard_GcLeaderboard_Loading_m15F693AAA3921AC60FA7F5B8EB0EBD7C372BFF73_ftn) (intptr_t);
	static GcLeaderboard_GcLeaderboard_Loading_m15F693AAA3921AC60FA7F5B8EB0EBD7C372BFF73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_Loading_m15F693AAA3921AC60FA7F5B8EB0EBD7C372BFF73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_leaderboard);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Dispose_m115757D5DFB8FFE4CD11F2D20244965F992A950C (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_InternalLeaderboard;
		GcLeaderboard_GcLeaderboard_Dispose_m3C583A1922AE26F38C5228FF13AC66824A67E5D0(L_0, NULL);
		__this->___m_InternalLeaderboard = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_GcLeaderboard_Dispose_m3C583A1922AE26F38C5228FF13AC66824A67E5D0 (intptr_t ___0_leaderboard, const RuntimeMethod* method) 
{
	typedef void (*GcLeaderboard_GcLeaderboard_Dispose_m3C583A1922AE26F38C5228FF13AC66824A67E5D0_ftn) (intptr_t);
	static GcLeaderboard_GcLeaderboard_Dispose_m3C583A1922AE26F38C5228FF13AC66824A67E5D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_Dispose_m3C583A1922AE26F38C5228FF13AC66824A67E5D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)");
	_il2cpp_icall_func(___0_leaderboard);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_Injected_mFD268DF2CE104588AAC7717A1B37D7C49A83110E (RuntimeObject* ___0_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_category, int32_t ___2_from, int32_t ___3_count, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_userIDs, int32_t ___5_playerScope, int32_t ___6_timeScope, RuntimeObject* ___7_callback, const RuntimeMethod* method) 
{
	typedef intptr_t (*GcLeaderboard_GcLeaderboard_LoadScores_Injected_mFD268DF2CE104588AAC7717A1B37D7C49A83110E_ftn) (RuntimeObject*, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, int32_t, int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t, int32_t, RuntimeObject*);
	static GcLeaderboard_GcLeaderboard_LoadScores_Injected_mFD268DF2CE104588AAC7717A1B37D7C49A83110E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_LoadScores_Injected_mFD268DF2CE104588AAC7717A1B37D7C49A83110E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores_Injected(System.Object,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_self, ___1_category, ___2_from, ___3_count, ___4_userIDs, ___5_playerScope, ___6_timeScope, ___7_callback);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CpercentCompletedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CpercentCompletedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CleaderboardIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CleaderboardIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CvalueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CvalueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CleaderboardIDU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___0_value, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = ___0_value;
		__this->___U3CrangeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CuserScopeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CtimeScopeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = __this->___U3CrangeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CuserScopeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtimeScopeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline (String_t* ___0_s, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_managedSpanWrapper, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_s;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* L_2 = ___1_managedSpanWrapper;
		il2cpp_codegen_initobj(L_2, sizeof(ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E));
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_0015:
	{
		String_t* L_3 = ___0_s;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* L_6 = ___1_managedSpanWrapper;
		uintptr_t L_7;
		L_7 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)1), NULL);
		void* L_8;
		L_8 = UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9(L_7, NULL);
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_9;
		memset((&L_9), 0, sizeof(L_9));
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&L_9), L_8, 0, NULL);
		*(ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*)L_6 = L_9;
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_003f:
	{
		V_1 = (bool)0;
		goto IL_0043;
	}

IL_0043:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_text;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m5387D08742D6C89CAB31D981C0F63C08D70AB3AD_gshared_inline (Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB* __this, bool ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_3;
		V_4 = L_3;
		goto IL_0036;
	}

IL_001d:
	{
		intptr_t L_4 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline(L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_1;
		V_4 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		RuntimeObject* L_8 = V_4;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
