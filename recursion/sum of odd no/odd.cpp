
#include<conio.h>
#include<iostream>
using namespace std;
int sumodd(int n)
{
    int s;
    if(n==0)
        return 0;
   s=2*n-1+ sumodd(n-1);
   return s;
}
int main()
{
    int n;
    cout<<" enter a number "<<endl;
    cin>>n;
    int i=sumodd(n);
    cout<<" sum of "<<n<<" odd numbers "<<i;
    getch();
}
