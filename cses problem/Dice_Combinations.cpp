#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
cin>>n;
vector<int>dp(n+1);
dp[0]=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=6;j++){
        if(j<=i){
            dp[i]=(dp[i]+dp[i-j])%MOD;
        }
    }
    
}
cout<<dp[n]<<endl;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc=1;
// cin>>tc;
 while(tc--){
solve();
}
return 0;
}