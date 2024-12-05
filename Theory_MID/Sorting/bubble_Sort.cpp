#include <iostream>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}

void bubbleSort(int a[],int n)
{
        for(int i=0;i<n-1;i++){
            int idx=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                // int temp = a[j];
                // a[j]=a[j+1];
                // a[j+1]=temp;
                swaps(&a[j],&a[j+1]);

            }
        }
    }    
}


int main() {
    
    int a[5]={10,8,6,4,2};
    bubbleSort(a,5);
    printArray(a,5);
   
    return 0;
}









