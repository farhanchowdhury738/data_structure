#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int n = 3;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"EVEN"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    
    cout<<"ODD"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2!=0){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    return 0;
}