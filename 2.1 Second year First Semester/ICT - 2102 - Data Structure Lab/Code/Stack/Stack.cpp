#include <bits/stdc++.h>
#define STACKSIZE 10
using namespace std;

int Top = -1;
int Stack[STACKSIZE];

class Shakil
{
public:


    void push( int item)
    {
        Stack[++Top] = item;
    }


    int pop()
    {
        return Stack[Top--];
    }


    void Traverse()
    {
        int TopTemp = Top;
        do
        {
            cout << Stack[TopTemp--] << " ";
        }
        while(TopTemp >= 0);
    }
};



int main()
{
    Shakil s;
    int v, n;
        cout << "\nSTACK OPERATIONS\n";
    while(1)
    {
        cout << "\n1. Push \n";
        cout << "2. Pop\n";
        cout << "3. Traverse\n";
        cout << "4. Exit\n";
        cout << "\nyour choice : ";
        cin >> n;
        system("cls");

        switch(n)
        {
        case 1:
            if(Top == STACKSIZE - 1)
                cout << "\nStack Full\n";
            else
            {
                cout << "\nEnter a value: ";
                cin >> v;
                s.push(v);
            }
            break;

        case 2:
            if(Top == -1)
                cout << "\nStack Empty\n";
            else
            {
                v = s.pop();
                cout << "\nDeleted from Stack: " << v << endl;
            }
            break;

        case 3:
            if(Top == -1)
                cout << "\nStack Empty\n";
            else
            {
                cout << "\nItem : ";
                s.Traverse();
            }
            break;
        case 4:
            exit(0);
        }
    }
}

