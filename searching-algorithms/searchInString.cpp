#include <iostream>
#include <string>
using namespace std;
bool searchInString(string str,char target){
    for(int i=0;i<str.length();i++){
        if(str.length()==0){
            return false;
        }
        else if(str[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    string str = "usman";
    cout<<"Enter the target character to search: ";
    char target;
    cin>>target;
    bool flag=searchInString(str,target);
    if(flag){
        cout<<"character is present in the string";
    }
    else{
        cout<<"character not found";
    }
}