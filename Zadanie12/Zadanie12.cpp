#include <iostream>
#include <string>
using namespace std;
int b;
int unsigned d;
string s=" ";

int main()
{
	cout << "Podaj liczbe: "; cin >> d;
	while (d > 0)
	{
		if (d % 2 == 0)
			s = '0' + s;
		else
			s = '1' + s;
		d = d / 2;
	}
	cout << s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
			b++;
	}
	cout <<endl<<"Ilosc jedynek w liczbie binarnej: " << b;
}