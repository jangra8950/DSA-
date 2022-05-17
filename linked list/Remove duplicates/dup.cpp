
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
    ~linkedlist();
    void display();
    int length();
   void insert(int index,int x);
    void Rduplicate();
};

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

void linkedlist::Rduplicate()
{
    node *p=first;
    node *q=p->next;
    while(q)
    {
        if(p->data != q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
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
    linkedlist l;
    l.insert(0,2);
    l.insert(1,2);
    l.insert(2,2);
    l.insert(3,3);
    l.insert(4,9);
    l.display();
    cout<<endl;
    l.Rduplicate();
    l.display();
    getch();
}
