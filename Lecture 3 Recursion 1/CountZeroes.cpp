
int countRealZeros(int n) {
    if(n==0) {
        return 0;
    }
    if(n%10==0) {
        return 1+countRealZeros(n/10);
    }
    return countRealZeros(n/10);
}

int countZeros(int n) {
    // Write your code here
    if(n==0) {
        return 1;
    }
    else {
        return countRealZeros(n);
    }
}
