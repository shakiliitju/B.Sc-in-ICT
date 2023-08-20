#include <bits/stdc++.h>
#define SIZE 10

using namespace std;

class Queue
{
private:
    int items[SIZE], front, rear,count=0;

public:
    Queue()
    {
        int items[SIZE];
        int front = -1;
        int rear = -1;
        int count = 0;
    }

    bool IsEmpty()
    {
        if (count == 0)
            return true;
        else
            return false;
    }

    bool IsFull()
    {
        if (count == SIZE)
            return true;
        else
            return false;
    }


    void EnQueue(int element)
    {
        if (IsFull())
        {
            cout << "Queue is full\n";
            return;
        }
        if (count == 0)
            rear = front = 0;
        else if (rear == SIZE-1)
            rear = 0;
        else
            rear++;

        items[rear]=element;
        count++;
        cout << "Inserted: " << element << endl;

    }

    int DeQueue()
    {
        if (IsEmpty())
        {
            cout << "\nQueue is empty\n";
            return-1;
        }

        int element = items[front];
        count--;

        if (count == 0)
            front = rear = -1;
        else if (front == SIZE-1)
            front = 0;
        else
            front++;

        cout << "Deleted: " << element << endl;
        return element;

    }

    void Traverse()
    {
        int i;
        if (IsEmpty())
            cout << "\nQueue is empty\n";
        else
        {
            i = front;
            cout << endl<< "Items: ";
            while(1)
            {
                cout << items[i] << " ";
                if (i == rear)
                    break;
                else if (i == SIZE-1)
                    i = 0;
                else
                    i++;
            }
            cout << endl;
            cout << "Front index: " << front;
            cout << endl << "Rear index: " << rear << endl;
        }
    }
};

int main()
{
    Queue q;
    int choice,element;
    cout << "\n********** QUEUE OPERATION **********\n\n";
    while(1)
    {
        cout << "\n1. Insert \n2. Delete\n";
        cout << "3. Traverse\n4. Exit\n";
        cout << "\nYour choice: ";
        cin >> choice;
        system("cls");

        switch(choice)
        {
        case 1:
            cout << "\nEnter a value: ";
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
