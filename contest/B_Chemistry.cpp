#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        unordered_map<char, int> mp;
        for (auto it : s) {
            mp[it]++;
        }

        int oddcount = 0;
        for (auto it : mp) {
            if (it.second % 2 != 0) {
                oddcount++;
            }
        }

        if (oddcount > k + 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
