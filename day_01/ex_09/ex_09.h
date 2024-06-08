#include <iostream>

#define EXIT_SUCCESS 0

using namespace std;

void print(float x, bool local=false)
{
    if (local)
        cout << "Local print float ";
    else
        cout << "Global print float ";
    cout << x << endl;
}

void print(int x, bool local=false)
{
    if (local)
        cout << "Local print int ";
    else
        cout << "Global print int ";
    cout << x << endl;
}

namespace day_01
{
    namespace ex_09
    {
        int kenny = 9;
        void print()
        {
            cout << "Local print kenny " << kenny << endl;
        }
        namespace a
        {
            int kenny = kenny;
            void print(int x)
            {
                ::print(x);
            }
            namespace a
            {
                int kenny = kenny;
                void print(int x)
                {
                    ::print(x, true);
                }
            }
            namespace b
            {
                using namespace a;
                
                void print(int x)
                {
                    ::print(x);
                }

                void p(int x)
                {
                    ::print(x);
                }

                void p(float x)
                {
                    ::print(x);
                }
            }
        }
    }
}