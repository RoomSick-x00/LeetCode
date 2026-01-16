// #include <iostream>
// using namespace std;

// class stack
// {
//     int arr[5];
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int top = -1;

// public:
//     void push(int d)
//     {
//         if (top == n - 1)
//         {
//             cout << "Array is Full, cannot push." << endl;
//         }
//         else
//         {
//             top++;
//             arr[top] = d;
//         }
//     }

//     void seek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty." << endl;
//         }
//         else
//         {
//             cout << "The element on the top is: " << arr[top] << endl;
//         }
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Array is empty cannot pop." << endl;
//         }
//         else
//         {
//             cout << "Element with the value " << arr[top] << " has been poped." << endl;
//             top--;
//         }
//     }
// };

// int main()
// {

//     stack s;

//     s.push(10);
//     s.seek();
//     s.push(20);
//     s.seek();
//     s.push(30);
//     s.seek();
//     s.push(40);
//     s.seek();
//     s.push(50);
//     s.seek();
//     s.push(60);
//     s.seek();
//     s.pop();
//     s.seek();
//     s.pop();
//     s.seek();
//     s.pop();
//     s.seek();
//     s.pop();
//     s.seek();
//     s.pop();
//     s.seek();

//     return 0;
// }

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Stack{
    node*top;
    public:
    Stack(){
        top = nullptr;
    }

    bool isEmpty(){
        return top==nullptr;
    }

    void push(int d){
        node* newNode = new node(d);

        if(isEmpty()){
            top = newNode;
            return;
        }
        newNode->prev = top;
        top = newNode;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Cannot pop, Stack is empty.";
            return;
        }
        
        node* temp = top;
        top = temp->prev;
        delete temp;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty, cannot peek." << endl;
            return;
        }
        cout << "Top element is: " << top->data << endl;
    }
};


int main(){
   
   Stack s;
   s.push(1);
   s.peek();
   s.push(2);
   s.peek();
   s.push(3);
   s.peek();
   s.pop();
   s.peek();
   s.pop();
   s.peek();
   s.pop();
   s.peek();
   return 0;
}