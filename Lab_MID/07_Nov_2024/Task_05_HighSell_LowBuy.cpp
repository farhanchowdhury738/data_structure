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

    int flag=1;
    int mini = a[0];
    int minIdx;
    int maxi = a[0];
    int maxIdx;
    for(int i=0;i<n;i++)
    {
        if(mini>a[i])
        {
            mini=a[i];
            minIdx=i+1;
        }

        if(maxi<a[i])
        {
            maxi=a[i];
            maxIdx=i+1;
        }

    }   
    //cout<<flag;
    cout<<"Buy : "<<mini<<" Day: "<<minIdx<<endl;
    cout<<"Sell: "<<maxi<<" Day: "<<maxIdx<<endl;


    return 0;
}