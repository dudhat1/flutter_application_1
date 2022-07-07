#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "enter the vowel:";
	cin >> c;
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'u')
	{
		cout << "\n vowel";
	}
	else
	{
		cout << "\n not vowel";
	}
	return 0;
}
