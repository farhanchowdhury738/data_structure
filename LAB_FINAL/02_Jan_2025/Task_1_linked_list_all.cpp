#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

void print_singly_linked_list(Node * head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_tail(Node * &head, int val)
{
    Node * newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }

    Node * tmp = head;
    while(tmp->next !=NULL)
    {
        tmp = tmp->next;
    }
    // ekhon tmp last node e ache
    tmp->next = newNode;

}

void insert_at_any_position(Node *head, int pos, int val){
    Node *newNode = new Node(val);

    Node *tmp=head;
    for(int i=1;i<pos-1;i++){
        tmp = tmp->next;
    }
    cout<<"tmp: "<<tmp->val<<endl;
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_head(Node* &head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void delete_any_node(Node *head, int pos)
{
    Node *tmp=head;
    for(int i=1;i<pos-1;i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_any_head(Node * &head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

// void print_reverse(Node *head)
// {
//     if(head==nullptr) return;

//     print_reverse(head->next);
//     cout<<head->val<<endl;
// }

bool searching(Node* head, int data){
    Node *tmp = head;
    while(tmp!=NULL){
        if(tmp->val==data){
            return true;
        }
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next=a;
    a->next=b;
    b->next=c;

    print_singly_linked_list(head);
    cout<<searching(head,90)<<endl;

    return 0;
}