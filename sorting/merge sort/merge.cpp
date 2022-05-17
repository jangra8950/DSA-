
#include<conio.h>
#include<iostream>
using namespace std;
void merge(int a[],int l,int mid, int h)
{
   int i,j,k;
   int c[50];
   i=l;
   j=mid+1;
   k=l;
   while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++];
    }
    for(;i<=mid;i++)
        c[k++]=a[i];
     for(;j<=h;j++)
        c[k++]=a[j];
    for(i=l;i<=h;i++)
           a[i]= c[i];


}
void mergesort(int c[],int l, int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(c,l,mid);
        mergesort(c,mid+1,h);
        merge(c,l,mid,h);
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
        mergesort(a,0,n-1);
        display(a,n);
        getch();
}
