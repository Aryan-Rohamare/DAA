#include <iostream> 
using namespace std;

int main() {
    int a[10], size,i,temp;
    //bool flag = false;

    cout << "Enter array size (up to 10): ";
    cin >> size;

    cout << "Enter array elements : ";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }

    for(i=0;i<size;i++){
        for(int j=i; j<size; j++){
        if(a[i]==0){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
        else{
            break;

        }
    }}

    cout<<"Array is : ";
    for(i=0;i<size;i++){
        cout<<" "<<a[i];
    }
}