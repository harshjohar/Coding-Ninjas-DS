int sumOfDigits(int n) {
    // Write your code here
	if(n<1) {
        return 0;
    }
    return n%10 + sumOfDigits(n/10);
}