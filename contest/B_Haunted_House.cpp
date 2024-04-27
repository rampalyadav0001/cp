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
    int n;
    string s;
    cin>>n>>s;
    int count_0=0;
    vector<int>mp;
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count_0++;
            mp.push_back(i+1);
        }
    }
    int temp=1;
    int prev=0;
    for(int i=0;i<mp.size();i++){
        cout<<mp[i]-temp+prev<<" ";
        prev+=mp[i]-temp;
        temp++;
    }
    for(int i=0;i<n-count_0;i++){
        cout<<-1<<" ";
    }
    cout<<endl;
}
return 0;
}