#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector< vector<int> >
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define mii map<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;

int countZeroes(int n) {
    if(n==0) {
        return 0;
    }

    if(n%10==0) {
        return 1 + countZeroes(n/10);
    }

    return countZeroes(n/10);
}

void solve() {
    int n; cin>>n;

    if(n==0) {
        cout<<1<<endl;
        return;
    }

    cout<<countZeroes(n)<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}