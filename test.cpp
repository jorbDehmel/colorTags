#include <iostream>
using namespace std;

int main()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 64; i++)
        {
            cout << "\033[" << j << ";" << i << "m"
                 << j << '\t' << i << '\n';
        }
    }
    return 0;
}
