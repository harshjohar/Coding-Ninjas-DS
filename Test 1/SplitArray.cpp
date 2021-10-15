bool helper(int input[], int start, int end, int left, int right) {
    if(start>end) {
        return left==right;
    }
    
    if(input[start]%5==0) {
        return helper(input, start+1, end, left+input[start], right);
    }
    
    else if(input[start]%3==0) {
        return helper(input, start+1, end, left, right+input[start]);
    }
    
    else{
     	return helper(input, start+1, end, left+input[start], right) || helper(input, start+1, end, left, right+input[start]);   
    }
}


bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return helper(input, 0, size-1, 0, 0);
}
