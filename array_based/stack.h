class Stack {
    int * stack;
    int top;
    int count;
    int maxSize;

    // typedef int myType;

    public:
        Stack(int elementnum = 128);
        Stack(const Stack &s);
        ~Stack();
        bool stackIsEmpty();
        bool stackIsFull();
        void push(int);
        void pop(int &);
        void stackTop(int &);
        int stackSize();

        // exrcise
        void findMiddle();
        void deleteMiddle();
};