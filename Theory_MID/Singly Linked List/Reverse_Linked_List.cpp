#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

Node *reverseListNonRecursively(Node *&head)
{
    Node *prev=NULL;
    Node *current=head;
    if(head==NULL)
    {
        cout<<"The linked list is empty"<<endl;
        return head;
    }
     Node *next=current->next;  //Node *next=head->next 

    while(true)
    {
        current->next=prev;
        prev=current;
        current=next;
        if(current==NULL)
        break;
        next=next->next;
    }
    return prev;
}
Node *reverseListRecursively(Node *&head)
{
    //Base call
    if(head==NULL || head->next==NULL)
    {
        if(head==NULL)
        {
            cout<<"Linked list is empty"<<endl;
        }
        return head;
    }
    //Recursive Call
    Node *newHead=reverseListRecursively(head->next);
    head->next->next=head;
    head->next=NULL;

    return newHead;

}

int main()
{
    Node *head = NULL;

    // you need to create node and link it! 
    
     head = reverseListNonRecursively(head);
}