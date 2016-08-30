/*
Rvalue references are supported.

Reference:
    [N2118](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2118.html)

Check with:
    #ifdef __cpp_rvalue_references
    #if __has_feature(cxx_rvalue_references)
*/

int i = 42;
double&& rd = (double)i;    // reference bound to temporary double

void f(int& x) {}
void f(const int& x) {}
void f(int&& x) {}

void g()
{
    int i = 1;
    const int ci = 2;
    f(i);  // calls f(int&)
    f(ci); // calls f(const int&)
    f(3);  // calls f(int&&)
}

int main()
{
}
