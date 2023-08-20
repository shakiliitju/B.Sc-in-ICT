#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node* top = NULL;



void push(int val)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}



void pop()
{
    if(top==NULL)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The popped element : "<< top->data <<endl;
        top = top->next;
    }
}



void display()
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
        cout<<"\n1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"\nEnter choice : ";
        cin>>a;
        system("cls");
        switch(a)
        {
        case 1:
        {
            cout<<"Enter value : ";
            cin>>x;
            push(x);
            cout << "Pushed: " << x << endl ;
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
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
