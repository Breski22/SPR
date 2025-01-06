//zrownowazony system trojkowy zad 10 strona 60
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s;
int d,potega;
int main()
{
    cout<<"Podaj liczbe w zrownowazonym systemie trojkowym: "; cin>>s;
    cout<<s;
    potega=s.size()-1;
    for(int i=0; i<s.size();i++)//reverse 
    {
        cout<<s[i]<<i;
        if(s[i]=='-')
        {
            d=d-pow(3,potega);
        }
        else if(s[i]=='+')
        {
            d=d+pow(3,potega);
        }
        else if(s[i]=='0')
        {
            d=d+0;
        }
        else
        {
            cout<<"Podano zla liczbe";
            return 0;
        }
        potega--;
    }
    cout<<"Wynik:"<<d;
}