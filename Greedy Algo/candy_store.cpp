#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>candy_value = {5,3,2,1,4};
    int n = 5;
    int k = 2;//if you buy a cany you can get any 2 candies for free.

    sort(candy_value.begin(), candy_value.end());

    for (int i =candy_value.size() ;i < candy_value.size(); i++) {
        cout << candy_value[i] << " ";
    }

    return 0;
}
