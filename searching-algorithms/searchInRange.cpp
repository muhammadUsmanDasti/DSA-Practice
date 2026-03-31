#include<iostream>
using namespace std;

bool searchInRange(int arr[],int size,int target,int rangeStart, int rangeEnd){
    if(size==0){
            return false;
        }
    for(int i=rangeStart;i<=rangeEnd;i++){
        
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main(){
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
    bool flag= searchInRange(arr,size,target,start,end);
    if (flag){
        cout<<"found in the range";
    }
    else {
        cout<<"not found";
    }
}