// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
#include <iostream>
#include <vector> 
using namespace std;
 
int main()
{
    int n;
    vector<int> divisors;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    divisors.push_back(n);
    for(int i=0; i<divisors.size(); i++){
        cout << divisors[i] << " "; 
    }

    return 0;
}


// class Solution {
//     public:
//         vector<int> divisors(int n) {
//             vector<int> ans;
    
//             for(int i=1; i<=n; i++){
//                 if(n%i == 0){
//                     ans.push_back(i);
//                 }
//             }
    
//             return ans;
//         }
//     };