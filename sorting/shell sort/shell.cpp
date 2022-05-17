
#include<conio.h>
#include<iostream>
using namespace std;
void shell(int a[],int n)
{
    int gap,i,j;
    int temp;
    for(gap=n/2;gap>=1;gap=gap/2)
    {
        for(j=gap;j<n;j++)
        {
           for(i=j-gap;i>=0;i=i-gap)
           {
               if(a[i+gap]>a[i])
                break;
               else
                swap(a[i+gap],a[i]);
           }
        }
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
    shell(a,n);
    display(a,n);
    getch();
}
