/*
The decltype specifier is supported.

References:
    [N2343](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2343.pdf)

Check with:
    #ifdef __cpp_decltype
    #if __has_feature(cxx_decltype)
*/

template<class T, class U, class X = void> struct enable_if_same {};
template<class T, class X> struct enable_if_same<T, T, X> { typedef X type; };


const int& foo();
int i;
struct S { double x; };
const S* s = new S();

enable_if_same<
    decltype(foo()), const int&
    , int>::type a;

enable_if_same<
    decltype(i), int
    , int>::type b;

enable_if_same<
    decltype(s->x), double
    , int>::type c;

enable_if_same<
    decltype((s->x)), const double&
    , int>::type d;

int main()
{
}
