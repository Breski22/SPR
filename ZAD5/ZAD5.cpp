#include <iostream>
#include <string>
using namespace std;
string s, c;
int d;
int main()
{
	cout << "Podaj liczbe w systemie 9: "; cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		d = d * 9 + s[i] - '0';
	}
	
	while (d > 0)
	{
		if (d % 3 == 0)
			c = '0' + c;
		else if (d % 3 == 1)
			c = '1' + c;
		else if (d % 3 == 2)
			c = '2' + c;
		d = d / 3;
	}
	cout << c;
}