#include <iostream>
using namespace std;

int main() {
    int n = 60;  
    int arr[60]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    // 1st 10
    int msum = 0, csum = 0;
  

    for (int i = 0; i < 10; i++) {
        csum += arr[i];
    }

    msum = csum;

    // ebr 10 min er porer sum
    for (int i = 10; i < n; i++) {
        csum = csum - arr[i - 10] + arr[i];

        if (csum > msum) {
            msum = csum;
            
        }
    }


    cout<<msum<<endl;
    

    return 0;
}

