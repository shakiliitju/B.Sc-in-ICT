#include <bits/stdc++.h>
#define SIZE 10

using namespace std;

class Queue
{
private:
    int items[SIZE], front, rear;

public:
    Queue()
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

    void EnQueue(int element)
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
            items[rear] = element;
            cout << "Inserted: " << element << endl;
        }
    }

    int DeQueue()
    {
        int element;
        if (IsEmpty())
        {
            cout << "Queue is empty." << endl;
            return (-1);
        }
        else
        {
            element = items[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            cout << "Deleted: " << element << endl;
            return (element);
        }
    }

    void Traverse()
    {

        int i;
        if (IsEmpty())
        {
            cout << "Empty Queue" << endl;
        }
        else
        {
            cout << "Front index: " << front;
            cout << endl<< "Items: ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl << "Rear index: " << rear << endl;
        }
    }
};

int main()
{
    Queue q;
    int choice,element;
    while(1)
    {
        cout << "\n********** QUEUE OPERATION **********\n\n";
        cout << "1. Insert \n2. Delete\n";
        cout << "3. Traverse\n4. Exit\n";
        cout << "\nYour choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter a value: ";
            cin >> element;
            q.EnQueue(element);
            break;

        case 2:
            element = q.DeQueue();
            if(element != -1)
                break;

        case 3:
            q.Traverse();
            break;

        case 4:
            exit(0);
        }
    }
}
