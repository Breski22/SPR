#include <iostream>
#include <string>
using namespace std;
string imie;
int wiek;
int main()
{
	cout << "Podaj imie: "; cin >> imie;
	cout << "Podaj wiek: "; cin >> wiek;
	if (wiek < 18) cout << "Czesc " << imie;
	else cout << "Dzien dobry " << imie;
}