#include<iostream>
#include"StackL.h"
using namespace std;

StackL::StackL()
{ top = NULL; count=0;}

StackL::~StackL()
{	NodePointer cursor;
	while(top != NULL) 
	{
		cursor = top;
		top = top->next;
		delete cursor;
	}
}

bool StackL::stackIsEmpty() const
{ 
	return (top == NULL);
}

void StackL::push(int v)
{
	NodePointer pnew = new node ;
	pnew->e = v;
	pnew->next = top;
	top = pnew; 
	count++;
}

void StackL::pop(int &v)
{
	NodePointer cursor;
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{
		v = top->e;
		cursor = top;
	  	top = top->next;
		delete cursor;
	}
	count--; // XXXXXX
}

void StackL::pop(char &v)
{	NodePointer cursor;
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; cursor = top;
	  top = top->next; delete cursor; }
	  count--;

}

// Retrieve top node without removing it
//template <class Type>
void StackL::stackTop(int &v) const
{	
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; }

}

int StackL::stackSize(){
	return count;
}
