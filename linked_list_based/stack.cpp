#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack(int elementnum) :top(-1), count(0), maxSize(elementnum)
{
    stack = new int[maxSize];
}

Stack::Stack(const Stack &s) :top(s.top), count(s.count), maxSize(s.maxSize)
{
    stack = new int[maxSize];
    for(int i=0; i<=top; i++)
        stack[i] = s.stack[i];
}

Stack::~Stack(){
    delete[] stack;
}

bool Stack::stackIsEmpty(){
    return (top < 0);
}

bool Stack::stackIsFull(){
    return (top >= maxSize - 1);
}

void Stack::push(int n){
    if(stackIsFull()) cout << "Stack overflow" << endl;
    else {
        stack[++top] = n;
        count++;
    }
} 

void Stack::pop(int &x){
    if(stackIsEmpty()) cout << "stack is underflow" << endl;
    else {
        x = stack[top--];
        count--;
    }
}

void Stack::stackTop(int &x){
    if(stackIsEmpty()) cout << "stack is underflow" << endl;
    else {
        x = stack[top];
    }
}

int Stack::stackSize(){
    return count;
}

// Exrcise
void Stack::findMiddle(){

}
void Stack::deleteMiddle(){

}