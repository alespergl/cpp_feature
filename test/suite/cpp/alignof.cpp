/*
The alignof keyword is available.

Reference:
    [N2341](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2341.pdf)

Check with:
    #if __has_feature(cxx_alignof)
*/

#include <cstddef>

struct S
{
    char c;
    int i;
    float f;
};

struct Empty {};

std::size_t s[] = {
    alignof(char),
    alignof(int*),
    alignof(S),
    alignof(Empty)
};

int main()
{
}
