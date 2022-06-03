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

void pairStar(string &s) {
    int n = s.size();

    if(n<2) {
        return;
    }

    if(s[0]=='\0') {
        return;
    }

    if(s[0]==s[1]) {
        s+="_"; // to increase the size
        for(int i=n; i>1; i--) {
            s[i]=s[i-1];
        }

        s[1]='*';

        string str = s.substr(2);
        pairStar(str);
        string strInit = s.substr(0,2);
        s=strInit+str;
    }
    else {
        string str = s.substr(1);
        pairStar(str);
        string strInit = s.substr(0,1);
        s=strInit+str;
    }
    
}

void solve() {
    string s;
    cin>>s;

    pairStar(s);

    cout<<s<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}