#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}