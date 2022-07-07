#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the x:";
    cin >> x;
    cout << "enter the y:";
    cin >> y;
    if (2000 > x || 3000 < x)
    {
        cout << "\n x vatiable";
    }
    else
    {
        cout << "\n not vatiable";
    }
    if (y >= 100 && y <= 500)
    {

        cout << "\n y vatiable";
    }
    else
    {
        cout << "\n not vatiable";
    }
    return 0;
}
