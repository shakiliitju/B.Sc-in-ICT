#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};


class Shakil
{
    node *rear;
public:
    Shakil()
    {
        rear=NULL;
    }



    void ins(int data)
    {
        node *p=new node;
        p->data=data;
        cout<<"Inserted : "<<p->data;
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
            cout<<"Queue is Empty";
        else
        {
            node *t=rear->next;
            cout<<"Deleted : "<<rear->next->data;
            if(rear==t)
                rear=NULL;
            else
            {
                rear->next=t->next;
                delete t;
            }
        }
    }



    void dis()
    {
        node *t=rear;
        if(rear==NULL)
            cout<<"Queue is Empty";
        else
        {
                cout<<"\n\nElements : ";
            do
            {
                t=t->next;
                cout<<t->data<<" ";
            }while(t!=rear);
        }
    }
};


int main()
{
    Shakil q;
    int v,a;
    cout<<"\nCircular Queue Linked list";
    while(1)
    {
        cout<<"\n\n1. Insert";
        cout<<"\n2. Delete";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";
        cout<<"\n\nEnter Your Choice : ";
        cin>>a;
        system("cls");
        switch(a)
        {
            case 1:
                    cout<<"\nEnter a value : ";
                    cin>>v;
                    q.ins(v);
                    break;
            case 2:
                    q.del();
                    break;
            case 3:
                    q.dis();
                    break;
            case 4:
                    exit(0);
        }
    }
}

