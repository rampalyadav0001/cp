#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> matrix(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int minSum = INT_MAX, maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j] - '0';
        }
        if (rowSum != 0) {
            minSum = min(minSum, rowSum);
            maxSum = max(maxSum, rowSum);
        }
    }

    if (maxSum == minSum) {
        cout << "SQUARE" << endl;
    } else {
        cout << "TRIANGLE" << endl;
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
