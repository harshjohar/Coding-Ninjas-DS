Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(pos==0) {
        Node* t = head->next;
        delete head;
        head=head->next;
        return head;
    }
    if(head->next==NULL and pos!=0) {
        return head;
    } 
    if(pos==1) {
        Node* tmp = head->next->next;
        delete head->next;
        head->next=tmp;
        return head;
    }
    
    
    
    head->next = deleteNodeRec(head->next, pos-1);
    return head;
}