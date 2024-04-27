#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
int solve(vector<vector<char>>&grid,int i,int j,int n){
    if(i==n-1&&j==n-1)return 1;
    if(i<0||j<0||j>=n||i>=n||grid[i][j]=='*')return 0;
     return solve(grid,i+1,j,n)+solve(grid,i,j+1,n);
}

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    if(grid[n-1][n-1]=='*')dp[n-1][n-1]=0;
    else
    dp[n - 1][n - 1] = 1;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if(i==n-1&&j==n-1)continue;
            if (grid[i][j] == '*') {
                dp[i][j] = 0;
            } else {
                dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % 1000000007;
            }
        }
    }

    cout << dp[0][0] << endl;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc=1;
// cin>>tc;
 while(tc--){
solve();
}
return 0;
}