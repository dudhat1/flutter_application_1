#include <iostream>
using namespace std;
int main()
{
    int m, p, s, z, per;
    cout << "enter the m:";
    cin >> m;
    cout << "enter the p:";
    cin >> p;
    cout << "enter the s:";
    cin >> s;
    z = m + p + s;
    cout << "total=" << z;
    per = (z * 100) / 300;
    cout << "\nper=" << per;
    if (per >= 75)
    {
        cout << "\n grade a";
    }

    else if (per >= 60 && per <= 75)
    {
        cout << "\n grade b";
    }
    else if (per >= 59 && per <= 50)
    {
        cout << "\n grade c";
    }
    else if (per >= 50 && per <= 40)
    {
        cout << "\n grade d";
    }
    else
    {
        cout << "\n fail";
    }
}
