
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l,j;
    string s;
    cout<<" enter a string ";
    getline(cin,s);
    for(l=0;s[l];l++);
    i=0;
    j=l-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        break;
        i++;
        j--;
    }
    if(i<j)
        cout<<" string is not palindrome ";
    else
   cout<< " palindrome ";
    getch();
}
