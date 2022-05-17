
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
    void insertlast(int x);
};
void linkedlist::insertlast(int x)
{
    node *last,*t;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
        first=last=t;
    else
    {
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
    l.insertlast(4);
    l.insertlast(2);
    l.insertlast(6);
    l.insertlast(3);
    l.display();
    cout<<endl;
    getch();
}
