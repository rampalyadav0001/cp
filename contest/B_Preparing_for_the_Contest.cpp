#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int temp = k;
    for (int i = n - 1; i >= 0; i--)
    {
        if (temp--)
        {
            arr[i] = n;
            n--;
        }
        else
        {

            break;
        }
    }
    int j = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = j;
        j++;
    }
    for (auto it : arr)
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