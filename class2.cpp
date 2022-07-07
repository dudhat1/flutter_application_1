#include <iostream>
using namespace std;
class test
{
public:
    void dosum(int x, int y)
    {
        cout << "\n sum:" << x + y;
    }
    void domul(int x, int y)
    {
        cout << "\n mul:" << x * y;
    }
    void domay(int x, int y)
    {
        cout << "\n may:" << x - y;
    }
    void domulti(int x, int y)
    {
        cout << "\n multi:" << x / y;
    }
    void domod(int x, int y)
    {
        cout << "\n mod:" << x % y;
    }
};
int main()
{
    int x = 10, y = 20;
    cout << "\n before function call";
    test a;
    a.dosum(x, y);
    a.domul(x, y);
    a.domay(x, y);
    a.domulti(x, y);
    a.domod(x,y);
    cout << "\n after function call";
    return 0;
}