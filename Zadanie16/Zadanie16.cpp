#include <iostream>
using namespace std;
int n,d;

int main()
{
	cout << "Ile liczb chcesz wprowadzic?: "; 
	cin >> n;
	
	int* tab=new int[n];//z jakiegoś powodu tablica nie może być dynamiczna i musi byc zdefiniowana przed kompilacja
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj liczbe "<<i+1<<" :";
		cin >> tab[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (tab[i - 1] + tab[i] > tab[i + 1] && tab[i] + tab[i + 1] > tab[i - 1] && tab[i - 1] + tab[i + 1] > tab[i])
			d = 1;
	}
	if (d == 1)
		cout << "Wsrod wprowadzonych liczb sa 3 takie dla ktorych da sie zbudowac trojkat";
	else
		cout << """Wsrod wprowadzonych liczb nie ma 3 takich dla ktorych da sie zbudowac trojkat";
	delete[] tab;
}