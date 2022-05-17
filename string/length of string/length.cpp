#include<string>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    int l;
    cout<<" enter a string "<<endl;
    getline(cin,s);
    for(l=0;s[l];l++);
   // for(int i=0;s[i];i++)
    //   cout<<s[i];
    cout<<" length of string "<<l;
    getch();
}
