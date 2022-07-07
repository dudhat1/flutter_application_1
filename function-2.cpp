
// with argument no return

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    void dosum(int, int);
    cout << "\n enter two values:";
    cin >> a;
    cout << "\n enter two values:";
    cin >> b;
    dosum(a, b);
}
void dosum(int p, int q)
{
    cout << "\n sum:" << p + q;
}