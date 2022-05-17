
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
   int n,i,j,a[20];
    int count;
    cout<<" enter a no for no of elements ";
    cin>>n;
    cout<<" enter " <<n<< " numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
         count =1;
        if (a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                   count++;
                   a[j]=-1;
                }
            }
            if(count>1)
            cout<<" duplicate element is "<<a[i]<<" repeating "<<count<<endl;
        }
    }
    getch();
}
