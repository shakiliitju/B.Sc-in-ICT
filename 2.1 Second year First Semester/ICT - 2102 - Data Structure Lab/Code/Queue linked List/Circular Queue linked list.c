#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node *f = NULL;
struct node *r = NULL;


void enqueue(int d)
{
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;
    if((r==NULL)&&(f==NULL))
    {
        f = r = n;
        r->next = f;
    }
    else
    {
        r->next = n;
        r = n;
        n->next = f;
    }
}


void dequeue()
{
    struct node* t;
    t = f;
    if((f==NULL)&&(r==NULL))
        printf("\nQueue is Empty");
    else if(f == r)
    {
        f = r = NULL;
        free(t);
    }
    else
    {
        f = f->next;
        r->next = f;
        free(t);
    }

printf("Dequeue Successful");
}


void print()
{
    struct node* t;
    t = f;
    if((f==NULL)&&(r==NULL))
        printf("\nQueue is Empty");
    else
    {
            printf("\nData : ");
        do
        {
            printf(" %d",t->data);
            t = t->next;
        }
        while(t != f);
    }
}


int main()
{
    int opt,n,i,data;
    printf("\nCircular Queue Linked list\n");

    while(1)
    {
        printf("\n\n1. Enqueue\n");
        printf("2. DeQueue\n");
        printf("3. Display \n");
        printf("4. Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d",&opt);
        system("cls");
        switch(opt)
        {
        case 1:
            printf("\nEnter number of data : ");
            scanf("%d",&n);
            printf("Enter your data : ");
            i=0;
            while(i<n)
            {
                scanf("%d",&data);
                enqueue(data);
                i++;
            }
            break;
        case 2:
            dequeue();
            break;
        case 3:
            print();
            break;
        case 0:
            break;
        default:
            printf("\nIncorrect Choice");

        }
    }
    return 0;
}
