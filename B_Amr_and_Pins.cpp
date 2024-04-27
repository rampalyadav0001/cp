#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;


    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    
    int steps = ceil(dist / (2 * r));

    cout << steps << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;

    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
