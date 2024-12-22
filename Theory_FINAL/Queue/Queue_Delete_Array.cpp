#include <iostream>
using namespace std;
#define max 100

int queue[max];
int front = -1;
int rear = -1;

void push(int val){
    if(front==-1){
        front=0;
    }
    rear++;
    queue[rear]=val;
}

int pop(){
    int val = queue[0];
    front++;
    return val;
}

void queueprint(){
    for(int i=front;i<=rear;i++){    
        cout<<queue[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    push(10);  
    push(20);
    push(30);

    queueprint();
    cout<<pop()<<endl;
   

    return 0;
}