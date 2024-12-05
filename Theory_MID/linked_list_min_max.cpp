#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};

void print_list(Node* head){

    Node * tmp = head;

    while(tmp!=nullptr){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }

}

int mini(Node* head){

 Node * tmp = head;
    int minis = tmp->val;

   
    while(tmp!=nullptr){
        if(tmp->val > minis){
            minis=tmp->val;
        }
        tmp=tmp->next;
    }

    return minis;
}

int main() {
    Node* head = new Node(70);
    Node* a = new Node(20);
    Node* b = new Node(10);
    Node* c = new Node(40);

    // head->next=a;
    // a->next=b;
    // b->next=c;
    // print_list(head);
    // cout<<endl;
    // int m =  mini(head);
    // cout<<m;

    int a[5] = {17,26,6,20,24};

    

        int *p = &a[2];

    return 0;
}
