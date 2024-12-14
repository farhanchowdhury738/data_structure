#include <iostream>
#include <list>
using namespace std;

class myStack{
    public:
        list<int>l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        if(l.size()==0) return true;
        else return false;
    }

};

int main()
{
    cout<<"Helloworld"<<endl;

    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}