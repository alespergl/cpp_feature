/*
Delegating constructors are supported.

Reference:
    [N1986](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1986.pdf)

Check with:
    #ifdef __cpp_delegating_constructors
    #if __has_feature(cxx_delegating_constructors)
*/

class X
{
    int i_;
public:
    X(int i) : i_(i) {}
    X() : X(42) {}
};

int main()
{
}
