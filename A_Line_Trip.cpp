#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n,x;
cin>>n>>x;
vector<int>arr(n);
// arr.push_back(0);
for(auto &it:arr){
    cin>>it;
}


int ans=2*(x-arr.back());
int temp=arr.front();
ans=max(ans,temp);
for(int i=0 ;i<n-1;i++){
  int diff=arr[i+1]-arr[i];
  ans=max(ans,diff);
}
cout<<ans<<endl;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc;
cin>>tc;
 while(tc--){
solve();
}
return 0;
}