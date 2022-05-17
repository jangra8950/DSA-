#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,a[20];
    int z;
    cout<<" enter a no for no of elements ";
    cin>>n;
    cout<<" enter"<<" "<<n<<" "<< "numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n/2;i++)
        {
            z=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=z;
        }
        cout<<" reverse array is ";
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        getch();
}
