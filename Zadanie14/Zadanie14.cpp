#include <iostream>
#include <string>
using namespace std;
int a, b, c;
int main()
{
	cout << "Podaj bok a: "; cin >> a; cout << endl;
	cout << "Podaj bok b: "; cin >> b; cout << endl;
	cout << "Podaj bok c: "; cin >> c; cout << endl;
	if (a + b > c && a + c > b && c + b > a)
		cout << "Tak";
	else
		cout << "Nie";
}