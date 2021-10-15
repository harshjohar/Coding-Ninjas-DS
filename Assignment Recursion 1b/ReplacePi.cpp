void replacePi(char input[]) {
	// Write your code here
    int sz;
    for(sz=0; input[sz]!='\0'; sz++);
	if(input[0]=='\0') {
        return;
    }
    if(input[0]=='p' and input[1]=='i') {
        input[0]='3';
        input[1]='.';
        for(int i=sz; i>=2; i--) {
            input[i+2]=input[i];
        }
        // cout<<input<<endl;
        input[2]='1';
        input[3]='4';
        replacePi(input+4);
    }
    replacePi(input+1);
}

