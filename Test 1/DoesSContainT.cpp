bool checksequenece(char large[] , char*small) {
	int l, s;
    for(l=0; large[l]!='\0'; l++);
    for(s=0; small[s]!='\0'; s++);
    
    if(l<s) {
        return false;
    }
    
    int j=0;
    
    for(int i=0; i<l; i++) {
        if(j<l and small[j]==large[i]) {
            j++;
        }
    }
    if(j==s) {
        return true;
    }
    return false;
}
