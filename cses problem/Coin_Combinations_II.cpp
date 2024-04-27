#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
// int solve(vector<int> arr, int sum, int index, vector<vector<int>> &dp)
// {
//     if (sum == 0)
//     {
//         return 1;
//     }
//     if (dp[sum][index] != -1)
//         return dp[sum][index];
//     int res = 0;
//     for (int i = index; i < arr.size(); i++)
//     {
//         if (arr[i] <= sum)
//         {
//             res += solve(arr, sum - arr[i], i, dp);
//         }
//     }
//     return dp[sum][index] = res % MOD;
// }
void solve()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
    // dp[i][j]=no.of way to cunstruct sum k such that the coin before i is unusable and coin form i to n-1 is usable;
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= sum; j++)
        {
            int skipp = dp[i + 1][j];
            int pick = 0;
            if (j >= arr[i])
            {
                pick = dp[i][j - arr[i]];
            }
            dp[i][j] = (skipp + pick) % MOD;
        }
    }
    cout << dp[0][sum] << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}