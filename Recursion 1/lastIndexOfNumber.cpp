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

int lastIndex(int arr[], int size, int x) {
    if(size==0) {
        return -1;
    }

    int ans = lastIndex(arr+1, size-1, x);

    if(arr[0]==x and ans ==-1) {
        return 0;
    }

    return (ans==-1) ? ans : ans+1;
}

void solve() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int x; cin>>x;

    cout<<lastIndex(arr, n, x)<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}