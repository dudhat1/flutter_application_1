
// with argument with return

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, s;
    int dosum(int, int, int);
    cout << "\n enter values:";
    cin >> a;
    cout << "\n enter values:";
    cin >> b;
    cout << "\n enter values:";
    cin >> c;
    s = dosum(a, b, c);
    cout << "\n sum:" << s;
}
int dosum(int p, int q, int n)
{
    return (p * q * n) / 100;
}