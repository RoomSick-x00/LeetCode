//using standard template llibrary..

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(11);
    q.pop();
    q.push(9);
    cout<<q.front()<<endl;
    q.push(7);
    cout<<q.front()<<endl;
    q.push(5);
    cout<<q.front()<<endl;
    q.push(11);
    q.pop();
    cout<<q.front()<<endl;
    q.pop(); 
    cout<<q.front()<<endl;
    if(q.empty()){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty";
    }
}