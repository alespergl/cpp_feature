/*
Exception specification is part of function prototype.

Reference:
    [P0012R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0012r1.html)

Check with:
    #ifdef __cpp_noexcept_function_type
    #if __has_feature(cxx_noexcept_function_type)
*/

#include <type_traits>

typedef void F();
typedef void G() noexcept;

std::enable_if<
    !std::is_same<F, G>::value,
    int
>::type i = 42;

int main()
{
}
