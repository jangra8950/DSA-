
#include<conio.h>
#include<iostream>
using namespace std;
void insertion(int c[], int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {   x=c[i];
        for(j=i-1;j>-1&&c[j]>x;j--)
        {
            c[j+1]=c[j];
        }
       c[j+1]=x;
    }
}
void display(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<b[i]<<endl;
}
int main()
{
    int i,n,k;
    cout<<" enter the size of the array ";
    cin>>k;
    int a[k];
    cout<<" how many no you want to sort   ";
    cin>>n;
    cout<<" enter"<<n<< "numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<< " sorted array is ";
        insertion(a,n);
        display(a,n);
        getch();
}
