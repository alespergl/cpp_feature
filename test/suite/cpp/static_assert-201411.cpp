/*
Single-parameter static_assert is supported.

Reference:
    [N3928](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf)

Check with:
    #if defined(__cpp_static_assert) && (__cpp_static_assert >= 201411)
*/

static_assert(42 > 0);

int main()
{
}
