
#include<string>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    string :: iterator i;
    int c=0;
    cout<<" enter a string "<<endl;
    getline(cin,s);
    for(i=s.begin();i!=s.end();i++)
        c++;
    cout<<" length of string "<<c;
    getch();
}
