#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<int>arr(m);
for(auto &it:arr){
    cin>>it;
}
ll cnt=0;
ll ini=1;
for(int i=0;i<m;i++){
   if(ini<=arr[i]){
    cnt+=arr[i]-ini;
    ini=arr[i];
   } 
   else{
    cnt+=n-(ini-arr[i]);
    ini=arr[i];
   }

}
cout<<cnt<<endl;
return 0;
}