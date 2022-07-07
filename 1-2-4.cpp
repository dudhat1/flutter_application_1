#include <iostream>
using namespace std;
int main()
{
    int i, n = 1;
    for (i = 1; i <= 10; i++)
    {
        cout << "\n"
             << n;
        n = n + n;
    }
    return 0;
}