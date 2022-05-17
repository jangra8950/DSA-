#include<conio.h>
#include<iostream>
using namespace std;
int fib(int a)
{
    int s=0;
    if(a==1)
        return 0;
    if(a==0)
        return 1;
    s=fib(a-1)+fib(a-2);
    return s;
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
