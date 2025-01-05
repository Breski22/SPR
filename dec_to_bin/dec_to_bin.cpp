#include <iostream>
using namespace std;
int d;
string b=" ";
int main()
{
	cout << "Podaj liczbe: "; cin >> d;
	while (d > 0)
	{
		if (d % 2 == 0)
			b = '0' + b;
		else
			b = '1' + b;
		d = d / 2;
	}
	cout << b;
}