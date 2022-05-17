
#include<conio.h>
#include<iostream>
using namespace std;

int pow(int x,int y)
{
    if(y==0)
    return 1;

    return x*pow(x,y-1);
}
int main()
{
    int a,b;
    cout<<"enter first no to get power of "<<endl;
    cin>>a;
    cout<<" enter second number to how many times "<<endl;
    cin>>b;
    cout<<" power is ";
    cout<<pow(a,b);
    getch();
}
