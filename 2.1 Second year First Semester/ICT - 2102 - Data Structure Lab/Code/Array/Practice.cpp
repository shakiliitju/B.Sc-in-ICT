#include <bits/stdc++.h>
using namespace std;


class Shakil
{

public:

    struct node
    {
        int info;
        struct node *next;
    } *start,*temp;


    void Insert()
    {
        int n,v;
        cout << "Enter node : ";
        cin >> n;

        while(n--)
        {
            cout << "Enter value : ";
            cin >> v;
            temp=(node*)malloc(sizeof(node));
            temp->info=v;
            temp->next=start;
            start=temp;
        }
    }


    void Midden()
    {

//        if(n%2==0)
        {
//           m=(a[n-1/2]+(a[n/2]))/2;
        }
//       else
        {
//           m=a[n/2];
        }
//        printf("\nMedian is %f\n",m);
    }


    void Display()
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->info<<" ";
            temp=temp->next;
        }
        cout<<"\n";

    }

};



int main()
{

    Shakil o;
    int c;
    cout<<"\n  \n";
    while(1)
    {
        cout<<"\n1.Insert";
        cout<<"\n2.Midden";
        cout<<"\n3.Maximum";
        cout<<"\n4.Minimum";
        cout<<"\n5.Display";
        cout<<"\n6.Exit\n";
        cout<<"\nEnter choice : ";
        cin>>c;
        system ("cls");

        switch(c)
        {
        case 1:
            o.Insert();
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            o.Display();
            break;

        case 6 :
            cout<<"\nTHANK YOU";
            exit(0);
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }

}

