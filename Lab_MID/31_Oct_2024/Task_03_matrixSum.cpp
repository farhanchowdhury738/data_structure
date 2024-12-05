#include <iostream>
using namespace std;

int main()
{

    int n=3;
    int arr1 [n][n];
    int arr2[n][n];
    int arr3[n][n];
    int sum[n][n];


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i][j];
            
            // cin>>arr2[i][j];
            // cin>>arr3[i][j];
        }
    }

      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr2[i][j];
            // sum[i][j]+=arr2[i][j];
        }
    }

      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr3[i][j];
            // sum[i][j]+=arr3[i][j];
        }
    }

    cout<<"Array 01\n";
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<< "Array 02\n";
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr2[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<"Array 03\n";

      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]+=arr1[i][j]+arr2[i][j]+arr3[i][j];
        }
        //cout<<endl;
    }


    cout<< "\nSum of 3 Array\n";
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
   

    return 0;
}

