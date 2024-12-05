#include <iostream>
using namespace std;

int main() {
    
    // Lab Task 2

    int arr[5];
    int even_count=0, odd_count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;

        }
        else if(arr[i]%2!=0)
        {
            
            odd_count++;
        }
    }
    cout<< "Even: "<<even_count<<"\nodd: "<<odd_count;
    

    return 0;
}