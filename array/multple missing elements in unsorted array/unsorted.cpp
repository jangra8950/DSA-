#include<array>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,d;
    int a[20]={4,1,6,32,9,20};
    int *p=new int[32];
    for(i=0;i<32;i++)
        p[i]=0;
    for(i=0;i<6;i++)
        p[a[i]]++;
    for(i=1;i<=32;i++)
    {
        if(p[i]==0)
            cout<<i<<endl;
    }
   getch();
}
