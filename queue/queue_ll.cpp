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

class Queue{
    Node* head;
    public:
    Queue(){
        head = nullptr;
    }
    
    void enqueue(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
        } else{
            Node* temp = head;
            while(temp->right!= nullptr){
                temp = temp->right;
            }
            temp->right = newNode;
        }
    }
    
    int front(){
        if(head == nullptr){
            cout<<"Queue is empty";
            return -1;
        }
        return head->data;
    }

    int rear(){
        if(head == nullptr){
            cout<<"Queue is empty";
            return -1;
        }
        Node* temp = head;
        while(temp->right!= nullptr){
            temp = temp->right;
        }
        return temp->data;
    }

    bool isEmpty(){
        return head == nullptr;
    }

    void dequeue(){
        if(head == nullptr){
            cout<<"Queue is empty";
            return;
        }
        Node* temp = head;
        head = head->right;
        delete temp;
    }
};

int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);

    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Rear element is: "<<q.rear()<<endl;

    q.dequeue();
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Rear element is: "<<q.rear()<<endl;

    q.enqueue(30);
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Rear element is: "<<q.rear()<<endl;
   
    return 0;
}
