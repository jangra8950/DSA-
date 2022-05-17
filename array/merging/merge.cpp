
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
struct array merger(struct array *a,struct array *b)
{
    struct array c;
    int i,j,k;
    i=j=k=0;
    while(i<a->length && j<b->length)
    {
        if(a->x[i]<b->x[j])
        {
           c.x[k]=a->x[i];
            i++;
            k++;
        }
        else
            {
              c.x[k]=b->x[j];
              k++;
              j++;
            }
    }
       for(;i<a->length;i++)
            c.x[k++]=a->x[i];
       for(;j<b->length;j++)
        c.x[k++]=b->x[j];

    c.length=a->length+b->length;
    c.s=10;
    return c;
    //display(c);
};
int main()
{
    struct array a1,a2,a3;
    a1={ {1,4,6,7,7},10,5};
    a2={ {2,3,5,6},8,4};
    a3= merger(&a1,&a2);
    display(a3);
}
