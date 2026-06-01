//Given an array nums of integers, 
//return how many of them contain an even number of digits.
#include<iostream>
#include<vector>
using namespace std;

// Returns the number of digits in a given integer.
int digitsInNumber(int num){
    int digit=0;

    // Convert negative number to positive for digit counting.
    if(num<0){
        num =num*-1;
    }
    // Zero has exactly one digit.
    else if(num==0){
        return 1;
    }

    // Count digits by repeatedly dividing by 10.
    while(num>0){
        digit++;
        num=num/10;
    }
    return digit;
}

// Returns true if the number has even digits, otherwise false.
bool even(int num){
    return (digitsInNumber(num) % 2== 0);
}

// Counts how many elements in the array have an even number of digits.
int findNumbers(vector<int>& nums) {
    int count = 0;
    for(int i =0;i<nums.size();i++){
        if(even(nums[i])){
            count++;
        }
    }
    return count;
}

int main(){
    // Sample input array.
    vector<int> arr={3,23,3453,3456};

    // Print total count of numbers with even digits.
    cout<<findNumbers(arr);
    return 0;
}