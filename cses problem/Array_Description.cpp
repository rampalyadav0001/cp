#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

// bool check(vector<int> &arr, int num, int n, int index)
// {
//     if (index == 0)
//     {
//         if (abs(num - arr[index + 1]) == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     else if (index == n - 1)
//     {
//         if (abs(arr[index - 1] - num) == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     else
//     {
//         if (abs(arr[index - 1] - num) == 1 && abs(arr[index + 1] - num) == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// }

// int solve(vector<int> &arr, int index, int m, int n)
// {
//     if (index == n)
//         return 1;

//     int res = 1;
//     if (arr[index] == 0)
//     {

//         for (int i = 1; i <= m; i++)
//         {
//             if (check(arr, i, n, index))
//             {
//                 res++;
//             }
//         }
//     }
//     else
//     {
//         res = res * solve(arr, index + 1, m, n);
//     }
//     return res;
// }






bool valid(int prev, int m) {
    return prev > 0 && prev <= m;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (auto &it : arr) {
        cin >> it;
    }

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 1; i <= m; i++) {
        if (arr[0] == 0 || arr[0] == i) {
            dp[1][i] = 1;
        }
    }

    for (int i = 2; i <= n; i++) {
        for (int k = 1; k <= m; k++) {
            if (arr[i - 1] != 0 && arr[i - 1] != k) {
                dp[i][k] = 0;
                continue;
            }

            for (int prev = k - 1; prev <= k + 1; prev++) {
                if (!valid(prev, m))
                    continue;
                  
                dp[i][k] = (dp[i][k] + dp[i - 1][prev]) % MOD;
            }
        }
    }

    int res = 0;
    for (int i = 1; i <= m; i++) {
        res = (res + dp[n][i]) % MOD;
    }
    cout << res << endl;
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
