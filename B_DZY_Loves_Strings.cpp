#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    string str;
    cin >> str >> n;
    vector<int> arr(26);
    int i = 0;
    int index = 0;
    int max = 0;
    for (auto &it : arr) {
        cin >> it;
        if (it > max) {
            max = it;
            index = i;
        }
        i++;
    }
    int ans = 0;
    int len = str.size() + n;  
    for (int j = 1; j <= len; j++) {  
        if (j <= str.size()) {
            ans += j * (arr[str[j - 1] - 'a']);
        } else {
            ans += j * max;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;

    // cin>>tc;
    while (tc--) {
        solve();
    }
    return 0;
}
