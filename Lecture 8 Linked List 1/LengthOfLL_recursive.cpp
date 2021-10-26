int length(Node *head) {
    // Write your code here
    if(head==NULL) {
        return 0;
    }
    if(head->next==NULL) {
        return 1;
    }
    return 1+length(head->next);
}