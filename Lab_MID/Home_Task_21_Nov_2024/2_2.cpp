#include <iostream>

using namespace std;

int maxTemperatureDifference(int heatmap[3][3]) {
    int max_diff = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i > 0) {
                max_diff = max(max_diff, abs(heatmap[i][j] - heatmap[i - 1][j]));
            }
            if (j > 0) {
                max_diff = max(max_diff, abs(heatmap[i][j] - heatmap[i][j - 1]));
            }
        }
    }
    return max_diff;
}

int main() {
    int heatmap[3][3] = {{10, 15, 20},
                        {25, 30, 35},
                        {40, 45, 50}};

    int max_diff = maxTemperatureDifference(heatmap);
    cout << "Maximum temperature difference: " << max_diff << endl;

    return 0;
}