#include<iostream>
using namespace std;
int main(){
    int n= 10;
    void* ptr = &n;
    cout<<*(int*)ptr;  //first type cast then de-referance
    return 0;
}