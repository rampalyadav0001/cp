#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
cin>>n;
vector<int>arr(n);
int mini=INT_MAX;
for(auto &it:arr){
   cin>>it;
   mini=min(mini,it);
}
if(mini==arr[0]){
    cout<<"Yes"<<endl;
}
else{
    cout<<"NO"<<endl;
}

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