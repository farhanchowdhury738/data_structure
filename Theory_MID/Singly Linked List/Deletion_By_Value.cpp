#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int val){
        value = val;
        next = NULL;
    }
};



int length(Node *head);

void show(Node *head);

void deletionAtHead(Node *&head);

void deletionAtTail(Node *&head);


int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return -1;
    }
    int count = 1;
    while (temp->value != key)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        count++;
    }
    return count;
}


void deletionAtSpecificPosition(Node *&head, int pos)
{
    Node *temp = head;
    if (temp != NULL && pos<=length(head))
    {
        if(pos==1)
        {
            deletionAtHead(head);
        }
        else if(pos==length(head))
        {
            deletionAtTail(head); // this can also work in else option
        }
        else
        {
            int i = 1;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        }
        
    }
    else
    {
        
        if(temp==NULL)
        {
            cout << "There is no value in the linked list" << endl;// LL is empty
        }
        else if(pos>length(head))
        {
            cout<<"position out of boundary"<<endl; //position ouut of range
        }
    }
    show(head);
    cout<<endl;
}


void deletionByValue(Node *&head,int val)
{
   
    //step 1: find the position of the value
    int position;
    position=searchByValueUnique(head,val);
    //Delete the node at that position
    if(position==-1)
    {
        cout<<val<<" not found in the linked list"<<endl;
    }
    else
    {
        deletionAtSpecificPosition(head,position);
    }
    
}

int main()
{
    Node *head = NULL;

    // you need to create node and link it! 

    cout << "Enter the value to delete:";
    int delValue;
    cin >> delValue;

    deletionByValue(head,delValue);

    return 0;
}