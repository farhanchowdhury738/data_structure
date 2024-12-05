#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int n,m;
    cin>>n>>m;
    
    if((n%2==0) && (m%2==0))
    {
        cout<< "Wrong";
        //break;
    }
    else{
        for(int i=n; i<=m;i++)
        {
            if(i%2!=0)
            {
                cout<<i<< " ";
            }
        }
    }

   

    return 0;
}

