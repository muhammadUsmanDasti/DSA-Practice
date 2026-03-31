#include <iostream>
#include <string>
using namespace std;

// Returns true if target character exists in the string.
bool searchInString(string str,char target){
    // Quick check for an empty string.
    if(str.empty()){
        return false;
    }

    // Linear scan through each character.
    for(int i=0;i<str.length();i++){
        if(str[i]==target){
            return true;
        }
    }

    // Target character not found.
    return false;
}
int main(){
    // Sample input string.
    string str = "usman";
    cout<<"Enter the target character to search: ";
    char target;
    cin>>target;

    // Call search function and print result.
    bool flag=searchInString(str,target);
    if(flag){
        cout<<"character is present in the string";
    }
    else{
        cout<<"character not found";
    }
}