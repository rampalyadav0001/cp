#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

bool possible(int mid, vector<pair<int, int>>& arr) {
    int x = 0;
    int y = 0;
    for (auto it : arr) {
        int a = it.first;
        int b = it.second;
        x -= mid;
        y += mid;
        x = max(x, a);
        y = min(y, b);
        if (x > y) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    int high = 1e9, low = 0, mid, ans = 1e9;
    while (low <= high) { 
        mid = low + (high - low) / 2;
        if (possible(mid, arr)) {
            ans = mid; // Update ans here
            high = mid - 1; // Update high here
        } else {
            low = mid + 1;
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
