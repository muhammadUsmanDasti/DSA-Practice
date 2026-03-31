#include<iostream>
using namespace std;

const int row =5;
const int col =5;

int maxIn2DArray(int arr[][col],int rows){
    int max = arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]>=max){
                max=arr[i][j];
                
            }

        }
    
    }
    return max;
}

int main(){
    int arr[row][col]={{21,34,54,67,65},
                   {1,2,3,4,45},
                   {54,67,91,23,69},
                   {32,46,15,97,27},
                   {19,28,38,47,101}};
    
    cout<<"the maximum number in 2D array is: : ";
    
    int max=maxIn2DArray(arr,row);
    cout<<max;
    return 0;
}