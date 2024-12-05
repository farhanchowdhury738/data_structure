#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;
    Node(int val)
    {
        value=val;
        next=NULL;
    }
};



int searchByValueUnique(Node *&head, int key)
{
    Node *temp=head;
    if(temp==NULL)
    {
        return -1;
    }
    int count=1;
    while(temp->value!=key)
    {
        if(temp->next==NULL)
        {
            return -1;
        }
        temp=temp->next;
        count++;
    }
    return count;

}

int main()
{
    Node *head=NULL;

    int position,value;
    cout << "Enter the value you want to search:";
    cin >> value;

    position = searchByValueUnique(head,value);

    if(position!=-1)
        cout<<value<<" is at position "<<position<<endl;
    else
        cout<<value<<" is not yet in the list"<<endl;
        



}