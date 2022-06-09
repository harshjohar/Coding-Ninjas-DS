#include<bits/stdc++.h>
using namespace std;

int MinStepsTo1_DP(int n) {
    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 0;

    for(int i=2; i<=n; i++) {
        int a = dp[i-1], b=INT_MAX, c=INT_MAX;

        if(i%2==0) {
            b = dp[i/2];
        }

        if(i%3==0) {
            c = dp[i/3];
        }

        dp[i] = 1+min(a, min(b, c));
    }

    return dp[n];
}

int main() {
    int n; cin>>n;
    cout<<MinStepsTo1_DP(n)<<endl;
    return 0;
}