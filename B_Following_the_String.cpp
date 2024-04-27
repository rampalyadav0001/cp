#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
    map<char,int> mp; 
    for (char i = 'a'; i <= 'z'; i++) {
        mp[i] = 0;
    }
    string ans;
    for (auto it : arr) {
        for (auto &it2 : mp) { 
            if (it2.second == it) {
                ans += it2.first;
                it2.second++;
                break;
            }
        }
    }
    cout << ans << endl;
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
