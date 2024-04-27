#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
    // int prev = ; 
    ll ans = arr[0]-1;
    for (int i = 1; i < n; i++) {
        if ((arr[i] > arr[i-1])) {
            ans += (arr[i] - arr[i-1]);
        }
       
    }
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}