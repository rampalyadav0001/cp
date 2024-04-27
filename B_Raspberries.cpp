#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int check(int n, int k) {
    int i = 2;
    while (true) {
        if (n >k) {
            k = k * i;
            i++;
        } else {
            return k - n;
        }
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
    if (k == 2 || k == 3 || k == 5) {
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int temp = check(arr[i], k);
            ans = min(ans, temp);
        }
        cout << ans << endl;
    } else {
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int temp = check(arr[i], k);
            ans = min(ans, temp);
        }
        cout << min(2, ans) << endl;
    }
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
