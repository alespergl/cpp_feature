/*
Global sized operator delete is supported.

References:
    [N3778](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)

Check with:
    #ifdef __cpp_sized_deallocation
*/

#include <cstddef>
#include <cstdio>

bool sized_delete_called;
bool sized_array_delete_called;

void operator delete(void* ptr, std::size_t sz) noexcept
{
    sized_delete_called = true;
    ::operator delete(ptr);
}

void operator delete[](void* ptr, std::size_t sz) noexcept
{
    sized_array_delete_called = true;
    ::operator delete(ptr);
}

struct X
{
    virtual ~X() {}
};

int main()
{
    sized_delete_called = false;
    sized_array_delete_called = false;

    delete new X;
    delete[] new X[4];

    if(!sized_delete_called) puts("ERROR: sized operator delete was not called");
    if(!sized_array_delete_called) puts("ERROR: sized operator delete[] was not called.");

    return (sized_delete_called && sized_array_delete_called) ? 0 : 1;
}
