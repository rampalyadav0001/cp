#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int solve(vector<int>&arr,int sum){
    if(sum==0){
        return 1;
    }
    int res=0;
    for(int i=0;i<arr.size();i++){
      if(arr[i]<=sum){
         res+= solve(arr,sum-arr[i]);
      }
    }
    return res;
}
void solve(){
int n,sum;
cin>>n>>sum;
vector<int>arr(n);
for(auto &it:arr){
    cin>>it;
}
cout<<solve(arr,sum)<<endl;
return;
vector<int>dp(sum+1);

dp[0]=1;
for(int i=1;i<=sum;i++){
    for(int j=0;j<n;j++){
        if(arr[j]<=i){
            dp[i]=(dp[i]+dp[i-arr[j]])%MOD;
        }
    }
}
cout<<dp[sum]<<endl;
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
// time complexity=no of state*time requires by one state;