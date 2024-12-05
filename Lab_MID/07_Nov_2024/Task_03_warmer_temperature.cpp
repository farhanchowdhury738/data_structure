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


    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int val: a){cout<<val<<" ";} cout<<endl;

    // int cnt=0;
    // int ck = a[0];
    // int tmp;
    // for(int i=0;i<n;i++)
    // {
    //     if(ck>a[i]){
    //         cnt++;
    //     }
        
    //     if(ck<a[i])
    //     {
    //         tmp = a[i];
            
    //         if(tmp>a[i])
    //         {
    //             cnt++;
    //         }
    //         //cnt=0;
    //     }

    // }
    // cout<<cnt<<endl;
    // cout<<tmp;



    return 0;
}