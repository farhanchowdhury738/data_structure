#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,4,5,6,43};
    int n = sizeof(arr)/4;

    for(int i=3;i<n;i++){
        arr[i-1]=arr[i];
    }
    n-=1;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}