#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C
// (Actor)

class UClass* AUltra_Dynamic_Sky_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ultra_Dynamic_Sky_BP_C");

	return Clss;
}


// Ultra_Dynamic_Sky_BP_C Ultra_Dynamic_Sky_BP.Default__Ultra_Dynamic_Sky_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUltra_Dynamic_Sky_BP_C* AUltra_Dynamic_Sky_BP_C::GetDefaultObj()
{
	static class AUltra_Dynamic_Sky_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUltra_Dynamic_Sky_BP_C*>(AUltra_Dynamic_Sky_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetPostProcessColorTint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                PostProcessColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_WeatherScheme           CallFunc_Map_Find_Value_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_BP_C::GetPostProcessColorTint(struct FLinearColor* PostProcessColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, const struct FST_WeatherScheme& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FST_WeatherScheme& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "GetPostProcessColorTint");

	Params::AUltra_Dynamic_Sky_BP_C_GetPostProcessColorTint_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessColor != nullptr)
		*PostProcessColor = std::move(Parms.PostProcessColor);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetWeatherScheme
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWTLWeatherType         WeatherType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           Scheme                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWTLWeatherType         Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_WeatherScheme           CallFunc_Map_Find_Value_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUltra_Dynamic_Sky_BP_C::GetWeatherScheme(enum class EWTLWeatherType WeatherType, struct FST_WeatherScheme* Scheme, enum class EWTLWeatherType Temp_byte_Variable, const struct FST_WeatherScheme& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FST_WeatherScheme& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "GetWeatherScheme");

	Params::AUltra_Dynamic_Sky_BP_C_GetWeatherScheme_Params Parms{};

	Parms.WeatherType = WeatherType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Scheme != nullptr)
		*Scheme = std::move(Parms.Scheme);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_WeatherScheme           CallFunc_GetWeatherScheme_Scheme                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_GetWeatherScheme_Scheme_1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_GetWeatherScheme_Scheme_2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_GetWeatherScheme_Scheme_3                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_GetWeatherScheme_Scheme_4                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeatherScheme           CallFunc_GetWeatherScheme_Scheme_5                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_BP_C::Set_Material_Variables(const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_2, float CallFunc_MapRangeUnclamped_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FST_WeatherScheme& CallFunc_GetWeatherScheme_Scheme, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, const struct FST_WeatherScheme& CallFunc_GetWeatherScheme_Scheme_1, const struct FST_WeatherScheme& CallFunc_GetWeatherScheme_Scheme_2, float CallFunc_Lerp_ReturnValue, const struct FST_WeatherScheme& CallFunc_GetWeatherScheme_Scheme_3, float CallFunc_MapRangeUnclamped_ReturnValue_4, float CallFunc_MapRangeUnclamped_ReturnValue_5, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, float Temp_float_Variable, const struct FST_WeatherScheme& CallFunc_GetWeatherScheme_Scheme_4, const struct FST_WeatherScheme& CallFunc_GetWeatherScheme_Scheme_5, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_7, float CallFunc_MapRangeUnclamped_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_9, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_MapRangeUnclamped_ReturnValue_10, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_11, float CallFunc_MapRangeUnclamped_ReturnValue_12, bool CallFunc_Less_FloatFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_3, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_SelectFloat_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, float CallFunc_MapRangeUnclamped_ReturnValue_13, float CallFunc_MapRangeUnclamped_ReturnValue_14, bool CallFunc_Less_FloatFloat_ReturnValue_5, float CallFunc_SelectFloat_ReturnValue_6, float CallFunc_MapRangeUnclamped_ReturnValue_15, float CallFunc_GetFloatValue_ReturnValue_6, float CallFunc_MapRangeUnclamped_ReturnValue_16, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_6, float CallFunc_SelectFloat_ReturnValue_7, float Temp_float_Variable_1, float CallFunc_GetFloatValue_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float K2Node_Select_Default, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UMaterialInterface* K2Node_Select_Default_1, float CallFunc_MapRangeUnclamped_ReturnValue_17, float CallFunc_GetFloatValue_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_4, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_18, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_GetFloatValue_ReturnValue_9, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, float CallFunc_MapRangeUnclamped_ReturnValue_19, float CallFunc_MapRangeUnclamped_ReturnValue_20, float CallFunc_Lerp_ReturnValue_11, float CallFunc_Lerp_ReturnValue_12, bool CallFunc_Less_FloatFloat_ReturnValue_7, float CallFunc_SelectFloat_ReturnValue_8, float CallFunc_GetFloatValue_ReturnValue_10, float CallFunc_SelectFloat_ReturnValue_9, float CallFunc_GetFloatValue_ReturnValue_11, float CallFunc_GetFloatValue_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_5, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_6, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_6, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_8, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_10, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_13, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_8, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_14, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_15, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_16, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_17, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_18, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_9, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_10, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_19, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_20, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_6, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_21, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_22, const struct FLinearColor& K2Node_Select_Default_2, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_FClamp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_23, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_24, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "Set Material Variables");

	Params::AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params Parms{};

	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_2 = CallFunc_MapRangeUnclamped_ReturnValue_2;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_3 = CallFunc_MapRangeUnclamped_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWeatherScheme_Scheme = CallFunc_GetWeatherScheme_Scheme;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_GetWeatherScheme_Scheme_1 = CallFunc_GetWeatherScheme_Scheme_1;
	Parms.CallFunc_GetWeatherScheme_Scheme_2 = CallFunc_GetWeatherScheme_Scheme_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetWeatherScheme_Scheme_3 = CallFunc_GetWeatherScheme_Scheme_3;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_4 = CallFunc_MapRangeUnclamped_ReturnValue_4;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_5 = CallFunc_MapRangeUnclamped_ReturnValue_5;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetWeatherScheme_Scheme_4 = CallFunc_GetWeatherScheme_Scheme_4;
	Parms.CallFunc_GetWeatherScheme_Scheme_5 = CallFunc_GetWeatherScheme_Scheme_5;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_6 = CallFunc_MapRangeUnclamped_ReturnValue_6;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_7 = CallFunc_MapRangeUnclamped_ReturnValue_7;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_8 = CallFunc_MapRangeUnclamped_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_9 = CallFunc_MapRangeUnclamped_ReturnValue_9;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_10 = CallFunc_MapRangeUnclamped_ReturnValue_10;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_11 = CallFunc_MapRangeUnclamped_ReturnValue_11;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_12 = CallFunc_MapRangeUnclamped_ReturnValue_12;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_2 = CallFunc_Multiply_LinearColorFloat_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_13 = CallFunc_MapRangeUnclamped_ReturnValue_13;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_14 = CallFunc_MapRangeUnclamped_ReturnValue_14;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_5 = CallFunc_Less_FloatFloat_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_15 = CallFunc_MapRangeUnclamped_ReturnValue_15;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_16 = CallFunc_MapRangeUnclamped_ReturnValue_16;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_6 = CallFunc_Less_FloatFloat_ReturnValue_6;
	Parms.CallFunc_SelectFloat_ReturnValue_7 = CallFunc_SelectFloat_ReturnValue_7;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_17 = CallFunc_MapRangeUnclamped_ReturnValue_17;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_2 = CallFunc_Conv_RotatorToVector_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_18 = CallFunc_MapRangeUnclamped_ReturnValue_18;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_19 = CallFunc_MapRangeUnclamped_ReturnValue_19;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_20 = CallFunc_MapRangeUnclamped_ReturnValue_20;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_7 = CallFunc_Less_FloatFloat_ReturnValue_7;
	Parms.CallFunc_SelectFloat_ReturnValue_8 = CallFunc_SelectFloat_ReturnValue_8;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_9 = CallFunc_SelectFloat_ReturnValue_9;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_1 = CallFunc_GetLinearColorValue_ReturnValue_1;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_2 = CallFunc_GetLinearColorValue_ReturnValue_2;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_3 = CallFunc_GetLinearColorValue_ReturnValue_3;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_4 = CallFunc_GetLinearColorValue_ReturnValue_4;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_5 = CallFunc_GetLinearColorValue_ReturnValue_5;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_6 = CallFunc_GetLinearColorValue_ReturnValue_6;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_7 = CallFunc_GetLinearColorValue_ReturnValue_7;
	Parms.CallFunc_LinearColorLerp_ReturnValue_3 = CallFunc_LinearColorLerp_ReturnValue_3;
	Parms.CallFunc_LinearColorLerp_ReturnValue_4 = CallFunc_LinearColorLerp_ReturnValue_4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_3 = CallFunc_Multiply_LinearColorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_4 = CallFunc_Multiply_LinearColorFloat_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue_5 = CallFunc_LinearColorLerp_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_6 = CallFunc_LinearColorLerp_ReturnValue_6;
	Parms.CallFunc_LinearColorLerp_ReturnValue_7 = CallFunc_LinearColorLerp_ReturnValue_7;
	Parms.CallFunc_LinearColorLerp_ReturnValue_8 = CallFunc_LinearColorLerp_ReturnValue_8;
	Parms.CallFunc_LinearColorLerp_ReturnValue_9 = CallFunc_LinearColorLerp_ReturnValue_9;
	Parms.CallFunc_LinearColorLerp_ReturnValue_10 = CallFunc_LinearColorLerp_ReturnValue_10;
	Parms.CallFunc_LinearColorLerp_ReturnValue_11 = CallFunc_LinearColorLerp_ReturnValue_11;
	Parms.CallFunc_LinearColorLerp_ReturnValue_12 = CallFunc_LinearColorLerp_ReturnValue_12;
	Parms.CallFunc_LinearColorLerp_ReturnValue_13 = CallFunc_LinearColorLerp_ReturnValue_13;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_8 = CallFunc_GetLinearColorValue_ReturnValue_8;
	Parms.CallFunc_LinearColorLerp_ReturnValue_14 = CallFunc_LinearColorLerp_ReturnValue_14;
	Parms.CallFunc_LinearColorLerp_ReturnValue_15 = CallFunc_LinearColorLerp_ReturnValue_15;
	Parms.CallFunc_LinearColorLerp_ReturnValue_16 = CallFunc_LinearColorLerp_ReturnValue_16;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_5 = CallFunc_Multiply_LinearColorFloat_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_17 = CallFunc_LinearColorLerp_ReturnValue_17;
	Parms.CallFunc_LinearColorLerp_ReturnValue_18 = CallFunc_LinearColorLerp_ReturnValue_18;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_9 = CallFunc_GetLinearColorValue_ReturnValue_9;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_10 = CallFunc_GetLinearColorValue_ReturnValue_10;
	Parms.CallFunc_LinearColorLerp_ReturnValue_19 = CallFunc_LinearColorLerp_ReturnValue_19;
	Parms.CallFunc_LinearColorLerp_ReturnValue_20 = CallFunc_LinearColorLerp_ReturnValue_20;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_6 = CallFunc_Multiply_LinearColorFloat_ReturnValue_6;
	Parms.CallFunc_LinearColorLerp_ReturnValue_21 = CallFunc_LinearColorLerp_ReturnValue_21;
	Parms.CallFunc_LinearColorLerp_ReturnValue_22 = CallFunc_LinearColorLerp_ReturnValue_22;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_1 = CallFunc_Conv_LinearColorToColor_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue_23 = CallFunc_LinearColorLerp_ReturnValue_23;
	Parms.CallFunc_LinearColorLerp_ReturnValue_24 = CallFunc_LinearColorLerp_ReturnValue_24;
	Parms.CallFunc_LinearColorLerp_ReturnValue_25 = CallFunc_LinearColorLerp_ReturnValue_25;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAxes_X                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAxes_Y                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAxes_Z                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAxes_X_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAxes_Y_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAxes_Z_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromXY_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUltra_Dynamic_Sky_BP_C::Set_Solar_Angle(const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_GetAxes_X, const struct FVector& CallFunc_GetAxes_Y, const struct FVector& CallFunc_GetAxes_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FVector& CallFunc_GetAxes_X_1, const struct FVector& CallFunc_GetAxes_Y_1, const struct FVector& CallFunc_GetAxes_Z_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, bool CallFunc_K2_SetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "Set Solar Angle");

	Params::AUltra_Dynamic_Sky_BP_C_Set_Solar_Angle_Params Parms{};

	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_GetAxes_X = CallFunc_GetAxes_X;
	Parms.CallFunc_GetAxes_Y = CallFunc_GetAxes_Y;
	Parms.CallFunc_GetAxes_Z = CallFunc_GetAxes_Z;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_GetAxes_X_1 = CallFunc_GetAxes_X_1;
	Parms.CallFunc_GetAxes_Y_1 = CallFunc_GetAxes_Y_1;
	Parms.CallFunc_GetAxes_Z_1 = CallFunc_GetAxes_Z_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_4 = CallFunc_MakeRotator_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_MakeRotFromXY_ReturnValue = CallFunc_MakeRotFromXY_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_5 = CallFunc_MakeRotator_ReturnValue_5;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_1 = CallFunc_K2_SetActorRotation_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_2 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_BP_C::UserConstructionScript(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_2, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "UserConstructionScript");

	Params::AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "ReceiveTick");

	Params::AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Sky_BP_C", "ExecuteUbergraph_Ultra_Dynamic_Sky_BP");

	Params::AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


