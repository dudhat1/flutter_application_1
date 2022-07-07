#include <iostream>
using namespace std;
class test
{
public:
    void myfun(double n)
    {
        cout << "\n with one double parameter.." << n;
    }
    void myfun(int n)
    {
        cout << "\n with one int parameter.." << n;
    }
    int myfun(int n, int m)
    {
        cout << "\n with two int  parameter with return..";
        return n + m;
    }
    double myfun(double n, double m)
    {
        cout << "\n with two double  parameter with return..";
        return n + m;
    }
};
int main()
{
    test t1;
    t1.myfun(10);
    t1.myfun(20.5);
    cout << " : " << t1.myfun(10, 20);
    cout << " : " << t1.myfun(20.5, 3.5);
}