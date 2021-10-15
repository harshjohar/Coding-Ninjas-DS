bool checkNumber(int input[], int size, int x) {
    if(size==1) {
        return (x==input[size-1]);
    }
    return (x==input[0]) or checkNumber(input+1, size-1, x);
}