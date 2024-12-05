#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Define the 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int rows = 3;  // Number of rows
    int cols = 3;  // Number of columns
    
    int maxRowSum = INT32_MIN;
    int maxColSum = INT32_MIN;
    int maxRowIndex = -1;
    int maxColIndex = -1;
    
    // Calculate row sums
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
            maxRowIndex = i;
        }
    }
    
    // Calculate column sums
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        if (colSum > maxColSum) {
            maxColSum = colSum;
            maxColIndex = j;
        }
    }
    
    // Compare row and column sums to find which is the highest
    int mass = max(maxRowSum,maxColSum);

    cout<< mass;
    return 0;
}
