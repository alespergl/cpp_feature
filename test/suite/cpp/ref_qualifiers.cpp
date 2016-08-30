/*
Ref-qualifiers on member functions are supported.

Reference:
    [N2439](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2439.htm)

Check with:
    #ifdef __cpp_ref_qualifiers
    #if __has_feature(cxx_reference_qualified_functions)
*/

class X
{
    void f() & {}
    void f() const & {}
    void f() && {}
} x;

int main()
{
}
