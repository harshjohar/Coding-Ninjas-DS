int solution(char input[], int n) {
    if(n==0) {
        return 0;
    }
    return solution(input, n-1)*10 + (input[n-1]-'0');
}

int stringToNumber(char input[]) {
    // Write your code here
    int n; 
    for(n=0; input[n]!='\0'; n++);
    return solution(input, n);
}