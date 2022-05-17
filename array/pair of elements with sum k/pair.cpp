
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
   int n,i,j,a[20];
    int k;
    cout<<" enter a no for no of elements ";
    cin>>n;
    cout<<" enter " <<n<< " numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<" enter a key to be found ";
        cin>>k;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<a[i]<<" + "<<a[j]<<" = "<<k<<endl;
            }
        }
    }
    getch();
}
