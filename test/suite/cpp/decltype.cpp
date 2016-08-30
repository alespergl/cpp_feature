/*
The decltype specifier is supported.

References:
    [N2343](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2343.pdf)

Check with:
    #ifdef __cpp_decltype
    #if __has_feature(cxx_decltype)
*/

#include <type_traits>

const int& foo();
int i;
struct S { double x; };
const S* s = new S();

std::enable_if<std::is_same<
    decltype(foo()), const int&
>::value, int>::type a;

std::enable_if<std::is_same<
    decltype(i), int
>::value, int>::type b;

std::enable_if<std::is_same<
    decltype(s->x), double
>::value, int>::type c;

std::enable_if<std::is_same<
    decltype((s->x)), const double&
>::value, int>::type d;

int main()
{
}
