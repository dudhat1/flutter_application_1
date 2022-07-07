
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
    int a, b;
    cout << "\n enter values:";
    cin >> a;
    cout << "\n enter values:";
    cin >> b;
    return a + b;
}