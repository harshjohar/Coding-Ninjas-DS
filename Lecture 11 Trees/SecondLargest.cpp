void secondLargest(TreeNode<int>* root, TreeNode<int>** first, TreeNode<int>** second) {
    if(root==NULL) {
        return;
    }
    
    if(!(*first)) {
        *first = root;
    }
    
    else if(root->data > (*first)->data) {
        *second=*first;
        *first=root;
    }
    
    else if(!(*second)) {
        if(root->data < (*first)->data) {
            *second = root;
        }
    }
    
    else if((root->data < (*first)->data) && (root->data > (*second)->data)) {
        *second = root;
    }
    
    for(int i=0; i<root->children.size(); i++) {
        secondLargest(root->children[i], first, second);
    }
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* first = NULL;
    TreeNode<int>* second = NULL;
    secondLargest(root, &first, &second);
    return second;
}