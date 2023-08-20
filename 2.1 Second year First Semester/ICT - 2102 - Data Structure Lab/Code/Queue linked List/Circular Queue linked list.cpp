#include<iostream>
#define SIZE 5
using namespace std;


class node
{
public:
    node()
    {
        next = NULL;
    }
    int data;
    node *next;
}*front=NULL,*rear=NULL,*n,*temp,*temp1;


class cqueue
{
public:
    void insertion();
    void deletion();
    void display();
};


int main()
{
    cqueue cqobj;
    int ch;
    cout<<"\nCircular Queue Linked list";
    while(1)
    {
        cout<<"\n\n1. Insert";
        cout<<"\n2. Delete";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";
        cout<<"\n\nEnter Your Choice : ";
        cin>>ch;
        system("cls");

        switch(ch)
        {
        case 1:
            cqobj.insertion();
            break;
        case 2:
            cqobj.deletion();
            break;
        case 3:
            cqobj.display();
            break;
        case 4:
            break;
        default:
            cout<<"\nWrong Choice!!! Try Again.";
        }
    }
    return 0;
}



void cqueue::insertion()
{
    n=new node[sizeof(node)];
    cout<<"\nEnter the Element: ";
    cin>>n->data;
    cout<<"\nInserted : "<<n->data;
    if(front==NULL)
    {
        front=n;
    }
    else
    {
        rear->next=n;
    }
    rear=n;
    rear->next=front;
}




void cqueue::deletion()
{
    int x;
    temp=front;
    if(front==NULL)
    {
        cout<<"\nQueue is Empty.";
    }
    else
    {
        if(front==rear)
        {
            x=front->data;
            delete(temp);
            front=NULL;
            rear=NULL;
        }
        else
        {
            x=temp->data;
            front=front->next;
            rear->next=front;
            delete(temp);
        }
        cout<<"Deleted"<<x;
        display();
    }
}



void cqueue::display()
{
    temp=front;
    temp1=NULL;
    if(front==NULL)
    {
        cout<<"\nQueue is Empty.";
    }
    else
    {
        cout<<"\n\nElements : ";
        while(temp!=temp1)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
            temp1=front;
        }
    }
}
