#include <iostream>
using namespace std;

void removeElement(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        cout << "Index out of bounds" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int indexToRemove = 2;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeElement(arr, size, indexToRemove);

    cout << "Array after removal: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
