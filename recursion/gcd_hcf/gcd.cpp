
#include<conio.h>
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    if(a==0)
            return b;
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
        return gcd(a,b-a);
    //gcd(b,a%b);

}
int main()
{
    int a,b;
    cout<<" give two numbers to find hcf ";
    cin>>a>>b;
    int x=gcd(a,b);
    cout<< "greatest common divisior  is "<<x;
    getch();
}
