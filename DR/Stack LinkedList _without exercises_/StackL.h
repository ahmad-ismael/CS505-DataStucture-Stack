
class StackL
{
   public:
         
       StackL();						// Constructor
	  ~StackL();					// Destructor

      void push(int );				// Push
	  void pop(int &);
	  void stackTop(int &) const;	// retrieve top

      bool stackIsEmpty() const;	// Test for Empty stack
      int stackSize();
      
   private:
	   class node
	   {
		public:
			int e;
			node * next;    
		};

	typedef node * NodePointer;

	NodePointer top;
	int count;
}; 


