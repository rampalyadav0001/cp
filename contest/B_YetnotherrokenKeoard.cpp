#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    string str;
    cin >> str;
    vector<pair<int, char>> upper;
    vector<pair<int, char>> lower;

    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i]) && str[i] != 'B') {
            upper.push_back({i, str[i]});
        } else if (islower(str[i]) && str[i] != 'b') {
            lower.push_back({i, str[i]});
        } else if (str[i] == 'B' && !upper.empty()) {
            upper.pop_back();
        } else if (str[i] == 'b' && !lower.empty()) {
            lower.pop_back();
        }
    }

    vector<pair<int, char>> ans;
    for (auto it : upper) {
        ans.push_back({it.first, it.second});
    }
    for (auto it : lower) {
        ans.push_back({it.first, it.second});
    }

    sort(ans.begin(), ans.end());

    for (auto it : ans) {
        cout << it.second;
    }
    cout << endl;
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
