
#include<conio.h>
#include<iostream>
using namespace std;
void digitrev(int n)
{
       int f;
       if(n==0)
        return ;
        f=n%10;
        cout<<f;
      digitrev(n/10);
}
int main()
{
    int n;
    cout<<" enter a number "<<endl;
    cin>>n;
    cout<<" reverse no is ";
    digitrev(n);
    getch();
}
