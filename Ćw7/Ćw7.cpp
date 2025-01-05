#include <iostream>
using namespace std;
int n,x;//n-liczba całkowita, n>=0,x-całkowita
long long y, tmp;
int main()
{
	cout << "Podaj podstawe potegi: "; cin >> x;
	cout << "Podaj wykladnik potegi: "; cin >> n;
	tmp = x; y = 1;
	while (n > 0)
	{
		if (n % 2 == 01)
		{
			y = y * tmp;
		}
		n = n / 2;
		if (n > 0)
		{
			tmp = tmp * tmp;
		}
	}
	cout << y;
}