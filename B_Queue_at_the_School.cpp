#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int n,t;
cin>>n>>t;
string s;
cin>>s;
while(t--){
    for(int i=0;i<n-1;i++){ 
        if(s[i]=='B'&&s[i+1]=='G'){
            swap(s[i], s[i+1]);
            i++; 
        }
    }
}
cout<<s<<endl;

return 0;
}
