#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val){
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

class myStack{
public:
    Node* head=nullptr;
    Node* tail=nullptr;
    int sz=0;

    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;
    }

    void pop(){
        sz--;
        Node* deleteNode=tail;
        tail=tail->prev;
        if(tail==nullptr) head = nullptr;
        else{ 
            tail->next=nullptr;
            delete deleteNode;
        }
    }

    int top(){
        return tail->val;
    }

    int size(){
        return sz;
    }
    
    bool empty(){
        if(sz==0) return true;
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