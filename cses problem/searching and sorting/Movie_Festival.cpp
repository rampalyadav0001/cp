#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });
    int end = arr[0].second;
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (end <= arr[i].first) {
            count++;
            end = arr[i].second;
        }
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
