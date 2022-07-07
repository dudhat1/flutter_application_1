#include <iostream>
using namespace std;
class myclass
{
    int l, b;

public:
    friend int sum(myclass);
    void set_ab(int, int);
};
void myclass::set_ab(int l, int b)
{
    this->l = l;
    this->b = b;
}
int sum(myclass x)
{
    return (x.l * x.b);
}
int main()
{
    myclass n;
    n.set_ab(5, 6);
    cout << sum(n);
    return 0;
}
