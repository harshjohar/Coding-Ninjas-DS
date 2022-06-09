#include<bits/stdc++.h>
using namespace std;

int minStepsTo1(int n) {
    if(n==1) {
        return 0;
    }

    int a = minStepsTo1(n-1);
    int b=INT_MAX, c=INT_MAX;

    if(n%2==0) b=minStepsTo1(n/2);
    if(n%3==0) c=minStepsTo1(n/3);

    return (1+std::min(a, std::min(b, c)));
}

int main() {
    int n; cin>>n;

    cout<<minStepsTo1(n)<<endl;
    return 0;
}