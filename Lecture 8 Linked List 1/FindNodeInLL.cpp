int findNode(Node *head, int n){
    // Write your code here.
    if(head==NULL) {
        return -1;
    }
    int i=0;
    while(head->next!=NULL) {
        if(head->data==n) {
            return i;
        }
        i++;
        head=head->next;
    }
    return -1;
}