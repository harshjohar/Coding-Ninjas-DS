void printHelp(int input[], int size, int i, int k, int output[], int outSize) {
    if(i==size) {
        if(k==0) {
            for(int j=0; j<outSize; j++) {
                cout<<output[j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    
    printHelp(input, size, i+1, k, output, outSize);
    
    int* newOutput = new int[outSize+1];
    for(int j=0; j<outSize; j++) {
        newOutput[j] = output[j];
    }
    newOutput[outSize] = input[i];
    
    printHelp(input, size, i+1, k-input[i], newOutput, outSize+1);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int* output = new int[0];
    printHelp(input, size, 0, k, output, 0);
}
