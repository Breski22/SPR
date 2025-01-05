//ZADANIE 1
#include <iostream>
#include <string>
using namespace std;
string s;
int d, b;
int main()
{
	s = " ";
	cout << "Podaj liczbę dziesiętną: ";//LOOKS WRONG IN CMD COUSE POLISH CHARACTERS //TOO BAD
	cin >> d;
	while (d > 0) 
	{
		if (d % 2 == 0)
		{
			s = '0' + s;
		}
		else
			s = '1' + s;
		d = d / 2; 
	}
	cout << s<<endl;
	cout << s.size()-1;
}