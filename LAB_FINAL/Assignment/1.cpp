#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool cheking( string str) {
    stack<char> st;
    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            if ((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {

    cout<<"input only ------> (){}[]"<<endl;
 
    string str;
    cout << "Enter parentheses: ";
    cin >> str;
    
    if(cheking(str)){
        cout<<"Your entered parentheses is |"<<str<<"| : Balanced parenthesis"<<endl;
    }else{
        cout<<"Your entered parentheses is |"<<str<<"| : is not Balanced parenthesis"<<endl;
    }
  
    return 0;
}
