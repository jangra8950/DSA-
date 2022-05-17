
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
int deletion(struct array *p,int index)
{
    int j,i;
    if(index>=0 && index<p->length)
    {
        j=p->x[index];
        for( i=index;i<p->length;i++)
        p->x[i]=p->x[i+1];
        p->length--;
        return j;
    }
    return j;
}
int main()
{
    array a={ {2,4,6,8,9},10,5};
    cout<<deletion(&a,2)<<endl;
    display(a);
    getch();
}
