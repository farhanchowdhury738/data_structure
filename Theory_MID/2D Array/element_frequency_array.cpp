#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,2,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int freq[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=cnt;
        }
    }
cout<<endl;
    for (int i = 0; i < n; ++i) {
        if (freq[i] != 0) {
            cout << arr[i] << "       | " << freq[i] << endl;
        }
    }

    return 0;
}