#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,count,fact=1,n,total,i,x=0;
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
}