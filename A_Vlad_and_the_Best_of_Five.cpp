#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
string str;
cin>>str;
unordered_map<char,int>mp;
int freq=0;
char ans;
for(auto it:str){
mp[it]++;
if(mp[it]>freq){
    freq=mp[it];
    ans=it;
}
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