#include<iostream>
using namespace std;
class stack
{
private:
    int size;
    int top;
    int *s;
public :
    stack(){s=NULL;}
    stack(int x);
    ~stack()
    {
        delete []s;
    }
    void display();
    void push(int x);
    int pop();
    int peek(int index);
    int isempty();
    int isfull();
};

 stack::stack(int x)
{
    size=x;
    top=-1;
    s=new int [x];
}
void stack::display()
{
    int i;
    for(i=top;i>-1;i--)
        cout<<s[i]<<" ";
}
int stack:: isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int stack::isfull()
{
    if(top==size-1)
        return 1;
    else return 0;
}
void stack::push(int x)
{
    if(isfull())
    {
      cout<<" stack overflow ";
      return;
    }
    else
     top++;
     s[top]=x;
}
int stack:: pop()
{
    int x=-1;
    if(isempty())
    {
        cout<<" stack reached at end ";
        return -1;
    }
    else
        x=s[top];
        top--;
        return x;
}
int stack:: peek(int index)
{
    int x=-1;
    if(top-index+1<0 || top-index+1>size)
    {
        cout<<" invalid index";
        return -1;
    }
    x=s[top-index+1];
    return x;
}

int main()
{
    stack st(6);
    st.push(3);
    st.push(2);
    st.push(5);
    st.push(8);
    cout<<st.pop();
    cout<<endl;
    cout<<st.peek(2)<<endl;
    st.display();
}
