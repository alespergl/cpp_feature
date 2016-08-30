/*
The auto type specifier is supported.

Check with:
    #if __has_feature(cxx_auto_type)
*/

struct S {};

S g() { return S(); }

auto i = 42;
auto f = 1.0;
auto s = g();

int main()
{
}
