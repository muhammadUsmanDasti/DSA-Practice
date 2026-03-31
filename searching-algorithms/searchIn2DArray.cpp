#include<iostream>
#include<utility>
using namespace std;

// Fixed dimensions for this sample 2D array.
const int row = 5;
const int col = 5;

// Returns the index pair of target if found, otherwise {-1, -1}.
pair<int,int> searchIn2DArray(int arr[][col],int rows,int target){
    // Linear scan over all rows and columns.
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return {i,j};
            }

        }
    
    }
    // Target does not exist in the matrix.
    return {-1,-1};
}

int main(){
    // Sample 2D array.
    int arr[row][col]={{21,34,54,67,65},
                   {1,2,3,4,45},
                   {54,67,91,23,69},
                   {32,46,15,97,27},
                   {19,28,38,47,101}};

    // Read target value from user.
    int target;
    cout<<"Enter the element you want to search: ";
    cin>>target;

    // Search and print position if found.
    pair <int,int> result = searchIn2DArray(arr,row,target);
    if(result.first!=-1){
        cout<<"The element found at row: "<<result.first<<" and column at "<<result.second;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}