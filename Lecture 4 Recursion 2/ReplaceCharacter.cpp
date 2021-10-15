void replaceCharacter(char input[], char c1, char c2) {
    int n;
    for(n=0; input[n]!='\0'; n++);
    if(n==0) {
        return;
    }
    if(input[0]==c1) {
        input[0]=c2;
        replaceCharacter(input+1, c1, c2);
    }
    replaceCharacter(input+1, c1, c2);
}