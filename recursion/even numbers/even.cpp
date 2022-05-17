
#include<conio.h>
#include<iostream>
using namespace std;
void evennumber(int n)
{
    if(n==0)
        return ;
        //cout<<2*n<<" ";  reverse order
        evennumber(n-1);
       cout<<2*n<<" ";  //odd case 2*n-1
}
int main()
{
    int n;
    cout<<" enter a number ";
    cin>>n;
    evennumber(n);
    getch();
}
