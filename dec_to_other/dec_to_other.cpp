#include <iostream> 
using namespace std;
int d,p,cyfra;
string s;
int main()
{
	cout << "Podaj liczbe: "; cin >> d;
	cout << "Podaj podstawe: "; cin >> p;
	s = " ";
	while (d > 0)
	{
		cyfra=d%p;
		if(cyfra<10)
			s = char('0'+d % p) + s;
		else
		{
			s = char('A' - 10 + cyfra) + s;
		}
		d = d / p;
	}
	cout << s;
}