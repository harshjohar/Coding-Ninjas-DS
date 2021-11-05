TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL) {
        return root;
    }
    
    TreeNode<int>* ans = root;
    
    for(int i=0; i<root->children.size(); i++) {
        TreeNode<int>* C = maxDataNode(root->children[i]);
    ans = (ans->data > C->data) ? ans : C;
    }
    return ans;
}