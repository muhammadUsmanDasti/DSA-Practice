#include<iostream>
using namespace std;

// Searches for target only within [rangeStart, rangeEnd].
bool searchInRange(int arr[],int size,int target,int rangeStart, int rangeEnd){
    // Empty array case.
    if(size==0){
        return false;
    }
    // Reject invalid range to avoid out-of-bounds access.
    if(rangeStart < 0 || rangeEnd >= size || rangeStart > rangeEnd){
        return false;
    }
    // Linear scan inside the requested range.
    for(int i=rangeStart;i<=rangeEnd;i++){
        if(arr[i]==target){
            return true;
        }
    }
    // Target not found in the given range.
    return false;
}

int main(){
    // Sample array for demonstration.
    int arr[10] = {67,12,45,1,-1,45,12,43,9,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter the number to search: ";
    cin>>target;
    cout<<"enter the range: "<<endl;
    int start;
    cout<<"Lower bound: ";
    cin>>start;
    int end;
    cout<<"Upper bound: ";
    cin>>end;

    // Validate user-provided range before searching.
    if(start < 0 || end >= size || start > end){
        cout<<"Invalid range. Enter bounds between 0 and "<<size-1;
        return 0;
    }

    // Perform search and print result.
    bool flag= searchInRange(arr,size,target,start,end);
    if (flag){
        cout<<"found in the range";
    }
    else {
        cout<<"not found";
    }
}