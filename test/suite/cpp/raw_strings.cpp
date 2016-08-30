/*
Raw string literals are supported.

Reference:
    [N2442](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)

Check with:
    #ifdef __cpp_raw_strings
    #if __has_feature(cxx_raw_string_literals)
*/

const void* R = R"(raw string)";
const void* LR = LR"(raw string)";

int main()
{
}
