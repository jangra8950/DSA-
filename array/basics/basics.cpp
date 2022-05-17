#include<iostream>
#include<conio.h>
using namespace std;
struct array
{
    int *p;
    int s;
    int length;
};
void display(struct array c)
{
    cout<<" elements are ";
    for(int i=0;i<c.length;i++)
        cout<<c.p[i]<<endl;
}
int main()
{
    int n,k;
  array a;
  cout<<"enter the size of an array";
  cin>>n;
  a.s=n;
  a.p=new int[a.s];
  cout<<"enter no of elements ";
  cin>>k;
  cout<<"enter "<< k <<" elements ";
  for(int i=0;i<k;i++)
    cin>>a.p[i];
  a.length=k;
  cout<<" size of array is "<<a.s<<endl;
  cout<<" length is "<<a.length<<endl;
    display(a);
  getch();
}
