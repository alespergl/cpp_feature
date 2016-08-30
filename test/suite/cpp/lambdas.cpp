/*
Lambda expressions are supported.

Reference:
    [N2658](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2658.pdf)

Check with:
    #ifdef __cpp_lambdas
    #if __has_feature(cxx_lambdas)
*/

int main()
{
    int i = 0;

    auto l1 = [&] {};       // by-reference capture default
    auto l2 = [=] {};       // by-copy capture default
    auto l3 = [&, i] {};    // by-reference capture, except i is captured by copy
    auto l4 = [=, &i] {};   // by-copy capture, except i is captured by reference
}
