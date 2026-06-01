// Find count of an element in a sorted array.
#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int x,bool flag){
    // When flag is true, search for first occurrence.
    // When flag is false, search for last occurrence.
    int start = 0;
    int end = size-1;
    int result = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x){
            result = mid;
            if(flag){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        else if(x < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }
    return result;
}

int findCount(int arr[],int size, int x){
    // Find first occurrence first.
    int firstOcc = binarySearch(arr,size,x,true);
    if(firstOcc == -1){
        // Element not present in the array.
        return 0;
    }

    // Find last occurrence and compute total count.
    int lastOcc = binarySearch(arr,size,x,false);
    int count = lastOcc-firstOcc+1;
    return count;
}
int main(){
    // Sample sorted array with repeated values.
    int arr[] = {2,2,3,3,3,10,10,10,10,10,11,11,15,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;

    // Read the target value from the user.
    cout<<"Enter the number: ";
    cin>>x;

    // Print either the count or a not-found message.
    int ans = findCount(arr,size,x);
    if(ans==0){
        cout<<"The element you searched for is not in the array";
    }
    else{
        cout<<"the element "<<x<<" is present in array "<<ans<<" times";
    }
    return 0;
}