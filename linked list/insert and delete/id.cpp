

#include<iostream>
#include<conio.h>
using namespace std;

class node
{
public:

    int data;
    node *next;
};
class linkedlist
{
private :
    node *first;
public:
    linkedlist()
    {
        first=NULL;
    }
    linkedlist(int a[],int n);
    ~linkedlist();
    void display();
    int length();
    void insert(int index,int x);
    int deletion(int index);
};
linkedlist::linkedlist(int a[],int n)
{
    node *t,*last;
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int linkedlist::length()
{
    node *p=first;
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    return c;
}

void linkedlist:: insert(int index,int x)
{
    node *p=first;
    if(index<0 || index>length())
        return;
    node *t=new node;
    t->data=x;
    t->next=NULL;

    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
       for(int i=1;i<index;i++)
       p= p->next;
       t->next=p->next;
       p->next=t;
    }
}

int linkedlist:: deletion(int index)
{
    node *p=first;
    node *q=NULL;
    int x;
    if(index<1 || index>length())
        return -1;
    if(index==1)
    {
        first=first->next;
        x=p->data;
        delete p;
        return x;
    }
    else
    {
        for(int i=1;i<index;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}
void linkedlist::display()
{
    node *p=first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

linkedlist::~linkedlist()
{
    node *p=first;
    while(first)
    {
        first=first->next;
        delete p;
        p=first;
    }
}
int main()
{
    int a[5]={2,4,6,3,5};
    int x;
    linkedlist l;
   // linkedlist l(a,5);
    l.insert(0,1);
    l.insert(1,9);
    l.insert(2,6);
    l.insert(1,4);
    l.display();
    cout<<endl;
    x=l.deletion(2);
    cout<< " deleted element is "<<x<<endl;
    l.display();
    getch();
}
