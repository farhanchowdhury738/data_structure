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

int findMid(Node *&head)
{
    if(head==NULL)
    {
        return -1;
    }
    Node *slow=head;
    Node *fast=head;
    while (fast!=NULL &&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->value;
    
}

int main()
{
    Node *head = NULL;

    // you need to create node and link it! 

    int mid;
    mid=findMid(head);

    if(mid==-1){
        cout<<"There is no value in the linked list"<<endl;
    } else{
        cout<<"Mid value is:"<<mid<<endl;
    }


    return 0;
}