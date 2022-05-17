
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l;
    string s;
    int h[26]={0};
    cout<<" enter a string ";
    getline(cin,s);
    for(l=0;s[l];l++);
    for(i=0;i<l;i++)
    {
       h[s[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>1)
        cout<<" duplicate element is "<<char (i+97)<<" repeating "<<h[i]<<endl;
    }
    getch();
}
