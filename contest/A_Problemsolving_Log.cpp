#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
cin>>n;
string str;
cin>>str;
int cnt=0;
int temp=0;
unordered_map<char,int>mp;
for(int i=0;i<n;i++){
    
    cnt+=(str[i]-'A'+1);
    cout<<cnt<<endl;
    mp[str[i]]++;
    if(cnt>=n){
        break;
    }
}
cout<<" next"<<endl;
cout<<mp.size()<<endl;
cout<<" next"<<endl;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc;
cin>>tc;
 while(tc--){
    cout<<tc<<endl;
solve();
}
return 0;
}
