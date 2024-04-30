#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// this solution give runtime_erroron only one tc;
// void solve() {
//     long long n;
//     cin >> n;
//     vector<vector<long long>> arr(n+2, vector<long long>(2));
//     long long maxele = 0;
//     for (long long i = 0; i < n; i++) {
//         for (long long j = 0; j < 2; j++) {
//             cin >> arr[i][j];
//             maxele = max(maxele, arr[i][j]);
//         }
//     }
//     vector<long long> freq(maxele + 5, 0);
//     for (long long i = 0; i < n; i++) {
//         long long a = arr[i][0];
//         long long b = arr[i][1];
//         freq[a] += 1;
//         freq[b + 1] -= 1;
//     }
//     maxele=0;
//     for (long long i = 1; i < (long long)freq.size(); i++) {
//         freq[i] += freq[i - 1];
//         maxele = max(maxele, freq[i]);
//     }
//     cout << maxele << endl;
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), dept(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> dept[i];
    }
    sort(arr.begin(), arr.end());
    sort(dept.begin(), dept.end());
    int i = 0, j = 0, customer = 0, ans = 0;
    while (i < n && j < n)
    {
        if (arr[i] < dept[j])
        {
            customer++;
            ans = max(ans, customer);
            i++;
        }
        else
        {
            j++;
            customer--;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
