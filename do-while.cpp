#include <iostream>
using namespace std;
int main()
{
    int i, n, m;
    cout << "enter the n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        cout << "\n"
             << i;
        i++;
    }
    cout << "enter the m:";
    cin >> m;
    i = n;
    do
    {
        cout << "\n"
             << i;
        i--;
    } while (i >= 1);
}