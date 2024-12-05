#include <iostream>
using namespace std;


struct Node{

    int val;
    Node *next;

    Node(int val){
        this->val=val;
        this->next=nullptr;
    }

};

void print_reverse_recursiona(Node *n){
    
    if (n == NULL) 
        return;

    print_reverse_recursiona(n->next);
    cout<<n->val<<endl;
    
}

int main()
{
    Node* head = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    head->next=b;
    b->next=c;
    c->next=d;
    d->next=e;


    // while(head!=NULL){
    //     cout<<head->val<<endl;
    //     head=head->next;
    // }


    print_reverse_recursiona(head);

    return 0;
}