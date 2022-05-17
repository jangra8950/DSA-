
#include<conio.h>
#include<iostream>
using namespace std;
class upperTri
{
private:
    int n;
    int *a;
public:
    upperTri(int k)
    {
        n=k;
        a=new int [n*(n+1)/2];
    }
    ~upperTri()
    {
        delete []a;
    }
     void create();
    void set(int i, int j, int x);
    int get(int i,int j);
    void display();
};
 void upperTri::create()
 {
     int x,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>x;
           if(i<=j)
            a[j*(j-1)/2+i-1]=x;
        }
    }
 }
void upperTri::set(int i,int j,int x)
{
    if(i<=j)
        a[j*(j-1)/2+i-1]=x;
}
int upperTri::get(int i,int j)
{
    if(i<=j)
        return a[j*(j-1)/2+i-1];
    else
        return 0;
}
void upperTri:: display()
{   int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<=j)
                cout<<a[j*(j-1)/2+i-1]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    int d,n,x,i,j;
    cout<<" enter dimensions "<<endl;
    cin>>d;
    upperTri m(d);
    n=d*d;
    cout<< " enter " <<n<< " elements"<<endl;
    m.create();
    m.display();
    getch();
}
