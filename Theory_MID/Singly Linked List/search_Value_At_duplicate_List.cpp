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

int length(Node *head);

void searchByValueDuplicate(Node *&head, int key)
{
    Node *temp=head;

    int size;
    size=length(head);
    int position[size+1],k=1;// to store the duplicate position of searched value from index 1.

    int count=1;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            //cout<<count<<" ";
            position[k]=count;
            k++;
            flag=1;
            
        }
        temp=temp->next; 
        count++; //5
    }
    if(flag==0){
        cout<<"The searched value "<<key<<" is not yet in the list"<<endl;
    }
    else 
    {
        position[0]=k;// 0th index store the size of array;
        cout<<"The value "<<key<<" is at position: ";
        for(int i=1;i<position[0];i++)
        {
            cout<<position[i];
            if(i<position[0]-1)
            {
                cout<<",";
            }
        }
    }
}

int main()
{
    Node *head=NULL;

    // you need to create node and link it! 

    int value;
    cout << "Enter the value you want to search(is duplicate?):";
    cin >> value;
    searchByValueDuplicate(head,value);


    
    return 0;        
}