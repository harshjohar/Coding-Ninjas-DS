bool checkAB(char input[]) {
	// Write your code here
	int n;
    for(n=0; input[n]!='\0'; n++);
    
    if(n==0) {
        return true;
    }
    
    if(input[0]=='a'){
     	if(n-1!=0 and input[1]=='b' and input[2]=='b') {
            return checkAB(input+3);
        }   
        else {
            return checkAB(input+1);
        }
    }
    return false;
}