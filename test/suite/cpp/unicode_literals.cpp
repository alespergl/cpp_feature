/*
Unicode string literals are supported.

Reference:
    [N2442](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)

Check with:
    #ifdef __cpp_unicode_literals
    #if __has_feature(cxx_unicode_literals)
*/

const void* u8 = u8"UTF-8 literal";
const void* u = u"UTF-16 literal";
const void* U = U"UTF-32 literal";

int main()
{
}
