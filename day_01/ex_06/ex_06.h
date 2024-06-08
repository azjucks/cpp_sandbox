#define EXIT_SUCCESS 0

namespace day_01
{
    namespace ex_06
    {
        int a;
        namespace __b
        {
            int a = a;
        }
        
        namespace __a
        {
            using namespace __b;
        }
    }
}