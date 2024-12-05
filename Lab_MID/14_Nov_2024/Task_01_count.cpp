#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int n=3;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int cnt1=0,cnt2=0,cnt3=0;
    int maximum=0;
    for(int i=0;i<n;i++){
        int minimum=0;
        for(int j=0;j<n;j++){

            // if(arr[i][j]==0 )
            // {
            //     minimum++;
            //     maximum= max(maximum,minimum);
            // }


            // if(arr[0][j]==0 && arr[i][j]==arr[0][j+1])
            // {
            //     cnt1++;
            // } else if (arr[1][j]==0 && arr[i][j]==arr[1][j+1])
            // {
            //     /* code */
            //     cnt2++;
            // }else if (arr[2][j]==0 && arr[i][j]==arr[2][j+1])
            // {
            //     /* code */
            //     cnt3++;
            // }
            
            //cout<<arr[0][j]<< " ";
            if(arr[i][j]==0 && arr[i][j]==arr[i][j+1] && arr[i+1][j]==arr[i+1][j])
            {
                cnt1++;
            }
            // // else if (arr[i][j]==1)
            // {
            //     ocnt++;
            // }
            
        }
    }

    // int x = max(cnt1,cnt2);
    // int y = max(x,cnt3);
    // cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
    cout<<"free continue: "<<cnt1;
    //cout<<"Free: "<<zcnt<<" "<<"Booked: "<<ocnt<<endl;

    return 0;
}