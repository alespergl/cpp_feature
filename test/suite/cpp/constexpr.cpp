/*
Constant expressions are supported.

Reference:
    [N2235](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2235.pdf)

Check with:
    #ifdef __cpp_constexpr
    #if __has_feature(cxx_constexpr)
*/

constexpr int square(int x)
{
    return x * x;
}

int main()
{
}
