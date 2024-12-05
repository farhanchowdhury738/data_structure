#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int arr1[3][3] = {
        {4,5,6},
        {4,62,34},
        {4,24,52}
    };

    int n=3;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]== arr1[i][j]){
                flag=true;
            }
            else{
                flag=false;
            }
        }
    }

    if(flag){
        cout<<"identical"<<endl;
    } 
    else {
        cout<<"identical Na"<<endl;
    }

    return 0;
}