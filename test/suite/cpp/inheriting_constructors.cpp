/*
Inheriting constructors are supported.

Reference:
    [N2540](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2540.htm)

Check with:
    #ifdef __cpp_inheriting_constructors
    #if __has_feature(cxx_inheriting_constructors)
*/

struct B
{
    B(int) {}
};

struct D : B
{
    using B::B;
    int x;
};

D d(1);

int main()
{
}
