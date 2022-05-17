
#include<conio.h>
#include<iostream>
using namespace std;
void selection(int c[], int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=t=i;j<n;j++)
        {
            if(c[t]>c[j])
                t=j;
        }
       swap(c[t],c[i]);
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
        selection(a,n);
        display(a,n);
        getch();
}
