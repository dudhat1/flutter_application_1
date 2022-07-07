#include <iostream>
using namespace std;
int main()
{
    float i, n = 0.5;
    for (i = 0.5; i <= 10; i++)
    {
        cout << "\n"
             << n;
        n = i + n;
    }
    return 0;
}