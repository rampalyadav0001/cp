#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

int digsum(int n) {
    int sum = 0;
    while (n != 0) {
        int temp = n % 10;
        sum += temp;
        n = n / 10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    if(n<9){cout<<n*(n+1)/2<<endl;
    return;}
    int temp = n / 10;
    int ans = 45;
    temp = temp - 1;
    int temp2 = ((temp * (temp + 1) * 10) / 2)*45;
    ans += temp2;
    int temp3 = n % 10;
    n = n - temp3;
    for (int i = 0; i < temp3; i++) {
        ans += digsum(n + i);
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
