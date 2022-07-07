
// no argument no return

#include <iostream>
using namespace std;
int main()
{
    void dosum();
    dosum();
}
void dosum()
{
    int a, b, c;
    cout << "enter the value:";
    cin >> a;
    cout << "enter the value:";
    cin >> b;
    cout << "enter the value:";
    cin >> c;
    cout << "\n sum:" << (a * b * c) / 100;
}
