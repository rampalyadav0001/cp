#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int cnt=0;
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='.'){
        count++;
        cnt++;
        if(cnt==3){
            cout<<2<<endl;
            return;
        }
    }
    else{
        cnt=0;
    }
}
cout<<count<<endl;
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