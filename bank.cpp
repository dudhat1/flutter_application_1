#include <iostream>
using namespace std;
class bank
{
    int n, m, with, bla = 5000, balance, balance2;

public:
    void bal()
    {
        cout << "\n bank balance:" << bla;
    }
    void di()
    {
        cout << "\n diposite:";
        cin >> n;
        balance = bla + n;
        cout << "\n balance:" << balance;
    }
    void wih()
    {
        cout << "\n withdraw:";
        cin >> m;
    }
    void bals()
    {
        balance2 = balance - m;
        cout << "\n total balance:" << balance2;
    }
};
int main()
{
    bank a;
    a.bal();
    a.di();
    a.wih();
    a.bals();
}