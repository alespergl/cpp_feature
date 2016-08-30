/*
Constant evaluation is allowed for all non-type template arguments.

Reference:
    [N4268](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4268.html)

Check with:
    #ifdef __cpp_nontype_template_args
*/

template<int* p> class X {};
struct S { static int s; } s;
X<&s.s> x1;  // address of static member
X<&S::s> x2; // address of static member

template<const int&> struct B {};
int c = 1;
B<c> b1;

int main()
{
}
