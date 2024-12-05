#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = { {1,2,4,5},{2,3,7,5}, {2,3,4,5},{6,9,2,3} };

    int row = 4;
    int col = 4;

    for(int i=0;i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<< "---------------\n";

    for(int i=0;i<row; i++)
    {
        for(int j=0; j<row; j++)
        {
            int countt=0;
            for(int n=0; n<row; n++)
            {
                for(int m=0; m<col; m++)
                {
                    if (arr[i][j]==arr[n][m])
                    {
                        countt++;
                    }
                }
            }

            if (countt==1)
            {
                cout<<arr[i][j]<< " ";
            }
        }
    }


    return 0;
}

