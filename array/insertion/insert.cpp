
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
void insertion(struct array *p,int index,int value)
{
    if(index>=0 && index<=p->length)
    {
        for(int i=p->length;i>index;i--)
        p->x[i]=p->x[i-1];
        p->x[index]=value;
        p->length++;
    }
}
int main()
{
    array a={ {2,4,6,8,9},10,5};
    cout<<" length before insertion "<<a.length<<endl;
    insertion(&a,4,50);
    cout<<" length after insertion is "<<a.length<<endl;
    display(a);
    getch();
}
