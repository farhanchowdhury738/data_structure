#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};

class myQueue{
    public:
        Node* head=nullptr;
        Node* tail=nullptr;
        int sz=0;
    
    void push(int val){
        Node* newNode = new Node(val);
        sz++;
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;

    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head=head->next;
        delete deleteNode;
        if(head==nullptr) tail = nullptr;
    }

    int front(){
        return head->val;
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
    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    // cout<< q.front() <<endl;
    // q.pop();
    // cout<<q.front() << endl;

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    



    return 0;
}