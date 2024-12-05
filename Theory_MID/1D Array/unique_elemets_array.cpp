#include <iostream>
using namespace std;

int main() {

    int n; 
    cin>>n;
    int arr[n], ctr = 0;

    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++) {
        ctr = 0;
        for (int j = 0; j < n; j++) {
            if ( arr[i] == arr[j]) {
                ctr++;
            }
        }
        if (ctr == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
