/*
Range-based for loop syntax is supported.

Reference:
    [N2930](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2930.html)

Check with:
    #ifdef __cpp_range_based_for
    #if __has_feature(cxx_range_for)
*/

#include <vector>

int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    int as = 0;
    for(int i : a) as += i;

    std::vector<int> v(10);
    int vs = 0;
    for(int i : v) vs += i;
}
