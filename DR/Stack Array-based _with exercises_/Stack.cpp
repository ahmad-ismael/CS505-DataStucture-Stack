#include <iostream>
#include"Stack.h"
using namespace std;

Stack::Stack(int nelements) {  
	MaxSize = nelements;
	stack = new int[MaxSize];  
	top = -1; 
	count = 0;
}

Stack::Stack(const Stack &original) :MaxSize(original.MaxSize), top(original.top), count(original.count) {
	stack = new int[MaxSize];
	for (int i = 0; i <= top; i++)
		stack[i] = original.stack[i];
}
/*
Stack::Stack(const Stack &original)
{
    MaxSize = original.Maxsize;
    top = original.top;
    count = original.count;
	stack = new int[MaxSize];
	for (int i = 0; i <= top; i++) stack[i] = original.stack[i];
}*/

Stack::~Stack() { delete [] stack; }

void Stack::push(int v)
{
	if(stackIsFull()) cout << "Stack Overflow" << endl;
	else stack[++top] = v;//++top; stack[top] = v;
	count++;
}

void Stack::push(char v)
{
	if(stackIsFull()) cout << "Stack Overflow" << endl;
	else stack[++top] = v;
}

void Stack::pop(int &v)
{
	if(stackIsEmpty()) cout << "Stack Underflow" << endl;
	else {
		v = stack[top--];
		count--;
	}
}

void Stack::pop(char &v)
{
	if(stackIsEmpty()) cout << "Stack Underflow" << endl;
	else {
		v = stack[top--];
		count--;
	}
}

void Stack::stackTop(int &v) const
{
	if(stackIsEmpty()) cout << "Stack Underflow";
	else v = stack[top];
}

void Stack::findMiddle(int &middle)
{
  middle = stack[count/2];
}

void Stack::deleteMiddle()
{
	int x,y; 
	Stack s;
	
	if(!stackIsEmpty())
	{
		for(int i=0; i< count/2 ; i++)
		{
			pop(x);
			s.push(x);
		}

		pop(x);

		for(int i=0;i<count/2; i++)
		{
			s.pop(y);
			push(y);
		}

	}

	cout<<"deleted middle  = " <<x;
}

bool Stack::stackIsEmpty() const
{
	return (top < 0);
}

bool Stack::stackIsFull() const
{
	return (top >= (MaxSize-1)); 
}

int Stack::stackSize()
{
	return count;
}
