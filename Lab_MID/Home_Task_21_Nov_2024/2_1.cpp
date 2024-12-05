#include <iostream>

using namespace std;

int continueFrree(int schedule[3][3]) {
    int max_free_slots = 0;
    for (int i = 0; i < 3; ++i) {
        int current_free_slots = 0;
        for (int j = 0; j < 3; ++j) {
            if (schedule[i][j] == 0) {
                current_free_slots++;
            } else {
                max_free_slots = max(max_free_slots, current_free_slots);
                current_free_slots = 0;
            }
        }
        max_free_slots = max(max_free_slots, current_free_slots);
    }
    return max_free_slots;
}

int main() {
    int schedule[3][3] = {{0, 1, 0},
                          {1, 0, 0},
                          {0, 0, 0}};

    int max_slots = continueFrree(schedule);
    cout << "Maximum continuous free slots: " << max_slots << endl;

    return 0;
}