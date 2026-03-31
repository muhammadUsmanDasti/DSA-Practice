#include<iostream>
using namespace std;
int linearSearch (int arr[],int size, int x);
int main()
{
    int num[10] ={1,2,3,4,5,6,7,8,9,10};
    int size =sizeof(num)/sizeof(num[0]);
    int x;
    cout<<"Enter the number to be searched: ";
    cin>>x;
    int index = linearSearch(num,size, x);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}
int linearSearch (int arr[], int size, int value){
      for(int i=0;i<size;i++){
        if(arr[i] == value){
            return i;
        }
        
      }
      return -1;
      
      
}