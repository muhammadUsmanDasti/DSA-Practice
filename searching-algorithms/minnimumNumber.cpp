#include<iostream>
using namespace std;

// Returns true and sets minValue if array is non-empty.
bool minimumNumber(const int arr[],int size,int& minValue){
    // Handle empty array case.
    if(size==0){
        return false;
    }

    // Assume first element is minimum, then scan the rest.
    minValue = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<minValue){
            minValue=arr[i];
        }
    }
    return true;
}


int main(){
    // Sample data.
    int arr[10]={123,43,56,76,87,12,-1,5,-10,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Compute minimum and print based on success.
    int minimumNum;
    bool foundMinimum = minimumNumber(arr,size,minimumNum);
    if(foundMinimum){
        cout<<"Minimum number is: "<<minimumNum;
    }
    else{
        cout<<"Array is empty";
    }
}