#include <iostream>

using namespace std;

pair<int, int> findSmallestRegion(int traffic_grid[3][3], int threshold) {
    int min_area = 9 + 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = i; k < 3; ++k) {
                for (int l = j; l < 3; ++l) {
                    int sum = 0;
                    for (int m = i; m <= k; ++m) {
                        for (int n = j; n <= l; ++n) {
                            sum += traffic_grid[m][n];
                        }
                    }
                    if (sum > threshold) {
                        min_area = min(min_area, (k - i + 1) * (l - j + 1));
                    }
                }
            }
        }
    }

    return {min_area == 10 ? -1 : min_area, -1};
}

int main() {
    int traffic_grid[3][3] = {{10, 15, 20},
                            {25, 30, 35},
                            {40, 45, 50}};
    int threshold = 100;

    pair<int, int> result = findSmallestRegion(traffic_grid, threshold);
    if (result.first == -1) {
        cout << "No such region found." << endl;
    } else {
        cout << "Smallest region area: " << result.first << endl;
    }

    return 0;
}