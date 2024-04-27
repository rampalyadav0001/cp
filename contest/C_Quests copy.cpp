#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
#define MAX_SIZE 200005
void solve() {
    int n, k;
    cin >> n >> k;

    static int64_t arr1[MAX_SIZE];
   static int64_t arr2[MAX_SIZE];
   static int64_t  arr3[MAX_SIZE];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    arr3[0] = arr2[0];
    for (int i = 1; i < n; i++) {
        arr3[i] = (arr3[i - 1] > arr2[i]) ? arr3[i - 1] : arr2[i];
    }

    ll res = 0;
    ll tot = 0;
    for (int i = 0; i < (k < n ? k : n); i++) {
        tot += arr1[i];
        ll rem = k - (i + 1);
        ll cur = tot + rem * arr3[i];

        res = (res > cur) ? res : cur;
    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        solve();
    }

    return 0;
}
