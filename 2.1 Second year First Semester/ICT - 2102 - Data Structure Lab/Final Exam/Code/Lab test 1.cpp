
/// Md. Shakil Hossain
/// Exam Roll - 192340
/// Class Roll - 2023
/// Final Lab Exam
/// Question 2


#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node* top = NULL;



void insert(int val)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}



void deleted()
{
    if(top==NULL)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The Deleted element : "<< top->data <<endl;
        top = top->next;
    }
}



void traverse()
{
    struct Node* p;
    if(top==NULL)
        cout<<"stack is empty."<<endl;
    else
    {
        p = top;
        cout<<"Stack elements are : ";
        while (p != NULL)
        {
            cout<< p->data <<" ";
            p = p->next;
        }
    }
    cout<<endl;
}



int main()
{
    int a, x;
    cout << "\n";
    cout << "STACK Linked List\n";
    while(1)
    {
        cout<<"\n1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Traverse"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"\nEnter choice : ";
        cin>>a;

        switch(a)
        {
        case 1:
        {
            cout<<"Enter value : ";
            cin>>x;
            insert(x);
            cout << "Inserted: " << x << endl ;
            break;
        }
        case 2:
        {
            deleted();
            break;
        }
        case 3:
        {
            traverse();
            break;
        }
        case 4:
        {
            cout<<"Thank you"<<endl;
            exit(0);
        }
        default:
        {
            cout<<"Invalid Choice"<<endl;
            break;
        }
        }
    }
    return 0;
}
