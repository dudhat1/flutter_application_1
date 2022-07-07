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
};
int main()
{
    int x = 10, y = 20;
    cout << "\n before function call";
    test a;
    a.dosum(x, y);
    a.domul(x, y);
    cout << "\n after function call";
    return 0;
}