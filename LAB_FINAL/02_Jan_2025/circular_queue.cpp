#include <iostream>
using namespace std;
#define max 5

int cqueue[max];
int front = -1;
int rear = -1;

bool isEmpty() {
    return (front == -1) ? true : false;
}


bool isFull(){
    return ((front==0 && rear == max-1) || (front == rear+1)) ? true : false;
        
}

void push(int val){
    if(isFull()){
        cout<<"FullQueue"<<endl;
        return;
    }
    if(front == -1){
        front = 0;
    }

    if(rear == max - 1){
        rear = 0;
    }
    else {
        rear++;
    }

    cqueue[rear]=val;
}

int pop(){

    int val;
    if(isEmpty()){
        return 1;
    }
    val = cqueue[front];

    if(front==rear){
        front=rear=-1;
    }
    else if(front==max-1){
        front=0;
    }
    else{
        front++;
    }

    return val;
}

void Cqueueprint(){

    int tmp;
    if(isEmpty()){
        return;
    }
    tmp = front;
    if(front <= rear){
        while(tmp<=rear){
            cout<<cqueue[tmp]<<endl;
            tmp++;
        }
    }
    else{
        while(tmp<=max-1){
            cout<<cqueue[tmp]<<endl;;
            tmp++;
        }
        tmp = 0;
        while(tmp<=rear){
            cout<<cqueue[tmp]<<endl;;
            tmp++;
        }
    }
    cout<<endl;

}

void one_element(){
    if(front==rear){
        cout<<"one elemnet"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main()
{
    // push(10);
    // push(20);
    // push(30);
    // push(40);
    // Cqueueprint();
    // pop();
    // Cqueueprint();
    // push(100);
    // push(200);
    // Cqueueprint();
    // push(300);

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    one_element();




    return 0;
}