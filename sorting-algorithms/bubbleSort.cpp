#include<iostream>
#include<utility>
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
void bubbleSort(int arr[], int size){
    for (int i=0;i<size-1;i++){
        bool flag = false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
}
int main(){
    int arr[6]={2,7,3,1,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted: ";
    print_array(arr,size);
    bubbleSort(arr,size);
    cout<<"Sorted: ";
    print_array(arr , size);

    return 0;
}