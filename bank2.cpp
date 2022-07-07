#include <iostream>
using namespace std;
class bank
{
    float balance;

public:
    bank(float);
    void showchoices();
    float deposits(float);
    float withdraw(float);
    float checkbalance();
};
bank::bank(float n)
{
    balance = n;
}
void bank ::showchoices()
{
    cout << "\n MENU  " << endl;
    cout << "1 :balance " << endl;
    cout << "2 : deposits" << endl;
    cout << "3 : withdraw" << endl;
    cout << "4 : Exit " << endl;
    cout << "Enter your choice : ";
}
float bank ::deposits(float d)
{
    balance = balance + d;
    return balance;
}
float bank ::withdraw(float w)
{
    balance = balance - w;
    return balance;
}
float bank ::checkbalance()
{
    return balance;
}
int main()
{
    float x, y;
    bank obj1(5000);
    int choice;
    do
    {
        obj1.showchoices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Balance : " << obj1.checkbalance();
            break;

        case 2:
            cout << "Enter deposits : ";
            cin >> x;
            obj1.deposits(x);
            break;

        case 3:
            cout << "Enter withdraw : ";
            cin >> x;
            cout << "withdraw " << obj1.withdraw(x) << endl;
            break;

        case 4:
            break;
        default:
            cout << "Invalid input : " << endl;
        }
    } while (choice != 4);
    return 0;
}
