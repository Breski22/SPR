#include <iostream>
using namespace std;
string s;
int p, d=0;
int main()
{
	cout << "Podaj liczbe w systemie o podstawie p : "; cin >> s;
	cout << "Podaj podstawe: "; cin >> p;
//	if (s.size() >= 6) //nie potrzebne
//		return 0;
	for (int i = 0; i < s.size() ; i++)
	{ 
		if (s[i] <= '9')
		{
			
			d = d * p + s[i] - '0';
			
		}
		else if (s[i] >= 'A')
		{
			
			
			d = d * p + s[i] - ('A')+10;
			
		}
	}
	cout << endl;
	cout << d;
}