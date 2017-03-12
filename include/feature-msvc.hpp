#define __cpp_aggregate_nsdmi               (_MSC_VER >= 1910 ? 201304 : 0)
#if !   __cpp_aggregate_nsdmi
#undef  __cpp_aggregate_nsdmi
#endif

#define __cpp_alias_templates               (_MSC_VER >= 1800 ? 200704 : 0)
#if !   __cpp_alias_templates
#undef  __cpp_alias_templates
#endif

#define __cpp_attributes                    (_MSC_VER >= 1900 ? 200809 : 0)
#if !   __cpp_attributes
#undef  __cpp_attributes
#endif

#define __cpp_binary_literals               (_MSC_VER >= 1900 ? 201304 : 0)
#if !   __cpp_binary_literals
#undef  __cpp_binary_literals
#endif

#define __cpp_constexpr                     (_MSC_VER >= 1910 ? 201304 : (_MSC_VER >= 1900 ? 200704 : 0))
#if !   __cpp_constexpr
#undef  __cpp_constexpr
#endif

#define __cpp_decltype                      (_MSC_VER >= 1600 ? 200707 : 0)
#if !   __cpp_decltype
#undef  __cpp_decltype
#endif

#define __cpp_decltype_auto                 (_MSC_VER >= 1900 ? 201304 : 0)
#if !   __cpp_decltype_auto
#undef  __cpp_decltype_auto
#endif

#define __cpp_delegating_constructors       (_MSC_VER >= 1800 ? 200604 : 0)
#if !   __cpp_delegating_constructors
#undef  __cpp_delegating_constructors
#endif

#define __cpp_enumerator_attributes         (_MSC_VER >= 1900 ? 201411 : 0)
#if !   __cpp_enumerator_attributes
#undef  __cpp_enumerator_attributes
#endif

#define __cpp_exceptions                    (_CPPUNWIND ? 199711 : 0)
#if !   __cpp_exceptions
#undef  __cpp_exceptions
#endif

#define __cpp_fold_expressions              0
#if !   __cpp_fold_expressions
#undef  __cpp_fold_expressions
#endif

#define __cpp_generic_lambdas               (_MSC_VER >= 1900 ? 201304 : 0)
#if !   __cpp_generic_lambdas
#undef  __cpp_generic_lambdas
#endif

#define __cpp_inheriting_constructors       (_MSC_VER >= 1900 ? 201511 : 0)
#if !   __cpp_inheriting_constructors
#undef  __cpp_inheriting_constructors
#endif

#define __cpp_init_captures                 (_MSC_VER >= 1900 ? 201304 : 0)
#if !   __cpp_init_captures
#undef  __cpp_init_captures
#endif

#define __cpp_initializer_lists             (_MSC_VER >= 1800 ? 200806 : 0)
#if !   __cpp_initializer_lists
#undef  __cpp_initializer_lists
#endif

#define __cpp_lambdas                       (_MSC_VER >= 1910 ? 200907 : (_MSC_VER >= 1600))
#if !   __cpp_lambdas
#undef  __cpp_lambdas
#endif

#define __cpp_namespace_attributes          (_MSC_VER >= 1900 ? 201411 : 0)
#if !   __cpp_namespace_attributes
#undef  __cpp_namespace_attributes
#endif

#define __cpp_nested_namespace_definitions  (_MSC_VER > 1900 || _MSC_VER == 1900 && _MSVC_LANG >= 201403 ? 201411 : 0)
#if !   __cpp_nested_namespace_definitions
#undef  __cpp_nested_namespace_definitions
#endif

#define __cpp_noexcept_function_type        0
#if !   __cpp_noexcept_function_type
#undef  __cpp_noexcept_function_type
#endif

#define __cpp_nontype_template_args         201411

#define __cpp_nsdmi                         (_MSC_VER >= 1800 ? 200809 : 0)
#if !   __cpp_nsdmi
#undef  __cpp_nsdmi
#endif

#define __cpp_range_based_for               (_MSC_VER >= 1700 ? 200907 : 0)
#if !   __cpp_range_based_for
#undef  __cpp_range_based_for
#endif

#define __cpp_raw_strings                   (_MSC_VER >= 1800 ? 200710 : 0)
#if !   __cpp_raw_strings
#undef  __cpp_raw_strings
#endif

#define __cpp_ref_qualifiers                (_MSC_VER >= 1900 ? 200710 : 0)
#if !   __cpp_ref_qualifiers
#undef  __cpp_ref_qualifiers
#endif

