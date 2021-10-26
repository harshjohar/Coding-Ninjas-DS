void printIthNode(Node *head, int i)
{
    //Write your code here
    if(head==NULL) {
        return;
    }
    Node *temp = head;
    int curr=0;
    while(temp) {
     	   if(curr==i) {
               cout<<temp->data<<endl;
               return;
           }
        temp=temp->next;
        curr++;
    }
}