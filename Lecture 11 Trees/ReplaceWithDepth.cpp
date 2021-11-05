void replace(TreeNode<int>* root, int depth) {
    root->data = depth;
    for(int i=0; i<root->children.size(); i++) {
        root->children[i]->data = depth+1;
        replace(root->children[i], depth+1);
    }
}

void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    replace(root, 0);
}