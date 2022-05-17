
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,d;
    int a[20]={4,5,6,7,9,10,13,17};
    d=a[0];
    for(i=0;i<8;i++)
    {
        if(a[i]-i!=d)
            while(d<a[i]-i)
        {
            cout<<d+i<<endl;
            d++;
        }
    }
}
