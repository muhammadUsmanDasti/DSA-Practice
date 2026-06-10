#include<iostream>
using namespace std;


int binarySearch(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[10] ={12,24,30,36,42,48,51,66,70,72};
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr, size, target);
    return 0;
}