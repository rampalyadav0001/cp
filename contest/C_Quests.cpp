#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

vector<vector<vector<int>>> dp;

int solution(vector<int> &arr1, vector<int> &arr2, int index, int n, int k, int flag) {
    if (index >= n || k <= 0) {
        return 0;
    }

    // If this subproblem has already been solved, return the answer
    if (dp[index][k][flag] != -1) {
        return dp[index][k][flag];
    }

    if (flag && k > 0) {
        dp[index][k][flag] = max(arr1[index] + solution(arr1, arr2, index + 1, n, k - 1, 1), arr1[index] + solution(arr1, arr2, index, n, k - 1, 0));
    } else {
        dp[index][k][flag] = max(arr2[index] + solution(arr1, arr2, index + 1, n, k - 1, 1), arr2[index] + solution(arr1, arr2, index, n, k - 1, 0));
    }

    return dp[index][k][flag];
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr1(n), arr2(n);
    for (auto &it : arr1) {
        cin >> it;
    }
    for (auto &it : arr2) {
        cin >> it;
    }

    // Initialize the dp table with -1
    dp = vector<vector<vector<int>>>(n, vector<vector<int>>(k+1, vector<int>(2, -1)));

    int ans = solution(arr1, arr2, 0, n, k, 1);
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
