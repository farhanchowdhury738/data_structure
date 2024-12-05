#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    int comparisons = 0, shifts = 0;

    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // Current element to insert
        int j = i - 1;

        // Move elements that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            ++comparisons; // Count comparisons
            arr[j + 1] = arr[j];
            --j;
            ++shifts; // Count shifts
        }
        arr[j + 1] = key; // Place key in its correct position
        ++shifts; // Count final placement of the key

        // For last failed comparison
        if (j >= 0) ++comparisons;
    }

    cout << "Insertion Sort Completed\nComparisons: " << comparisons << "\nShifts: " << shifts << endl;
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};

    insertionSort(arr,5);

    // Print sorted array
    cout << "Sorted Array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
