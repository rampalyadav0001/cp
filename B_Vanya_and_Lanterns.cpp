#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int MOD = 1e9 + 7;

void solve() {
    int n, l;
    cin >> n >> l;  // Added missing input for 'l'
    vector<int> arr(n);
    for (int &it : arr) {
        cin >> it;
    }
    sort(arr.begin(), arr.end());
    double diff = 0;
    for (int i = 0; i < n - 1; i++) {
        diff = max(diff, (double)(arr[i + 1] - arr[i]));
    }
    diff = diff / 2;
    double a = arr[0] - 0;
    double b = l - arr.back();
    diff = max(diff, max(a, b));
    cout << fixed << setprecision(10) << diff << endl;  // Fixed output precision
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
