#include<queue>
void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        int numChild = front->children.size();
        for(int i=0; i<numChild; i++) {
            TreeNode<int>* child = front->children[i];
            cout<<child->data;
            if(i!=numChild-1) {
                cout<<",";
            }
            front->children.push_back(child);
            pendingNodes.push(child);
        }
        cout<<endl;
    }
}