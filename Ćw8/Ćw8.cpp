#include <iostream>//liczba wystapien danej litery w napisie
#include <string>
using namespace std;
string s;
char c;
int a=0;
int main()
{
	cout << "Podaj wyraz: "; cin >> s;
	cout << "Podaj litere: "; cin >> c;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			a++;
		}
	}
	cout << "Liczba wystapien litery " << c << " w wyrazie " << s << " wynosi: " << a << endl;
}