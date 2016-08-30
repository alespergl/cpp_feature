/*
Generic (polymorphic) lambda expressions are supported.

Reference:
    [N3649](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3649.html)

Check with:
    #ifdef __cpp_generic_lambdas
    #if __has_feature(cxx_generic_lambdas)
*/

auto identity = [](auto a) { return a; };

int three = identity(3);
const char* hello = identity("hello");

// Conversion to function pointer for capture-less lambdas
int (*fpi)(int) = identity;
char (*fpc)(char) = identity;

int main()
{
}
