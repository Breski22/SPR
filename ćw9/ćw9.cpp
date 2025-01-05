#include <iostream> //warunek istnienia trójkąta - koniunkcja ćw9 podpunkt a
using namespace std;
int a, b, c;
int main()
{
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj c: "; cin >> c;
	if (a + b > c && a + c > b && c + b > a)
		cout << "TAK";
	else
		cout << "NIE";

}