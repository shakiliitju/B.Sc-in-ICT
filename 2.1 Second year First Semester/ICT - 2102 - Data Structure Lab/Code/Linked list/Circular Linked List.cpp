#include <bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *next;
}*start, *temp,*current;

void cinsert(int);
void cdisplay();

int main()
{
    start=NULL;
    int item,choice,location,element,position;
    cout<<endl<<"Circular Linked List\n";
    while(1)
    {
        cout<<"\n1.Insert\n2.Display\n3.Exit\n" <<endl;
        cout<<"Enter choice : ";
        cin>>choice;
        system ("cls");
        switch(choice)
        {
        case 1:
            cout<<"Enter value: ";
            cin>>item;
            cinsert(item);
            break;

        case 2:
            cout<<"\nInserted item : ";
            cdisplay();
            cout<<"\n";
            break;

        case 3:
            exit(0);
        default:
            break;
        }
    }
}

void cinsert(int item)
{
    temp=(node*)malloc(sizeof(node));
    temp->info=item;
    temp->next=start;
    node* current;
    if(start==NULL)
    {
        start=temp;
        temp->next=start;
    }
    else
    {
        current = start;
        while(current->next != start)
        {
            current = current->next;
        }
        current->next = temp;
    }
}

void cdisplay()
{
    current = start;
    do
    {
        cout<<current->info<<" ";
        current = current->next;
    }
    while(current!=start);

}
