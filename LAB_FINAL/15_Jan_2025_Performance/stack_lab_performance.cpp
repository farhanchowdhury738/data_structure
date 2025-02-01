#include <iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

struct myStack{

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
        if(tail==NULL){
            head = NULL;
            cout<<"stack is empty"<<endl;
        }
        else{ 
            tail->next=NULL;
            delete deleteNode;
        }
    }

    int top(){
        if(tail!=NULL){
            return tail->val;
        }else {
            return -1;
        }
        
    }

    int size(){
        return sz;
    }

    bool isEmpty(){
        if(sz==0){
            return true;
        }
        else return false;
    }

     void normalPrint() {
        cout<<"Normal Print--->"<<endl;
        Node* tmp = head;
        while (tmp!=NULL) {
            cout<<tmp->val<<endl;
            tmp=tmp->next;
        }
        cout << endl;
    }

    void reversePrint(){
        cout<<"Reverse Print--->"<<endl;
        Node* tmp = tail;
        while(tmp!=NULL){
            cout<<tmp->val<<endl;
            tmp=tmp->prev;
        }
    }
    
};



int main()
{
    myStack st;
    int choice, val;

    // alternative user input only pusing element
    int n;
    while(n!=-1){
        cin>>n;
        st.push(n);
    }

    while (true) {
        cout << "\n--------Stack-----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Size\n";
        cout << "5. Is Empty\n";
        cout << "6. Normal Print Stack\n";
        cout << "7. Reverse Print Stack\n";
        cout << "8. Exit\n";
        cout << "enter any number: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "enter val: ";
            cin >> val;
            st.push(val);
            break;
        case 2:
            if(st.isEmpty()){
                cout<<"stack is empty"<<endl;
            }else{
                st.pop();
            }
            break;
        case 3:
            if(st.isEmpty()){
                cout<<"stack is empty"<<endl;
            }else{
                cout << "Top element: " << st.top() << endl;
            }
            break;
        case 4:
            cout << "Stack size: " << st.size() << endl;
            break;
        case 5:
            if(st.isEmpty()){
                cout<<"Stack is empty"<<endl;
            }else{
                cout<<"Stack is not empty"<<endl;
            }
            break;
        case 6:
            if(st.isEmpty()){
                cout<<"Stack is empty"<<endl;
            }else{
                st.normalPrint();
            }
            break;
        case 7:
            if(st.isEmpty()){
                cout<<"Stack is empty"<<endl;
            }else{
                st.reversePrint();
            }
            break;
        case 8:
            cout << "exit the program"<<endl;
            return 0;
        default:
            cout << "try again!"<<endl;
        }
    }



    return 0;
}