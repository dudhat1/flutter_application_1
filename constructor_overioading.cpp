#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "\n defualt constructor called..";
    }
    test(int n)
    {
        cout << "\n parameterize with one parameter constructor called..." << n;
    }
    test(int n, int m)
    {
        cout << "\n parameterize with two parameter constructor called..." << n << "\tm:" << m;
    }
};
int main()
{
    test t1, t2(12), t3(10, 20);
}