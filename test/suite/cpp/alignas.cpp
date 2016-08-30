/*
The alignas keyword is available.

Reference:
    [N2341](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2341.pdf)

Check with:
    #if __has_feature(cxx_alignas)
*/

struct alignas(16) sse_t
{
    float sse_data[4];
};

alignas(128) char cacheline[128];

int main()
{
}
