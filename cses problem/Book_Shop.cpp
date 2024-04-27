#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

int solve(vector<int>& prices, vector<int>& pages, int index, int price, int n, vector<vector<int>>& dp) {
    if (index == n || price < 0) {
        return 0;
    }

    if (dp[index][price] != -1) {
        return dp[index][price];
    }

    int take = 0;
    if (price >= prices[index]) {
        take = pages[index] + solve(prices, pages, index + 1, price - prices[index], n, dp);
    }

    int nottake = solve(prices, pages, index + 1, price, n, dp);

    return dp[index][price] = max(take, nottake);
}


void solveTestCase() {
    int n, x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    for (auto &it : price) {
        cin >> it;
    }
    for (auto &it : pages) {
        cin >> it;
    }


    // vector<vector<int>> dp(n + 1, vector<int>(x + 1,-1));
    // cout << solve(price, pages, 0, x, n, dp) << endl;
     vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i + 1][j];  // Not taking the current item

            if (j >= price[i]) {
                dp[i][j] = max(dp[i][j], pages[i] + dp[i + 1][j - price[i]]);  // Taking the current item
            }
        }
    }

    cout<< dp[0][x]<<endl;

   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc=1;
    // cin >> tc;

    while (tc--) {
        solveTestCase();
    }

    return 0;
}
