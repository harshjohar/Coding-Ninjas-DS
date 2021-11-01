Node *reverseLinkedList(Node *head) {
    // Write your code here
    Node *prev=NULL, *curr=head, *next=NULL;
    if(head==NULL) {
        return head;
    }
    while(curr) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}