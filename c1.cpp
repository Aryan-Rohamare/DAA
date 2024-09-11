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
