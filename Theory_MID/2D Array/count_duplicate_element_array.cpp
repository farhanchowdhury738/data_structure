#include <iostream>
using namespace std;


int main() {
    
    // int arr[10] = {1,2,2,3,3,1,4,5,7,7};
    // int n=10;

    // int count = 0;
    // int check[n]={0};

    // for (int i = 0; i < n; i++) {
    //     if (check[i] == 1) 
    //     {continue;}
        
    //     bool flag = false;
        
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[i] == arr[j]) {
    //             if (flag==false) {
    //                 flag = true;
    //                 count++;
    //             }
    //             check[j] = 1;
    //         }
    //     }
    // }

    // cout << "duplicate value: " << count << endl;


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0, cnt=0;
    int visit[n]={0};
    for(int i=0;i<n;i++){
        //cnt=0;
        if(visit[i]==1) continue;

        bool flag=false;
        for(int j=0;j<n;j++){
            if(i!=j)
            {
                if(a[i]==a[j])
            {
                if(!flag)
                {
                    flag=true;
                    cnt++;
                }
                visit[j]=1;

            }
            }
        }
        //sum+=cnt;
    }
   
    cout<<cnt;





    return 0;
}
