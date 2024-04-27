#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void fourthBit(int number){
    if((number&1<<3)>0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
void solve(){
int num;
cin>>num;
fourthBit(num);
}
int main() {
// ios::sync_with_stdio(false);cin.tie(NULL);
// int tc;
// // cin>>tc;
// tc=1;
//  while(tc--){
// solve();
// }
solve();
return 0;
}