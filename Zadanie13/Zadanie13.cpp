#include <iostream>
#include <string>
using namespace std;
string s;
int d;
bool b=false;
int main()
{
	cout << "Podaj wyraz: "; cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			cout << "TAK";
			return true;
			break;
		}
	}
	if (b==true)
		cout << "Tak";
	else
		cout << "Nie";
}