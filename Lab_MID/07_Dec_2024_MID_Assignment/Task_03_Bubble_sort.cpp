#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    
    int comparisons = 0, swaps = 0;


    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            ++comparisons; // Count comparisons
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Swap if elements are out of order
                ++swaps; // Count swaps
            }
        }
    }

    cout << "Bubble Sort Completed\nComparisons: " << comparisons << "\nSwaps: " << swaps << endl;
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11}; 

    bubbleSort(arr,5);

    // Print the sorted array
    cout << "Sorted Array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
