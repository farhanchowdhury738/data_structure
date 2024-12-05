#include <iostream>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}
void swaps(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
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









