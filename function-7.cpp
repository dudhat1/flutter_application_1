
// no argument with return

#include <iostream>
using namespace std;
int main()
{
    int s;
    int dosum();
    s = dosum();
    cout << "\n sum:" << s;
}
int dosum()
{
    int a, b, c;
    cout << "\n enter values:";
    cin >> a;
    cout << "\n enter values:";
    cin >> b;
    cout << "\n enter values:";
    cin >> c;
    return (a * b * c) / 100;
}