#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;  

    int stock_levels[n];
    for (int i = 0; i < n; ++i) {
        cin >> stock_levels[i];
    }

    int max_day = 0, min_day = 0;
    int max_level = stock_levels[0], min_level = stock_levels[0];

    for (int i = 1; i < n; ++i) {
        if (stock_levels[i] > max_level) {
            max_level = stock_levels[i];
            max_day = i;
        }
        if (stock_levels[i] < min_level) {
            min_level = stock_levels[i];
            min_day = i;
        }
    }

    cout << "Highest stock level on day " << max_day + 1 << endl;
    cout << "Lowest stock level on day " << min_day + 1 << endl;

    return 0;
}