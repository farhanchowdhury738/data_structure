#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int minn = INT32_MIN;

  for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }    
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout<<endl;

    cout<<a[0]<<" "<<a[n-1];


   


    return 0;
}