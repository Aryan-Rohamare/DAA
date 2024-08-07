#include<iostream>
using namespace std;

int main ()
{
    int n,flag=0,fact=0,i,count=0,rev,revn;
    cout<<"Enter number : ";
    cin>>n;

    while(flag!=1){
        fact=fact*i;
        i++;
        while(rev>0){
            revn=revn*10+revn%10;
            rev=revn/10;
            if(rev==0){
                count++;
            }
            if(count==n){
                flag=1;
                
            }
        }
        
    }
    cout<<fact;    
}