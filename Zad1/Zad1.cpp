#include <iostream>
#include <string>
#include <cctype>//nie potrzebne
using namespace std;
string slowo;
char litera;
int i, ile;
int main()
{
	cout << "Podaj slowo: ";
	cin >> slowo;
	cout << "Podaj szukana litere: ";
	cin >> litera;
	ile = 0;
	for(i=0; i<slowo.size(); i++)
		if (slowo[i] == litera)
		{
			ile++;
		}
	cout << "Litera " << litera << " wystepuje w slowie " << slowo << " " << ile << " razy";
}