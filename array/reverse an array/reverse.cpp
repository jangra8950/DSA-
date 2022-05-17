#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,a[20];
    int x,y,z;
    cout<<" enter a no for no of elements ";
    cin>>n;
    cout<<" enter"<<n<<"numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
   for(x=0,y=n-1;x<y;x++,y--)
   {
       z=a[x];
       a[x]=a[y];
       a[y]=z;
   }
   cout<<" reverse array is ";
   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    getch();
}
