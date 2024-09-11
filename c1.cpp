/*Implement Coin Change problem.
Statement Given an integer array of coins[ ] of
size N representing different types of currency and an
integer sum, The task is to find the number of ways to
make sum by using different combinations
from coins[].
Note: Assume that you have an infinite supply of each
type of coin.
Input: sum = 4, coins[] = {1,2,3}, Output: 4
Input: sum = 10, coins[] = {2, 5, 3, 6} Output: 5*/
#include<iostream>
using namespace std;

int count_ways(int sum,int n,int coins[]){
   int count[100] = {0};
   count[0]=1;
    
    
    for (int i = 0; i < n; i++)
     { // Iterate over each coin
        for (int j = coins[i]; j <= sum; j++) 
        { // Update count array for sums >= coins[i]
            count[j] += count[j - coins[i]];
        }
    }
    
    
    for (int i = 0; i <= sum; i++) {
        if(i==sum){
        cout << "Ways to make sum " << i << ": " << count[i] << endl;
        }
    }
    
}

int main() {
    int sum, n, coins[10];
    
    cout << "Enter value of sum: ";
    cin >> sum;
    
    cout << "Enter total number of coins: ";
    cin >> n;
    
    cout << "Enter coins: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    count_ways(sum,n,coins);
    

    return 0;
}
