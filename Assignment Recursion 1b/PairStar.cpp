void pairStar(char input[]) {
    // Write your code here
	int sz;
    for(sz=0; input[sz]!='\0'; sz++);
    if(sz==0) {
        return;
    }
    if(input[0]==input[1]) {
        for(int i=sz; i>=1; i--) {
            input[i+1]=input[i];
        }
        input[1]='*';
        pairStar(input+2);
    }
    pairStar(input+1);
}
