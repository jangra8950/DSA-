#include<conio.h>
#include<iostream>
using namespace std;
void getnumber(int n)
{
    if(n==0)
        return ;
        getnumber(n-1);
        cout<<n<<" ";
      // getnumber(n-1);
}
int main()
{
    int n;
    cout<<" enter a number ";
    cin>>n;
    getnumber(n);
    getch();
}
