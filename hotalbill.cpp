#include <iostream>
using namespace std;
int main()
{
    int order, takeorder;
    cout << "|----------------------MENU-------------------|" << endl;
    cout << endl;
    cout << "(1) Pizza                     250 only." << endl;
    cout << "(2) Dosa                      100 only." << endl;
    cout << "(3) Burger                    70 only." << endl;
    cout << "(4) Rise                      50 only." << endl;
    cout << "(5) Coke                      40 only." << endl;
    cout << endl;
    cout << "Give me your order........";
    cin >> order;
    cout << "Enter your quntity........";
    cin >> takeorder;
    cout << endl;

    switch (order)
    {
    case 1:
        cout << "Order : Pizza" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  250 only" << endl;
        cout << "Total price : "
             << 250 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------AAVJO-------------|" << endl;
        break;

    case 2:
        cout << "Order : Dosa" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  100 only" << endl;
        cout << "Total price : "
             << 100 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------AAVJO-------------|" << endl;
        break;

    case 3:
        cout << "Order : Burger" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  70 only" << endl;
        cout << "Total price : "
             << 70 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------AAVJO-------------|" << endl;
        break;

    case 4:
        cout << "Order : Rise" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  50 only" << endl;
        cout << "Total price : "
             << 50 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------AAVJO-------------|" << endl;
        break;

    case 5:
        cout << "Order : Coke" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  40 only" << endl;
        cout << "Total price : "
             << 40 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------AAVJO-------------|" << endl;
        break;
    }
    return 0;
}
