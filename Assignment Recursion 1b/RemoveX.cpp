void removeX(char input[]) {
    // Write your code here
    int sz;
    for(sz=0; input[sz]!='\0'; sz++);
    
	if(input[0]=='\0') {
        return;
    }
    if(input[0]=='x') {
        for(int i=0; i<sz; i++) {
            input[i]=input[i+1];
        }
        removeX(input);
    }
    removeX(input+1);
}