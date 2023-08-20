#include <bits/stdc++.h>
#define SIZE 10
using namespace std;

class Shakil
{
private:
    int items[SIZE], front, rear;

public:
    Shakil()
    {
        front = -1;
        rear = -1;
    }

    bool IsFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        return false;
    }

    bool IsEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    void EnQueue(int v)
    {
        if (IsFull())
        {
            cout << "Queue is full.";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = v;
            cout << "Inserted: " << v << endl;
        }
    }

    int DeQueue()
    {
        int v;
        if (IsEmpty())
        {
            cout << "Queue is empty." << endl;
            return (-1);
        }
        else
        {
            v = items[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            cout << "Deleted: " << v << endl;
            return (v);
        }
    }

    void Traverse()
    {

        int i;
        if (IsEmpty())
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            cout << endl<< "Items: ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl<< "Front index: " << front;
            cout << endl << "Rear index: " << rear << endl;
        }
    }
};



int main()
{
    Shakil q;
    int c,v;
        cout << "\nQUEUE OPERATION\n\n";
    while(1)
    {
        cout << "\n1. Insert \n2. Delete\n";
        cout << "3. Traverse\n4. Exit\n";
        cout << "\nYour choice: ";
        cin >> c;
        system("cls");

        switch(c)
        {
        case 1:
            cout << "Enter a value: ";
            cin >> v;
            q.EnQueue(v);
            break;

        case 2:
            v = q.DeQueue();
                break;

        case 3:
            q.Traverse();
            break;

        case 4:
            exit(0);
        }
    }
}