#define __cpp_return_type_deduction         (_MSC_VER >= 1900 ? 201304 : 0)
#if !   __cpp_return_type_deduction
#undef  __cpp_return_type_deduction
#endif

#define __cpp_rtti                          (_CPPRTTI ? 199711 : 0)
#if !   __cpp_rtti
#undef  __cpp_rtti
#endif

#define __cpp_rvalue_references             (_MSC_VER >= 1600 ? 200610 : 0)
#if !   __cpp_rvalue_references
#undef  __cpp_rvalue_references
#endif

#define __cpp_sized_deallocation            (_MSC_VER >= 1900 ? 201309 : 0)
#if !   __cpp_sized_deallocation
#undef  __cpp_sized_deallocation
#endif

#define __cpp_static_assert                 (_MSC_VER >= 1910 ? 201411 : (_MSC_VER >= 1600 ? 200410 : 0))
#if !   __cpp_static_assert
#undef  __cpp_static_assert
#endif

#define __cpp_unicode_characters            (_MSC_VER >= 1900 ? 200704 : 0)
#if !   __cpp_unicode_characters
#undef  __cpp_unicode_characters
#endif

#define __cpp_unicode_literals              (_MSC_VER >= 1900 ? 200710 : 0)
#if !   __cpp_unicode_literals
#undef  __cpp_unicode_literals
#endif

#define __cpp_user_defined_literals         (_MSC_VER >= 1900 ? 200809 : 0)
#if !   __cpp_user_defined_literals
#undef  __cpp_user_defined_literals
#endif

#define __cpp_variable_templates            (_MSC_VER > 1900 || _MSC_VER == 1900 && _MSC_FULL_VER >= 190023918 ? 201304 : 0)
#if !   __cpp_variable_templates
#undef  __cpp_variable_templates
#endif

#define __cpp_variadic_templates            (_MSC_VER >= 1800 ? 200704 : 0)
#if !   __cpp_variadic_templates
#undef  __cpp_variadic_templates
#endif


#define __has_feature__cxx_access_control_sfinae            (_MSC_VER == 1900)
#define __has_feature__cxx_aggregate_nsdmi                  (_MSC_VER >= 1910)
#define __has_feature__cxx_alias_templates                  (_MSC_VER >= 1800)
#define __has_feature__cxx_alignas                          (_MSC_VER >= 1900)
#define __has_feature__cxx_alignof                          (_MSC_VER >= 1900)
#define __has_feature__cxx_attributes                       (_MSC_VER >= 1900)
#define __has_feature__cxx_auto_type                        (_MSC_VER >= 1600)
#define __has_feature__cxx_binary_literals                  (_MSC_VER >= 1900)
#define __has_feature__cxx_constexpr                        (_MSC_VER >= 1900)
#define __has_feature__cxx_decltype                         (_MSC_VER >= 1600)
#define __has_feature__cxx_decltype_auto                    (_MSC_VER >= 1900)
#define __has_feature__cxx_delegating_constructors          (_MSC_VER >= 1800)
#define __has_feature__cxx_exceptions                       (_CPPUNWIND)
#define __has_feature__cxx_generic_lambdas                  (_MSC_VER >= 1900)
#define __has_feature__cxx_inheriting_constructors          (_MSC_VER >= 1900)
#define __has_feature__cxx_init_captures                    (_MSC_VER >= 1900)
#define __has_feature__cxx_lambdas                          (_MSC_VER >= 1600)
#define __has_feature__cxx_noexcept                         (_MSC_VER >= 1900)
#define __has_feature__cxx_range_for                        (_MSC_VER >= 1700)
#define __has_feature__cxx_raw_string_literals              (_MSC_VER >= 1800)
#define __has_feature__cxx_reference_qualified_functions    (_MSC_VER >= 1900)
#define __has_feature__cxx_return_type_deduction            (_MSC_VER >= 1900)
#define __has_feature__cxx_rtti                             (_CPPRTTI)
#define __has_feature__cxx_rvalue_references                (_MSC_VER >= 1600)
#define __has_feature__cxx_static_assert                    (_MSC_VER >= 1600)
#define __has_feature__cxx_unicode_literals                 (_MSC_VER >= 1900)
#define __has_feature__cxx_user_literals                    (_MSC_VER >= 1900)
#define __has_feature__cxx_variable_templates               (_MSC_VER > 1900 || _MSC_VER == 1900 && _MSC_FULL_VER >= 190023918)
#define __has_feature__cxx_variadic_templates               (_MSC_VER >= 1800)
