#include <iostream>//3 liczby od najmiejszej do najwiekszej
#include <string>
using namespace std;
int a, b, c;

void fun2()//z stackoverflow 
{
	if (a > c)
		swap(a, c);

	if (a > b)
		swap(a, b);

	//Now the smallest element is the 1st one. Just check the 2nd and 3rd

	if (b > c)
		swap(b, c);
	cout << a << b << c;
}
int main()
{
	cout << "Podaj 1 liczbę: "; cin >> a; cout << endl;
	cout << "Podaj 2 liczbę: "; cin >> b; cout << endl;
	cout << "Podaj 3 liczbę: "; cin >> c; cout << endl;
	fun2();

}