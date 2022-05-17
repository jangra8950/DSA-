
#include<conio.h>
#include<iostream>
using namespace std;
int digitsum(int n)
{
    int f,s=0;
    if(n==0)
        return 0;
        f=n%10;
   s=f+digitsum(n/10);

   return s;
}
int main()
{
    int n;
    cout<<" enter a number "<<endl;
    cin>>n;
    int i=digitsum(n);
    cout<<" sum of digits of "<<n<<" is "<<i;
    getch();
}
