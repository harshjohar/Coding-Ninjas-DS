Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if(head1==NULL and head2==NULL) {
        return head1;
    }
    
    if(head1!=NULL and head2==NULL) {
        return head1;
    }
    
    if(head1==NULL and head2!=NULL) {
        return head2;
    }
    
    Node* t1=head1;
    Node* t2=head2;
    Node* ans=NULL;
    Node* ansTail=NULL;
    
    if(t1->data < t2->data) {
       
        ans=t1;
        ansTail=t1;
        t1=t1->next;
    } else {
        
        ans=t2;
        ansTail=t2;
        t2=t2->next;
    }
    
    while(t1!=NULL and t2!=NULL) {
        if(t1->data < t2->data) {
           
            ansTail->next=t1;
            ansTail=ansTail->next;
            t1=t1->next;
        }
        else {
            
            ansTail->next=t2;
            ansTail=ansTail->next;
            t2=t2->next;
        }
    }
    
    while(t1!=NULL) {
        Node* temp = new Node(t1->data);
        ansTail->next=temp;
        ansTail=temp;
        t1=t1->next;
    }
    
    while(t2!=NULL) {
        Node* temp=new Node(t2->data);
        ansTail->next=temp;
        ansTail=temp;
        t2=t2->next;
    }
    return ans;
}