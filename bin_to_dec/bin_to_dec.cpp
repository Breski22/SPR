#include <iostream>
using namespace std;
string b;
int d;
int i, potega;
int main()
{
	cout << "Podaj liczbe binarna: "; cin >> b;
	potega = 1;
	d = 0;
	for (i = b.size() - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			d = d + potega;
		potega = potega * 2;

	}
	cout << d;
}