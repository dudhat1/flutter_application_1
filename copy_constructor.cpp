#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    point(point &p2)
    {
        x = p2.x;
        y = p2.y;
    }
    int getx();
    int gety();
};
int point::getx()
{
    return x;
}
int point::gety()
{
    return y;
}
int main()
{
    point objpoint1(10, 20);
    point objpoint2 = objpoint1;
    cout << "\n objpoint 1.x :" << objpoint1.getx() << ", objpoint 1.y :" << objpoint1.getx();
    cout << "\n objpoint 2.x :" << objpoint2.gety() << ", objpoint 2.y :" << objpoint2.gety();
    return 0;
}