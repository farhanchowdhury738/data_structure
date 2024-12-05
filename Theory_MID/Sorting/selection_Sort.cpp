#include <iostream>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}

void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallIdx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[smallIdx])
            {
                smallIdx=j;
            }
        }
        // swaps(&a[i],&a[smallIdx]);
        int tmp=a[smallIdx];
        a[smallIdx]=a[i];
        a[i]=tmp;
    }
}


int main() {
    
    int a[5]={10,8,6,4,2};
    selectionSort(a,5);
    printArray(a,5);
   
    return 0;
}









