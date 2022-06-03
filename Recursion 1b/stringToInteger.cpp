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

int stringToInt(string s) {
   int n = s.size();

   if(n==0) {
       return 0;
   }

   if(s[0]=='\0') {
       return 0;
   }

   string sub = s.substr(0, n-1);

   int ans = stringToInt(sub)*10 + s[n-1]-'0';
    return ans;
}

void solve() {
    string s; cin>>s;
    if(s=="0") {
        cout<<0<<endl;
        return;
    }
    cout<<stringToInt(s)<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}