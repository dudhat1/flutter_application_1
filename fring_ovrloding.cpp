#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc() {}
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    friend loc operator+(loc op1, loc op2);
};
loc operator+(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}
int main()
{
    loc ob1(10, 20), ob2(05, 30);
    ob1.show();
    ob2.show();
    ob1 = ob1 + ob2;
    ob1.show();
    return 0;
}