/*
Raw Unicode string literals are supported.

Reference:
    [N2442](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)

Check with:
    #if defined(__cpp_raw_strings) && defined(__cpp_unicode_literals)
*/

const void* u8R = u8R"(raw string)";
const void* uR = uR"(raw string)";
const void* UR = UR"(raw string)";

int main()
{
}
