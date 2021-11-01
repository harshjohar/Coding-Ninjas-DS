#include<stack>
int* stockSpan(int *price, int size)  {
	// Write your code here
    int* ans = new int[size];
    stack<int> S;
    S.push(0);
    
    ans[0]=1; // span of first is 1 ofc
    
    for(int i=1; i<size; i++) {
        while(!S.empty() and price[S.top()]<price[i]) {
            S.pop();
        }
        ans[i] = (S.empty()) ? (i+1) : (i-S.top());
        S.push(i);
    }
    return ans;
}