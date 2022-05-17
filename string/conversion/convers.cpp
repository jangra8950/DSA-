
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l;
    string s;
    cout<<" enter a string ";
    getline(cin,s);
    for(l=0;s[l];l++);
    for(i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
       else if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    cout<< " converted string is  "<<s;

    getch();
}
