
#include<conio.h>
#include<iostream>
using namespace std;
void sorting(int c[], int n)
{
    int i,j,t;
    int x;                // x to make sort adaptive
    for(i=0;i<n-1;i++)
    {   x=0;
        for(j=0;j<n-1-i;j++)
        {
            if(c[j]>c[j+1])
           {
             swap(c[j],c[j+1]);
             x=1;
           }
        }
       if(x==0)
       break;
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
        sorting(a,n);
        display(a,n);
        getch();
}
