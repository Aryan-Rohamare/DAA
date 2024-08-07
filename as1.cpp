#include <iostream> 
using namespace std;

int main() {
    int a[10], size, count = 0;
    bool flag = false;

    cout << "Enter array size (up to 10): ";
    cin >> size;

    cout << "Enter array elements (1/0): ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

   
    for (int i = 0; i < size; i++) {
        if (a[i] > 1 || a[i] < 0) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "Invalid input\n";
    } 
    else {
        
        for (int i = 0; i < size; i++) {
            if (a[i] == 0) {
                count++;
            }
        }
        cout << "Number of 0s are: " << count << endl;
    }

    return 0;
}
