#include<iostream>
using namespace std;
void print_array(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<endl;
}
void merge(int arr[],int L[],int R[]){
    int size_of_L = sizeof(L)/sizeof(L[0]);
    int size_of_R = sizeof(R)/sizeof(R[0]);
    int i,j,k =0;
    while(i<size_of_L&&j<size_of_R){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            if(R[j]<L[i]){
                arr[k]=R[j];
                j++;
            }
        }
        k++;
    }
    while(i<size_of_L){
        arr[k]=L[i];
    }
    while(j<size_of_R){
        arr[k]=R[j];
    }
}
void mergeSort(int arr[]){

}
int main(){
    int arr[8]={2,4,1,6,8,5,3,7};
    cout<<"Unsorted: ";
    print_array(arr);
    mergeSort(arr);
    cout<<"Sorted: ";
    print_array(arr);
    return 0;

}