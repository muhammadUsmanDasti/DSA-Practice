#include<iostream>
using namespace std;

int circularArraySearch(int arr[],int size,int x){
    int start=0;
    int end = size-2;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<=arr[end]){
            if(x>arr[mid]&&x<=arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        else if(arr[mid>=arr[start]]){
            if(x>=arr[start]&&x<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
}

int main(){
    int arr[]= {12,14,18,21,3,6,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;
    int ans = circularArraySearch(arr,size,x);
    cout<<"The element "<<x<<" is found at the index: "<<ans;
    return 0;

}