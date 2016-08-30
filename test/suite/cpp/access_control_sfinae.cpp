/*
Access-control errors should be considered template argument deduction errors.

Reference:
    [DR1170](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#1170)

Check with:
    #if __has_feature(cxx_access_control_sfinae)
*/

#include <cstdio>

class X
{
    X() {}
};

template<bool N>
struct A
{
    int a[2 + N];
};

// If T has inaccessible default constructor, this template should be disqualified during matching
template<class T>
A<!!sizeof(new T())> f();

template<class T>
int f(...);

int main()
{
    if(sizeof(f<X>()) != sizeof(int))
    {
        puts("ERROR: private constructor contributed to template argument deduction");
        return 1;
    }
}
