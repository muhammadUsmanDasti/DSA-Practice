#include<iostream>
using namespace std;


int binarySearchFirstOccurance(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    int result = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            result = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return result;
}
int main(){
    int arr[] ={2,4,10,10,10,18,20};
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearchFirstOccurance(arr, size, target);
    return 0;
}