/*
The attributes syntax is supported.

Reference:
    [N2761](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2761.pdf)

Check with:
    #ifdef __cpp_attributes
    #if __has_feature(cxx_attributes)
*/

struct [[attr]] S {} s;

[[noreturn]] void f()
{
    throw "error";
}

void a() {}
void b() {}

void g(int n)
{
    switch(n)
    {
    case 1:
        a();
        [[fallthrough]];
    default:
        b();
    }
}

[[maybe_unused]] void h([[maybe_unused]] int i)
{
    [[maybe_unused]] bool b = (i != 0);
}

int main()
{
}
