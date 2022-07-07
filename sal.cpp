#include <iostream>
using namespace std;
int main()
{
    float a, tax;
    cout << "enter the of a";
    cin >> a;
    if (a <= 2500)
    {
        tax = (a * 0 / 100);
        cout << "\n tax " << tax;
    }
    else if (a <= 5000)
    {
        tax = (a - 2500) * 0.10;
        cout << "\n tax" << tax;
    }
    else if (a < 10000)
    {
        tax = (a - 5000) * 0.30 + (5000 * 0.20) + (2500 * 0.10);
        cout << "\n tax" << tax;
    }
    else
    {
        tax = (a - 10000) * 0.30 + (5000 * 0.20) + (2500 * 0.10);
        cout << "\n tax" << tax;
    }
}
