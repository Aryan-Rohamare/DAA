/*Implement program to find all distinct subsets of a
given set using Bit Masking Approach.
Statement Given an array of integers arr[], The task is
to find all its subsets. The subset cannot contain
CO4
Sanjivani College of Engineering, Kopargaon Page 40 of 100
duplicate elements, so any repeated subset should be
considered only once in the output.
Input: S = {1, 2, 2} Output: {}, {1}, {2}, {1, 2}, {2,
2}, {1, 2,2}
Input: S = {1, 2} Output: {}, {1}, {2}, {1, 2}*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void setfn(int sets[],int n){

  set<vector<int>> uniquesb;
  //sort(sets.begin(),sets.end());
    
    for(int mask=0;mask < (1<<n);++mask){
        vector<int>subset;
        for(int i=0;i<n;i++){
            if(mask & (1 << i)){
                subset.push_back(sets[i]);
            }
        }
        uniquesb.insert(subset);
    }
   // cout << "{";
    for (const auto& subset : uniquesb) {
        cout << "{";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "}, ";
    }
  //  cout << "}\n";
}


int main(){
    int sets[10],n;

    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"\nenter array elements : ";
    for(int i=0;i<n;i++){
        cin>>sets[i];
    }
    setfn(sets,n);
}