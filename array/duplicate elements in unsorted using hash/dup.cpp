
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[20]={4,1,6,32,9,4,4,6,1,20,1,3,1};
    int p[33]={0};
   // int *p=new int[33];
   // for(i=0;i<33;i++)
     //   p[i]=0;
    for(i=0;i<13;i++)
        p[a[i]]++;
    for(i=1;i<=32;i++)
    {
        if(p[i]>1)
            cout<<" duplicate elements is "<<i<<" repeating "<<p[i]<<" times "<<endl;
    }
   getch();
}
