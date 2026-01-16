// File: StackLAppl.cpp
// Applies Linked List Stack Class to reverse a string
#include <iostream>
#include<cstdlib>
#include <string>
#include "StackL.h"
using namespace std;


int main()
{
	StackL s, x;
	int v;
	s.push(5);
	s.push(3);
	s.push(4);

	s.pop(v);
	cout<<v<<endl;

	system("pause");
	return 0;
}
