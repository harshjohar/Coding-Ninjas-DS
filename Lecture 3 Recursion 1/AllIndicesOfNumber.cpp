int allIndexes(int input[], int size, int x, int output[]) {
    if(size==0) {
        return 0;
    }
    int smolAns = allIndexes(input+1, size-1, x, output);
    if(input[0]==x) {
        for(int i=smolAns-1; i>=0; i--) {
            output[i+1] = output[i]+1;
        }
        output[0]=0;
        smolAns++;
    }
    else {
        for(int i=smolAns-1; i>=0; i--) {
            output[i] = output[i]+1;
        }
    }
    return smolAns;
}
