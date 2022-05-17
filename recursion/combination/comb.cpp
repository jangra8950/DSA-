
#include<conio.h>
#include<iostream>
using namespace std;
int comb(int a,int b)
{
    int s;
    if(a==b||b==0)
        return 1;
    s=comb(a-1,b-1)+comb(a-1,b);
    return s;
}
int main()
{
    int n,r;
    cout<<" give no to n value in ncr ";
    cin>>n;
    cout<<" give value for r ";
    cin>>r;
    int x=comb(n,r);
    cout<< "nCr is "<<x;
    getch();
}
