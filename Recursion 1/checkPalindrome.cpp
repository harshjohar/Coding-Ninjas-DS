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

bool checkPalin(string s, int start, int end) {
    if(start==end) {
        return true;
    }

    if(s[start]!=s[end]) {
        return false;
    }

    if(start < end+1) {
        return checkPalin(s, start+1, end-1);
    }

    return true;
}

bool isPalindrome(string s) {
    int n = s.size();
    if(n==0) {
        return true;
    }

    return checkPalin(s, 0, n-1);
}

void solve() {
    string s; cin>>s;
    if(isPalindrome(s)) {
        cout<<"true"<<endl;
    }

    else {
        cout<<"false"<<endl;
    }
}

int32_t main() {
    // testcase
    solve();
    return 0;
}