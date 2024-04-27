#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
ll ans = -1e18;
    int k = 1;
 
    while (k <= n)
    {
        if (n % k == 0)
        {
           ll mini = 1e18;
          ll maxi = -1e18;
          ll s;
            for (int i = 0; i < n; i += k)
            {
                s = accumulate(arr.begin() + i, arr.begin() + min(i + k, n), 0ll);
                mini = min(mini, s);
                maxi = max(maxi, s);
            }
            ans = max(ans, abs(maxi - mini));
        }
        k++;
    }
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}