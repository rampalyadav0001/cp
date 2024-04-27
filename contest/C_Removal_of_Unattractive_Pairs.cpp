#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
string str;
cin>>n>>str;
unordered_map<char,int>mp;
ll freq=0;
ll ans=0;
for(auto it:str){
    mp[it]++;
}
for(auto it:mp){
    if(it.second>freq){
        freq=it.second;
    }
}
ans=n-freq;
if(freq<ans){
    if(n%2){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

}
else{
    cout<<freq-ans<<endl;
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