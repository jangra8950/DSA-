#include<conio.h>
#include<iostream>
using namespace std;
int findmax(int a[],int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}
void count(int c[],int n)
{
    int i,j;
    int ma=findmax(c,n);
    int *p= new int [ma+1];
    for(i=0;i<ma+1;i++)
        p[i]=0;
    for(i=0;i<n;i++)
        p[c[i]]++;
    i=0;j=0;
    while(j<ma+1)
    {
        if(p[j]>0)
        {
            c[i++]=j;
            p[j]--;
        }
        j++;
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
        count(a,n);
        display(a,n);
        getch();
}
