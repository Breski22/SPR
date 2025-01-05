#include <iostream>
#include <string>
using namespace std;
string s,c;
int d=0, b,p;
//4 to 2 
//4->10->2
int main()
{
	cout << "Podaj liczbe w systemie 4: ";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		d = d * 4 + s[i] - '0';
	}
	//cout << d;//debug
	c = " ";
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