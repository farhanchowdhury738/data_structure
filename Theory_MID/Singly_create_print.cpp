#include <iostream>
using namespace std;

struct Node{
    int val;
    Node*add;
    Node(int val)
    {
        this->val=val;
        this->add=NULL;
    }
};
void insert_at_tail(Node*a,int val)
{
Node *newNode=new Node(val);
Node *tmp=a;
while(tmp->add!=NULL){
    tmp=tmp->add;
}
tmp->add=newNode;
}

int main(){
Node*a=new Node(10);
  Node*b=new Node(20);
   Node*c=new Node(30);
   a->add=b;
   b->add=c;
while(a!=NULL){
   cout<<a->val<<endl;
     a = a->add;
   }

   insert_at_tail(a,586852);

while(a!=NULL){
   cout<<a->val<<endl;
     a = a->add;
   }
    return 0;
}

