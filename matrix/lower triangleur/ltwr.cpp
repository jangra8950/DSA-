
#include<conio.h>
#include<iostream>
using namespace std;
class lowerTri
{
private:
    int n;
    int *a;
public:
    lowerTri(int k)
    {
        n=k;
        a=new int [n*(n+1)/2];
    }
    ~lowerTri()
    {
        delete []a;
    }
    void set(int i, int j, int x);
    int get(int i,int j);
    void display();
};
void lowerTri::set(int i,int j,int x)
{
    if(i>=j)
        a[i*(i-1)/2+j-1]=x;
}
int lowerTri::get(int i,int j)
{
    if(i>=j)
        return a[i*(i-1)/2+j-1];
    else
        return 0;
}
void lowerTri:: display()
{   int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
                cout<<a[i*(i-1)/2+j-1]<<" ";
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
    lowerTri m(d);
    n=d*d;
    cout<< " enter " <<n<< " elements"<<endl;
    for(i=1;i<=d;i++)
    {
        for(j=1;j<=d;j++)
        {
            cin>>x;
            m.set(i,j,x);
        }
    }
    m.display();
    getch();
}
