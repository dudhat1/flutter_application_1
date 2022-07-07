// Multiple inheritance

#include <iostream>
using namespace std;
class Area
{
public:
    float area_calc(float l, float b)
    {
        return l * b;
    }
};

class Perimeter
{
public:
    float Peri_calc(float l, float b)
    {
        return 2 * (l + b);
    }
};

class Rectangle : private Area, private Perimeter
{
private:
    float length, breadth;

public:
    Rectangle() : length(0.0), breadth(0.0) {}

    void get_data()
    {
        cout << "Enter length :";
        cin >> length;
        cout << "Enter breadth :";
        cin >> breadth;
    }

    float area_calc()
    {
        return Area ::area_calc(length, breadth);
    }

    float Peri_calc()
    {
        return Perimeter ::Peri_calc(length, breadth);
    }
};

int main()
{
    Rectangle r;
    r.get_data();
    cout << "\n\n";
    cout << "Area :" << r.area_calc();
    cout << "\n Perimeter :" << r.Peri_calc();
    return 0;
}