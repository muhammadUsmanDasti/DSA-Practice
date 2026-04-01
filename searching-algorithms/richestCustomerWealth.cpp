//1672. Richest Customer Wealth --leet code
//You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
//A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
#include<iostream>
#include<vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    if(accounts.empty()){
        return 0;
    }

    int maxWealth=0;
    int sum=0;
    int rows = accounts.size();
    int cols = accounts[0].size();
    for(int i=0 ; i<rows ; i++){
        sum=0;
        for (int j=0 ; j<cols ; j++){
            sum = sum + accounts[i][j];
        }

        if(sum>maxWealth){
            maxWealth=sum;
        }
    }
    return maxWealth;
}

int main(){
    vector<vector<int>> accounts = {{2,3,4},
                                    {3,2,12},
                                    {10,10,12}};
    cout << maximumWealth(accounts);
    return 0;
}
