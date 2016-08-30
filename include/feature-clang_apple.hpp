#if !defined(__cpp_enumerator_attributes)           &&  (__clang_major__ > 6 || __clang_major__ == 6 && __clang_minor__ >= 1)
#define __cpp_enumerator_attributes                     201411
#endif

#if !defined(__cpp_fold_expressions)                &&  (__clang_major__ > 6 || __clang_major__ == 6 && __clang_minor__ >= 1)
#define __cpp_fold_expressions                          201411
#endif

#if !defined(__cpp_namespace_attributes)            &&  (__clang_major__ > 6 || __clang_major__ == 6 && __clang_minor__ >= 1)
#define __cpp_namespace_attributes                      201411
#endif

#if !defined(__cpp_nested_namespace_definitions)    &&  (__clang_major__ > 6 || __clang_major__ == 6 && __clang_minor__ >= 1)
#define __cpp_nested_namespace_definitions              201411
#endif

#if !defined(__cpp_nontype_template_args)           &&  (__clang_major__ > 6 || __clang_major__ == 6 && __clang_minor__ >= 1)
#define __cpp_nontype_template_args                     201411
#endif

#if (__cpp_static_assert < 201411)                  &&  (__clang_major__ > 6 || __clang_major__ == 6 && __clang_minor__ >= 0)
#undef __cpp_static_assert
#define __cpp_static_assert                             201411
#endif
