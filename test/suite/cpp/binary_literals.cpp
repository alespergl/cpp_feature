/*
The binary literal syntax is supported.

Reference:
    [N3472](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3472.pdf)

Check with:
    #ifdef __cpp_binary_literals
    #if __has_feature(cxx_binary_literals)
*/

int b = 0b101010;
int B = 0B010101;

int main()
{
}
