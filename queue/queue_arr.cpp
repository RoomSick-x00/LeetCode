#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    queue()
    {
        size = 1000;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return rear == front;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            front++;
            return arr[front];
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
};

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    return 0;
}
