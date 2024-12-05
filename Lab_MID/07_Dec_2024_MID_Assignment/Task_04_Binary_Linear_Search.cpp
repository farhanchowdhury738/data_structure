#include <iostream>
using namespace std;

// Linear Search (don't mandotory sorted array)
void linearSearch(int arr[], int n, int target) {
    int comparisons = 0;

    for (int i = 0; i < n; ++i) {
        ++comparisons; // Count comparisons
        if (arr[i] == target) {
            cout << "Element found at index " << i << " after " << comparisons << " comparisons (Linear Search)." << endl;
            return;
        }
    }

    cout << "Element not found after " << comparisons << " comparisons (Linear Search)." << endl;
}

// Binary Search (Array must be sorted)
void binarySearch(int arr[], int n, int target) {
    int comparisons = 0;
    int st = 0, end = n - 1;

    while (st <= end) {
        ++comparisons; // Count comparisons
        int mid = (st+end) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid << " after " << comparisons << " comparisons (Binary Search)." << endl;
            return;
        }

        if (arr[mid] < target)
            st = mid + 1; // Search in the right half
        else
            end = mid - 1; // Search in the left half
    }

    cout << "Element not found after " << comparisons << " comparisons (Binary Search)." << endl;
}

int main() {
    int arr[4] = {11, 22, 25, 64}; // Sorted array for binary search
    int target = 25; // Element to search for

    cout << "Binary Search:" << endl;
    binarySearch(arr, 4, target);

    cout << "\nLinear Search:" << endl;
    linearSearch(arr, 4, target);

    return 0;
}
