#include <iostream>
using namespace std;

void findRowMaxMin(int matrix[][100], int n) {

    for (int i = 0; i < n; ++i) {
        int maxVal = INT32_MIN;
        int minVal = INT32_MAX;
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] > maxVal) maxVal = matrix[i][j];
            if (matrix[i][j] < minVal) minVal = matrix[i][j];
        }
        cout << "Row " << i + 1 << " - Max: " << maxVal << ", Min: " << minVal << endl;
    }
}


int main()
{
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n=3;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            cout<<arr[i][j]<<" ";        
        }
        cout<<endl;
    }

    cout<<endl;
    for (int i = 0; i < n; ++i) {
        int maxVal = INT32_MIN;
        int minVal = INT32_MAX;
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > maxVal) maxVal = arr[i][j];
            if (arr[i][j] < minVal) minVal = arr[i][j];
        }
        cout << "Row " << i + 1 << " - Max: " << maxVal << ", Min: " << minVal << endl;
    }


    return 0;
}