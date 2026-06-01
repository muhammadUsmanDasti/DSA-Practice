//How many times is a sorted array rotated?
//no duplication
#include<iostream>
using namespace std;

// Returns the index of the minimum element, which equals rotation count.
int findRotationCount(int arr[], int size){
    int start=0;
    int end=size-1;

    // If array is already sorted, rotation count is 0.
    if(arr[start]<=arr[end]){
        return start;
    }
    while(start<=end){
        int mid=start+(end-start)/2;

        // Circular neighbors of mid.
        int previous = (mid+size-1)%size;
        int next = (mid+1)%size;

        // Pivot condition: current element is smaller than both neighbors.
        if(arr[mid]<=arr[previous]&&arr[mid]<=arr[next]){
            return mid;
        }
        // Right half is sorted, so pivot must be in left half.
        else if(arr[mid]<=arr[end]){
            end = mid-1;
        }
        // Left half is sorted, so pivot must be in right half.
        else if(arr[mid]>=arr[start]){
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    // Sample rotated sorted array.
    int arr[] = {4,5,6,1,2,3};
    
    int size = sizeof(arr)/sizeof(arr[0]);

    // Rotation count equals index of smallest element.
    int count = findRotationCount(arr,size);
    cout<<"The given array is rotated "<<count<<" times";
    return 0;
    
}