#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solution(vector<int>&arr,int index,int target,int sum,int &count){
  if(sum==target){
    count++;
    sum=0;
  }
  if(index>=arr.size())return;
  solution(arr,index+1,target,sum+arr[index],count);
}
void solve(){
int n;
cin>>n;
vector<int>arr(n);
int sum=0;
for(auto &it:arr){
    cin>>it;
    sum+=it;
}
if(sum%3!=0){
    cout<<0<<endl;
    return;
}
int count=0;
// solution(arr,0,sum/3,0,count);

cout<<count<<endl;
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