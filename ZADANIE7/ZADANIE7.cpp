#include <iostream>
#include <string>
using namespace std;
int d;
string s, c;
int main()
{
	cout << "Podaj liczbe cyfr liczby binarnej: "; cin >> d;
	if (d % 2 == 0)
		cout << d / 2 << endl;
	else
		cout << (d / 2)+1 << endl;
	if (d % 3 == 0)
		cout << d / 3 << endl;
	else
		cout << (d / 3) + 1 << endl;
	if (d % 4 == 0)
		cout << d / 4 << endl;
	else
		cout << (d / 4) + 1 << endl;
}