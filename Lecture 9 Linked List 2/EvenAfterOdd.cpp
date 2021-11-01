Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL) {
        return head;
    }
    Node* odd=NULL;
    Node* even=NULL;
    Node* oddHead=NULL;
    Node* evenHead=NULL;
    Node* curr=head;
    
    while(curr!=NULL) {
        Node* l = new Node(curr->data);
        if((l->data)%2) {
         	if(odd==NULL) {
           		odd=l;
                oddHead=l;
        	}   
            else {
                odd->next=l;
                odd=l;
            }
        }
        else {
            if(even==NULL) {
                even=l;
                evenHead=l;
            }
            else {
                even->next=l;
                even=l;
            }
        }
        Node* t = curr;
        curr=curr->next;
        delete t;
    }
    if(oddHead!=NULL) {
    	head=oddHead;
    	odd->next=evenHead;
    } 
    else {
        head=evenHead;
    }
    return head;
}