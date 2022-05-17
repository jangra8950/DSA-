#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int i;
    int h[26]={0};
    string s1=" decimal";
    string s2=" medical";
    for(i=0;s1[i];i++)
        h[s1[i]-97]++;
    for(i=0;s2[i];i++)
        h[s2[i]-97]--;
     for(i=0;i<26;i++)
     {
         if(h[i]<0)
         {
             cout<<" strings are not anagram ";
             break;
         }
     }
     if(i==26)
        cout<< "strings are anagrams ";
     getch();
}
