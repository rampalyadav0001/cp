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
sort(arr.begin(),arr.end());
int count=1;
for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        count++;
    }
}
cout<<count<<endl;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc=1;
// cin>>tc=1;
 while(tc--){
solve();
}
return 0;
}