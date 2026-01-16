#include <iostream>
using namespace std;

class circularqueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    circularqueue()
    {
        size = 1000;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // bool isEmpty()
    // {
    //     return rear == front;
    // }

    // bool isFull()
    // {
    //     return rear == size - 1;
    // }

    bool enqueue(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is full" << endl;
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }

        else
        {
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int deleted = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = - 1;
        }

        else if (front == size - 1)
        {
            front = 0; // maintain cyclic
        }

        else
        {
            front++;
        }
        return deleted;
    }
};

int main()
{
    circularqueue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    return 0;
}
