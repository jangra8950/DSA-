#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l,word=1;
    string s;
    cout<<" enter a string ";
    getline(cin,s);
    for(l=0;s[l];l++);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ' && s[i-1]!=' ')
            word++;
    }
    cout<< " no of words are "<<word;
    getch();
}
