#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 65; i <= 90; i++)
    {
        cout << "\t" << (char)i  << "-" << i;
    }
    return 0;
}