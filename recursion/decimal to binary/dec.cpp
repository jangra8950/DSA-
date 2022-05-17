
#include<conio.h>
#include<iostream>
using namespace std;
void bin(int n)
{
    if(n==1)
    cout<< 1;
    else
        {
          bin(n/2);
          cout<<(n%2);
        }
}
int main()
{
    int a;
    cout<<" enter a no to find binary equivalent ";
    cin>>a;
    bin(a);
    getch();
}
