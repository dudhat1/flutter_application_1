#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            cout << "\t" << (char)i;
        }
        cout << "\n";
    }
    return 0;
}