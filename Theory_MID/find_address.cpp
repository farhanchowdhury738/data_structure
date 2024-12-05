#include <iostream>
using namespace std;

int main()
{
    // Declare a 2D array
    int mimo[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Calculate the starting address of each row
    for (int i = 0; i < 3; i++) {
        std::cout << "Address of mimo[" << i << "] (start of row " << i << "): " << &mimo[i][0] << std::endl;
    }

    // Using pointer arithmetic to find the same addresses
    int *start_location = &mimo[0][0];
    int C = 4;  // Number of columns
    for (int i = 0; i < 3; i++) {
        int *address = start_location + (i * C);
        std::cout << "Address of mimo[" << i << "] using pointer arithmetic: " << address << std::endl;
    }

    return 0;
}