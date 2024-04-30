#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
void solve()
{
    int n, x;
    cin >> n >> x;
    // vector<int> arr(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    { int it;
        cin >>it;
        
        if(mp.find(x - it) != mp.end()){
            cout<<mp[x-it]+1<<" "<<i+1<<endl;
            return;
        }
        else{
            mp[it] = i;
        }
    }
   
    cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}