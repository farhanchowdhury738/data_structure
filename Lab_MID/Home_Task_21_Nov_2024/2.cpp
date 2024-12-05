#include <iostream>
using namespace std;

int test(int arr[], int n) {

    int FL = INT32_MIN, SL = INT32_MIN;
    int FLIdx = 0, SLIdx = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] > FL) {
            SL = FL;
            SLIdx = FLIdx;

            FL = arr[i];
            FLIdx = i;
        } else if (arr[i] > SL && arr[i] != FL) {
            SL = arr[i];
            SLIdx = i;
        }
    }

    return (FLIdx - SLIdx);
}


int main(){

    int arr[] = {20, 19, 16, 14, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    // for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    int distance = test(arr, n);
    cout<< distance << endl;


    return 0;
}