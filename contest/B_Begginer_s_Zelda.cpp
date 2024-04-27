#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n - 1);
    for (auto &it : arr) {
        cin >> it.first >> it.second;
    }
    unordered_map<int, int> mp;
    for (auto it : arr) {
        mp[it.first]++;
        mp[it.second]++;
    }
    int ans = 0;
    for (auto it : mp) {
        if (it.second == 1) {
            ans += it.second;
        }
    }
    if (ans % 2) {
        cout << (ans + 1) / 2 << endl;
    } else
        cout << ans / 2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
