#include<bits/stdc++.h>
using namespace std;

int stac[10],top=-1,stack_size = 10;

class Stack
{
public :

    void push()
    {
        if(top==stack_size -1)
            cout << "\nStack Full\n";
        else
        {
            int x;
            top++;
            cout << "Enter a value: " ;
            cin >> x;
            stac[top]=x;
            cout << "Pushed: " << x << endl ;
        }
    }


    void pop()
    {
        if(top==-1)
            cout << "\nStack Empty\n";
        else
        {
            int t;
            t=stac[top];
            cout << "Deleted from Stack: " << stac[top] << endl;
            top--;
        }
    }


    void traverse()
    {
        int x = top;
        if(x==-1)
            cout << "Stack is Empty!" << endl;
        else
        {
            cout << "List of Item pushed: ";
            while(x!=-1)
            {
                cout << stac[x]  << " ";
                x--;
            }
            cout << endl;
        }
    }
};


int main()
{
    Stack a;
    int choice;
    system("cls");
    while(1)
    {
        cout << "\n";
        cout << "********** STACK OPERATIONS **********\n";
        cout << "1. Push \n2. Pop\n";
        cout << "3. Traverse\n4. Exit\n";
        cout << "\nYour choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            a.push();
            break;

        case 2:
            a.pop();
            break;

        case 3:
            a.traverse();
            break;

        case 4:
            exit(0);
        }
    }
}
