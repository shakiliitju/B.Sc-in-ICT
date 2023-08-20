#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int info;
    node *next,*start,*temp;


    void insert_first(int item)
    {
        temp=(node*)malloc(sizeof(node));
        temp->info=item;
        temp->next=start;
        start=temp;
    }

    void insert_end(int item)
    {
        temp=(node*)malloc(sizeof(node));
        temp->info=item;
        temp->next=NULL;
        node* current=start;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=temp;
    }

    void insert_spe(int item,int location)
    {
        temp=(node*)malloc(sizeof(node));
        temp->info=item;
        node* current=start;
        int count=1;
        while (count <location-1)
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

    void delete_spe(int location)
    {
        node* current;
        temp=start;
        int count=1;
        while(count<=location-1)
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
}*start, *temp;


int main()
{
    node a;
    start=NULL;
    int item,choice,location,element,position;
    cout<<endl<<"********** linked list **********\n";

    while(1)
    {
        cout<<"\n1.Insert first";
        cout<<"\n2.Insert end";
        cout<<"\n3.Insert specific location";
        cout<<"\n4.Delete first";
        cout<<"\n5.Delete end";
        cout<<"\n6.Delete specific location";
        cout<<"\n7.Display";
        cout<<"\n8.Exit\n";
        cout<<"\nEnter choice : ";
        cin>>choice;
        system ("cls");
        switch(choice)
        {
        case 1:
            cout<<"Enter value : ";
            cin>>item;
            a.insert_first(item);
            break;
        case 2:
            cout<<"Enter value : ";
            cin>>item;
            a.insert_end(item);
            break;
        case 3:
            cout<<"Enter location : ";
            cin>>location;
            cout<<"Enter value : ";
            cin>>item;
            a.insert_spe(item,location);
            break;
        case 4:
            a.delete_first();
            break;
        case 5:
            a.delete_end();
            break;
        case 6:
            cout<<"Enter location : ";
            cin>>location;
            a.delete_spe(location);
            break;
        case 7:
            cout<<"\nInserted item : ";
            a.display();
            break;
        case 8 :
            cout<<"\nTHANK YOU";
            exit(0);
        default:
            break;

        }
    }
}
