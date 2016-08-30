#include <feature.hpp>
#include <iostream>

struct { const char* name; int value; } suite_cpp[] = {
{
    "access_control_sfinae"
        #if __has_feature(cxx_access_control_sfinae)
        , 1
        #endif
},{
    "aggregate_nsdmi"
        #ifdef __cpp_aggregate_nsdmi
        , 1
        #endif

        #if !__has_feature(cxx_aggregate_nsdmi) != !__cpp_aggregate_nsdmi
        #error Feature test macro inconsistency: !__has_feature(cxx_aggregate_nsdmi) != !__cpp_aggregate_nsdmi
        #endif
},{
    "alias_templates"
        #ifdef __cpp_alias_templates
        , 1
        #endif

        #if !__has_feature(cxx_alias_templates) != !__cpp_alias_templates
        #error Feature test macro inconsistency: !__has_feature(cxx_alias_templates) != !__cpp_alias_templates
        #endif
},{
    "alignas"
        #if __has_feature(cxx_alignas)
        , 1
        #endif
},{
    "alignof"
        #if __has_feature(cxx_alignof)
        , 1
        #endif
},{
    "attributes"
        #ifdef __cpp_attributes
        , 1
        #endif

        #if !__has_feature(cxx_attributes) != !__cpp_attributes
        #error Feature test macro inconsistency: !__has_feature(cxx_attributes) != !__cpp_attributes
        #endif
},{
    "auto_type"
        #if __has_feature(cxx_auto_type)
        , 1
        #endif
},{
    "binary_literals"
        #ifdef __cpp_binary_literals
        , 1
        #endif

        #if !__has_feature(cxx_binary_literals) != !__cpp_binary_literals
        #error Feature test macro inconsistency: !__has_feature(cxx_binary_literals) != !__cpp_binary_literals
        #endif
},{
    "constexpr"
        #ifdef __cpp_constexpr
        , 1
        #endif

        #if !__has_feature(cxx_constexpr) != !__cpp_constexpr
        #error Feature test macro inconsistency: !__has_feature(cxx_constexpr) != !__cpp_constexpr
        #endif
},{
    "constexpr-201304"
        #if defined(__cpp_constexpr) && (__cpp_constexpr >= 201304)
        , 1
        #endif
},{
    "decltype"
        #ifdef __cpp_decltype
        , 1
        #endif

        #if !__has_feature(cxx_decltype) != !__cpp_decltype
        #error Feature test macro inconsistency: !__has_feature(cxx_decltype) != !__cpp_decltype
        #endif
},{
    "decltype_auto"
        #ifdef __cpp_decltype_auto
        , 1
        #endif

        #if !__has_feature(cxx_decltype_auto) != !__cpp_decltype_auto
        #error Feature test macro inconsistency: !__has_feature(cxx_decltype_auto) != !__cpp_decltype_auto
        #endif
},{
    "delegating_constructors"
        #ifdef __cpp_delegating_constructors
        , 1
        #endif

        #if !__has_feature(cxx_delegating_constructors) != !__cpp_delegating_constructors
        #error Feature test macro inconsistency: !__has_feature(cxx_delegating_constructors) != !__cpp_delegating_constructors
        #endif
},{
    "enumerator_attributes"
        #ifdef __cpp_enumerator_attributes
        , 1
        #endif
},{
    "exceptions"
        #ifdef __cpp_exceptions
        , 1
        #endif

        #if !__has_feature(cxx_exceptions) != !__cpp_exceptions
        #error Feature test macro inconsistency: !__has_feature(cxx_exceptions) != !__cpp_exceptions
        #endif
},{
    "fold_expressions"
        #ifdef __cpp_fold_expressions
        , 1
        #endif
},{
    "generic_lambdas"
        #ifdef __cpp_generic_lambdas
        , 1
        #endif

        #if !__has_feature(cxx_generic_lambdas) != !__cpp_generic_lambdas
        #error Feature test macro inconsistency: !__has_feature(cxx_generic_lambdas) != !__cpp_generic_lambdas
        #endif
},{
    "inheriting_constructors"
        #ifdef __cpp_inheriting_constructors
        , 1
        #endif

        #if !__has_feature(cxx_inheriting_constructors) != !__cpp_inheriting_constructors
        #error Feature test macro inconsistency: !__has_feature(cxx_inheriting_constructors) != !__cpp_inheriting_constructors
        #endif
},{
    "init_captures"
        #ifdef __cpp_init_captures
        , 1
        #endif

        #if !__has_feature(cxx_init_captures) != !__cpp_init_captures
        #error Feature test macro inconsistency: !__has_feature(cxx_init_captures) != !__cpp_init_captures
        #endif
},{
    "initializer_lists"
        #ifdef __cpp_initializer_lists
        , 1
        #endif
},{
    "lambdas"
        #ifdef __cpp_lambdas
        , 1
        #endif

        #if !__has_feature(cxx_lambdas) != !__cpp_lambdas
        #error Feature test macro inconsistency: !__has_feature(cxx_lambdas) != !__cpp_lambdas
        #endif
},{
    "lambdas-200907"
        #if defined(__cpp_lambdas) && (__cpp_lambdas >= 200907)
        , 1
        #endif
},{
    "namespace_attributes"
        #ifdef __cpp_namespace_attributes
        , 1
        #endif
},{
    "nested_namespace_definitions"
        #ifdef __cpp_nested_namespace_definitions
        , 1
        #endif
},{
    "noexcept"
        #if __has_feature(cxx_noexcept)
        , 1
        #endif
},{
    "noexcept_function_type"
        #ifdef __cpp_noexcept_function_type
        , 1
        #endif

        #if !__has_feature(cxx_noexcept_function_type) != !__cpp_noexcept_function_type
        #error Feature test macro inconsistency: !__has_feature(cxx_noexcept_function_type) != !__cpp_noexcept_function_type
        #endif
},{
    "nontype_template_args"
        #ifdef __cpp_nontype_template_args
        , 1
        #endif
},{
    "nsdmi"
        #ifdef __cpp_nsdmi
        , 1
        #endif
},{
    "range_based_for"
        #ifdef __cpp_range_based_for
        , 1
        #endif

        #if !__has_feature(cxx_range_for) != !__cpp_range_based_for
        #error Feature test macro inconsistency: !__has_feature(cxx_range_for) != !__cpp_range_based_for
        #endif
},{
    "raw_strings"
        #ifdef __cpp_raw_strings
        , 1
        #endif

        #if !__has_feature(cxx_raw_string_literals) != !__cpp_raw_strings
        #error Feature test macro inconsistency: !__has_feature(cxx_raw_string_literals) != !__cpp_raw_strings
        #endif
},{
    "raw_unicode_strings"
        #if defined(__cpp_raw_strings) && defined(__cpp_unicode_literals)
        , 1
        #endif
},{
    "ref_qualifiers"
        #ifdef __cpp_ref_qualifiers
        , 1
        #endif

        #if !__has_feature(cxx_reference_qualified_functions) != !__cpp_ref_qualifiers
        #error Feature test macro inconsistency: !__has_feature(cxx_reference_qualified_functions) != !__cpp_ref_qualifiers
        #endif
},{
    "return_type_deduction"
        #ifdef __cpp_return_type_deduction
        , 1
        #endif

        #if !__has_feature(cxx_return_type_deduction) != !__cpp_return_type_deduction
        #error Feature test macro inconsistency: !__has_feature(cxx_return_type_deduction) != !__cpp_return_type_deduction
        #endif
},{
    "rtti"
        #ifdef __cpp_rtti
        , 1
        #endif

        #if !__has_feature(cxx_rtti) != !__cpp_rtti
        #error Feature test macro inconsistency: !__has_feature(cxx_rtti) != !__cpp_rtti
        #endif
},{
    "rvalue_references"
        #ifdef __cpp_rvalue_references
        , 1
        #endif

        #if !__has_feature(cxx_rvalue_references) != !__cpp_rvalue_references
        #error Feature test macro inconsistency: !__has_feature(cxx_rvalue_references) != !__cpp_rvalue_references
        #endif
},{
    "sized_deallocation"
        #ifdef __cpp_sized_deallocation
        , 1
        #endif
},{
    "static_assert"
        #ifdef __cpp_static_assert
        , 1
        #endif

        #if !__has_feature(cxx_static_assert) != !__cpp_static_assert
        #error Feature test macro inconsistency: !__has_feature(cxx_static_assert) != !__cpp_static_assert
        #endif
},{
    "static_assert-201411"
        #if defined(__cpp_static_assert) && (__cpp_static_assert >= 201411)
        , 1
        #endif
},{
    "unicode_characters"
        #ifdef __cpp_unicode_characters
        , 1
        #endif
},{
    "unicode_literals"
        #ifdef __cpp_unicode_literals
        , 1
        #endif

        #if !__has_feature(cxx_unicode_literals) != !__cpp_unicode_literals
        #error Feature test macro inconsistency: !__has_feature(cxx_unicode_literals) != !__cpp_unicode_literals
        #endif
},{
    "user_defined_literals"
        #ifdef __cpp_user_defined_literals
        , 1
        #endif

        #if !__has_feature(cxx_user_literals) != !__cpp_user_defined_literals
        #error Feature test macro inconsistency: !__has_feature(cxx_user_literals) != !__cpp_user_defined_literals
        #endif
},{
    "variable_templates"
        #ifdef __cpp_variable_templates
        , 1
        #endif

        #if !__has_feature(cxx_variable_templates) != !__cpp_variable_templates
        #error Feature test macro inconsistency: !__has_feature(cxx_variable_templates) != !__cpp_variable_templates
        #endif
},{
    "variadic_templates"
        #ifdef __cpp_variadic_templates
        , 1
        #endif

        #if !__has_feature(cxx_variadic_templates) != !__cpp_variadic_templates
        #error Feature test macro inconsistency: !__has_feature(cxx_variadic_templates) != !__cpp_variadic_templates
        #endif
}
};

int main()
{
    for(unsigned i = 0; i < sizeof(suite_cpp) / sizeof(suite_cpp[0]); ++i)
    {
        std::cout << suite_cpp[i].value << " cpp/" << suite_cpp[i].name << std::endl;
    }
}
