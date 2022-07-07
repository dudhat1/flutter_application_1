
// with argument with return

#include <iostream>
using namespace std;
int main()
{
    int a, b, s;
    int dosum(int, int);
    cout << "\n enter values:";
    cin >> a;
    cout << "\n enter values:";
    cin >> b;
    s = dosum(a, b);
    cout << "\n sum:" << s;
}
int dosum(int p, int q)
{
    return p + q;
}