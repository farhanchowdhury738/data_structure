#include <iostream>
using namespace std;
#define MAXSIZE 5

int s[MAXSIZE]; 
int top; 


void stack_initialize()
{
	top = -1;
}

void push(int value)
{
    if(isStackFull())
	cout<<"stack is full";
     else
	{
	top++;
	s[top] = value;
	}

}

int pop()
{
    int x;
    if(isStackEmpty())
    {
        cout<<"underflow: stack is empty";
        return 0;
    }
    else
	{
    	x = s[top];
	    top--;

	    return x;
	}
}

int isStackEmpty()
{
    return ( top == -1 );
}

int isStackFull()
{
      return ( top >= MAXSIZE-1);
}

int stackSize()
{
    return top+1;
}

void display_stack()
{
   int i;
	for(i=top; i>=0; i--)
		cout<<" "<<s[i];

}
int tops()
{
    return s[top];
}


int main()
{
    

    return 0;
}