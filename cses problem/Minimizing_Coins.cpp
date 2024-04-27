#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;


void solve() {
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
   vector<int>dp(sum+1,1e9);
//    dp[i]means min no of coins need to generate sum i;
    dp[0]=0;
    for(int i=1;i<=sum;i++){
        
        for(int j=0;j<n;j++){
            if(arr[j]<=i){
            dp[i]=min(dp[i],1+dp[i-arr[j]]);
            
            }
        }
    }
    cout<<(dp[sum]==1e9?-1:dp[sum])<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
