// with argument no return

#include <iostream>
using namespace std;
int main()
{
	float a, b, c, t, per;
	void dosum(float, float, float, float, float);
	cout << "\n enter two match:";
	cin >> a;
	cout << "\n enter two physics:";
	cin >> b;
	cout << "\n enter two chemistry:";
	cin >> zzc;
	t = a + b + c;
	per = (t * 100) / 300;
	dosum(a, b, c, t, per);
}
void dosum(float p, float q, float n, float z, float s)
{
	cout << "\n total:" << z;
	cout << "\n total:" << s;
}