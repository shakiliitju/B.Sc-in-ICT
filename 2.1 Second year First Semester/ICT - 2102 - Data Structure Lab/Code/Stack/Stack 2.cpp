#include<bits/stdc++.h>
using namespace std;
int top=-1,z[5],n=5;


class Stack
{
public:
    void push(int value)
    {
        if(top==n-1)
        {
            cout<<" Stack is full"<<endl<<endl;
        }
        else
            top+=1;
        z[top]=value;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<" Stack is empty"<<endl<<endl;
        }
        else
            top--;
    }
    void print()
    {
        if(top==-1)
        {
            cout<<" Nothing to display"<<endl<<endl;
        }
        else
        {
            cout<<"The array is : "<<endl;
            for(int i=0; i<=top; i++)
            {
                cout<<z[i]<<" ";
            }
            cout<<endl<<endl;
        }
    }
};

int main()
{
    int value,ch;
    Stack obj;
    while (ch!=4)
    {
        cout<<" 1.Push element in stack"<<endl;
        cout<<" 2.Pop element from stack"<<endl;
        cout<<" 3.Display the stack"<<endl;
        cout<<" 4.Exit"<<endl;
        cout<<endl;
        cout<<" Which operation do you want to perform ?"<<endl;
        cin>>ch;
        system("cls");
        if(ch==1)
        {
            cout<<"Enter the value"<<endl;
            cin>>value;
            obj.push(value);
        }
        if(ch==2)
        {
            obj.pop();
        }
        if(ch==3)
        {
            obj.print();
        }
    }
    if(ch==4)
    {
        cout<<"Exit Operation "<<endl;
    }
    return 0;
}
