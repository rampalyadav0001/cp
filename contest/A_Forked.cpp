#include<bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ll long long
const ll MOD = 1e9 + 7;

void solve() {
    ll a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    ll cnt = 0;
    ll hp = a * a + b * b;
    set<pair<ll, ll>> arr = {{kx + a, ky + b}, {kx + a, ky - b}, {kx - a, ky - b}, {kx - a, ky + b},
                                         {kx + b, ky + a}, {kx - b, ky + a}, {kx - b, ky - a}, {kx + b, ky - a}};
    for (auto it : arr) {
        ll x = it.first;
        ll y = it.second;
        ll temp = pow((x - qx), 2) + pow((y - qy), 2);
        if (temp == hp) {
            cnt++;
        }
    }

    cout << cnt << endl;
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
