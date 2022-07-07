
// simple

#include <iostream>
using namespace std;
int main()
{
    void test(); // function declaration
    cout << "\n before,inside main";
    test();
    cout << "\n after,inside main";
}
void test()
{
    cout << "\n hello,inside test";
}