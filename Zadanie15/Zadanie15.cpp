#include <iostream>
#include <string>
using namespace std;
string s;
int a=0;
int main()
{
	cout << "Podaj wyraz: "; cin >> s;
	for (int i = 0; i < s.size(); i++)
		for (int j=1; j < s.size(); j++)
		{
			if (s[i] == s[j]&&i!=j)
			{
				a = 1;
				break;
				
			}
		}
	if (a == 1) cout << "TAK";
	else cout << "NIE";
	
}