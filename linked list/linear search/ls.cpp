
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
    node* lsearch(int key);
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

node* linkedlist:: lsearch(int key)
{
    node *p=first;
    node *q=NULL;
    while(p)
    {
        if(key==p->data)
        {
            if(q==NULL)return p;
           q->next=p->next;
           p->next=first;
           first=p;
           return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
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
    node *x;
    int a[5]={2,4,6,3,5};
    linkedlist l(a,5);
    x=l.lsearch(2);
    if(x)
      cout<<" key is found "<<x->data<<endl;
    else
        cout<<" key is not found";
    l.display();
    getch();
}
