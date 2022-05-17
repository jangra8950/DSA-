
#include<iostream>
#include<conio.h>
using namespace std;
struct array
{
    int x[10];
    int s;
    int length;
};
int binary (struct array c,int key)
{
   int l=0;
   int r=c.length-1;
   while(l<=r)
   {
        int mid=(l+r)/2;
       if(key==c.x[mid])
        return mid;
       else if (key<c.x[mid])
        r=mid-1;
       else
        l=mid+1;
   }
   return -1;
}
int main()
{
    array a={ {2,4,6,8,9},10,5};
    cout<<" your elements is found at "<<binary(a,7);
    getch();
}
