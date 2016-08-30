/*
Nested namespace definition syntax is supported.

Reference:
    [N4230](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4230.html)

Check with:
    #ifdef __cpp_nested_namespace_definitions
*/

namespace A::B
{
    static int f()
    {
        return 42;
    }
}

int i = A::B::f();

int main()
{
}
