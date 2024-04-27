#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n,m,k;
cin>>n>>m>>k;
vector<int>arr1(n),arr2(m);
for(auto &it:arr1){
    cin>>it;
}
for(auto &it:arr2){
    cin>>it;
}
unordered_set<int>st1,st2;
for(auto it:arr1){
    if(it<=k){
        st1.insert(it);
    }
}
for(auto it:arr2){
    if(it<=k){
        st2.insert(it);
    }
}
if(st1.size()<k/2||st2.size()<k/2)cout<<"NO"<<endl;
else{
    unordered_set<int>st;
    for(auto it:st1){
        st.insert(it);
    }
    for(auto it:st2){
        st.insert(it);
    }
    if(st.size()!=k)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
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