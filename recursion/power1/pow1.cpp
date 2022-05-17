
#include<conio.h>
#include<iostream>
using namespace std;

int pow(int x,int y)
{
    if(y==0)
    return 1;
    if(y%2==0)
        return pow(x*x,y/2);

    return x*pow(x*x,(y-1)/2);
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
