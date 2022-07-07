#include <iostream>
using namespace std;
class test
{

public:
    void showchoices();
    float add(float, float);
    float subtract(float, float);
    float multiply(float, float);
    float divide(float, float);
};
void test ::showchoices()
{
    cout << "MENU " << endl;
    cout << "1 : Add" << endl;
    cout << "2 : subtract" << endl;
    cout << "3 : multiply" << endl;
    cout << "4 : Divide" << endl;
    cout << "5 : Exit " << endl;
    cout << "Enter your choice : ";
}
float test ::add(float a, float b)
{
    return a + b;
}
float test ::subtract(float a, float b)
{
    return a - b;
}
float test ::multiply(float a, float b)
{
    return a * b;
}
float test ::divide(float a, float b)
{
    return a / b;
}

int main()
{
    float x, y;
    test obj1;
    int choice;
    do
    {
        obj1.showchoices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter two numbers : ";
            cin >> x >> y;
            cout << "Sum " << obj1.add(x, y) << endl;
            break;

        case 2:
            cout << "Enter three numbers : ";
            cin >> x >> y;
            cout << "Differnt " << obj1.subtract(x, y) << endl;
            break;

        case 3:
            cout << "Enter four numbers : ";
            cin >> x >> y;
            cout << "Product " << obj1.multiply(x, y) << endl;
            break;

        case 4:
            cout << "Enter two numbers : ";
            cin >> x >> y;
            cout << "Quotient " << obj1.divide(x, y) << endl;
            break;

        case 5:
            break;

        default:
            cout << "Invalid input : " << endl;
        }
    } while (choice != 5);
    return 0;
}
