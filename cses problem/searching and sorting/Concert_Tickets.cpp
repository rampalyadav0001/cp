#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> price(n), maxprice(m);

    for (auto &it : price)
    {
        cin >> it;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> maxprice[i];
    }
     map<int,int>mp;
    for(auto it:price){
        mp[it]++;

    }
    for(auto a:maxprice){
        auto it=mp.upper_bound(a);
        if(it==mp.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            cout<<it->first<<endl;
            it->second-=1;
            if(it->second==0){
                mp.erase(it);
            }
        }

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
