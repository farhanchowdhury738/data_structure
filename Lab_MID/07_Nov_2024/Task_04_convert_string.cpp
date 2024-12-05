#include <iostream>
#include <string>
using namespace std;


string con(string str, int j){
    string ans = str;
    int n=j;

    for(int i=j; i<ans.length(); i= i+j+1){
        ans[i]=ans[i]+n;
    }

        return ans;
}

int main() {
    string s = "I am a student";
    int j = 2;

    string encodedString = con(s, j);
    cout << "Converted: " << encodedString <<endl;
    
    // int ar[5]={3,5,6,7,8};
    // int *p = ar+2;
    // p++;
    // *p=100;
    // for(int val: ar)
    // {
    //     cout<<val<<" ";
    // }

    return 0;
}
