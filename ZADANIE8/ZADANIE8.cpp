#include <iostream>
#include <string>
using namespace std;
string s, c;
int d,p;
string czw(int e)
{
	
	s = " ";
	p = 4;

	while (e > 0)
	{
		s = char('0' + e % p) + s;
		e = e / p;
	}

	return s;
}
string osm(int e)
{
	s = " ";
	p = 8;
	
	while (e > 0)
	{
		s = char('0' + e % p) + s;
		e = e / p;
	}
	
	return s;
}
string szes(int e)
{
	s = " ";
	
	p = 16;
	int cyfra;
	cyfra = e % p;
	while (e > 0)
	{
		
		if (e < 10)
		{
			s = char('0' + e % p) + s;
			;
		}
		else
			s = char('A' - 10 + cyfra) + s; 
		e = e / p;
	}
	
	return s;
}
int main()
{
	cout << "Podaj liczbe binarna: "; cin >> s;
	p = 1;
	d = 0;
	for (int i = s.size() - 1; i >= 0; i--)//zamienia binarna na decymalne
	{
		if (s[i] == '1')
			d = d + p;
		p = p * 2;
	}
	cout << d<<endl;//decymalna
	cout << "Liczba w systemie 4: " << czw(d)<<endl;
	cout << "Liczba w systemie 8: " << osm(d)<<endl;
	cout << "Liczba w systemie 16: " << szes(d)<<endl;
	
}