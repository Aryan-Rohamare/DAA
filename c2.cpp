/*Implement Subset Sum Problem.
Statement Given a set of non-negative integers and a
value sum, the task is to check if there is a subset of the
given set whose sum is equal to the given sum.
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output: False*/

#include<iostream>
using namespace std;

int subset(int arr[],int n,int sum){
    
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            n=arr[i]+arr[j];
            if(n==sum){
                flag=true;
            }
        }
    }
    if(flag==false){
        cout<<"false";

    } 
    else{
        cout<<"true";
    }

}
int main(){
    int n,arr[10],sum;
    cout<<"\nEnter array size : ";
    cin>>n;
    cout<<"\nEnter array elements : ";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Enter sum : ";
    cin>>sum;
    subset(arr,n,sum);
}