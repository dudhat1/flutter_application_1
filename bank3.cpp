#include <iostream>
using namespace std;
class bank
{
    int t, balance, deposit, withdraw, totalbalance;

public:
    void mybalance()
    {
        cout << "\n balance :";
        cin >> balance;
    }
    void mydeposit()
    {
        cout << "\n deposit : ";
        cin >> deposit;
        t = balance + deposit;
        cout << "\n t  :" << t;
    }
    void mywithdraw()
    {
        cout << "\n withdraw :";
        cin >> withdraw;
        if (balance <= withdraw)
        {
            cout << "\n not withdraw : " << withdraw;
        }
        else
        {
            cout << "\n not withdraw : ";
        }
    }
    int mytotalbalance()
    {
        totalbalance = (balance + deposit) - withdraw;
        cout << "\n total balance :" << totalbalance;
    }
};
int main()
{
    bank a;
    a.mybalance();
    a.mydeposit();
    a.mywithdraw();
    a.mytotalbalance();
}