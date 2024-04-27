#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc;
cin>>tc;
while(tc--){
    int x,k;
    cin>>x>>k;
    int i=x;
   while(true){
       string temp=to_string(i);
       int sum=0;
       for(int j=0;j<temp.size();j++){
     sum+=temp[j]-'0';
       }
       if(sum%k==0){
        break;
       }
       i++;
    }
    cout<<i<<endl;
}
return 0;
}