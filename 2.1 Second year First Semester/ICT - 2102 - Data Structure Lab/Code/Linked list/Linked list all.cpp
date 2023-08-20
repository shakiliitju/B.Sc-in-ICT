#include <bits/stdc++.h>
using namespace std;


struct node
{
    int info;
    struct node *next;
}*start, *temp;

void insert_first(int);
void insert_end(int);
void insert_spe(int,int);
void delete_first();
void delete_end();
void delete_spe(int);
void display();



int main()
{
    start=NULL;
    int v,c,l;
    cout<<"\n linked list \n";
    while(1)
    {
        cout<<"\n1.Insert first";
        cout<<"\n2.Insert end";
        cout<<"\n3.Insert specific location";
        cout<<"\n4.Delete first";
        cout<<"\n5.delete end";
        cout<<"\n6.Delete specific location";
        cout<<"\n7.Display";
        cout<<"\n8.Exit\n";
        cout<<"\nEnter choice : ";
        cin>>c;
        system ("cls");

        switch(c)
        {
        case 1:
            cout<<"Enter value : ";
            cin>>v;
            insert_first(v);
            break;
        case 2:
            cout<<"Enter value : ";
            cin>>v;
            insert_end(v);
            break;
        case 3:
            cout<<"Enter location : ";
            cin>>l;
            cout<<"Enter value : ";
            cin>>v;
            insert_spe(v,l);
            break;
        case 4:
            delete_first();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            cout<<"Enter location : ";
            cin>>l;
            delete_spe(l);
            break;
        case 7:
            cout<<"\nInserted item : ";
            display();
            break;
        case 8 :
            cout<<"\nTHANK YOU";
            exit(0);
        default:
            break;
        }
    }

}

void insert_first(int v)
{
    temp=(node*)malloc(sizeof(node));
    temp->info=v;
    temp->next=start;
    start=temp;
}

void insert_end(int v)
{
    temp=(node*)malloc(sizeof(node));
    temp->info=v;
    temp->next=NULL;
    node* current=start;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=temp;
}

void insert_spe(int v,int l)
{
    temp=(node*)malloc(sizeof(node));
    temp->info=v;
    node* current=start;
    int count=1;
    while (count <l-1)
    {
        current=current->next;
        count=count+1;
    }
    temp->next=current->next;
    current->next=temp;
}

void delete_first()
{
    temp=start;
    start=start->next;
    free(temp);
}

void delete_end()
{
    temp=start;
    node* current;
    while(temp->next!=NULL)
    {
        current=temp;
        temp=temp->next;
    }
    current->next=NULL;
    free(temp);
}

void delete_spe(int l)
{
    node* current;
    temp=start;
    int count=1;
    while(count<=l-1)
    {
        current=temp;
        temp=temp->next;
        count=count+1;
    }
    current->next=temp->next;
    free(temp);
}

void display()
{
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<"\n";

}
