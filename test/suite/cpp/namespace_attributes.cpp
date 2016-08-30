/*
Attribute syntax is allowed on namespace declarations.

Reference:
    [N4266](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

Check with:
    #ifdef __cpp_namespace_attributes
*/

namespace [[attr]]
{
}

int main()
{
}
