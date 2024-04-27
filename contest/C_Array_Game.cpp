#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n,k;
cin>>n>>k;
vector<int>arr(n);
for(auto &it:arr){
    cin>>it;
}
while(k){
  sort(arr.begin(),arr.end());
  int mini=INT_MAX;
  for(int i=0;i<arr.size()- 1;i++){
mini=min(mini,abs(arr[i]-arr[i+1]));
  }
  arr.push_back(mini);
    k--;
}
cout<<arr.back()<<endl;
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