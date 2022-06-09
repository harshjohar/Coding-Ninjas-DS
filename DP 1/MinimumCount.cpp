#include<bits/stdc++.h>
using namespace std;

int minCount(int n) {
    vector<int> dp(n+4);

    for(int i=0; i<4; i++) {
        dp[i] = i;
    }

    for(int i=4; i<n; i++) {
        dp[i] = i;

        for(int x=1; x<=ceil(sqrt(i)); x++) {
            int temp = x*x;
            if(temp>i) break;

            else {
                dp[i] = min(dp[i], 1+ dp[i-temp]);
            } 
        }
    }

    return dp[n];
}

int main() {

    return 0;
}