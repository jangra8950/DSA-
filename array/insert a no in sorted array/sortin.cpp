
#include<iostream>
#include<conio.h>
using namespace std;
struct array
{
    int x[10];
    int s;
    int length;
};
void display(struct array c)
{
    cout<<" elements are ";
    for(int i=0;i<c.length;i++)
        cout<<c.x[i]<<endl;
}
void insort (struct array *p,int x)
{
    int i=p->length-1;
    while(p->x[i]>x)
    {
        p->x[i+1]=p->x[i];
        i--;
    }
    p->x[i+1]=x;
    p->length++;
}
int main()
{
    array a={ {2,4,6,8,9},10,5};
    cout<<" length before insertion "<<a.length<<endl;
    insort(&a,5);
    cout<<" length after insertion is "<<a.length<<endl;
    display(a);
    getch();
}
