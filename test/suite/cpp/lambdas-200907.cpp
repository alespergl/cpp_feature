/*
Lambda expressions according to new wording are supported.

Reference:
    [N2927](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2927.pdf)

Check with:
    #if defined(__cpp_lambdas) && (__cpp_lambdas >= 200907)
*/

class non_capturable
{
    public:  non_capturable() {}
    private: non_capturable(const non_capturable&) {}
};

int main()
{
    int i = 0;

    auto l1 = [&] {};       // by-reference capture default
    auto l2 = [=] {};       // by-copy capture default
    auto l3 = [&, i] {};    // by-reference capture, except i is captured by copy
    auto l4 = [=, &i] {};   // by-copy capture, except i is captured by reference

    non_capturable x, &r = x;

    [=] {                   // x and r are not captured (appearance in a decltype operand is not a "use")
        decltype(x) y1;
        decltype(r) r1 = y1;
    };
}
