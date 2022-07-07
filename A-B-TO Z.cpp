#include <iostream>
using namespace std;
int main()
{
    int i, j, a = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "\t" << (char)(a + 64);
            a++;
        }
        cout << "\n";
    }
    return 0;
    ;
}