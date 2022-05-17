
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
int ls(struct array *p,int key)
{
    int i;
    for( i=0;i<=p->length;i++)
    {
      if(key==p->x[i])
      {
           swap(p->x[i],p->x[0]);
            return i;
      }
    }
    return -1;
}
int main()
{
    array a={ {2,4,6,8,9},10,5};
    cout<<ls(&a,2)<<endl;
    display(a);
    getch();
}
