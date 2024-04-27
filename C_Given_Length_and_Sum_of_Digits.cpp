#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

void solve() {
    int m, s;
    cin>>m>>s;
    string small = "";
    small += ('0'+max(1,s-9*(m-1)));
    int s1 = s - max(1,s-9*(m-1));
    if(s-9*m>0 || s==0) small = "-1";
    else {
        for(int i=2;i<=m;i++) {
            small += ('0'+max(0,s1-9*(m-i)));
            s1 -= max(0,s1-9*(m-i));
        }
    }
    string large = "";
    s1 = s;
    if(s-9*m>0 || s==0) large = "-1";
    else {
        for(int i=1;i<=m;i++) {
            large += ('0'+min(9,s1));
            s1 -= min(9,s1);
        }
    }
    if(m==1 && s==0) small=large="0";
    cout<<small<<' '<<large;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}