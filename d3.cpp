/*Implement program to print all subsets of a given
Set or Array
Statement Given a set of positive integers, find all its
subsets.
Input: array = {1, 2, 3}
Output: // this space denotes null element.
1 1 2 1 2 3 1 3 2
2 3 3
Input: 1 2
Output: 1 2 1 2*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void setfn(int sets[],int n){

  set<vector<int>> uniquesb;
  //sort(sets.begin(),sets.end());
    
    for(int mask=1;mask < (1<<n);++mask){
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
        cout << "          ";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << " ";
        }
        cout <<"          ";
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