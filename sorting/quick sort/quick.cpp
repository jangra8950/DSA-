
#include<conio.h>
#include<iostream>
using namespace std;
int partition(int c[],int l, int h)
{
    int pivot=c[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(c[i]<=pivot)i++;
        while(c[j]>pivot){j--;}
        if(i<j)
            swap(c[i],c[j]);
    }
    swap(c[l],c[j]);
    return j;
}
void quick(int c[],int l, int h)
{
    if(l<h)
    {
        int pivot=partition(c,l,h);
        quick(c,l,pivot-1);
        quick(c,pivot+1,h);
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
        quick(a,0,n-1);
        display(a,n);
        getch();
}
