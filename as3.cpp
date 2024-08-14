/*Implement a problem of smallest number with at
least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the
smallest number whose factorial contains at least n
trailing zeroes.*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,count,fact=1,n,total,i,x=0,ans;
    cout<<"Enter value : ";
    cin>>n;

    for(i=0;i<100;i++){
        total=floor(i/5)+floor(i/25)+floor(i/125);
        if(total==n){
            count=i;
            break;
        }
    }
    cout<<count;
    //subproblem 1 solved
    //subproblem 2 is to cross check our answer 
    ans=floor((count/5)+(count/25)+(count/125));
    if(ans==n){
        cout<<"\nanswer is valid";
    }
    else{
        cout<<"\nAnswer is invalid";
    }


}