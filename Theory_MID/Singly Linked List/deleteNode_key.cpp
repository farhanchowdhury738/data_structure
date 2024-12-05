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
void deleteNodes(Node* head, int key){
    Node* current = head;
    Node* prev = nullptr;
    while (current != nullptr && current->val != key) {
        prev = current;
        current = current->next;
    }

    // If the key was not found
    if (current == nullptr) return;

    // Unlink the node and delete it
    prev->next = prev->next->next;
    delete current;

}

void print_list(Node * head){
    
    Node* tmp=head;
    
    while(tmp!=nullptr){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    cout<<endl;
}

Node* findMiddleNode(Node* head) {
    if (head == nullptr) return nullptr;
    Node* curr = head;
    Node* prev = head;
    while (curr != nullptr && curr->next != nullptr) {
        prev = prev->next;
        curr = curr->next->next;
    }
    return prev;
}

void removeDuplicates(Node*& head) {
    if (head == nullptr) return;
    Node* current = head;
    while (current->next != nullptr) {
        if (current->val == current->next->val) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
}



int main()
{
     Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(10);
    
    
    head->next=a;
    a->next=b;
    b->next=c;

    // print_list(head);
    // deleteNodes(head,20);
    // print_list(head);
    // Node* n = findMiddleNode(head);
    // cout<<n->val;


    print_list(head);



    return 0;
}