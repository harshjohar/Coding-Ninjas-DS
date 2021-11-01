#include<stack>
int countBracketReversals(string input) {
	// Write your code here
 	int len = input.length();
    if(len%2) return -1;
    
    stack<char> S;
    for(int i=0; i<len; i++) {
        if(input[i]=='}' and !S.empty()) {
            if(S.top()=='{') {
                S.pop();
            }
            else {
                S.push(input[i]);
            }
        }
        else {
            S.push(input[i]);
        }
    }
    
    int reduced = S.size();
    int n=0;
    while(!S.empty() and S.top()=='{') {
        S.pop();
        n++;
    }
    return (reduced/2 + n%2);
}