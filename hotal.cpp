#include<iostream>
using namespace std;
class hotal
{
    int prize;
public:
    hotal(int);
    void showchoices();
    float pizza(float,float);
    float doasa(float,float);
    float sanwich(float,float);
    float barger(float,float);
};
hotal::hotal(float n ,float p,float r,float d,float  )
{
    prize=n;
}
void hotal ::showchoices()
{
    cout << "\n MENU  " << endl;
    cout << "1 :pizza " << endl;
    cout << "2 : doasa" << endl;
    cout << "3 : sanwich" << endl;
    cout << "4 : barger" << endl;
    cout << "5 : exit" << endl;
    cout << "Enter your choice : ";
}
float bank ::checkbalance()
{float bank ::pizza(float p float r)
{
    total=p*r;
    return total;
}
float bank ::doasa(float d float s)
{
    total=d*s;
    return total;
}
float bank ::sanwich(float a float b)
{
    total=a*b;
    return total;
}
float bank ::barger(float g float h)
{
    total=g*h;
    return total;
}
int main()
{
    float x, y;
    hotal obj1(x,y);
    int choice;
    do
    {
        obj1.showchoices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "pizza : " ;
            cin>>x;
            cin>>y;
             cout<<"pizza"<<obj1.pizza(x,y)<<endl;
            break;

        case 2:
            cout << "doasa: ";
            cin >> x;
            cin>>y;
            cout<<"doasa"<<obj1.doasa(x,y)<<endl;
            break;

        case 3:
            cout << "sanwich: ";
            cin >> x;
            cin>>y;
            cout << "sanwich" << obj1.sanwich(x,y) << endl;
            break;

        case 4:
            cout<<"barger:";
            cin>>x;
            cin>>y;
            cout<<"barger"<<obj1.barger(x,y)<<endl;
            break;
        case 5:
            break;
        default:
            cout << "Invalid input : " << endl;
        }
    } while (choice != 5);
    return 0;
}



