#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;


    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

// insert head
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// insert any position 
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100->30
    tmp->next = newNode;           // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
}

// insert tail
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

// Delete any position
void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

// Delete head
void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

// Delete tail
void delete_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;

}

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
    Node *tail = c;

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    print_reverse(tail);

    return 0;
}