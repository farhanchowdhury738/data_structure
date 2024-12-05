#include <iostream>
using namespace std;


void selectionSort(int arr[], int n) {

    int comparisons = 0, exchanges = 0;

    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i; // current index has the smallest element

        // Find minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; ++j) {
            ++comparisons; // Count comparisons
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        // Swap the minimum element with the current element if needed
        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
            ++exchanges; // Count exchanges
        }
    }

    cout << "Selection Sort Completed\nComparisons: " << comparisons << "\nExchanges: " << exchanges << endl;
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11}; 

    selectionSort(arr,5);

    // Print sorted array
    cout << "Sorted Array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
