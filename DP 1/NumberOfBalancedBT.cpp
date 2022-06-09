#include<bits/stdc++.h>
using namespace std;

int balancedBT(int h) {
    if(h<=1) {
        return 1;
    }
    int mod = 1e9 + 7;
    int x = balancedBT(h-1);
    int y = balancedBT(h-2);

    int temp1 = ((long)(x)*x)%mod;
    int temp2 = (2*(long)(x)*y)%mod;

    int ans = (temp1+temp2)%mod;
    return ans;
}

int main() {
    
    return 0;
}