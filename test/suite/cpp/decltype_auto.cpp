/*
The decltype(auto) type specifier is supported.

References:
    [N3638](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3638.html)

Check with:
    #ifdef __cpp_decltype_auto
    #if __has_feature(cxx_decltype_auto)
*/

int i;
int&& f() { return static_cast<int&&>(i); }
decltype(auto) n = i;
decltype(auto) m = f();

int main()
{
}
