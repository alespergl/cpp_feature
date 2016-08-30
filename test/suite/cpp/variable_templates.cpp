/*
Variable templates are supported.

Reference:
    [N3651](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3651.pdf)

Check with:
    #ifdef __cpp_variable_templates
    #if __has_feature(cxx_variable_templates)
*/

template<class T>
T pi = T(3.1415926535897932385);

template<class T>
T circular_area(T r)
{
    return pi<T> * r * r;
}

int x = circular_area(42);
double y = circular_area(10.0);

int main()
{
}
