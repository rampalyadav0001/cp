#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
void solve()
{
    int n, x;
    cin >> n >> x;
    // cout<<x<<endl;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for (auto &it : arr1)
    {
        cin >> it;
    }
    for (auto &it : arr2)
    {
        cin >> it;
    }
    sort(arr2.begin(), arr2.end());
    vector<int> ans;
    int x_cal = 0;
    for (int i = 0; i < n; i++)
    {
        int min = arr2.front();
        if (min < arr1[i])
        {
            x_cal++;
            ans.push_back(min);
            arr2.erase(arr2.begin());
        }
        else
        {
            ans.push_back(arr2.back());
            arr2.pop_back();
        }
    }
    // cout<<x<<endl;
    if (x == x_cal)
    {
        cout << "YES" << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO"<<endl;;
    }
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