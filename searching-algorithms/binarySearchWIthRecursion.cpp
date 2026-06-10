#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int x){
    if (start>end){
        return -1;
    }
    int mid =start +(end-start)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(x<arr[mid]){
        return binarySearch(arr,start,mid-1,x);
    }
    else{
        return binarySearch(arr,mid+1,end,x);
    }
}
int main(){
    int arr[] = {1,3,5,6,56,78,82,94,95,99};
    int size =sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;
    int ans=binarySearch(arr,start,end,x);
    if(ans != -1){
        cout<<"The element "<<x<<" is found at the index: "<<ans;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}