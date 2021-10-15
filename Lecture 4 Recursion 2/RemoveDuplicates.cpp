void removeConsecutiveDuplicates(char *input) {
	int n; 
    for(n=0; input[n]!='\0'; n++);
    if(n==0) {
        return;
    }
    if(input[0]==input[1]) {
        for(int i=1; i<n; i++) {
            input[i]=input[i+1];
        }
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input+1);
}