#include <iostream>
using namespace std;

int main() {
    const int x = 4, y = 3, z = 3;
    int arr[x][y][z] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}},
        {{28, 29, 30}, {31, 32, 33}, {34, 35, 36}}
    };

    int oddNumbers[x * y * z];
    int evenNumbers[x * y * z];
    int oddIndex = 0, evenIndex = 0;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                if (arr[i][j][k] % 2 == 0) {
                    evenNumbers[evenIndex++] = arr[i][j][k];
                } else {
                    oddNumbers[oddIndex++] = arr[i][j][k];
                }
            }
        }
    }

    cout << "Odd Numbers: ";
    for (int i = 0; i < oddIndex; ++i) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    cout << "Even Numbers: ";
    for (int i = 0; i < evenIndex; ++i) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
