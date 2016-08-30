/*
Non-static data member initializers are supported.

Reference:
    [N2756](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2756.htm)

Check with:
    #ifdef __cpp_nsdmi
*/

class A
{
public:
    int a = 7;
};

int main()
{
}
