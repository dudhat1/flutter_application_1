#include <iostream>
using namespace std;
class myclass
{
    int a, b;

public:
    friend int sum(myclass);
    void set_ab(int, int);
};
void myclass::set_ab(int a, int b)
{
    this->a = a;
    this->b = b;
}
int sum(myclass x)
{
    return x.a + x.b;
}
int main()
{
    myclass n;
    n.set_ab(3, 4);
    cout << sum(n);
    return 0;
}