#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve()
{
    string str;
    cin >> str;
    for (int i = 1; i <= 8; i++)
    {
        if (i != str[1] - '0')
            cout << str[0] << i << endl;
    }
    for (char ch = 'a'; ch <= 'h'; ch++)
    {

        if (ch != str[0])
            cout << ch<< str[1] << endl;
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
