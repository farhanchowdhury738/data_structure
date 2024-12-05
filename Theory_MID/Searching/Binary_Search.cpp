#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int find)
{
    int st=0, end=n-1,mid;
    while(st<=end){
        mid = (st+end)/2;
        cout<<"MID: "<<mid<<endl;
        if(find>a[mid]){
            st=mid+1;
        } else if (find<a[mid]){
            end=mid-1;
            cout<<"End: "<<endl;
        }else {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int target;
    cin>>target;
    
    int ans = BinarySearch(a,n,target);
    cout<<"ans: "<<ans;

    
    return 0;
}