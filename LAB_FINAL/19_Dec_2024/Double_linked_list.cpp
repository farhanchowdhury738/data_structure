#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};


void insert_head(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;

    head->prev = newNode;
    newNode->next=head;
    head=newNode;
}

void insert_tail(Node* head, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;

    while(tmp->next!=nullptr){
        tmp=tmp->next;
    }

    tmp->next = newNode;
    
}

void insert_any_position(Node* head, int val, int pos){
    Node* tmp=head;
    Node* newNode = new Node(val);

    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next->next;
    tmp->next=newNode;
    newNode->prev=tmp->next;

}


void delete_Head(Node* &head){

    Node* deleteNode = head;
    head=head->next;
    delete deleteNode;
}

void delete_tail(Node* head){
    
    Node* tmp = head;

    while(tmp->next!=nullptr){
        tmp=tmp->next;
    }
    cout<<"Tail: "<<tmp->val<<endl;
    Node* temp = tmp;
    tmp=tmp->prev;
    tmp->next=nullptr;
    delete temp;

    // while(tmp->next->next!=nullptr){
    //     tmp=tmp->next;
    // }

    // cout << "Tail: " << tmp->next->val << endl;
    // tmp->next = nullptr;
    
}

void delete_any_position(Node* head, int pos){
    Node* tmp=head;

    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}

void Print(Node* head){
    Node* tmp=head;

    while(tmp!=nullptr){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    cout<<"Hello World!"<<endl;
    cout<<endl;


    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    cout<<b->val<<endl;
    cout<<b->next->val<<endl;
    cout<<b->prev->val<<endl;

    cout<<"----"<<endl;

    // Print(head);
    // insert_head(head,200);
    // Print(head);
    // insert_tail(head,500);
    // Print(head);
    // insert_any_position(head,300,2);
    // Print(head);
    // delete_Head(head);
    // Print(head);
    // // delete_tail(head);
    // // Print(head);
    // delete_any_position(head, 2);
     Print(head);
cout<<"---------\n";
     delete_tail(head);
     Print(head);



    return 0;
}