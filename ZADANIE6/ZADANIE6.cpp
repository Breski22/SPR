#include <iostream>
#include <string>
using namespace std;
string s, c;
int d,cyfra;
int main()
{
	cout << "Podaj liczbe w systemie 8: "; cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		d = d * 8 + s[i] - '0';
	}
	while (d > 0)
	{
		cyfra = d % 16;
		if (cyfra < 10)
			c = char('0' + d % 16) + c;
		else
		{
			c = char('A' - 10 + cyfra) + c;
		}
		d = d / 16;
	}
	cout << c;
}