#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;

 
// Returns factorial of n

void solve(){
ll n,m;
cin>>n>>m;
if(m==1){
    cout<<n*(n-1)/2<<" "<<n*(n-1)/2<<endl;
}
else{
    ll div=n/m;
    ll rem=n%m;
    ll mini=0;
    ll mul=m-rem;
    mini=mul*((div*(div-1))/2)+rem*((div+1)*div/2);
    ll maxi=(((n-m+1)*(n-m))/2);
    cout<<mini<<" "<<maxi<<endl;

}
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
solve();
return 0;
}