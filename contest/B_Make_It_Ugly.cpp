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
if(*max_element(arr.begin(),arr.end())==*min_element(arr.begin(),arr.end())){
    cout<<-1<<endl;
    return;
}
int count =0,ans=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]==arr[0]){
        count++;
    }
    else{
        ans=min(ans,count);
        count=0;
    }
}
ans=min(ans,count);
cout<<ans<<endl;
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