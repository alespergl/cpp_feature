/*
Initializer lists are supported.

Reference:
    [N2672](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2672.pdf)

Check with:
    #ifdef __cpp_initializer_lists
*/

#include <map>
#include <string>

int n0 {};                              // value-initialization (to zero)
int n1 {1};                             // direct-list-initialization
std::string s1 {'a', 'b', 'c', 'd'};    // initializer-list constructor call
std::string s2 {s1, 2, 2};              // regular constructor call
std::string s3 {0x61, 'a'};             // initializer-list ctor is preferred to (int, char)

int n2 = {1};                           // copy-list-initialization
double d = double{1.2};                 // list-initialization of a temporary, then copy-init

std::map<int, std::string> m = {        // nested list-initialization
    {1, "a"},
    {2, {'a', 'b', 'c'}},
    {3, s1}
};

const int (&ar)[2] = {1,2};             // binds a lvalue reference to a temporary array
int&& r1 = {1};                         // binds a rvalue reference to a temporary int

int main()
{
}
