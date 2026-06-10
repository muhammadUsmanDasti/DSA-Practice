#include<iostream>
using namespace std;
void print_array(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<endl;
}
void insertionSort(int arr[] , int size){
    for(int i=1;i<size;i++){
        int value = arr[i];
        int hole = i;
        while(hole>0&&arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole= hole-1;
        }
        arr[hole]=value;
    }
}
int main(){
    int arr[6]={2,7,3,1,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted: ";
    print_array(arr,size);
    insertionSort(arr,size);
    cout<<"Sorted: ";
    print_array(arr,size);
    return 0;
}