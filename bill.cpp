#include <iostream>
using namespace std;
int main()
{
    float a, rate, charge;
    cout << "enter the a:";
    cin >> a;
    if (a < 100)
    {
        rate = (a * 0.6) + 50;
        cout << "total" << rate;
    }
    else if (a < 300)
    {
        rate = (a - 100) * 0.8 + (100 * 0.6) + 50;
        cout << "toatl " << rate;
    }
    else
    {
        rate = (a - 300) * 0.9 + (200 * 0.8) + (100 * 0.6) + 50;
        cout << "toatl" << rate;
    }
    if (300 < rate)
    {
        charge = rate * 1.15;
        cout << "charge" << charge;
    }
    return 0;
}
