#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    vector<int> arr2(n);
    vector<pair<int, int>> temp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp.push_back({arr[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    sort(temp.begin(), temp.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return (a.first < b.first); });

    sort(arr2.begin(), arr2.end());

    vector<int> ans(n);

    for (int i = 0; i < x; i++)
    {
        int indx = temp[i + n - x].second;
        ans[indx] = arr2[i];
        if (arr[indx] <= arr2[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < n - x; i++)
    {
        int indx = temp[i].second;
        ans[indx] = arr2[i + x];
        if (arr[indx] > arr2[i + x])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
