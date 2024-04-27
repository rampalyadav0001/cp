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
    int count = 1;
    int pivot = 0;
     if(is_sorted(arr.begin(),arr.end())){
        cout<<0<<endl;
        return;
     }
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1] && arr[i] <= arr[0]) {
            pivot = i;
            break;
        }
       
    }
    for (int i = pivot+1; i < n; i++) {
        if (arr[i] < arr[i - 1] || arr[i] > arr[0]) {
            cout << -1 << endl;
            return;
        } else {
            count++;
        }
    }
    cout << count << endl;
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
