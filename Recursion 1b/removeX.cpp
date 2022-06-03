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

void removeX(string &s) {
    int n = s.size();

    if(n==0) {
        return;
    }

    if(n==1 and s[0]=='x') {
        s=s.substr(1);
        return;
    }

    if(s[0]=='\0') {
        return;
    }

    if(s[0]=='x') {
        string sub = s.substr(1);
        s=sub;

        removeX(s);
    }
    else {
        string sub = s.substr(1);
        removeX(sub);
        string subInit = s.substr(0, 1);
        s=subInit+sub;
    }
}

void solve() {
    string s; cin>>s;

    removeX(s);

    cout<<s<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}