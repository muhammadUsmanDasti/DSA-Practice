#include<iostream>
using namespace std;
int minimumNumber(int arr[],int size){
    if(size==0){
        cout<<"array is empty";
        return -1;
    }
    int min = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int arr[10]={123,43,56,76,87,12,-1,5,-10,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minimumNum= minimumNumber(arr,size);
    cout<<minimumNum;
}