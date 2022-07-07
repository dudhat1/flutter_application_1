
// with argument no return

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    void dosum(int, int, int);
    cout << "\n enter two values:";
    cin >> a;
    cout << "\n enter two values:";
    cin >> b;
    cout << "\n enter two values:";
    cin >> c;
    dosum(a, b, c);
}
void dosum(int p, int q, int n)
{
    cout << "\n sum:" << (p * q * n) / 100;
}