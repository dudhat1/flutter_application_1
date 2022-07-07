#include <iostream>
using namespace std;
class test
{
    int m, p, s, z;

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
        cout << "\n par:" << (z * 100) / 300;
    }
};
int main()
{
    test a;
    a.getvalue();
    a.dosum();
    a.dopar();
    return 0;
}