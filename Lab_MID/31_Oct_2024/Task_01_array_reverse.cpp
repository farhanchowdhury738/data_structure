// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    // Lab Task 1 
    
    int arr[5];

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=5-1; i>=0;i--)
    {
        cout<<arr[i]<< " ";
    }
    
    

    return 0;
}