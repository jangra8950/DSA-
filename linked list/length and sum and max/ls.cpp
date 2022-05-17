
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
    int sum();
    int max();
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
int linkedlist::sum()
{
    node *p=first;
    int s=0;
    while(p)
    {
        s=s+p->data;
        p=p->next;
    }
    return s;
}
int linkedlist::max()
{
    node *p=first;
    int g=p->data;
    while(p)
    {
        if(p->data>g)
            g=p->data;
        p=p->next;
    }
    return g;
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
    linkedlist l(a,5);
    l.display();
    cout<<endl;
    cout<<" length of linked list is "<<l.length();
    cout<<endl;
    cout<< " sum of linked list is "<<l.sum();
    cout<<endl;
    cout<< " maximum element is "<<l.max();
    getch();
}
