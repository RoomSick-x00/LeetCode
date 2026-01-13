#include<iostream>
using namespace std;

pair<bool, int> isbalancedFast(Node*root){
    if(root == NULL)
        return make_pair(true, 0);

    pair<bool, int> left = isbalancedFast(root->left);
    pair<bool, int> right = isbalancedFast(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = (left.second, right.second)+1;

    if(leftAns && rightAns && diff){
        ans.first = true;
    }

    else{
        ans.first = false;
    }

    return ans;
}

bool isBalanced(Node* root){
    isbalancedFast(root);
}