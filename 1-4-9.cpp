#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter the n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "\n"
             << i * i;
    }
    return 0;
}