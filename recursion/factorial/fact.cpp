
#include<conio.h>
#include<iostream>
using namespace std;
int fact(int n)
{
    int f;
    if(n==0)
        return 1;
  // f=n*fact(n-1);
   return n*fact(n-1);
}
int main()
{
    int n;
    cout<<" enter a number "<<endl;
    cin>>n;
    int i=fact(n);
    cout<<" factorial of "<<n<<" numbers "<<i;
    getch();
}
