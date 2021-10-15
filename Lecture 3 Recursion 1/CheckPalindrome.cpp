bool palCheck(char str[], int s, int e) {
    if(s==e) {
        return true;
    }
    if(str[s]!=str[e]) {
        return false;
    }
    if(s<e+1) {
        return palCheck(str, s+1, e-1);
    } 
    return true;
}

bool checkPalindrome(char input[]) {
    // Write your code here
    int n;
    for(n=0; input[n]!='\0'; n++);
    if(n==0) return true;
    else return palCheck(input, 0, n-1);
}
