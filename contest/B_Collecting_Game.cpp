#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    int i = 0;
    for (auto &it : arr) {
        cin >> it.first;
        it.second = i;
        i++;
    }

    sort(arr.begin(), arr.end());

    vector<int> ans(n);
    vector<long long> prefix(n);
    prefix[0] = arr[0].first;

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i].first;
    }
  vector<int>dp(n+1);
    // int cnt = 0;
    dp[0]=0;
    for (int i = 0; i < n; i++) {
     
       

        if(i!=0&&dp[i-1]>=i){
            dp[i]=dp[i-1];
        }
       else {
        dp[i]=i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].first <= prefix[i]) {
                prefix[i] += arr[j].first;
                dp[i]++;
            } else {
                break;
            }
        }}
        ans[arr[i].second] = dp[i];
    }
   

    for (auto it : ans) {
        cout << it << " ";
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
