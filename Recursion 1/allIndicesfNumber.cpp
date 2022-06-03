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

int allIndexes(int input[], int size, int x, int output[]) {
    if(size==0) {
        return 0;
    }

    int restAns = allIndexes(input+1, size-1, x, output);

    if(input[0]==x) {
        for(int i=restAns-1; i>=0; i++) {
            output[i+1] = output[i]+1;
        }

        output[0] = 0;
        restAns++;
    }
    else {
        for(int i=restAns-1; i>=0; i++) {
            output[i]++;
        }
    }

    return restAns;
}

void solve() {
    int n; cin>>n;

    int input[n], output[n];

    for(int i=0; i<n; i++) {
        cin>>input[i];
    }

    int x; cin>>x;

    int ans = allIndexes(input, n, x, output);

    for(int i=0; i<ans; i++) {
        cout<<output[i]<<" ";
    }

    cout<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}