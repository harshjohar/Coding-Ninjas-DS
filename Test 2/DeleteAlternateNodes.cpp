void deleteAlternateNodes(Node *head) {
    //Write your code here
    if(head==NULL) {
        return;
    }
    
    Node* prev = head;
    Node* n = head->next;
    
    while(prev != NULL and n != NULL) {
        prev->next = n->next;
        
        prev = prev->next;
        
        if(prev!=NULL) {
            n=prev->next;
        }
    }
    return;
}