int len(Node* head)
{
    Node* temp = head ;
    int i = 0 ;
     while(temp!=NULL)
     {
         i++;
         temp=temp->next ;
     }
    
    return i ;
}

Node* bubbleSort(Node* head) {
    if(head==NULL) {
        return head;
    }
    int n = len(head)-1;
    while(n--) {
        Node* prev = NULL;
        Node* curr = head;
        while(curr->next!=NULL) {
            if(curr->data >= curr->next->data) {
                if(prev==NULL) {
                    // first node
                    Node* next = curr->next;
                    curr->next=next->next;
                    next->next = curr;
                    prev=next;
                    head=prev; // just this step extra
                } 
                else {
                    Node* next = curr->next;
                    prev->next = next;
                    curr->next = next->next;
                    next->next = curr;
                    prev = next;
                }
            }
            else {
                prev = curr;
                curr=curr->next;
            }
        }
    }
    return head;
}