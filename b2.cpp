/*Implement a problem of maximize Profit by trading
stocks based on given rate per day.Statement: Given an array arr[] of N positive integers
which denotes the cost of selling and buying a stock on
each of the N days. The task is to find the maximum
profit that can be earned by buying a stock on or selling
all previously bought stocks on a particular day.
Input: arr[] = {2, 3, 5} Output: 5
Input: arr[] = {8, 5, 1} Output: 0*/
#include <iostream>
using namespace std;
int main()
{
    int a[10], n, max_profit, min_profit,flag=0;
    cout << "\nenter number of days : ";
    cin >> n;
    cout << "\nenter prices on different days : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min_profit = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
        else{
            max_profit=a[n-1];
        }   
    }
    if(flag==1){
    cout<<"No profit available ";
    }
    else{
        cout<<"max profit is : "<<max_profit;
    }

}