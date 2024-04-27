#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
cin>>n;
vector<int>arr(n);
for(auto &it:arr){
    cin>>it;
}
if(n<3){
    cout<<0<<endl;
    return;
}
unordered_map<int,int>mp;
for(auto it:arr){
    mp[it]++;
}
int count=0;
for(auto it:mp){
    if(it.second>2){
        count+=it.second/3;
    }
}
cout<<count<<endl;
return;
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