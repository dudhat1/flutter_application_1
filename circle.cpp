#include <iostream>
using namespace std;
class myclass
{
    int r, pi;

public:
    friend int sum(myclass);
    void set_ab(int, int);
};
void myclass::set_ab(int r, int pi)
{
    this->r = r;
    this->pi = pi;
}
int sum(myclass x)
{
    return (x.pi * x.r * x.r);
}
int main()
{
    myclass n;
    n.set_ab(3, 3.14);
    cout << sum(n);
    return 0;
}