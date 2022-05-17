#include<conio.h>
#include<iostream>
using namespace std;
void TOH(int n, int a,int b, int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<" from "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cout<<" enter no of disks ";
    cin>>n;
    TOH(n,1,2,3);
    getch();
}
