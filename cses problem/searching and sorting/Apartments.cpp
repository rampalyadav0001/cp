#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
long long n,m,k;
cin>>n>>m>>k;
vector<long long>a(n),b(m);
for(auto  &it:a){
    cin>>it;
}
for(auto  &it:b){
    cin>>it;
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
long long count=0;
long long i=0,j=0;
while (i < n && j < m) {
    if (b[j] < a[i] - k) {
        j++;
    } else if (b[j] > a[i] + k) {
        i++;
    } else  {
        count++;
        i++;
        j++;
    }
}

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