/*
User-defined literals are supported.

Reference:
    [N2765](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2765.pdf)

Check with:
    #ifdef __cpp_user_defined_literals
    #if __has_feature(cxx_user_literals)
*/

#include <cstddef>

unsigned operator "" _w(const char*) { return 0; }
long double operator "" _w(long double) { return 0; }
const char* operator "" _w(const char*, std::size_t) { return ""; }

int main()
{
    12_w;       // calls operator "" _w("12")
    1.2_w;      // calls operator "" _w(1.2L)
    "one"_w;    // calls operator "" _w("one", 3)
}
