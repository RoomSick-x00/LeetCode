// #include <iostream>
// using namespace std;

// class Queue {
// public:
//     int arr[5];
//     int front = -1;
//     int rear = -1;
//     int size = 5;

//     bool isEmpty() {
//         return front == -1;
//     }

//     bool isFull() {
//         return rear == size - 1;
//     }

//     void enqueue(int d) {
//         if (isFull()) {
//             cout << "Queue is full. Cannot enqueue " << d << endl;
//             return;
//         }
//         if (isEmpty()) {
//             front = 0; 
//         }
//         rear++;
//         arr[rear] = d;
//         cout << "Enqueued: " << d << endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty. Cannot dequeue." << endl;
//             return;
//         }
//         cout << "Dequeued: " << arr[front] << endl;
//         front++;
//         if (front > rear) {
            
//             front = -1;
//             rear = -1;
//         }
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         cout << "Queue elements: ";
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue q;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60); 

//     q.display();

//     q.dequeue();
//     q.dequeue();
//     q.display();

//     q.enqueue(60);
//     q.display();

//     return 0;
// }


#include <iostream>
using namespace std;

class node {
  public:
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class Queue{
    node* head;

    public:
    Queue(){
        head = nullptr;
    }

    bool isEmpty(){
        return head == nullptr;
    }

    void enqueue(int d){
        node* newNode = new node(d);
        if(isEmpty()){
            head = newNode;
        }

        else{
            node* temp = head;
            while(temp->right != nullptr){
                temp = temp->right;
            }
            temp->right = newNode;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty, cannot dequeue";
            return;
        }
        node* temp = head;
        head = head->right;

        delete temp;
    }

    int front(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }
        return head->data;
    }

    int rear(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }

        node*temp = head;
        while(temp->right != nullptr){
            temp = temp->right;
        }
        return temp->data;
    }
};

int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;

    q.dequeue();
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;

    q.enqueue(40);
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;
   
    return 0;
}