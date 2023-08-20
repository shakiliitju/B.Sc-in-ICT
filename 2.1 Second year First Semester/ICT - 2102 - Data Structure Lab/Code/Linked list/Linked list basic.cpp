#include<bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *next;

};


struct node *Head=NULL;
struct node *Prev,*Curr;


void Insert(int item)
{
    struct node *newnode;
    newnode=new node;
    newnode->info=item;
    newnode->next=NULL;
    if(Head==NULL)
    {
        Head=newnode;
        return ;
    }
    if(newnode->info<Head->info)
    {
        newnode->next=Head;
        Head=newnode;
        return ;
    }
    Prev=NULL;
    Curr=NULL;
    for(Curr=Head; Curr!=NULL; Curr=Curr->next)
    {
        if(Curr->info>newnode->info)
        {
            break;
        }
        else
            Prev=Curr;
    }
    newnode->next=Prev->next;
    Prev->next=newnode;
}





void Delete()
{
    int v;
    if(Head==NULL)
    {
        puts("Empty linked list");
        return;
    }
    cout<<"Enter the value to delete: ";
    cin>>v;
    if(v==Head->info)
    {
        Head=Head->next;
        return ;
    }
    Prev=Curr=NULL;
    for(Curr=Head; Curr!=NULL; Curr=Curr->next)
    {
        if(v==Curr->info)
            break;
        Prev=Curr;
    }
    if(Curr==NULL)
        cout<<v<<" "<<"not found"<<endl;
    else
    {
        Prev->next=Curr->next;
        cout<<v<<" "<<"Deleted"<<endl;
    }
}




void Display()
{
    Curr=NULL;
    for(Curr=Head; Curr!=NULL; Curr=Curr->next)
    {
        cout<<Curr->info<<" ";
    }
}




void Search()
{
    int v;

    if(Head==NULL)
    {
        puts("Empty linked list");
        return;

    }
    cout<<"Enter the value to search: ";
    cin>>v;
    Prev=Curr=NULL;
    for(Curr=Head; Curr!=NULL; Curr=Curr->next)
    {
        if(v==Curr->info)
            break;
        Prev=Curr;
    }
    if(Curr==NULL)
        cout<<v<<" "<<"not found"<<endl;
    else
        cout<<v<<" "<<"is found"<<endl;
}





int main()
{
    int v,c;
    cout<<"\nLinked list operations\n";
    while(1)
    {
        cout<<"\n\n1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Search"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"\nYour choice : ";
        cin>>c;
        system("cls");

        switch(c)
        {
        case 1:
            cout<<"Enter value : ";
            cin>>v;
            Insert(v);
            break;

        case 2:
            Delete();
            break;

        case 3:
            cout<<"Linked list : ";
            Display();
            break;

        case 4:
            Search();
            break;

        case 5:
            exit(0);

        default:
            cout<<"Invalid choice"<<endl;
        }
    }



    return 0;
}
