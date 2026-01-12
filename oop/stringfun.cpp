#include <iostream>
#include <string.h>
#include <charconv>
using namespace std;

int main(){
   
   char str1[]="MUMBAI";
   char str2[]="indians";

   /*char* ptr = strstr(str1, "is");

   if (ptr != nullptr) {
        cout << "Substring found at position: " << (ptr - str1) << endl;
    } else {
        cout << "Substring not found." << endl;
    }*/

    char* low = strlwr(str1);
    cout<<low<<endl;
    
    
    char* up = strupr(str2);
    cout<<up<<endl;
    
    int len = strlen(str2);
    cout<<len<<endl;
    
    char* dup = strdup(str1);
    cout<<dup<<endl;
    
    char* rev = strrev(str1);
    cout<<rev<<endl;
    
    char* hash = strset(str1, '#');
    cout<<hash<<endl;
    
    char* nset = strnset(str2, '#', 3);
    cout<<nset<<endl;

    /* char* ptr = strrstr(str2, "is");

   if (ptr != nullptr) {
        cout << "Substring found at position: " << (ptr - str1) << endl;
    } else {
        cout << "Substring not found." << endl;
    }*/

    int result = strcmp(str1, str2);
   
   cout<<result;

   /*if (result == 0) {
        cout << "The strings are equal." << endl;
    } else if (result < 0) {
        cout << "String 1 comes before String 2." << endl;
    } else {
        cout << "String 2 comes before String 1." << endl;
    }*/

   return 0;
}