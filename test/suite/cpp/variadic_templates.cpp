/*
Variadic templates are supported.

Reference:
    [N2242](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2242.pdf)

Check with:
    #ifdef __cpp_variadic_templates
    #if __has_feature(cxx_variadic_templates)
*/

template<class ... Types>
void f(Types ... args)
{
}

int main()
{
    f();
    f(1);
    f(2, 1.0);
}
