/*
Attribute syntax is allowed on enumerator declarations.

Reference:
    [N4266](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

Check with:
    #ifdef __cpp_enumerator_attributes
*/

enum [[attr]]
{
    A,
    B [[attr]],
    C
};

int main()
{
}
