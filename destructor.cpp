#include <iostream>
using namespace std;
class test
{
    int x;

public:
    test(int n)
    {
        x = n;
        cout << "\n constructor called:" << x;
    }
    ~test()
    {
        cout << "\n destructor called:" << x;
    }
};
int main()
{
    test t1(1), t2(2), t3(3), t4(4);
}
