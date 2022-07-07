#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter the n:";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        cout << "\n"
             << i;
    }
    return 0;
}