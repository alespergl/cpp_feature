/*
The noexcept specifier is supported.

Reference:
    [N3050](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3050.html)

Check with:
    #if !__has_feature(cxx_noexcept)
*/

void f() noexcept;
void g() noexcept(false);

int main()
{
}
