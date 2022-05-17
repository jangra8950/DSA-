
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
   int n,i,j,a[20];
    cout<<" enter a no for no of elements ";
    cin>>n;
    cout<<" enter " <<n<< " numbers in sorted order ";
    for(i=0;i<n;i++)
        cin>>a[i];
     for(i=0;i<n-1;i++)
     {
         if(a[i]==a[i+1])
         {
             j=i+1;
             while(a[j]==a[i])j++;
             cout<<a[i]<<" appearing "<<j-i<<endl;
             i=j-1;
         }
     }
     getch();
}
