#include <iostream>
#include "forheaderfile.h"
using namespace std;

int main()
{
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next=a;
    a->next=b;

    printList(head);

    insertAtHead(head,50);
    printList(head);

    insertAtTail(head,200);
    printList(head);

    cout<<"length: ";
    


    return 0;
}