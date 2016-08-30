/*
Exception handling syntax is supported.

Check with:
    #ifdef __cpp_exceptions
    #if __has_feature(cxx_exceptions)
*/

int main()
{
    try
    {
        throw "error";
    }
    catch(const char*)
    {
    }
    catch(...)
    {
        throw;
    }
}
