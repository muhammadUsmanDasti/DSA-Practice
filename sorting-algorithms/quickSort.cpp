#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1){
        cout<<",";
        }
    }
    cout<<endl;
}
int partition(int A[],int start,int end){
    int pivot = A[end];
    int pIndex=start;
    for(int i=start;i<end;i++){
        if(A[i]<=pivot){
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[end]);
    return pIndex;
}
int randomizedPartition(int A[],int start, int end){
    int randomIndex = start + rand() % (end - start + 1);
    swap(A[end],A[randomIndex]);
    return partition(A,start,end);
}

void quickSort(int A[],int start, int end){
    if(start>=end){
        return;
    }
    int pIndex=randomizedPartition(A,start,end);
    quickSort(A,start,pIndex-1);
    quickSort(A,pIndex+1,end);
}
int main(){
    int arr[6]={2,7,3,1,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted: ";
    printArray(arr,size);
    quickSort(arr,0,size-1);
    cout<<"Sorted: ";
    printArray(arr,size);
    return 0;
}

