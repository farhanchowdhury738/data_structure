#include <iostream>
using namespace std;
#define max 5

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int val){
    if(front==-1){
        front = 0;
    }
    rear++;
    queue[rear] = val;
}

int dequeue(){
    if(front == rear+1){
        return -1;
    }
    int val = queue[front];
    front++;
    return val;
}


int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    // for(int i=0;i<5;i++){
    //     cout<<queue[i]<<" ";
    // }

    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
   

    return 0;
}