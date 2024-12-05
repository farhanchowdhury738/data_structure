#include <iostream>
using namespace std;

int main()
{

    int n=3;
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int arr1[3][3] = {
        {12, 5, 8},
        {6, 7, 4},
        {18, 9, 2}
    };

    int ans[6][3];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[n+i][j]= arr1[i][j];
        }
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}