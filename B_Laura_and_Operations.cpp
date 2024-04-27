#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    vector<int> arr(3);
    
    for (auto &it : arr) {
        cin >> it;
    }

    for (int i = 0; i < 3; i++) {
        int a = arr[(i + 1) % 3];
        int b = arr[(i + 2) % 3];

        if ((a + b) % 2 == 0) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }

    cout << endl;
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
