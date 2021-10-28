# Data Structures
A way to store the data. 

# Linked List
Arrays are continuous, but size extension is not possible.

Linked list saves the elements in random order in the memory, they are connected using pointers.

The address of next `Node` is stored in the current `Node`.

`Node` - two attributes:
+ data
+ Address of next node.

Node class
```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data=data;
        next=NULL;
    }
};
```

Linked List with just two elements and connecting them.
```cpp
Node n1(1);
Node n2(2);

n1.next=&n2;

Node* head = &n1; // address of the head of the LL in head;
```
results in 1->2 sort of scenario

First node of LL is called Head. Last node is called Tail.

Dynamically Linked List
```cpp
Node* n3 = new Node(10);
Node* n4 = new Node(20);

n3->next=n4;

Node* head=n3;
```
Results in 10->20

## Print LL
```cpp
void printLL(Node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
} // this makes my head go lost

void printLL(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp =temp->next;
    }
} // head is not lost
```

## Take input
Taking input of user, storing it in a LL, and returning the head of the LL to the main.
```cpp
Node* takeInput() {
    int data;
    cin>>data;
    Node* head=NULL, tail=NULL;
    while(data!=-1) {
        Node* n = new Node(data);
        if(head==NULL) {
            head=n;
            tail=n;
        }
        tail->next=n;
        tail=n;
        cin>>data;
    }
    return head;
}
```

## Insert Node
Steps included
1. Create a new node with the given data.
2. Insert adress of the new node in the next of the just previous node.
3. Insert next of the previous node in the next of new node.

```cpp
void insertNode(int*head, int data, int i) {
    Node* newNode = new Node(data);
    int count =0;
    Node* temp = head;
    while(temp!=NULL && count<=i-1) {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL) {
        Node* a = temp->next;
        temp->next=newNode;
        neweNode->next=a;
    }
} // something just like this, just keep in view the boundary conditions.
```

## Delete Node
Implemented in [deleteNode.cpp](./DeleteNode.cpp)

## Delete Node recursively
Implemented in [recursive delete](./DeleteNodeRecursive.cpp)

## Insert Node Recusrive
Very similar to Delete node recursive.
