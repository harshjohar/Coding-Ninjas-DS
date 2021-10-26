bool isPalindrome(Node *head)
{
    
    if(head==NULL) {
        return true;
    }
    //Write your code here
    Node* new_ll=NULL;
    Node* temp = head;
    
    // push front
    while(temp!=NULL) {
        Node* t = new Node(temp->data);
        if(new_ll==NULL) {
            new_ll=t;
        }
        else {
            t->next=new_ll;
            new_ll=t;
        }
        temp=temp->next;
    }
    
    // compare
    Node* n1=head;
    Node* n2=new_ll;
    
    while(n1!=NULL) {
        if(n1->data != n2->data) {
            return false;
        }
        n1=n1->next;
        n2=n2->next;
    }
    return true;
}