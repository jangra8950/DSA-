#include<conio.h>
#include<iostream>
using namespace std;
int sumeven(int n)
{
    int s;
    if(n==0)
        return 0;
   s=2*n+ sumeven(n-1);
   return s;
}
int main()
{
    int n;
    cout<<" enter a number "<<endl;
    cin>>n;
    int i=sumeven(n);
    cout<<" sum of "<<n<<" even numbers "<<i;
    getch();
}
