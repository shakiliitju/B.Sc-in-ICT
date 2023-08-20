#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
class queue
{
    node *rear;
public:
    queue()
    {
        rear=NULL;
    }
    void insert(int data)
    {
        node *p=new node;
        p->data=data;
        if(rear==NULL)
        {
            rear=p;
            rear->next=p;
        }
        else
        {
            p->next=rear->next;
            rear->next=p;
            rear=p;
        }
    }
    void del()
    {
        if(rear==NULL)
            cout<<"Queue Empty";
        else
        {
            node *t=rear->next;
            cout<<"The element to be deleted is"<<rear->next->data;
            if(rear==t)
                rear=NULL;
            else
            {
                rear->next=t->next;
                delete t;
            }
        }
    }
    void display()
    {
        node *t=rear;
        if(rear==NULL)
            cout<<"Queue Empty";
        else
        {
            do
            {
                t=t->next;
                cout<<t->data<<" ";
            }while(t!=rear);
        }
    }
};

void main()
{
    clrscr();
    queue q;
    int data,option;
    while(1)
    {
        cout<<"\n 1.Insert \n 2.Delete \n 3.Display\n 4.Exit\n Enter your Option";
        cin>>option;
        switch(option)
        {
            case 1:
                    cout<<"\nEnter the element to be inserted";
                    cin>>data;
                    q.insert(data);
                    break;
            case 2:
                    q.del();
                    break;
            case 3:
                    q.display();
                    break;
            case 4:
                    exit(0);
        }
    }
}

