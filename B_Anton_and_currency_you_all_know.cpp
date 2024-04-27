#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
string s;
cin>>s;
bool flag=false;
int index;
for(int i=0;i<s.size()-1;i++){
  if((s[i]-'0')%2==0){
    flag=true;
    index=i;
    if(s[i]<s[s.size()-1]){
        break;
    }
  }
}

if(flag){
    swap(s[s.size()-1],s[index]);
    cout<<s<<endl;
}
else{
    cout<<-1<<endl;
}
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