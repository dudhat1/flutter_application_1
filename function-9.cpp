
// no argument no return

#include <iostream>
using namespace std;
int main()
{
    void dosum();
    dosum();
}
void dosum()
{
    float a, b, c, t, per;
    cout << "enter the MATHS:";
    scanf("%f", &a);
    cout << "enter the PHYSICS:";
    cin >> b;
    cout << "enter the CHEMISTRY:";
    cin >> c;
    t = a + b + c;
    cout << "\n total:" << t;
    per = (t * 100) / 300;
    cout << "\n sum:" << per;
}
