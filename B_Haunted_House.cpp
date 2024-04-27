#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc;
cin>>tc;
while(tc--){
    int n;
string s;
cin>>n>>s;
set<int>st;
for(int i=0;i<s.size();i++){
    if(s[i]=='0')st.insert(i);
}

ll val=0;
for(int i=n-1;i>=0;i--){
    if(st.empty()){
        cout<<"-1 ";
        continue;
    }
    else{
        auto it=st.rbegin();
         val+=(i-(*it));
         st.erase(*it);
         cout<<val<<" ";
    }
    
}
cout<<endl;
}
return 0;
}