#include<iostream>
using namespace std;
void print_array(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}
void selection_sort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        int min_index = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    print_array(arr,size);
}
int main(){
    int unsorted_arr[6]={2,7,4,1,5,3};
    int size = sizeof(unsorted_arr)/sizeof(unsorted_arr[0]);
    selection_sort(unsorted_arr,size);
    return 0;
}