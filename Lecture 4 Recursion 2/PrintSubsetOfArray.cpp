void allSubset(int input[], int start, int end, int output[], int m) {
    if(start>end) {
        for(int i=0; i<m ;i++) {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int val = input[start];
    int *newOut = new int[m+1];
    for(int i=0; i<m; i++) {
        newOut[i] = output[i];
    }
    newOut[m] = val;
    allSubset(input, start+1, end, output, m);
    allSubset(input, start+1, end, newOut, m+1);
    return;
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int *output = new int[0];
    int m=0;
    allSubset(input, 0, size-1, output, m);
}
