#include <iostream>
#include <queue>
using namespace std;


class Node{
   public:
   int data;
   Node *left, *right;

   Node(int value) {
      data = value;
      left = right = NULL;
   }
};

Node* Binary_Tree(){
   int x;
   cin>>x;

   if(x==-1){
      return NULL;
   }  

   Node* temp = new Node(x);

   cout<<"Enter left child of "<<x<<" : ";
   temp->left = Binary_Tree();
   
   cout<<"Enter right child of "<<x<<" : ";
   temp->right = Binary_Tree();
   
   return temp;
}


void preorder(Node* temp){ //NLR
   if(temp == NULL) return;
   
   cout<<temp->data<<" ";
   preorder(temp->left);
   preorder(temp->right);
}

void postorder(Node* temp){ //LRN
   if(temp == NULL) return;
   
   preorder(temp->left);
   preorder(temp->right);
   cout<<temp->data<<" ";
}

void inorder(Node* temp){ //LNR
   if(temp == NULL) return;

   preorder(temp->left);
   cout<<temp->data<<" ";
   preorder(temp->right);
}

int height(Node* temp){
    if(temp == NULL) return 0;

    int left = height(temp->left);
    int right = height(temp->right);

    int ans=max(left,right)+1;
    return ans;
}

int main(){
   
   cout<<"Enter the root node value: ";
   Node* root = Binary_Tree();
   cout<<"pre-order traversal is: ";
   preorder(root);
   cout<<endl;

   cout<<"in-order traversal is: ";
   inorder(root);
   

   cout<<"post-order traversal is: ";
   postorder(root);
   cout<<endl;

   cout<<"Height of the tree is: "<<height(root)<<endl;


   return 0;
}