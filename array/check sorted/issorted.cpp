
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
int issorted (struct array c)
{
    for(int i=0;i<c.length-1;i++)
    {
        if(c.x[i]>c.x[i+1])
            return false;
    }
    return true;
}
int main()
{
    array a={ {2,4,9,8,9},10,5};
    cout<<" to check for sorted array "<<endl;
    cout<<issorted(a);
    printf("\n");
    display(a);
    getch();
}
