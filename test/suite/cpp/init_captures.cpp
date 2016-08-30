/*
The init-capture syntax is supported in lambda expressions.

Reference:
    [N3648](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3648.html)

Check with:
    #ifdef __cpp_init_captures
    #if __has_feature(cxx_init_captures)
*/

int x = 4;
auto y = [&r = x, x = x + 1]() -> int
{
    r += 2;
    return x + 2;
}();

int main()
{
}
