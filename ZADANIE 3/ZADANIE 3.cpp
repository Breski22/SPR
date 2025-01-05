#include <iostream>
#include <string>
using namespace std;
string s,c;
int d;
int main()
{
	cout << "Podaj liczbe w systemie osemkowym: "; cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		d = d * 8 + s[i] - '0';
	}
	while (d > 0)
	{
		if (d % 2 == 0)
			c = '0' + c;
		else
			c = '1' + c;
		d = d / 2;
	}
	cout << c;
}