/*
Folding expressions are supported.

Reference:
    [N4295](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4295.html)

Check with:
    #ifdef __cpp_fold_expressions
*/

template<typename... T>
bool f(T... args)
{
    return (true + ... + args);
}

bool b1 = f(1, 2, 3);

template<typename... T>
bool all(T... args)
{
    return (... && args);
}

bool b2 = all(1, 2, 3);

int main()
{
}
