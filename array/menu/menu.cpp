
#include<iostream>
#include<conio.h>
using namespace std;
struct array
{
    int *x;
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
        for(int i=p->length;i>=index;i--)
        p->x[i]=p->x[i-1];
        p->x[index]=value;
        p->length++;
    }
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
    struct array a;
    int n,ch,x,index;
    cout<<" enter the size of the array "<<endl;
    cin>>n;
    a.s=n;
    a.x=new int[n];
    do
    {

            cout<<"Menu"<<endl;
            cout<< " 1. insert "<<endl;
            cout<< " 2.deletion "<<endl;
            cout<< " 3.to sort pos and neg "<<endl;
            cout<< " 4. display "<<endl;
            cout<< " 5.exit "<<endl;
            cout<< " enter your choice "<<endl;
            cin>>ch;

        switch(ch)
            {
               case 1:
                cout<< " enter the element and index ";
                cin>>x>>index;
                insertion(&a,index,x);
                break;
            case 2:
                cout<< " enter the index no you want to delete ";
                cin>>index;
                x=deletion(&a,index);
                cout<<" deleted element is "<<x;
                break;
            case 3:
                posneg(&a);
                break;
            case 4:
                display(a);
                break;
         }
    }while(ch<5);
    return 0;

}



