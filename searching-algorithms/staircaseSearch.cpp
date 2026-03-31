#include<iostream>
using namespace std;

// Fixed matrix dimensions used in this example.
const int row = 5;
const int col = 5;

pair <int,int> stairCaseSearchIn2DArray(int arr[][col],int row, int target){
    // Start from top-right corner.
    int i=0;
    int j = col-1;

    // Move left if current element is larger, move down if smaller.
    while(i<row&&j>=0){
        if(arr[i][j]==target){
            return {i,j};
        }
        else if(target<arr[i][j]){
            j--;
        }
        else{
            i++;
        }
    }
    // Target not present in the matrix.
    return {-1,-1};
}
int main(){
    // assume Matrix is sorted row-wise and column-wise.
    int arr[row][col] ={{1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};

    // Read target value from user.
    int target;
    cout<<"Enter the element you want to search: ";
    cin>>target;

    // Search and print result coordinates.
    pair <int,int> result = stairCaseSearchIn2DArray(arr,row,target);
    if(result.first!=-1){
        cout<<"Element found at the row: "<<result.first<<" and the column at: "<<result.second;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}