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
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;

void towerOfHanoi(int n, char src, char aux, char dest) {
    if(n==0) {
        return;
    }
    towerOfHanoi(n-1, src, dest, aux);
    cout<<src<<" "<<dest<<endl;
    towerOfHanoi(n-1, aux, src, dest);
}

void solve() {
    int n; cin>>n;

    towerOfHanoi(n, 'a', 'b', 'c');
}

int32_t main() {
    // testcase
    solve();
    return 0;
}