/*
Aggregates may include member initializers.

Reference:
    [N3653](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3653.html)

Check with:
    #ifdef __cpp_aggregate_nsdmi
    #if __has_feature(cxx_aggregate_nsdmi)
*/

#include <cstdio>

struct S
{
    int a;
    const char* b;
    int c;
    int d = b[a];   // this should compile without errors
};

S ss = { 1, "asdf" };   // ss.d == 's'

int main()
{
    if(ss.d != 's') puts("ERROR: aggregate member initialization with equal-initializer doesn't work");
}
