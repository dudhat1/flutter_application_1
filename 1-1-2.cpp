#include <iostream>
using namespace std;
int main()
{
    int i, n, a = 1, b = 1, c;
    cout << "enter the n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "\t " << a;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
