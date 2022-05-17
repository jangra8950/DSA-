
#include<iostream>
using namespace std;
class node
{ public:
    int data;
    node *next;
};
class stack
{
private:
   node *top;
public :
    stack(){top=NULL;}
    ~stack();
    void display();
    void push(int x);
    int pop();
    int peek(int index);
    int isempty();
    int isfull();
};
stack::~stack()
{
       node *p=top;
        while(top)
        {
            top=top->next;
            delete p;
            p=top;
        }
}

void stack::display()
{
    node *p=top;
    while(p)
    {
        cout<<p->data<< " ";
        p=p->next;
    }
}
int stack:: isempty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
int stack::isfull()
{
    node *t=new node;
    if(t)
        return 0;
    else return 1;
}
void stack::push(int x)
{
    node *t=new node;
    if(isfull())
    {
      cout<<" stack overflow ";
      return;
    }
    else
     t->data=x;
     t->next=top;
     top=t;
}
int stack:: pop()
{
    node *p=top;
    int x=-1;
    if(isempty())
    {
        cout<<" stack reached at end ";
        return -1;
    }
    else
    {
        x=p->data;
        top=top->next;
        delete p;
    }

        return x;
}
int stack:: peek(int index)
{
    node *p=top;
    if(isempty())
        return -1;
    else
    {
        for(int i=0;i<index-1&&p;i++)
            p=p->next;
        if(p)
            return p->data;
        else
            return -1;
    }
}

int main()
{
    stack st;
    st.push(3);
    st.push(2);
    st.push(5);
    st.push(8);
    st.display();
    cout<<endl;
    cout<<st.pop();
}
