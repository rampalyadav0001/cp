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
    string s;
    cin>>s;
    int j=1;
int cnt=0;
    for(int i=0;i<s.size();i++){
   if(s[i]==j+'0'){
    cnt+=1;
   }
  else if(j!=s[i]-'0'){
     if(s[i]=='0'){
       int temp=10;
        int diff= temp-j;
        cnt+=diff+1;
        j=temp;
     }
     else{
        int diff=abs(j-(s[i]-'0'));
        cnt+=diff+1;
        j=s[i]-'0';
     }
   }
    }
    cout<<cnt<<endl;
}
return 0;
}