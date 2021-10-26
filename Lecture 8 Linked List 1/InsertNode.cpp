Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    
    if(head==NULL) {
        Node* n = new Node(data);
        head=n;
        return head;
    }
    
    if(i==0) {
        Node* n = new Node(data);
        n->next=head;
        head=n;
        return head;
    }
    
    int curr=0;
    Node* temp = head;
    while(curr<i-1 and temp!=NULL) {
        temp=temp->next;
        curr++;
    }
    
    if(curr!=i-1) {
        return head;
    }
    Node* ele = new Node(data);
    ele->next=temp->next;
    temp->next=ele;
    return head;
}