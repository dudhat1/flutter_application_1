#include <iostream>
using namespace std;
class test
{
    int m, p, s, z, per;

public:
    void getvalue()
    {
        cout << "\n enetr m:";
        cin >> m;
        cout << "\n enter p:";
        cin >> p;
        cout << "\n enter s:";
        cin >> s;
    }
    void dosum()
    {
        z = m + p + s;
        cout << "\n sum:" << z;
    }
    void dopar()
    {
        per = (z * 100) / 300;
        cout << "\n par:" << per;
    }
    void grade()
    {
        if (per >= 75)
        {
            cout << "\n grade a";
        }
        else if (per >= 60 && per <= 75)
        {
            cout << "\n grade b";
        }
        else if (per >= 50 && per <= 59)
        {
            cout << "\n grade c";
        }
        else if (per >= 40 && per <= 50)
        {
            cout << "\n grade d";
        }
        else
        {
            cout << "\n fail";
        }
    }
};
int main()
{
    test a;
    a.getvalue();
    a.dosum();
    a.dopar();
    a.grade();
    return 0;
}