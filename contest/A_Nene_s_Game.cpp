#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n,k;
cin>>n>>k;
vector<int>arr1(n),arr2(k),ans(k);
for(int &it:arr1){
    cin>>it;
}
for(int &it:arr2){
    cin>>it;
}
for(int i=0;i<k;i++){
   if(arr2[i]<arr1[0]){
    ans[i]=arr2[i];
   } 
   else{
    ans[i]=arr1[0]-1;
   }
}
for(auto it:ans){
    cout<<it<< " ";
}
cout<<endl;
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