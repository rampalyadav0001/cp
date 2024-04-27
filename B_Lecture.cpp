#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;
    while (m--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() <= s2.size())
        {
            mp[s1] = s1;
        }
        else
        {
            mp[s1] = s2;
        }
    }

    cin.ignore();
    string s1;
    getline(cin, s1);

    stringstream str(s1);
    string word;
    while (str >> word)
    {
        cout << mp[word] << " ";
    }
    cout << endl;
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
