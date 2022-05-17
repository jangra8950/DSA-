
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l,v=0,c=0;
    string s;
    cout<<" enter a string ";
    getline(cin,s);
    for(l=0;s[l];l++);
    for(i=0;i<l;i++)
    {
        if(s[i]=='a' || s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'||s[i]=='I' ||s[i]=='O'||s[i]=='U')
            v++;
        else if ((s[i]>=65&&s[i]<=90) || (s[i]>=97&&s[i]<=122))
                 c++;
    }
    cout<< " no of vowels are "<<v<<endl;
    cout<< " no of consonent are "<<c<<endl;
    getch();
}
