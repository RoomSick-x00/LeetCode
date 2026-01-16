#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr; 
    }
};

class Stack{
    Node*top;
    public:

    Stack(){
        top = nullptr;
    }

    bool isEmpty(){
        return top == nullptr;
    }

    void push(int value){
        Node* newNode = new Node(value);
        if(isEmpty()){
            top = newNode;
            return;
        }
        newNode->left = top;
        top = newNode;    
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty, can't pop" << endl;
            return;
        }
        Node* temp = top;
        top = top->left;
        delete temp;
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is empty, can't peek" << endl;
            return -1;
        }
        return top->data;
    }
};

int main(){
   Stack s;
   s.push(10);
   s.push(20);
   cout << "Top element is: " << s.peek() << endl;
   s.pop();
   cout << "Top element after pop is: " << s.peek() << endl;

   return 0;
}