#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(auto &it : arr) {
        cin >> it;
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    int l = 0, h = n - 1;
    while(l <= h) {
        int temp = x - arr[h];
        if(temp >= arr[l]) {
            l++;
        }
        count++;
        h--;
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
