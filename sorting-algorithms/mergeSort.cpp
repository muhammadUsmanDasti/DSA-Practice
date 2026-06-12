#include<iostream>
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
void merge(int arr[], int L[],int R[],int size){
    int size_of_arr = size;
    int size_of_L = size/2;
    int size_of_R = size-size_of_L;
    int i=0,j=0,k =0;
    while(i<size_of_L&&j<size_of_R){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<size_of_L){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<size_of_R){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int size){
    if(size<2){
        return;
    }
    int mid=size/2;
    int L[mid];
    int R[size-mid];
    for(int i=0;i<mid;i++){
        L[i]=arr[i];
    }
    for(int j=mid;j<size;j++){
        R[j-mid]=arr[j];
    }
    mergeSort(L,mid);
    mergeSort(R,size-mid);
    merge(arr,L,R,size);
}
int main(){
    int arr[9] = {2,4,3,11,7,1,5,6,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted: ";
    printArray(arr, size);
    mergeSort(arr,size);
    cout<<"Sorted: ";
    printArray(arr,size);
    return 0;
}