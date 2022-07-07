#include <iostream>
using namespace std;
class myclass
{
    int x;

public:
    void set_x()
    {
        cout << "\n enter x:";
        cin >> x;
    }
    int get_x()
    {
        return x;
    }
};
int main()
{
    myclass obj1[5];
    int i;
    for (int i = 0; i < 3; i++)
        obj1[i].set_x();
    for (int i = 0; i < 3; i++)
        cout << "\n x:" << obj1[i].get_x();
    return 0;
}
