#include<iostream>
using namespace std;

// Fixed matrix dimensions for this example.
const int row =5;
const int col =5;

// Returns the maximum element in a 2D array.
int maxIn2DArray(int arr[][col],int rows){
    // Guard against empty matrix.
    if(rows<=0){
        return 0;
    }

    // Initialize maximum with first element.
    int maxValue = arr[0][0];
    // Scan all elements and track the maximum.
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxValue){
                maxValue=arr[i][j];
                
            }

        }
    
    }
    return maxValue;
}

int main(){
    // Sample 2D array data.
    int arr[row][col]={{21,34,54,67,65},
                   {1,2,3,4,45},
                   {54,67,91,23,69},
                   {32,46,15,97,27},
                   {19,28,38,47,101}};

    // Find and print the maximum value.
    cout<<"The maximum number in 2D array is: ";

    int maxValue=maxIn2DArray(arr,row);
    cout<<maxValue;
    return 0;
}