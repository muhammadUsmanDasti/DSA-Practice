#include<iostream>
using namespace std;
int addAtEnd(int arr[],int b[],int freePos,int value){
    for(int i=0;i<freePos;i++){
        b[i]=arr[i];
    }
    b[freePos]=value;
    freePos++;
    return freePos;
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10];
    int n,i,freePos;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    freePos=n;
    if(n==size){
        int b[size*2];
        freePos=addAtEnd(arr,b,freePos,12);
        printArray(b,freePos);
    }
    
   
    return 0;
}