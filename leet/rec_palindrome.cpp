#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int i=0;
bool isPalindrome(string s){
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    s.erase(std::remove_if(s.begin(), s.end(), ::ispunct), s.end());
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i=0; i<s.length(); i++){
        if(i > s.length()/2) break;
        if(s[i] != s[s.length()-i-1]) return false;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    isPalindrome(s);

    return 0;
}