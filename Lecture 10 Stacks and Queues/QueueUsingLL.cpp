class Queue {
	// Define the data members
    Node* head;
    Node* tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head=NULL;
        tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size==0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        Node* n = new Node(data);
        if(isEmpty()) {
            head=n;
            tail=n;
            size++;
            return;
        }
        tail->next=n;
        tail=n;
        size++;
        return;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()) {
            return -1;
        }
        Node* temp=head->next;
        int e = head->data;
        head=temp;
        size--;
        return e;
    }

    int front() {
        // Implement the front() function
        if(!isEmpty())
        	return head->data;
        return -1;
    }
};