/*
RTTI (run-time type information) is supported.

Check with:
    #ifdef __cpp_rtti
    #if __has_feature(cxx_rtti)
*/

#include <typeinfo>

struct A
{
    virtual ~A() {}
};

struct B : A
{
};

A* a = new B;

const std::type_info& ti = typeid(*a);
B* b = dynamic_cast<B*>(a);

int main()
{
}
