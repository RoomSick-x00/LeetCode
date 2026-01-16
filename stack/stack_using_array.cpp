#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int capacity;

public:
    // Constructor
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Destructor
    ~Stack()
    {
        delete[] arr;
    }

    // Push operation
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    // Pop operation
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    // Peek operation to get top element
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if the stack is empty
    bool isEmpty()
    {
        return top == -1;  // Corrected condition
    }

    // Check if the stack is full
    bool isFull()
    {
        return top == capacity - 1;
    }

    // Get the current size of the stack
    int size()
    {
        return top + 1;
    }
};

// Main function
int main(){
    Stack stack(5);  // Corrected to 'Stack' (capital 'S')

    // Push elements to the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    // Display top element and size
    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack size is: " << stack.size() << endl;

    // Pop two elements
    stack.pop();
    stack.pop();

    // Display top element and size after popping
    cout << "Top element after popping two elements: " << stack.peek() << endl;
    cout << "Stack size after popping two elements: " << stack.size() << endl;

    return 0;
}
