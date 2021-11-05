# Types of data structures
## Which changes how data is stored in memory?
Array, Linked List, `Tree`
## Layer above basic data structure which defines how data is accessible to the user
Stack, Queue

# Tree
### File System in a computer system
Consist of directories and files, further directories have more directories nested in them, and so on

### Organization System of a company

## Tree
Root node, where the tree start, which will store address of some node, which will further store address of next nodes.

## Terminologies
Terms in a tree DS
+ _Root_: The point where tree starts.
+ _Children_: Node at immediate below level. 
+ _Parent_ : Node at immediate above level.
+ _Leaf_ : Nod which does not have any child, it is a leaf.
+ _Descendants_ : All the children, of children, of children and so on.

## Vectors
Inbuilt name of Dynamic Arrays.

Use
```cpp
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    // vector<int>* vp = new vector<int>();         // Dynamic allocation.

    v.push_back(10);
    v.push_back(20);

    // elements can be accessed same as that of arrays
    cout<<v[0]<<endl;
    // have used it like 5000 times LOL
}
```

## Tree Node Class
Every Node has store the address of its children.

Each tree node has
1. Data
2. Vector of addresses of children

> the files which are not compiled at runtime, can be stored as ".h" or ".hpp"
```cpp
#include<vector>
using namespace std;
template<typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }
};
```

### Simple Tree
1 = root, 2 and 3 are its children
```cpp
#include<iostream>
#include "TreeNode.h"
using namespace std;

int main() {
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2);
    TreeNode<int>* node2 = new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
}
```

## Print a Tree
```cpp
void printTree(TreeNode<int>* root) {
    if(root==NULL) {
        return; // edge case, not base case
    }
    // cout<<root->data<<endl;
    cout<<root->data<<": ";
    for(int i=0; i<root->children.size(); i++) {
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int i=0; i < root->children.size(); i++) {
        printTree(root->children[i]);
    }
}
```
## Take Tree Input
```cpp
TreeNode<int>* takeInput() {
    int rootData;
    cout<<"Enter Root Data: ";
    cin>>rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n; 
    cout<<"Enter the number of children of "<<rootData<<endl;
    cin>>n;

    for(int i=0; i<n; i++) {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
}
```

## Tree input Alternative method
Level wise input

Using a queue. It holds the node whose children arent yet yet taken as input.
```cpp
#include<queue>
TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout<<"Enter Root Data: ";
    cin>>rootData;

    TreeNode<int>* root = new   TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);

    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter number of children of"<<front->data<<endl;

        int numChild;
        cin>>numChild;

        for(int i=0; i<numChild; i++) {
            int childData;
            cout<<"Enter "<<i<<"th child of"<<front->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);

            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
```
## Printing Level Wise
Implemented in [PrintTree.cpp](./PrintTree.cpp)

## Count nodes
```cpp
int numNodes(TreeNode<int>* root) {
    int ans = 1;
    for(int i=0; i<root->children.size(); i++) {
        ans+=numNodes(root->children[i]);
    }
    return ans;
}
```

## Depth of Node
Depth of root is 0.
Problem: Print all nodes at depth D.

```cpp
void printAtLevelK(TreeNode<int>* root, int k) {
    if(root==NULL) {
        return;
    }
    if(k==0) {
        cout<<root->data<<endl;
        return;
    }
    for(int i=0; i<root->children; i++) {
        printAtLevelK(root->children[i], k-1);
    }
}
```
## Number of leaf Nodes
Implemented in [leafNodes.cpp](./leafNodes.cpp)

## Traversals
### Pre Order
```cpp
void preOrder(TreeNode<int>* root) {
    if(root==NULL) {
        return;
    }
    cout<<root->data<<" ";
    for(int i=0; i<root->children.size(); i++) {
        preOrder(root->children[i]);
    }
}
```

## Destructor
Delete a tree

Naiive way
```cpp
void deleteTree(TreeNode<int>* root) {
    for(int i=0; i<root->children.size(); i++) {
        deleteTree(root->children[i]);
    }
    delete root;
}
```
Delete children, then delete root.

Destructor method
```cpp
// to be written in TreeNode class
~TreeNode() {
    for(int i=0; i<children.size(;); i++) {
        delete children[i];
    }
}
```
Now we can delete the whole tree, by calling just `delete root`