#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack s;
    int x;
    s.push(5);
    s.stackTop(x);

    cout << x << endl;
    cout << s.stackIsEmpty() << endl;

    return 0;
}