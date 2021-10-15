void rotate(int *input, int d, int n)
{
    if(d==0) {
        return;
    }
    //Write your code here
    d%=n;
    int duplicate[d];
    
    for(int i=0; i<d; i++) {
        duplicate[i] = input[i];
    }
    for(int i=d; i<n; i++) {
        input[i-d] = input[i];
    }
    for(int i=0; i<d; i++) {
        input[i+n-d] = duplicate[i];
    }
}