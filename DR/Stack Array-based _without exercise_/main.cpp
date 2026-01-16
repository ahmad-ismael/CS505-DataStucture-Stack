// File: StacktAppl.cpp
// Applies Stack template Class to reverse a string
#include <iostream>
#include <string>
#include<cstdlib>
#include "Stack.h"
using namespace std;




int main()  // Testing he Stackt Class
{			// Reverse a string and stack copy

	Stack s1,s2;
	int c=0;
	s1.push(2);
	s1.push(4);
	s1.push(5);
	s1.push(9);

	s1.stackTop(c);
	cout<<c;

	return 0;
}

