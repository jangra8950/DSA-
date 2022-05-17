
#include<conio.h>
#include<iostream>
using namespace std;
int fib(int a)
{
    int f[20]={0};
    if(a==1)
    {
        f[a]=0;
        return 0;
    }
    if(a==0)
    {
        f[a]=1;
        return 1;
    }
    if (f[a] != 0)
        return f[a];
      return fib(a-1)+fib(a-2);
}
int main()
{
    int n;
    cout<<" give no to find element of fibonacci series ";
    cin>>n;
    int x=fib(n);
    cout<<n<< "no of fibonacci series is "<<x;
    getch();
}
