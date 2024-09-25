/*Implement Check if it is possible to transform one
string to another.
Statement Given two strings s1 and s2 (all letters in uppercase).
Check if it is possible to convert s1 to s2 by performing following
operations.
1. Make some lowercase letters uppercase.
2. Delete all the lowercase letters.
Input: s1 = daBcd s2 = ABC Output: yes
Input: s1 = argaju s2 = RAJ Output: yes*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int check(string s1,string s2){
    char a[10],b[10]    ;
    int count=0;
    for(int i=0;i<s1.length();i++){
       a[i]=tolower(s1[i]);

       
    }
    
    for(int i=0;i<s2.length();i++){
         b[i]=tolower(s2[i]);
    }
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s1.length();j++){
            if(a[i]==b[j]){
                s1.erase(s1.begin() + i); 
                count++;
                break;
            }
        }
    }
    if(count==s2.length()){
        cout<<"\nYES";
    }
    else{
        cout<<"\nNO";
    }

}
int main(){
    string s1,s2;
    char a[10],b[10];
    int count=0;
    cout<<"\nEnter string 1 : ";
    cin>>s1;
    cout<<"\nEnter string 2 : ";
    cin>>s2;
    check(s1,s2);
}