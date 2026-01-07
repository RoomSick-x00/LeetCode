#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precalculation

    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++; // 1 2 3 1 4 : ab arr[0]=1 wo fir hoga hash[1] aur wo inc ho jaega aise kar k value inc hogi bss.
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
    return 0;
}