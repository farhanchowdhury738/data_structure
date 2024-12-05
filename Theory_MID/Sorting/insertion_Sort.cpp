#include <iostream>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}

void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++){
      for(int j=i-1;j<n-1;j++){
        if(a[i-1]<a[j+1]){
          swap(a[i-1],a[j+1]);
        }
      }
    }
    
}

int main() {
    
    int a[5]={10,8,6,4,2};
    insertionSort(a,5);
    printArray(a,5);
   
    return 0;
}

