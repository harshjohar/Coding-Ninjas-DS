class Stack {
	// Define the data members
    Node* head=NULL;
    int size;
   public:
    Stack() {
        // Implement the Constructor
		head=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head==NULL) {
            return true;
        } return false;
    }

    void push(int element) {
        // Implement the push() function
        Node* n = new Node(element);
        n->next=head;
        head=n;
        size++;
        return;
    }

    int pop() {
        // Implement the pop() function
        if(!isEmpty()) {
            Node* t = head->next;
            int p = head->data;
            head=head->next;
            size--;
            return p;
        }
        return -1;
    }

    int top() {
        // Implement the top() function
        if(!isEmpty())
        	return head->data;
        return -1;
    }
};