/*Implement a problem of number of zeroes.
Statement: Given an array of 1s and 0s which has all 
1s first followed by all 0s? Find the number of 0s. 
Count the number of zeroes in the given array.*/
#include<iostream>
using namespace std;
int main(){
    int a[]={1,1,1,0,0},count=0;
    int low=0;
    int size=end(a)-begin(a);
    int high=size-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==1)
        {
            low=mid+1;    
        }
        else
        {
            high=mid-1;   
        }
      
    }
    for(int i=mid+1;i<=size;i++)
        count++;

    cout<<"no of zero's are :"<<count;
    return 0;
}