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

    vector<int> temp(n);
    temp[0] = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] == arr[i]) {
            temp[i] = temp[i - 1];
        } else {
            temp[i] = i;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;

        if (temp[l - 1] != temp[r - 1] && arr[l - 1] != arr[r - 1]) {
            cout << l << " " << r << endl;
        } else if (temp[r - 1] - 1 >= l && arr[temp[r - 1] - 1] != arr[l - 1]) { // Corrected index
            cout << l << " " << temp[r - 1] + 1 << endl; // Corrected index
        } else {
            cout << -1 << " " << -1 << endl;
        }
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
