/*
Relaxed constant expressions are supported.

Reference:
    [N2235](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2235.pdf)
    [N3652](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html)

Check with:
    #if defined(__cpp_constexpr) && (__cpp_constexpr >= 201304)
*/

constexpr int abs(int x)
{
    if(x < 0) x = -x;
    return x;
}

int main()
{
}
