#include<conio.h>
#include<iostream>
using namespace std;
class diagonal
{
private:
    int n;
    int *a;
public:
    diagonal(int k)
    {
        n=k;
        a=new int [n];
    }
    ~diagonal()
    {
        delete []a;
    }
    void set(int i, int j, int x);
    int get(int i,int j);
    void display();
};
void diagonal::set(int i,int j,int x)
{
    if(i==j)
        a[i-1]=x;
}
int diagonal::get(int i,int j)
{
    if(i==j)
        return a[i-1];
    else
        return 0;
}
void diagonal:: display()
{   int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<a[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    diagonal m(4);
    m.set(1,1,4);
    m.set(2,2,6);
    m.set(3,3,5);
    m.set(4,4,8);
    m.display();
    getch();
}


