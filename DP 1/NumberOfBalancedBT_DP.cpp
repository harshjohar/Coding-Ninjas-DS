#include<bits/stdc++.h>
using namespace std;

int balancedBT(int n) {
    vector<long long int> dp(n+1);

    if(n<=1) {
        return 1;
    }

    dp[0] = 1;
    dp[1] = 1;

    int mod = 1e9+7;

    for(int i=2; i<=n; i++) {
        long long int temp1 = dp[i-1]*dp[i-1];
        temp1 = temp1%mod;

        long long int temp2 = dp[i-1]*dp[i-2]*2;
        temp2 = temp2%mod;

        dp[i] = (temp1+temp2)%mod;
    }

    return dp[n];
}

int main() {
    
    return 0;
}