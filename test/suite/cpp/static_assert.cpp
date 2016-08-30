/*
The static_assert declaration is supported.

Reference:
    [N1720](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1720.html)

Check with:
    #ifdef __cpp_static_assert
    #if __has_feature(cxx_static_assert)
*/

static_assert(42 > 0, "functional arithmetic is required");

int main()
{
}
