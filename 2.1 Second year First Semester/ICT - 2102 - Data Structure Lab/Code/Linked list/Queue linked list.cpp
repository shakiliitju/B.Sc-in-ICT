#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
};

struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;



void Insert()
{
    int v;
    cout<<"Enter a value : ";
    cin>>v;
    cout << "Inserted: " << v << endl;
    if (rear == NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->info = v;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->info = v;
        temp->next = NULL;
        rear = temp;
    }
}



void Delete()
{
    temp = front;
    if (front == NULL)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout<<"Deleted : "<<front->info<<endl;
        free(front);
        front = temp;
    }
    else
    {
        cout<<"Deleted : "<<front->info<<endl;
        free(front);
        front = NULL;
        rear = NULL;
    }
}




void Display()
{
    temp = front;
    if ((front == NULL) && (rear == NULL))
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue Elements are: ";
    while (temp != NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<endl;
}




int main()
{
    int c;
    cout << "\nQueue linked list\n";
    while(1)
    {
        cout<<"\n1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl<<"Enter your choice : ";
        cin>>c;
        system("cls");

        switch (c)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            exit(0);
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

