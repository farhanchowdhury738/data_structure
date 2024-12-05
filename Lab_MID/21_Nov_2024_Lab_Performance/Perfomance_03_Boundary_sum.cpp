#include <iostream>

using namespace std;

void sum(int arr[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int sum = 0;

            if (i > 0){
                sum += arr[i - 1][j];// upore
            }   
            if (i < 2){
                sum += arr[i + 1][j];  // niche
            } 
            if (j > 0){
                sum += arr[i][j - 1];  // bame
            } 
            if (j < 2){
                sum += arr[i][j + 1];  // dane
            } 

            result[i][j] = sum;
        }
    }
}

int main() {
    int arr[3][3], result[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }

    sum(arr, result);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
