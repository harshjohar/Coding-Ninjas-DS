#include<algorithm>
int maximumProfit(int budget[], int n) {
    // Write your code here
	sort(budget, budget+n, greater<int>());
    for(int i=0; i<n; i++) {
        budget[i]*=(i+1);
    }
    sort(budget, budget+n, greater<int>());
    return budget[0];
}
