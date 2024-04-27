#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int countone(int n){
    int cnt=0;
    while(n!=0){
        n=n&n-1;
        cnt++;
    }
    return cnt;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int n,m,k;
cin>>n>>m>>k;
vector<int>arr(m+1);
for(auto &it:arr){
    cin>>it;
}
int f=arr[m];
int count=0;
for(int i=0;i<m;i++){
    int res=arr[i]^f;
    if(countone(res)<=k){
        count++;
    }
}
cout<<count<<endl;

return 0;
}