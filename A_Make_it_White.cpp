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
int first=0,last=0;
for(int i=0;i<n;i++){
    if(str[i]=='B'){
        first=i;
        break;
    }
}
for(int i=n-1;i>=0;i--){
    if(str[i]=='B'){
        last=i;
        break;
    }
}
cout<<last-first+1<<endl;
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