#include<iostream>
using namespace std;

// Returns the index of the target value, or -1 if not found.
int linearSearch (int arr[],int size, int value);
int main()
{
    // Sample array for searching.
    int num[10] ={1,2,3,4,5,6,7,8,9,10};
    int size =sizeof(num)/sizeof(num[0]);

    // Read the target value from user.
    int x;
    cout<<"Enter the number to be searched: ";
    cin>>x;

    // Call linear search and print result.
    int index = linearSearch(num,size, x);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}

// Checks each element one by one until target is found.
int linearSearch (int arr[], int size, int value){
      for(int i=0;i<size;i++){
        if(arr[i] == value){
            return i;
        }
        
      }
      return -1;
      
      
}