#include <iostream>
using namespace std;

struct Node {
    int id;
    int marks;
    Node * next;

    Node(int id, int marks){
        this->id = id;
        this->marks = marks;
        this->next = nullptr;
    }

};

void insert_at_tail(Node * &head, int val, int val2)
{
    Node * newNode = new Node(val,val2);
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

void printList(Node * head){
    Node * tmp = head;
    while(tmp!= nullptr){
        cout<<"ID: "<<tmp->id<<" Marks: "<<tmp->marks<<endl;
        tmp = tmp->next;
    }
}


void High_Low(Node *head){
    Node * tmp = head;
    int high = head->marks;
    int low = head->marks;
    int hID,lID;
     while(tmp!=nullptr){

        if(tmp->marks>high){
            high = tmp->marks;
            hID = tmp->id;

        }
        if(tmp->marks<low){
            low = tmp->marks;
            lID = tmp->id;
        }

        tmp = tmp->next;
    }

    cout<<endl;
    cout<<"Highest Mark: "<<high<<" ID: #"<<hID<<endl;
    cout<<"Lowest Mark: "<<low<<" ID: #"<<lID<<endl;
}

void sumAvg(Node *head){
    Node * tmp = head;

    int sum = 0;
    int cnt = 0;
    while(tmp!=nullptr){
        sum+= tmp->marks;
        cnt++;
        tmp = tmp->next;
    }
    
    float avg = sum/cnt;

    cout<<endl;
    cout<< "Sum: "<<sum<<" Avg:: "<<avg<<endl;
}

int main()
{
    Node * head = nullptr;

    // Node * a = new Node(2,22);
    // Node * b = new Node(3,33);
    // Node * c = new Node(4,44);
    // Node * d = new Node(5,55);

    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = d;


    for(int i=0;i<5;i++){
        int x,y;
        cin>>x>>y;
        insert_at_tail(head,x,y);
    }

    printList(head);
    High_Low(head);
    sumAvg(head);


    

    // Node * tmp = head;
    // while(tmp!= nullptr){
    //     cout<<"ID: "<<tmp->id<<" Marks: "<<tmp->marks<<endl;
    //     tmp = tmp->next;
    // }

    // tmp = head;
    // int high = head->marks;
    // int low = head->marks;
    // int hID,lID;
    //  while(tmp!=nullptr){

    //     if(tmp->marks>high){
    //         high = tmp->marks;
    //         hID = tmp->id;

    //     }
    //     if(tmp->marks<low){
    //         low = tmp->marks;
    //         lID = tmp->id;
    //     }

    //     tmp = tmp->next;
    //  }

    // tmp = head;
    // int sum = 0;
    // int cnt = 0;
    // while(tmp!=nullptr){
    //     sum+= tmp->marks;
    //     cnt++;
    //     tmp = tmp->next;
    // }
    
    // float avg = sum/cnt;

    //  cout<<endl;
    //  cout<<"Highest Mark: "<<high<<" ID: #"<<hID<<endl;
    //  cout<<"Lowest Mark: "<<low<<" ID: #"<<lID<<endl;
    //  cout<<"Avg: "<<avg<<endl;



    return 0;
}