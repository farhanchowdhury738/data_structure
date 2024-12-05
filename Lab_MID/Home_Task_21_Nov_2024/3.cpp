#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    int waiting_times[n];
    for (int i = 0; i < n; ++i) {
        cin >> waiting_times[i];
    }

    int total_time = 0;
    for (int i = 0; i < n; ++i) {
        total_time += waiting_times[i];
    }

    double average_time = (double)total_time / n;
    cout << "Average waiting time: " << average_time << endl;

    return 0;
}