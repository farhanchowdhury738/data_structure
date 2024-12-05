#include <iostream>
using namespace std;

double findEvenNonDiagonalAverage(int** arr, int rows, int cols) {
    int sum = 0, count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                sum += arr[i][j];
            }
            if (i== rows - j - 1) {
                sum += arr[i][j];
               
            }
            // if (i != j && i != rows - j - 1) {
            //     sum += arr[i][j];
            //     if (arr[i][j] % 2 == 0) {
            //         // sum += arr[i][j];
            //         count++;
            //     }
            // }
        }
    }

    return sum;
    // return (count == 0) ? 0 : static_cast<double>(sum) / count;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    double average = findEvenNonDiagonalAverage(arr, rows, cols);
    cout << "Average " << average << endl;

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
