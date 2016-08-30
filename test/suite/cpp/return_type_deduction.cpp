/*
Return type deduction for normal functions is supported.

Reference:
    [N3638](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3638.html)

Check with:
    #ifdef __cpp_return_type_deduction
    #if __has_feature(cxx_return_type_deduction)
*/

auto f();               // return type is unknown
auto f() { return 42; } // return type is int
auto f();               // redeclaration

template<class T> auto g(T t);              // forward declaration
template<class T> auto g(T t) { return t; } // return type is deduced at instantiation time
template<class T> auto g(T t);              // redeclaration
typedef decltype(g(1)) gint_t;              // must instantiate g<int> to deduce return type

template<class T> struct A { static T t; };
template<class T> auto& h() { return A<T>::t; } // returns by reference

bool search(int i)
{
    return i == 5;
}

auto iterate(int len)
{
    for(int i = 0; i < len; ++i)
        if(search(i))
            return i;

    return -1;
}

auto sum(int i)
{
    if(i == 1)
        return i; // return type deduced to int
    else
        return sum(i - 1) + i; // ok to recurse
}

auto x1 = [](int i) { return i; };

int main()
{
}
