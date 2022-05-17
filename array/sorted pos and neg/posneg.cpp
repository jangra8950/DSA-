
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
void posneg (struct array *c)
{
    int i=0;
    int j=c->length-1;
    while(i<j)
    {
        while(c->x[i]<0){i++;}
        while(c->x[j]>=0){j--;}
        if(i<j)
            swap(c->x[i],c->x[j]);
    }
}
int main()
{
    array a={ {2,4,-2,-8,9,-7},10,6};
    cout<<" to check for sorted array in pos and neg values "<<endl;
    posneg(&a);
    printf("\n");
    display(a);
    getch();
}
