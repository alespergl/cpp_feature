/*
Support for template aliases is available.

Reference:
    [N2258](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2258.pdf)

Check with:
    #ifdef __cpp_alias_templates
    #if __has_feature(cxx_alias_templates)
*/

template<class T, class U> struct X {};
template<class T> using Y = X<T, int>;
using Z = Y<char>;

template<class T> void f(Y<T>&);
void g(Z&);

int main()
{
}
